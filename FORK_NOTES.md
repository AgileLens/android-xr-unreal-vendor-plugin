# Agile Lens fork — what's different

A fork of [android-xr/android-xr-unreal-vendor-plugin](https://github.com/android-xr/android-xr-unreal-vendor-plugin)
with build fixes and one additional plugin. Everything here is offered upstream —
this fork exists so the changes are usable immediately rather than gated on a
review cycle.

Upstream code remains Apache-2.0 and Google's copyright headers are unchanged.

---

## 1. The repo does not build from a fresh clone (fixed)

Two `File.WriteAllText` calls in `AndroidXR.Build.cs` write into plugin
`Intermediate/` directories without creating them first. `Intermediate/` is not
in the repo, so on a clean checkout module instantiation fails before anything
compiles:

```
Unable to instantiate module 'AndroidXR': System.IO.DirectoryNotFoundException:
Could not find a part of the path '...\Plugins\AndroidXR\Intermediate\SpatialSDKVersion.dat'
   at AndroidXR.GetManifestStringsForFeatureInfo(ModuleRules) AndroidXR.Build.cs:line 173
```

Fixing that exposes a second instance of the same bug, this one affecting **every
plugin that depends on AndroidXR**:

```
Unable to instantiate module 'AndroidXRTrackablesCore': System.IO.DirectoryNotFoundException:
Could not find a part of the path '...\Plugins\AndroidXRTrackablesCore\Intermediate\AndroidXRTrackablesCore_APL.xml'
   at AndroidXR.UpdateAndroidXRSpatialFeature(ModuleRules, List`1) AndroidXR.Build.cs:line 101
```

Both are fixed with `DirectoryInfo.Create()` before the write, which is a no-op
when the directory already exists. Existing checkouts never hit either, because
`Intermediate/` gets created by an earlier editor run or project-file
generation — which is likely why this survived.

## 2. Windows 260-character path limit

Independent of the above, the combination of long plugin names and the generated
intermediate tree exceeds Windows' path limit from any normally-named clone
directory:

```
The following action paths are longer than 260 characters.
[269 characters] ...\Plugins\AndroidXRSystemExtensionProperties\Intermediate\Build\Android\a\UnrealGame\
                 Development\AndroidXRSystemExtensionProperties\AndroidXRSystemExtensionPropertiesBlueprintFunctionLibrary.cpp.o.rsp
```

**Clone to a short root** (`D:\a`, `C:\xr`) or enable Win32 long paths. No code
change here — just a step worth documenting.

## 3. New: `GamepadMotionSensors` plugin

Exposes a connected Bluetooth gamepad's accelerometer and gyroscope through
`InputDevice.getSensorManager()` (API 31+), giving **3DoF orientation from an
ordinary game controller**.

### Why this is useful on Android XR

Android XR devices differ in whether they declare
`android.hardware.xr.input.controller`. Check any device with:

```
adb shell pm list features | grep -E '\.xr\.'
```

Devices that don't declare it have no tracked 6DoF controller — but a standard
Bluetooth gamepad still pairs and reports a live, calibrated IMU. That makes a
gamepad a genuinely useful hand-held motion source on hardware whose only other
input is hand tracking.

Even where 6DoF controllers *are* available, this is a cheap way to support
players who own a DualSense or Xbox pad and would rather use it.

### API

`UGamepadMotionSensorsSubsystem` (a `UGameInstanceSubsystem`), Blueprint-exposed:

| Function | Returns |
|---|---|
| `StartGamepadMotion()` / `StopGamepadMotion()` | attach / detach |
| `IsAvailable()` | gamepad with a gyroscope attached |
| `GetDeviceName()` | e.g. `DualSense Wireless Controller` |
| `GetOrientation()` / `GetOrientationQuat()` | integrated orientation |
| `GetAngularVelocity()` | rad/s |
| `GetAcceleration()` | m/s², includes gravity |
| `GetSampleRateHz()` | measured delivery rate |
| `Recenter()` | reset orientation to identity |

Android sensor axes are remapped into Unreal space, so Blueprint sees Unreal
coordinates rather than raw sensor axes.

### Caveats, stated plainly

- **Yaw drifts.** Orientation is integrated from the gyroscope. The
  accelerometer gives a gravity reference so pitch and roll stay level, but
  heading has no absolute reference. Bind `Recenter()` to a button — the same
  compromise Daydream and GearVR controllers shipped with.
- **3DoF only.** Rotation, never position. Position needs headset-side optical
  tracking, which is what a real 6DoF controller provides.
- **Sample rate is capped in practice.** The plugin declares
  `HIGH_SAMPLING_RATE_SENSORS` (without it the platform caps input-device sensors
  at 200 Hz), but observed delivery on the devices tested was ~89 Hz — display
  rate — against ~475 Hz visible at the evdev layer. Read `GetSampleRateHz()`
  rather than assuming.

### Sample

`AGamepadMotionActor` (`Projects/UnrealSamples/Source/UnrealSamples/`) follows the
same C++-sample-actor pattern as the existing `HandTracking` and `Plane` actors.

- A wand-proportioned mesh rotates with the controller. Distinct extents on all
  three axes make its aim readable; a uniform cube cannot convey yaw versus roll.
- An in-world `UTextRenderComponent` shows device, sample rate, battery, gyro,
  accelerometer, gravity magnitude and euler angles — no UMG or Blueprint setup
  required, and it reports *why* nothing is tracking when no controller is found.
- Attachment is retried while no controller is present, so a pad switched on
  after level load is picked up.
- **Any face button recentres.** This does more than zero the orientation: a
  gamepad's IMU reports in its own arbitrary frame with no relation to the
  viewer, so recentring also captures the viewer's yaw and composes it with the
  controller orientation. Zeroed-forward then means *away from the viewer*. The
  actor also moves in front of the viewer at eye height and turns to face them.

Two structural details worth copying: the readout is a **sibling** of the mesh
under a fixed pivot, not a child, or it inherits the controller's rotation and
spends most of its time facing away; and the mesh proportions and dynamic
material are applied in `BeginPlay`, not the constructor — see below.

---

## Verification

**Verified running on an Android XR device** (Android 14) with a PS5 DualSense,
built against **stock UE 5.6** for Android (NDK r27c, clang 18.0.3, `android-32`):

```
LogPluginManager: Mounting Project plugin GamepadMotionSensors
LogGamepadMotionSensors: No connected input device exposes a gyroscope.
LogGamepadMotionSensors: Attached to gamepad motion sensors: DualSense Wireless Controller
```

The mesh tracks the controller's orientation in the headset, the on-screen
readout reports live sensor values, and recentring works. The repeated "no
device" lines are the sample's retry loop, which picks the controller up
whenever it connects after level load — including after a battery-flat
reconnect, which is how it got exercised.

Each build layer was also checked individually rather than by exit code alone:

- UnrealHeaderTool clean under `-WarningsAsErrors`
- Java injected into the real `GameActivity.java`
- `HIGH_SAMPLING_RATE_SENSORS` present in the merged manifest
- JNI symbol exported and matching the Java `native` declaration:
  `T Java_com_epicgames_unreal_GameActivity_nativeGamepadMotionUpdate`
- APK packaged

## If you copy this plugin pattern

Three things cost real time here, each failing in a way that is hard to
attribute to its cause:

**1. `SupportedTargetPlatforms` must be declared in *both* places.** A `.uplugin`
that declares it needs the same field on its `.uproject` reference, matching how
`HandInteractionInputDevice` is declared. Otherwise UBT fails target setup with:

```
GamepadMotionSensors.uplugin is referenced via UnrealSamples.uproject with a
mismatched 'SupportedTargetPlatforms' field. This will cause problems in
packaged builds
```

Notably this did **not** reproduce on every host/platform combination we built
on — one toolchain accepted it and another rejected it. Building the same source
on a second platform is a real check, not redundancy.

**2. `BeginPlay`, not the constructor, for anything visual.** Two separate
failures here. `UMaterialInstanceDynamic::Create()` and `SetMaterial()` in a
constructor crash on load, because UObject constructors can run on async-loading
worker threads and those calls touch the render proxy:

```
Assertion failed: IsInGameThread() || IsInParallelGameThread()
[File:./Runtime/Renderer/Private/RendererScene.cpp] [Line: 6866]
```

And a component transform set in the constructor does **not** reach an actor
already saved in a level — the serialized instance transform wins — so a mesh
placed before a shape change silently keeps the old shape. Assert both in
`BeginPlay`.

**3. UPL is XML, so Java operators inside it must be escaped.** `&&` becomes
`&amp;&amp;` and `<` becomes `&lt;`. Raw operators make the file invalid XML and
UPL silently fails to apply. Validate before building:

```bash
python3 -c "import xml.etree.ElementTree as ET; ET.parse('YourPlugin_APL.xml')"
```

## Suggested additions upstream

Four shipped plugins have no sample level: `AndroidXRDeviceAnchorPersistence`,
`AndroidXRSpatialEntities`, `AndroidXRStreaming`, and `HandInteractionInputDevice`
(covered only indirectly by `HandInteractionLevel`).

Extensions an Android XR runtime advertises with no plugin here include
`XR_ANDROID_raycast`, `XR_ANDROID_trackables_qr_code`,
`XR_ANDROID_trackables_image`, `XR_ANDROID_geospatial` /
`XR_ANDROID_geospatial_anchor`, `XR_ANDROID_anchor_sharing_export`,
`XR_ANDROID_unbounded_reference_space` and `XR_ANDROID_mouse_interaction`.
(Matched by name against the runtime's own extension list, so worth a
double-check before treating this as authoritative.)

---

Maintained by **Agile Lens**. Issues and PRs welcome; changes here are intended
to flow upstream.
