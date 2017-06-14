#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Gestures.ScreenTransformGesture
struct ScreenTransformGesture_t3088562929;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.CameraControl.CameraController
struct  CameraController_t1392801363  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Gestures.ScreenTransformGesture TouchScript.Examples.CameraControl.CameraController::TwoFingerMoveGesture
	ScreenTransformGesture_t3088562929 * ___TwoFingerMoveGesture_2;
	// TouchScript.Gestures.ScreenTransformGesture TouchScript.Examples.CameraControl.CameraController::ManipulationGesture
	ScreenTransformGesture_t3088562929 * ___ManipulationGesture_3;
	// System.Single TouchScript.Examples.CameraControl.CameraController::PanSpeed
	float ___PanSpeed_4;
	// System.Single TouchScript.Examples.CameraControl.CameraController::RotationSpeed
	float ___RotationSpeed_5;
	// System.Single TouchScript.Examples.CameraControl.CameraController::ZoomSpeed
	float ___ZoomSpeed_6;
	// UnityEngine.Transform TouchScript.Examples.CameraControl.CameraController::pivot
	Transform_t3275118058 * ___pivot_7;
	// UnityEngine.Transform TouchScript.Examples.CameraControl.CameraController::cam
	Transform_t3275118058 * ___cam_8;

public:
	inline static int32_t get_offset_of_TwoFingerMoveGesture_2() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___TwoFingerMoveGesture_2)); }
	inline ScreenTransformGesture_t3088562929 * get_TwoFingerMoveGesture_2() const { return ___TwoFingerMoveGesture_2; }
	inline ScreenTransformGesture_t3088562929 ** get_address_of_TwoFingerMoveGesture_2() { return &___TwoFingerMoveGesture_2; }
	inline void set_TwoFingerMoveGesture_2(ScreenTransformGesture_t3088562929 * value)
	{
		___TwoFingerMoveGesture_2 = value;
		Il2CppCodeGenWriteBarrier(&___TwoFingerMoveGesture_2, value);
	}

	inline static int32_t get_offset_of_ManipulationGesture_3() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___ManipulationGesture_3)); }
	inline ScreenTransformGesture_t3088562929 * get_ManipulationGesture_3() const { return ___ManipulationGesture_3; }
	inline ScreenTransformGesture_t3088562929 ** get_address_of_ManipulationGesture_3() { return &___ManipulationGesture_3; }
	inline void set_ManipulationGesture_3(ScreenTransformGesture_t3088562929 * value)
	{
		___ManipulationGesture_3 = value;
		Il2CppCodeGenWriteBarrier(&___ManipulationGesture_3, value);
	}

	inline static int32_t get_offset_of_PanSpeed_4() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___PanSpeed_4)); }
	inline float get_PanSpeed_4() const { return ___PanSpeed_4; }
	inline float* get_address_of_PanSpeed_4() { return &___PanSpeed_4; }
	inline void set_PanSpeed_4(float value)
	{
		___PanSpeed_4 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_5() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___RotationSpeed_5)); }
	inline float get_RotationSpeed_5() const { return ___RotationSpeed_5; }
	inline float* get_address_of_RotationSpeed_5() { return &___RotationSpeed_5; }
	inline void set_RotationSpeed_5(float value)
	{
		___RotationSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ZoomSpeed_6() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___ZoomSpeed_6)); }
	inline float get_ZoomSpeed_6() const { return ___ZoomSpeed_6; }
	inline float* get_address_of_ZoomSpeed_6() { return &___ZoomSpeed_6; }
	inline void set_ZoomSpeed_6(float value)
	{
		___ZoomSpeed_6 = value;
	}

	inline static int32_t get_offset_of_pivot_7() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___pivot_7)); }
	inline Transform_t3275118058 * get_pivot_7() const { return ___pivot_7; }
	inline Transform_t3275118058 ** get_address_of_pivot_7() { return &___pivot_7; }
	inline void set_pivot_7(Transform_t3275118058 * value)
	{
		___pivot_7 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_7, value);
	}

	inline static int32_t get_offset_of_cam_8() { return static_cast<int32_t>(offsetof(CameraController_t1392801363, ___cam_8)); }
	inline Transform_t3275118058 * get_cam_8() const { return ___cam_8; }
	inline Transform_t3275118058 ** get_address_of_cam_8() { return &___cam_8; }
	inline void set_cam_8(Transform_t3275118058 * value)
	{
		___cam_8 = value;
		Il2CppCodeGenWriteBarrier(&___cam_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
