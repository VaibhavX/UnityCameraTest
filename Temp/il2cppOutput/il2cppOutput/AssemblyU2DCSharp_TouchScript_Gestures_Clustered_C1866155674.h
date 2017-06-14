#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_ScreenTrans3088562929.h"

// TouchScript.Clusters.Clusters
struct Clusters_t4089973855;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Clustered.ClusteredScreenTransformGesture
struct  ClusteredScreenTransformGesture_t1866155674  : public ScreenTransformGesture_t3088562929
{
public:
	// TouchScript.Clusters.Clusters TouchScript.Gestures.Clustered.ClusteredScreenTransformGesture::clusters
	Clusters_t4089973855 * ___clusters_54;

public:
	inline static int32_t get_offset_of_clusters_54() { return static_cast<int32_t>(offsetof(ClusteredScreenTransformGesture_t1866155674, ___clusters_54)); }
	inline Clusters_t4089973855 * get_clusters_54() const { return ___clusters_54; }
	inline Clusters_t4089973855 ** get_address_of_clusters_54() { return &___clusters_54; }
	inline void set_clusters_54(Clusters_t4089973855 * value)
	{
		___clusters_54 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_54, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
