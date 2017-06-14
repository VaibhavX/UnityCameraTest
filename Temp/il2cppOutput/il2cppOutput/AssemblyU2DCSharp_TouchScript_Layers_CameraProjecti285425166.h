#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_ProjectionPar2712959773.h"

// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraProjectionParams
struct  CameraProjectionParams_t285425166  : public ProjectionParams_t2712959773
{
public:
	// UnityEngine.Camera TouchScript.Layers.CameraProjectionParams::camera
	Camera_t189460977 * ___camera_0;

public:
	inline static int32_t get_offset_of_camera_0() { return static_cast<int32_t>(offsetof(CameraProjectionParams_t285425166, ___camera_0)); }
	inline Camera_t189460977 * get_camera_0() const { return ___camera_0; }
	inline Camera_t189460977 ** get_address_of_camera_0() { return &___camera_0; }
	inline void set_camera_0(Camera_t189460977 * value)
	{
		___camera_0 = value;
		Il2CppCodeGenWriteBarrier(&___camera_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
