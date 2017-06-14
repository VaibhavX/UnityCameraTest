#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Base_Pinned3366405746.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_PinnedTransf510080709.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Plane3727654732.h"

// TouchScript.Layers.TouchLayer
struct TouchLayer_t2635439978;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.PinnedTransformGesture
struct  PinnedTransformGesture_t2478931093  : public PinnedTrasformGestureBase_t3366405746
{
public:
	// TouchScript.Gestures.PinnedTransformGesture/ProjectionType TouchScript.Gestures.PinnedTransformGesture::projection
	int32_t ___projection_51;
	// UnityEngine.Vector3 TouchScript.Gestures.PinnedTransformGesture::projectionPlaneNormal
	Vector3_t2243707580  ___projectionPlaneNormal_52;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.PinnedTransformGesture::projectionLayer
	TouchLayer_t2635439978 * ___projectionLayer_53;
	// UnityEngine.Plane TouchScript.Gestures.PinnedTransformGesture::transformPlane
	Plane_t3727654732  ___transformPlane_54;

public:
	inline static int32_t get_offset_of_projection_51() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2478931093, ___projection_51)); }
	inline int32_t get_projection_51() const { return ___projection_51; }
	inline int32_t* get_address_of_projection_51() { return &___projection_51; }
	inline void set_projection_51(int32_t value)
	{
		___projection_51 = value;
	}

	inline static int32_t get_offset_of_projectionPlaneNormal_52() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2478931093, ___projectionPlaneNormal_52)); }
	inline Vector3_t2243707580  get_projectionPlaneNormal_52() const { return ___projectionPlaneNormal_52; }
	inline Vector3_t2243707580 * get_address_of_projectionPlaneNormal_52() { return &___projectionPlaneNormal_52; }
	inline void set_projectionPlaneNormal_52(Vector3_t2243707580  value)
	{
		___projectionPlaneNormal_52 = value;
	}

	inline static int32_t get_offset_of_projectionLayer_53() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2478931093, ___projectionLayer_53)); }
	inline TouchLayer_t2635439978 * get_projectionLayer_53() const { return ___projectionLayer_53; }
	inline TouchLayer_t2635439978 ** get_address_of_projectionLayer_53() { return &___projectionLayer_53; }
	inline void set_projectionLayer_53(TouchLayer_t2635439978 * value)
	{
		___projectionLayer_53 = value;
		Il2CppCodeGenWriteBarrier(&___projectionLayer_53, value);
	}

	inline static int32_t get_offset_of_transformPlane_54() { return static_cast<int32_t>(offsetof(PinnedTransformGesture_t2478931093, ___transformPlane_54)); }
	inline Plane_t3727654732  get_transformPlane_54() const { return ___transformPlane_54; }
	inline Plane_t3727654732 * get_address_of_transformPlane_54() { return &___transformPlane_54; }
	inline void set_transformPlane_54(Plane_t3727654732  value)
	{
		___transformPlane_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
