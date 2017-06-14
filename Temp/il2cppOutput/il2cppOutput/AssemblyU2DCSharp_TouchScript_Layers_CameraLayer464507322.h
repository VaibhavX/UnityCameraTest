#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_CameraLayerBa3857323967.h"

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t3751268748;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t137760637;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayer
struct  CameraLayer_t464507322  : public CameraLayerBase_t3857323967
{
public:
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit> TouchScript.Layers.CameraLayer::sortedHits
	List_1_t3751268748 * ___sortedHits_8;
	// UnityEngine.Transform TouchScript.Layers.CameraLayer::cachedTransform
	Transform_t3275118058 * ___cachedTransform_9;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.CameraLayer::tmpHitTestList
	List_1_t137760637 * ___tmpHitTestList_10;

public:
	inline static int32_t get_offset_of_sortedHits_8() { return static_cast<int32_t>(offsetof(CameraLayer_t464507322, ___sortedHits_8)); }
	inline List_1_t3751268748 * get_sortedHits_8() const { return ___sortedHits_8; }
	inline List_1_t3751268748 ** get_address_of_sortedHits_8() { return &___sortedHits_8; }
	inline void set_sortedHits_8(List_1_t3751268748 * value)
	{
		___sortedHits_8 = value;
		Il2CppCodeGenWriteBarrier(&___sortedHits_8, value);
	}

	inline static int32_t get_offset_of_cachedTransform_9() { return static_cast<int32_t>(offsetof(CameraLayer_t464507322, ___cachedTransform_9)); }
	inline Transform_t3275118058 * get_cachedTransform_9() const { return ___cachedTransform_9; }
	inline Transform_t3275118058 ** get_address_of_cachedTransform_9() { return &___cachedTransform_9; }
	inline void set_cachedTransform_9(Transform_t3275118058 * value)
	{
		___cachedTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_9, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_10() { return static_cast<int32_t>(offsetof(CameraLayer_t464507322, ___tmpHitTestList_10)); }
	inline List_1_t137760637 * get_tmpHitTestList_10() const { return ___tmpHitTestList_10; }
	inline List_1_t137760637 ** get_address_of_tmpHitTestList_10() { return &___tmpHitTestList_10; }
	inline void set_tmpHitTestList_10(List_1_t137760637 * value)
	{
		___tmpHitTestList_10 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
