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

// TouchScript.Layers.UILayer
struct UILayer_t314035379;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t137760637;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,TouchScript.Layers.ProjectionParams>
struct Dictionary_2_t2765956170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.UILayer
struct  UILayer_t314035379  : public TouchLayer_t2635439978
{
public:
	// UnityEngine.LayerMask TouchScript.Layers.UILayer::layerMask
	LayerMask_t3188175821  ___layerMask_7;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> TouchScript.Layers.UILayer::raycastResultCache
	List_1_t3685274804 * ___raycastResultCache_8;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.UILayer::tmpHitTestList
	List_1_t137760637 * ___tmpHitTestList_9;
	// UnityEngine.EventSystems.PointerEventData TouchScript.Layers.UILayer::pointerDataCache
	PointerEventData_t1599784723 * ___pointerDataCache_10;
	// UnityEngine.EventSystems.EventSystem TouchScript.Layers.UILayer::eventSystem
	EventSystem_t3466835263 * ___eventSystem_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,TouchScript.Layers.ProjectionParams> TouchScript.Layers.UILayer::projectionParamsCache
	Dictionary_2_t2765956170 * ___projectionParamsCache_12;

public:
	inline static int32_t get_offset_of_layerMask_7() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___layerMask_7)); }
	inline LayerMask_t3188175821  get_layerMask_7() const { return ___layerMask_7; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_7() { return &___layerMask_7; }
	inline void set_layerMask_7(LayerMask_t3188175821  value)
	{
		___layerMask_7 = value;
	}

	inline static int32_t get_offset_of_raycastResultCache_8() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___raycastResultCache_8)); }
	inline List_1_t3685274804 * get_raycastResultCache_8() const { return ___raycastResultCache_8; }
	inline List_1_t3685274804 ** get_address_of_raycastResultCache_8() { return &___raycastResultCache_8; }
	inline void set_raycastResultCache_8(List_1_t3685274804 * value)
	{
		___raycastResultCache_8 = value;
		Il2CppCodeGenWriteBarrier(&___raycastResultCache_8, value);
	}

	inline static int32_t get_offset_of_tmpHitTestList_9() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___tmpHitTestList_9)); }
	inline List_1_t137760637 * get_tmpHitTestList_9() const { return ___tmpHitTestList_9; }
	inline List_1_t137760637 ** get_address_of_tmpHitTestList_9() { return &___tmpHitTestList_9; }
	inline void set_tmpHitTestList_9(List_1_t137760637 * value)
	{
		___tmpHitTestList_9 = value;
		Il2CppCodeGenWriteBarrier(&___tmpHitTestList_9, value);
	}

	inline static int32_t get_offset_of_pointerDataCache_10() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___pointerDataCache_10)); }
	inline PointerEventData_t1599784723 * get_pointerDataCache_10() const { return ___pointerDataCache_10; }
	inline PointerEventData_t1599784723 ** get_address_of_pointerDataCache_10() { return &___pointerDataCache_10; }
	inline void set_pointerDataCache_10(PointerEventData_t1599784723 * value)
	{
		___pointerDataCache_10 = value;
		Il2CppCodeGenWriteBarrier(&___pointerDataCache_10, value);
	}

	inline static int32_t get_offset_of_eventSystem_11() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___eventSystem_11)); }
	inline EventSystem_t3466835263 * get_eventSystem_11() const { return ___eventSystem_11; }
	inline EventSystem_t3466835263 ** get_address_of_eventSystem_11() { return &___eventSystem_11; }
	inline void set_eventSystem_11(EventSystem_t3466835263 * value)
	{
		___eventSystem_11 = value;
		Il2CppCodeGenWriteBarrier(&___eventSystem_11, value);
	}

	inline static int32_t get_offset_of_projectionParamsCache_12() { return static_cast<int32_t>(offsetof(UILayer_t314035379, ___projectionParamsCache_12)); }
	inline Dictionary_2_t2765956170 * get_projectionParamsCache_12() const { return ___projectionParamsCache_12; }
	inline Dictionary_2_t2765956170 ** get_address_of_projectionParamsCache_12() { return &___projectionParamsCache_12; }
	inline void set_projectionParamsCache_12(Dictionary_2_t2765956170 * value)
	{
		___projectionParamsCache_12 = value;
		Il2CppCodeGenWriteBarrier(&___projectionParamsCache_12, value);
	}
};

struct UILayer_t314035379_StaticFields
{
public:
	// TouchScript.Layers.UILayer TouchScript.Layers.UILayer::instance
	UILayer_t314035379 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(UILayer_t314035379_StaticFields, ___instance_6)); }
	inline UILayer_t314035379 * get_instance_6() const { return ___instance_6; }
	inline UILayer_t314035379 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(UILayer_t314035379 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier(&___instance_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
