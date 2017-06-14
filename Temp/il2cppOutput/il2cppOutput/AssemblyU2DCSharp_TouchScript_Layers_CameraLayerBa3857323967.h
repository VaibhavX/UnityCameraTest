#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_TouchLayer2635439978.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayerBase
struct  CameraLayerBase_t3857323967  : public TouchLayer_t2635439978
{
public:
	// UnityEngine.LayerMask TouchScript.Layers.CameraLayerBase::layerMask
	LayerMask_t3188175821  ___layerMask_6;
	// UnityEngine.Camera TouchScript.Layers.CameraLayerBase::_camera
	Camera_t189460977 * ____camera_7;

public:
	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(CameraLayerBase_t3857323967, ___layerMask_6)); }
	inline LayerMask_t3188175821  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_t3188175821  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of__camera_7() { return static_cast<int32_t>(offsetof(CameraLayerBase_t3857323967, ____camera_7)); }
	inline Camera_t189460977 * get__camera_7() const { return ____camera_7; }
	inline Camera_t189460977 ** get_address_of__camera_7() { return &____camera_7; }
	inline void set__camera_7(Camera_t189460977 * value)
	{
		____camera_7 = value;
		Il2CppCodeGenWriteBarrier(&____camera_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
