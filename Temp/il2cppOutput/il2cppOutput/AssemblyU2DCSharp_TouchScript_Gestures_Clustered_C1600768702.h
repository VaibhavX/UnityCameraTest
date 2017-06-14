#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_TransformGes780972309.h"

// TouchScript.Clusters.Clusters
struct Clusters_t4089973855;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Clustered.ClusteredTransformGesture
struct  ClusteredTransformGesture_t1600768702  : public TransformGesture_t780972309
{
public:
	// TouchScript.Clusters.Clusters TouchScript.Gestures.Clustered.ClusteredTransformGesture::clusters
	Clusters_t4089973855 * ___clusters_58;

public:
	inline static int32_t get_offset_of_clusters_58() { return static_cast<int32_t>(offsetof(ClusteredTransformGesture_t1600768702, ___clusters_58)); }
	inline Clusters_t4089973855 * get_clusters_58() const { return ___clusters_58; }
	inline Clusters_t4089973855 ** get_address_of_clusters_58() { return &___clusters_58; }
	inline void set_clusters_58(Clusters_t4089973855 * value)
	{
		___clusters_58 = value;
		Il2CppCodeGenWriteBarrier(&___clusters_58, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
