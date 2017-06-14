#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t4133675533;
// System.String
struct String_t;
// TouchScript.Layers.ILayerDelegate
struct ILayerDelegate_t701621129;
// TouchScript.Layers.ProjectionParams
struct ProjectionParams_t2712959773;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Layers.TouchLayer
struct  TouchLayer_t2635439978  : public MonoBehaviour_t1158329972
{
public:
	// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs> TouchScript.Layers.TouchLayer::touchBeganInvoker
	EventHandler_1_t4133675533 * ___touchBeganInvoker_2;
	// System.String TouchScript.Layers.TouchLayer::Name
	String_t* ___Name_3;
	// TouchScript.Layers.ILayerDelegate TouchScript.Layers.TouchLayer::<Delegate>k__BackingField
	Il2CppObject * ___U3CDelegateU3Ek__BackingField_4;
	// TouchScript.Layers.ProjectionParams TouchScript.Layers.TouchLayer::layerProjectionParams
	ProjectionParams_t2712959773 * ___layerProjectionParams_5;

public:
	inline static int32_t get_offset_of_touchBeganInvoker_2() { return static_cast<int32_t>(offsetof(TouchLayer_t2635439978, ___touchBeganInvoker_2)); }
	inline EventHandler_1_t4133675533 * get_touchBeganInvoker_2() const { return ___touchBeganInvoker_2; }
	inline EventHandler_1_t4133675533 ** get_address_of_touchBeganInvoker_2() { return &___touchBeganInvoker_2; }
	inline void set_touchBeganInvoker_2(EventHandler_1_t4133675533 * value)
	{
		___touchBeganInvoker_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchBeganInvoker_2, value);
	}

	inline static int32_t get_offset_of_Name_3() { return static_cast<int32_t>(offsetof(TouchLayer_t2635439978, ___Name_3)); }
	inline String_t* get_Name_3() const { return ___Name_3; }
	inline String_t** get_address_of_Name_3() { return &___Name_3; }
	inline void set_Name_3(String_t* value)
	{
		___Name_3 = value;
		Il2CppCodeGenWriteBarrier(&___Name_3, value);
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TouchLayer_t2635439978, ___U3CDelegateU3Ek__BackingField_4)); }
	inline Il2CppObject * get_U3CDelegateU3Ek__BackingField_4() const { return ___U3CDelegateU3Ek__BackingField_4; }
	inline Il2CppObject ** get_address_of_U3CDelegateU3Ek__BackingField_4() { return &___U3CDelegateU3Ek__BackingField_4; }
	inline void set_U3CDelegateU3Ek__BackingField_4(Il2CppObject * value)
	{
		___U3CDelegateU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDelegateU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_layerProjectionParams_5() { return static_cast<int32_t>(offsetof(TouchLayer_t2635439978, ___layerProjectionParams_5)); }
	inline ProjectionParams_t2712959773 * get_layerProjectionParams_5() const { return ___layerProjectionParams_5; }
	inline ProjectionParams_t2712959773 ** get_address_of_layerProjectionParams_5() { return &___layerProjectionParams_5; }
	inline void set_layerProjectionParams_5(ProjectionParams_t2712959773 * value)
	{
		___layerProjectionParams_5 = value;
		Il2CppCodeGenWriteBarrier(&___layerProjectionParams_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
