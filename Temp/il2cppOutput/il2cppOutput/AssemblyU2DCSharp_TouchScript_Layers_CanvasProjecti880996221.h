#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_ProjectionPar2712959773.h"
#include "UnityEngine_UnityEngine_RenderMode4280533217.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CanvasProjectionParams
struct  CanvasProjectionParams_t880996221  : public ProjectionParams_t2712959773
{
public:
	// UnityEngine.Canvas TouchScript.Layers.CanvasProjectionParams::canvas
	Canvas_t209405766 * ___canvas_0;
	// UnityEngine.RectTransform TouchScript.Layers.CanvasProjectionParams::rect
	RectTransform_t3349966182 * ___rect_1;
	// UnityEngine.RenderMode TouchScript.Layers.CanvasProjectionParams::mode
	int32_t ___mode_2;
	// UnityEngine.Camera TouchScript.Layers.CanvasProjectionParams::camera
	Camera_t189460977 * ___camera_3;

public:
	inline static int32_t get_offset_of_canvas_0() { return static_cast<int32_t>(offsetof(CanvasProjectionParams_t880996221, ___canvas_0)); }
	inline Canvas_t209405766 * get_canvas_0() const { return ___canvas_0; }
	inline Canvas_t209405766 ** get_address_of_canvas_0() { return &___canvas_0; }
	inline void set_canvas_0(Canvas_t209405766 * value)
	{
		___canvas_0 = value;
		Il2CppCodeGenWriteBarrier(&___canvas_0, value);
	}

	inline static int32_t get_offset_of_rect_1() { return static_cast<int32_t>(offsetof(CanvasProjectionParams_t880996221, ___rect_1)); }
	inline RectTransform_t3349966182 * get_rect_1() const { return ___rect_1; }
	inline RectTransform_t3349966182 ** get_address_of_rect_1() { return &___rect_1; }
	inline void set_rect_1(RectTransform_t3349966182 * value)
	{
		___rect_1 = value;
		Il2CppCodeGenWriteBarrier(&___rect_1, value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(CanvasProjectionParams_t880996221, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_camera_3() { return static_cast<int32_t>(offsetof(CanvasProjectionParams_t880996221, ___camera_3)); }
	inline Camera_t189460977 * get_camera_3() const { return ___camera_3; }
	inline Camera_t189460977 ** get_address_of_camera_3() { return &___camera_3; }
	inline void set_camera_3(Camera_t189460977 * value)
	{
		___camera_3 = value;
		Il2CppCodeGenWriteBarrier(&___camera_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
