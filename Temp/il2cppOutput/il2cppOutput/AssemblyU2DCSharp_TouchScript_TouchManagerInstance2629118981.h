#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_DebuggableMonoBehavi3136086048.h"

// System.EventHandler`1<TouchScript.TouchEventArgs>
struct EventHandler_1_t509234338;
// System.EventHandler
struct EventHandler_t277755526;
// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t2629118981;
// TouchScript.Devices.Display.IDisplayDevice
struct IDisplayDevice_t2646363379;
// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer>
struct List_1_t2004561110;
// System.Collections.Generic.List`1<TouchScript.InputSources.IInputSource>
struct List_1_t2635681470;
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t328750215;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint>
struct Dictionary_2_t4262422014;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t405338302;
// TouchScript.Utils.ObjectPool`1<TouchScript.TouchPoint>
struct ObjectPool_1_t312917930;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct ObjectPool_1_t3977006358;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>>
struct ObjectPool_1_t794287427;
// System.Object
struct Il2CppObject;
// System.Predicate`1<TouchScript.Layers.TouchLayer>
struct Predicate_1_t1078410093;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchManagerInstance
struct  TouchManagerInstance_t2629118981  : public DebuggableMonoBehaviour_t3136086048
{
public:
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesBeganInvoker
	EventHandler_1_t509234338 * ___touchesBeganInvoker_2;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesMovedInvoker
	EventHandler_1_t509234338 * ___touchesMovedInvoker_3;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesEndedInvoker
	EventHandler_1_t509234338 * ___touchesEndedInvoker_4;
	// System.EventHandler`1<TouchScript.TouchEventArgs> TouchScript.TouchManagerInstance::touchesCancelledInvoker
	EventHandler_1_t509234338 * ___touchesCancelledInvoker_5;
	// System.EventHandler TouchScript.TouchManagerInstance::frameStartedInvoker
	EventHandler_t277755526 * ___frameStartedInvoker_6;
	// System.EventHandler TouchScript.TouchManagerInstance::frameFinishedInvoker
	EventHandler_t277755526 * ___frameFinishedInvoker_7;
	// System.Boolean TouchScript.TouchManagerInstance::shouldCreateCameraLayer
	bool ___shouldCreateCameraLayer_10;
	// System.Boolean TouchScript.TouchManagerInstance::shouldCreateStandardInput
	bool ___shouldCreateStandardInput_11;
	// TouchScript.Devices.Display.IDisplayDevice TouchScript.TouchManagerInstance::displayDevice
	Il2CppObject * ___displayDevice_12;
	// System.Single TouchScript.TouchManagerInstance::dpi
	float ___dpi_13;
	// System.Single TouchScript.TouchManagerInstance::dotsPerCentimeter
	float ___dotsPerCentimeter_14;
	// System.Collections.Generic.List`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::layers
	List_1_t2004561110 * ___layers_15;
	// System.Int32 TouchScript.TouchManagerInstance::layerCount
	int32_t ___layerCount_16;
	// System.Collections.Generic.List`1<TouchScript.InputSources.IInputSource> TouchScript.TouchManagerInstance::inputs
	List_1_t2635681470 * ___inputs_17;
	// System.Int32 TouchScript.TouchManagerInstance::inputCount
	int32_t ___inputCount_18;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touches
	List_1_t328750215 * ___touches_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.TouchPoint> TouchScript.TouchManagerInstance::idToTouch
	Dictionary_2_t4262422014 * ___idToTouch_20;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touchesBegan
	List_1_t328750215 * ___touchesBegan_21;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesUpdated
	HashSet_1_t405338302 * ___touchesUpdated_22;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesEnded
	HashSet_1_t405338302 * ___touchesEnded_23;
	// System.Collections.Generic.HashSet`1<System.Int32> TouchScript.TouchManagerInstance::touchesCancelled
	HashSet_1_t405338302 * ___touchesCancelled_24;
	// System.Int32 TouchScript.TouchManagerInstance::nextTouchId
	int32_t ___nextTouchId_28;
	// System.Object TouchScript.TouchManagerInstance::touchLock
	Il2CppObject * ___touchLock_29;

public:
	inline static int32_t get_offset_of_touchesBeganInvoker_2() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesBeganInvoker_2)); }
	inline EventHandler_1_t509234338 * get_touchesBeganInvoker_2() const { return ___touchesBeganInvoker_2; }
	inline EventHandler_1_t509234338 ** get_address_of_touchesBeganInvoker_2() { return &___touchesBeganInvoker_2; }
	inline void set_touchesBeganInvoker_2(EventHandler_1_t509234338 * value)
	{
		___touchesBeganInvoker_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchesBeganInvoker_2, value);
	}

	inline static int32_t get_offset_of_touchesMovedInvoker_3() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesMovedInvoker_3)); }
	inline EventHandler_1_t509234338 * get_touchesMovedInvoker_3() const { return ___touchesMovedInvoker_3; }
	inline EventHandler_1_t509234338 ** get_address_of_touchesMovedInvoker_3() { return &___touchesMovedInvoker_3; }
	inline void set_touchesMovedInvoker_3(EventHandler_1_t509234338 * value)
	{
		___touchesMovedInvoker_3 = value;
		Il2CppCodeGenWriteBarrier(&___touchesMovedInvoker_3, value);
	}

	inline static int32_t get_offset_of_touchesEndedInvoker_4() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesEndedInvoker_4)); }
	inline EventHandler_1_t509234338 * get_touchesEndedInvoker_4() const { return ___touchesEndedInvoker_4; }
	inline EventHandler_1_t509234338 ** get_address_of_touchesEndedInvoker_4() { return &___touchesEndedInvoker_4; }
	inline void set_touchesEndedInvoker_4(EventHandler_1_t509234338 * value)
	{
		___touchesEndedInvoker_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchesEndedInvoker_4, value);
	}

	inline static int32_t get_offset_of_touchesCancelledInvoker_5() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesCancelledInvoker_5)); }
	inline EventHandler_1_t509234338 * get_touchesCancelledInvoker_5() const { return ___touchesCancelledInvoker_5; }
	inline EventHandler_1_t509234338 ** get_address_of_touchesCancelledInvoker_5() { return &___touchesCancelledInvoker_5; }
	inline void set_touchesCancelledInvoker_5(EventHandler_1_t509234338 * value)
	{
		___touchesCancelledInvoker_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchesCancelledInvoker_5, value);
	}

	inline static int32_t get_offset_of_frameStartedInvoker_6() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___frameStartedInvoker_6)); }
	inline EventHandler_t277755526 * get_frameStartedInvoker_6() const { return ___frameStartedInvoker_6; }
	inline EventHandler_t277755526 ** get_address_of_frameStartedInvoker_6() { return &___frameStartedInvoker_6; }
	inline void set_frameStartedInvoker_6(EventHandler_t277755526 * value)
	{
		___frameStartedInvoker_6 = value;
		Il2CppCodeGenWriteBarrier(&___frameStartedInvoker_6, value);
	}

	inline static int32_t get_offset_of_frameFinishedInvoker_7() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___frameFinishedInvoker_7)); }
	inline EventHandler_t277755526 * get_frameFinishedInvoker_7() const { return ___frameFinishedInvoker_7; }
	inline EventHandler_t277755526 ** get_address_of_frameFinishedInvoker_7() { return &___frameFinishedInvoker_7; }
	inline void set_frameFinishedInvoker_7(EventHandler_t277755526 * value)
	{
		___frameFinishedInvoker_7 = value;
		Il2CppCodeGenWriteBarrier(&___frameFinishedInvoker_7, value);
	}

	inline static int32_t get_offset_of_shouldCreateCameraLayer_10() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___shouldCreateCameraLayer_10)); }
	inline bool get_shouldCreateCameraLayer_10() const { return ___shouldCreateCameraLayer_10; }
	inline bool* get_address_of_shouldCreateCameraLayer_10() { return &___shouldCreateCameraLayer_10; }
	inline void set_shouldCreateCameraLayer_10(bool value)
	{
		___shouldCreateCameraLayer_10 = value;
	}

	inline static int32_t get_offset_of_shouldCreateStandardInput_11() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___shouldCreateStandardInput_11)); }
	inline bool get_shouldCreateStandardInput_11() const { return ___shouldCreateStandardInput_11; }
	inline bool* get_address_of_shouldCreateStandardInput_11() { return &___shouldCreateStandardInput_11; }
	inline void set_shouldCreateStandardInput_11(bool value)
	{
		___shouldCreateStandardInput_11 = value;
	}

	inline static int32_t get_offset_of_displayDevice_12() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___displayDevice_12)); }
	inline Il2CppObject * get_displayDevice_12() const { return ___displayDevice_12; }
	inline Il2CppObject ** get_address_of_displayDevice_12() { return &___displayDevice_12; }
	inline void set_displayDevice_12(Il2CppObject * value)
	{
		___displayDevice_12 = value;
		Il2CppCodeGenWriteBarrier(&___displayDevice_12, value);
	}

	inline static int32_t get_offset_of_dpi_13() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___dpi_13)); }
	inline float get_dpi_13() const { return ___dpi_13; }
	inline float* get_address_of_dpi_13() { return &___dpi_13; }
	inline void set_dpi_13(float value)
	{
		___dpi_13 = value;
	}

	inline static int32_t get_offset_of_dotsPerCentimeter_14() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___dotsPerCentimeter_14)); }
	inline float get_dotsPerCentimeter_14() const { return ___dotsPerCentimeter_14; }
	inline float* get_address_of_dotsPerCentimeter_14() { return &___dotsPerCentimeter_14; }
	inline void set_dotsPerCentimeter_14(float value)
	{
		___dotsPerCentimeter_14 = value;
	}

	inline static int32_t get_offset_of_layers_15() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___layers_15)); }
	inline List_1_t2004561110 * get_layers_15() const { return ___layers_15; }
	inline List_1_t2004561110 ** get_address_of_layers_15() { return &___layers_15; }
	inline void set_layers_15(List_1_t2004561110 * value)
	{
		___layers_15 = value;
		Il2CppCodeGenWriteBarrier(&___layers_15, value);
	}

	inline static int32_t get_offset_of_layerCount_16() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___layerCount_16)); }
	inline int32_t get_layerCount_16() const { return ___layerCount_16; }
	inline int32_t* get_address_of_layerCount_16() { return &___layerCount_16; }
	inline void set_layerCount_16(int32_t value)
	{
		___layerCount_16 = value;
	}

	inline static int32_t get_offset_of_inputs_17() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___inputs_17)); }
	inline List_1_t2635681470 * get_inputs_17() const { return ___inputs_17; }
	inline List_1_t2635681470 ** get_address_of_inputs_17() { return &___inputs_17; }
	inline void set_inputs_17(List_1_t2635681470 * value)
	{
		___inputs_17 = value;
		Il2CppCodeGenWriteBarrier(&___inputs_17, value);
	}

	inline static int32_t get_offset_of_inputCount_18() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___inputCount_18)); }
	inline int32_t get_inputCount_18() const { return ___inputCount_18; }
	inline int32_t* get_address_of_inputCount_18() { return &___inputCount_18; }
	inline void set_inputCount_18(int32_t value)
	{
		___inputCount_18 = value;
	}

	inline static int32_t get_offset_of_touches_19() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touches_19)); }
	inline List_1_t328750215 * get_touches_19() const { return ___touches_19; }
	inline List_1_t328750215 ** get_address_of_touches_19() { return &___touches_19; }
	inline void set_touches_19(List_1_t328750215 * value)
	{
		___touches_19 = value;
		Il2CppCodeGenWriteBarrier(&___touches_19, value);
	}

	inline static int32_t get_offset_of_idToTouch_20() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___idToTouch_20)); }
	inline Dictionary_2_t4262422014 * get_idToTouch_20() const { return ___idToTouch_20; }
	inline Dictionary_2_t4262422014 ** get_address_of_idToTouch_20() { return &___idToTouch_20; }
	inline void set_idToTouch_20(Dictionary_2_t4262422014 * value)
	{
		___idToTouch_20 = value;
		Il2CppCodeGenWriteBarrier(&___idToTouch_20, value);
	}

	inline static int32_t get_offset_of_touchesBegan_21() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesBegan_21)); }
	inline List_1_t328750215 * get_touchesBegan_21() const { return ___touchesBegan_21; }
	inline List_1_t328750215 ** get_address_of_touchesBegan_21() { return &___touchesBegan_21; }
	inline void set_touchesBegan_21(List_1_t328750215 * value)
	{
		___touchesBegan_21 = value;
		Il2CppCodeGenWriteBarrier(&___touchesBegan_21, value);
	}

	inline static int32_t get_offset_of_touchesUpdated_22() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesUpdated_22)); }
	inline HashSet_1_t405338302 * get_touchesUpdated_22() const { return ___touchesUpdated_22; }
	inline HashSet_1_t405338302 ** get_address_of_touchesUpdated_22() { return &___touchesUpdated_22; }
	inline void set_touchesUpdated_22(HashSet_1_t405338302 * value)
	{
		___touchesUpdated_22 = value;
		Il2CppCodeGenWriteBarrier(&___touchesUpdated_22, value);
	}

	inline static int32_t get_offset_of_touchesEnded_23() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesEnded_23)); }
	inline HashSet_1_t405338302 * get_touchesEnded_23() const { return ___touchesEnded_23; }
	inline HashSet_1_t405338302 ** get_address_of_touchesEnded_23() { return &___touchesEnded_23; }
	inline void set_touchesEnded_23(HashSet_1_t405338302 * value)
	{
		___touchesEnded_23 = value;
		Il2CppCodeGenWriteBarrier(&___touchesEnded_23, value);
	}

	inline static int32_t get_offset_of_touchesCancelled_24() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchesCancelled_24)); }
	inline HashSet_1_t405338302 * get_touchesCancelled_24() const { return ___touchesCancelled_24; }
	inline HashSet_1_t405338302 ** get_address_of_touchesCancelled_24() { return &___touchesCancelled_24; }
	inline void set_touchesCancelled_24(HashSet_1_t405338302 * value)
	{
		___touchesCancelled_24 = value;
		Il2CppCodeGenWriteBarrier(&___touchesCancelled_24, value);
	}

	inline static int32_t get_offset_of_nextTouchId_28() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___nextTouchId_28)); }
	inline int32_t get_nextTouchId_28() const { return ___nextTouchId_28; }
	inline int32_t* get_address_of_nextTouchId_28() { return &___nextTouchId_28; }
	inline void set_nextTouchId_28(int32_t value)
	{
		___nextTouchId_28 = value;
	}

	inline static int32_t get_offset_of_touchLock_29() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981, ___touchLock_29)); }
	inline Il2CppObject * get_touchLock_29() const { return ___touchLock_29; }
	inline Il2CppObject ** get_address_of_touchLock_29() { return &___touchLock_29; }
	inline void set_touchLock_29(Il2CppObject * value)
	{
		___touchLock_29 = value;
		Il2CppCodeGenWriteBarrier(&___touchLock_29, value);
	}
};

struct TouchManagerInstance_t2629118981_StaticFields
{
public:
	// System.Boolean TouchScript.TouchManagerInstance::shuttingDown
	bool ___shuttingDown_8;
	// TouchScript.TouchManagerInstance TouchScript.TouchManagerInstance::instance
	TouchManagerInstance_t2629118981 * ___instance_9;
	// TouchScript.Utils.ObjectPool`1<TouchScript.TouchPoint> TouchScript.TouchManagerInstance::touchPointPool
	ObjectPool_1_t312917930 * ___touchPointPool_25;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.TouchManagerInstance::touchPointListPool
	ObjectPool_1_t3977006358 * ___touchPointListPool_26;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<System.Int32>> TouchScript.TouchManagerInstance::intListPool
	ObjectPool_1_t794287427 * ___intListPool_27;
	// System.Predicate`1<TouchScript.Layers.TouchLayer> TouchScript.TouchManagerInstance::<>f__am$cache0
	Predicate_1_t1078410093 * ___U3CU3Ef__amU24cache0_30;

public:
	inline static int32_t get_offset_of_shuttingDown_8() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___shuttingDown_8)); }
	inline bool get_shuttingDown_8() const { return ___shuttingDown_8; }
	inline bool* get_address_of_shuttingDown_8() { return &___shuttingDown_8; }
	inline void set_shuttingDown_8(bool value)
	{
		___shuttingDown_8 = value;
	}

	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___instance_9)); }
	inline TouchManagerInstance_t2629118981 * get_instance_9() const { return ___instance_9; }
	inline TouchManagerInstance_t2629118981 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(TouchManagerInstance_t2629118981 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier(&___instance_9, value);
	}

	inline static int32_t get_offset_of_touchPointPool_25() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___touchPointPool_25)); }
	inline ObjectPool_1_t312917930 * get_touchPointPool_25() const { return ___touchPointPool_25; }
	inline ObjectPool_1_t312917930 ** get_address_of_touchPointPool_25() { return &___touchPointPool_25; }
	inline void set_touchPointPool_25(ObjectPool_1_t312917930 * value)
	{
		___touchPointPool_25 = value;
		Il2CppCodeGenWriteBarrier(&___touchPointPool_25, value);
	}

	inline static int32_t get_offset_of_touchPointListPool_26() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___touchPointListPool_26)); }
	inline ObjectPool_1_t3977006358 * get_touchPointListPool_26() const { return ___touchPointListPool_26; }
	inline ObjectPool_1_t3977006358 ** get_address_of_touchPointListPool_26() { return &___touchPointListPool_26; }
	inline void set_touchPointListPool_26(ObjectPool_1_t3977006358 * value)
	{
		___touchPointListPool_26 = value;
		Il2CppCodeGenWriteBarrier(&___touchPointListPool_26, value);
	}

	inline static int32_t get_offset_of_intListPool_27() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___intListPool_27)); }
	inline ObjectPool_1_t794287427 * get_intListPool_27() const { return ___intListPool_27; }
	inline ObjectPool_1_t794287427 ** get_address_of_intListPool_27() { return &___intListPool_27; }
	inline void set_intListPool_27(ObjectPool_1_t794287427 * value)
	{
		___intListPool_27 = value;
		Il2CppCodeGenWriteBarrier(&___intListPool_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_30() { return static_cast<int32_t>(offsetof(TouchManagerInstance_t2629118981_StaticFields, ___U3CU3Ef__amU24cache0_30)); }
	inline Predicate_1_t1078410093 * get_U3CU3Ef__amU24cache0_30() const { return ___U3CU3Ef__amU24cache0_30; }
	inline Predicate_1_t1078410093 ** get_address_of_U3CU3Ef__amU24cache0_30() { return &___U3CU3Ef__amU24cache0_30; }
	inline void set_U3CU3Ef__amU24cache0_30(Predicate_1_t1078410093 * value)
	{
		___U3CU3Ef__amU24cache0_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_30, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
