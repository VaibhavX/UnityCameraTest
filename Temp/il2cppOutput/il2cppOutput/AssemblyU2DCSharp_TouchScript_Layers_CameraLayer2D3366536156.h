#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Layers_CameraLayerBa3857323967.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D>
struct List_1_t3433029906;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t137760637;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.CameraLayer2D
struct  CameraLayer2D_t3366536156  : public CameraLayerBase_t3857323967
{
public:
	// System.Int32[] TouchScript.Layers.CameraLayer2D::layerIds
	Int32U5BU5D_t3030399641* ___layerIds_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TouchScript.Layers.CameraLayer2D::layerById
	Dictionary_2_t1079703083 * ___layerById_9;
	// System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> TouchScript.Layers.CameraLayer2D::sortedHits
	List_1_t3433029906 * ___sortedHits_10;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.CameraLayer2D::tmpHitTestList
	List_1_t137760637 * ___tmpHitTestList_11;

public:
	inline static int32_t get_offset_of_layerIds_8() { return static_cast<int32_t>(offsetof(CameraLayer2D_t3366536156, ___layerIds_8)); }
	inline Int32U5BU5D_t3030399641* get_layerIds_8() const { return ___layerIds_8; }
	inline Int32U5BU5D_t3030399641** get_address_of_layerIds_8() { return &___layerIds_8; }
	inline void set_layerIds_8(Int32U5BU5D_t3030399641* value)
	{
		___layerIds_8 = value;
		Il2CppCodeGenWriteBarrier(&___layerIds_8, value);
	}

	inline static int32_t get_offset_of_layerById_9() { return static_cast<int32_t>(offsetof(CameraLayer2D_t3366536156, ___layerById_9)); }
	inline Dictionary_2_t1079703083 * get_layerById_9() const { return ___layerById_9; }
	inline Dictionary_2_t1079703083 ** get_address_of_layerById_9() { return &___layerById_9; }
	inline void set_layerById_9(Dictionary_2_t1079703083 * value)
	{
		___layerById_9 = value;
		Il2CppCodeGenWriteBarrier(&___layerById_9, value);
	}

	inline static int32_t get_offset_of_sortedHits_10() { return static_cast<int32_t>(offsetof(CameraLayer2D_t3366536156, ___sortedHits_10)); }
	inline List_1_t3433029906 * get_sortedHits_10() const { return ___sortedHits_10; }
	inline List_1_t3433029906 ** get_address_of_sortedHits_10() { return &___sortedHits_10; }
	inline void set_sortedHits_10(List_1_t3433029906 * value)
	{
		___sortedHits_10 = value;
		Il2CppCodeGenWriteBarrier(&___sortedHits_10, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_11() { return static_cast<int32_t>(offsetof(CameraLayer2D_t3366536156, ___tmpHitTestList_11)); }
	inline List_1_t137760637 * get_tmpHitTestList_11() const { return ___tmpHitTestList_11; }
	inline List_1_t137760637 ** get_address_of_tmpHitTestList_11() { return &___tmpHitTestList_11; }
	inline void set_tmpHitTestList_11(List_1_t137760637 * value)
	{
		___tmpHitTestList_11 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
