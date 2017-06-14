#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_TouchLayer2635439978.h"
#include "AssemblyU2DCSharp_TouchScript_Layers_FullscreenLaye777199562.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t137760637;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.FullscreenLayer
struct  FullscreenLayer_t1925731828  : public TouchLayer_t2635439978
{
public:
	// TouchScript.Layers.FullscreenLayer/LayerType TouchScript.Layers.FullscreenLayer::type
	int32_t ___type_6;
	// UnityEngine.Camera TouchScript.Layers.FullscreenLayer::_camera
	Camera_t189460977 * ____camera_7;
	// UnityEngine.Transform TouchScript.Layers.FullscreenLayer::cameraTransform
	Transform_t3275118058 * ___cameraTransform_8;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.FullscreenLayer::tmpHitTestList
	List_1_t137760637 * ___tmpHitTestList_9;

public:
	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1925731828, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of__camera_7() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1925731828, ____camera_7)); }
	inline Camera_t189460977 * get__camera_7() const { return ____camera_7; }
	inline Camera_t189460977 ** get_address_of__camera_7() { return &____camera_7; }
	inline void set__camera_7(Camera_t189460977 * value)
	{
		____camera_7 = value;
		Il2CppCodeGenWriteBarrier(&____camera_7, value);
	}

	inline static int32_t get_offset_of_cameraTransform_8() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1925731828, ___cameraTransform_8)); }
	inline Transform_t3275118058 * get_cameraTransform_8() const { return ___cameraTransform_8; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_8() { return &___cameraTransform_8; }
	inline void set_cameraTransform_8(Transform_t3275118058 * value)
	{
		___cameraTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_8, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_9() { return static_cast<int32_t>(offsetof(FullscreenLayer_t1925731828, ___tmpHitTestList_9)); }
	inline List_1_t137760637 * get_tmpHitTestList_9() const { return ___tmpHitTestList_9; }
	inline List_1_t137760637 ** get_address_of_tmpHitTestList_9() { return &___tmpHitTestList_9; }
	inline void set_tmpHitTestList_9(List_1_t137760637 * value)
	{
		___tmpHitTestList_9 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
