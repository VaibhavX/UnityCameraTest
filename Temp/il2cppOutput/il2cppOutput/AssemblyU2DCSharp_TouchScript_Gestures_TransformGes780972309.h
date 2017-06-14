#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Base_Transfor91965108.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_TransformGes462923329.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"

// TouchScript.Layers.TouchLayer
struct TouchLayer_t2635439978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.TransformGesture
struct  TransformGesture_t780972309  : public TransformGestureBase_t91965108
{
public:
	// TouchScript.Gestures.TransformGesture/ProjectionType TouchScript.Gestures.TransformGesture::projection
	int32_t ___projection_54;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGesture::projectionPlaneNormal
	Vector3_t2243707580  ___projectionPlaneNormal_55;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.TransformGesture::projectionLayer
	TouchLayer_t2635439978 * ___projectionLayer_56;
	// UnityEngine.Plane TouchScript.Gestures.TransformGesture::transformPlane
	Plane_t3727654732  ___transformPlane_57;

public:
	inline static int32_t get_offset_of_projection_54() { return static_cast<int32_t>(offsetof(TransformGesture_t780972309, ___projection_54)); }
	inline int32_t get_projection_54() const { return ___projection_54; }
	inline int32_t* get_address_of_projection_54() { return &___projection_54; }
	inline void set_projection_54(int32_t value)
	{
		___projection_54 = value;
	}

	inline static int32_t get_offset_of_projectionPlaneNormal_55() { return static_cast<int32_t>(offsetof(TransformGesture_t780972309, ___projectionPlaneNormal_55)); }
	inline Vector3_t2243707580  get_projectionPlaneNormal_55() const { return ___projectionPlaneNormal_55; }
	inline Vector3_t2243707580 * get_address_of_projectionPlaneNormal_55() { return &___projectionPlaneNormal_55; }
	inline void set_projectionPlaneNormal_55(Vector3_t2243707580  value)
	{
		___projectionPlaneNormal_55 = value;
	}

	inline static int32_t get_offset_of_projectionLayer_56() { return static_cast<int32_t>(offsetof(TransformGesture_t780972309, ___projectionLayer_56)); }
	inline TouchLayer_t2635439978 * get_projectionLayer_56() const { return ___projectionLayer_56; }
	inline TouchLayer_t2635439978 ** get_address_of_projectionLayer_56() { return &___projectionLayer_56; }
	inline void set_projectionLayer_56(TouchLayer_t2635439978 * value)
	{
		___projectionLayer_56 = value;
		Il2CppCodeGenWriteBarrier(&___projectionLayer_56, value);
	}

	inline static int32_t get_offset_of_transformPlane_57() { return static_cast<int32_t>(offsetof(TransformGesture_t780972309, ___transformPlane_57)); }
	inline Plane_t3727654732  get_transformPlane_57() const { return ___transformPlane_57; }
	inline Plane_t3727654732 * get_address_of_transformPlane_57() { return &___transformPlane_57; }
	inline void set_transformPlane_57(Plane_t3727654732  value)
	{
		___transformPlane_57 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
