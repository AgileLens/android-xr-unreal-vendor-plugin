# Android XR Plugins for Unreal

> ### This is a fork
>
> An [Agile Lens](https://github.com/AgileLens) fork of
> [android-xr/android-xr-unreal-vendor-plugin](https://github.com/android-xr/android-xr-unreal-vendor-plugin),
> with two build fixes and one additional plugin. **See [FORK_NOTES.md](FORK_NOTES.md)
> for the detail.** Everything here is offered upstream; the fork exists so the
> changes are usable now rather than gated on a review cycle.
>
> **Fixed — the upstream repo does not build from a fresh clone.** Two
> `File.WriteAllText` calls in `AndroidXR.Build.cs` write into plugin
> `Intermediate/` directories without creating them, so module instantiation
> fails before anything compiles. The second instance affects every plugin that
> depends on `AndroidXR`. (Also worth knowing: clone to a short path — the
> generated tree exceeds the Windows 260-character limit from a normally-named
> directory.)
>
> **Added — `GamepadMotionSensors` (plugin 23 below).** Exposes a connected
> Bluetooth gamepad's accelerometer and gyroscope through
> `InputDevice.getSensorManager()` (API 31+), giving 3DoF orientation from an
> ordinary game controller. Useful on Android XR hardware that does not declare
> `android.hardware.xr.input.controller`, where hand tracking is otherwise the
> only input — and as gamepad support generally. Ships with a `GamepadMotion`
> sample level: a wand-shaped mesh that rotates with the controller, a live
> readout of sensor values and battery, and gaze-aware recentring.
>
> Verified on device against stock UE 5.6 targeting Android.

1.  AndroidXR: required for all Android XR Extensions' features.
2.  Depth Texture
3.  Device Anchor Persistence
4.  Eyetracking
5.  Facetracking
6.  Passthrough Mesh
7.  Performance Metrics
8.  Scene Meshing
9.  Streaming
10. Trackables Core
11. Trackables Object
12. Hand Interaction
13. Hand Interaction Input Device
14. Hand Tracking Mesh
15. Global Passthrough Dimming
16. Light Estimation
17. Recommended Resolution
18. Spatial Entities
19. Spatial Marker Tracking
20. Spatial Plane Tracking
21. Spatial Anchors
22. System Extension Properties
23. Gamepad Motion Sensors *(added in this fork — see [FORK_NOTES.md](FORK_NOTES.md))*

## Supported Development Platforms
- Windows
- Mac

Linux is not supported.

## Supported Unreal Engine Versions
- 5.6

## How to use

1.  Ensure your Unreal Engine project is closed.
2.  Locate the main directory of your Unreal Engine project.
3.  If one doesn't exist, create a new folder named Plugins in the root of your project directory.
4.  Each downloaded plugin should have its' own folder which should be placed in the Plugins folder.
5.  Launch your project again. Unreal Engine should detect the new plugins and prompt you if necessary.
6.  Go to **Edit > Plugins** and ensure the newly installed plugins are listed under the "Installed" category and are enabled.
7.  Go to **Edit > Project Settings > Platforms > Android** If there is a red box that states the project is not configured for the Android platform, click the **Configure Now** button and **Accept SDK License** if needed.
8.  Package your project targeting **Android** platform.
