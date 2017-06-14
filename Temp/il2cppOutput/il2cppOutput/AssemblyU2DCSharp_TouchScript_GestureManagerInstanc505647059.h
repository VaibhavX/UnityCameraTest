#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.IGestureDelegate
struct IGestureDelegate_t4252506175;
// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t505647059;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t1721427117;
// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.TouchPoint>>
struct Action_2_t2136039064;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t3076917440;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct Dictionary_2_t70405120;
// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct Dictionary_2_t673677165;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>>
struct ObjectPool_1_t1074715964;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>>
struct ObjectPool_1_t3977006358;
// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Transform>>
struct ObjectPool_1_t1997528037;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.GestureManagerInstance
struct  GestureManagerInstance_t505647059  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.IGestureDelegate TouchScript.GestureManagerInstance::<GlobalGestureDelegate>k__BackingField
	Il2CppObject * ___U3CGlobalGestureDelegateU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::gesturesToReset
	List_1_t1721427117 * ___gesturesToReset_5;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::_updateBegan
	Action_2_t2136039064 * ____updateBegan_6;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::_updateMoved
	Action_2_t2136039064 * ____updateMoved_7;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::_updateEnded
	Action_2_t2136039064 * ____updateEnded_8;
	// System.Action`2<TouchScript.Gestures.Gesture,System.Collections.Generic.IList`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::_updateCancelled
	Action_2_t2136039064 * ____updateCancelled_9;
	// System.Action`1<UnityEngine.Transform> TouchScript.GestureManagerInstance::_processTarget
	Action_1_t3076917440 * ____processTarget_10;
	// System.Action`1<UnityEngine.Transform> TouchScript.GestureManagerInstance::_processTargetBegan
	Action_1_t3076917440 * ____processTargetBegan_11;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::targetTouches
	Dictionary_2_t70405120 * ___targetTouches_12;
	// System.Collections.Generic.Dictionary`2<TouchScript.Gestures.Gesture,System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::gestureTouches
	Dictionary_2_t673677165 * ___gestureTouches_13;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.GestureManagerInstance::activeGestures
	List_1_t1721427117 * ___activeGestures_14;

public:
	inline static int32_t get_offset_of_U3CGlobalGestureDelegateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ___U3CGlobalGestureDelegateU3Ek__BackingField_2)); }
	inline Il2CppObject * get_U3CGlobalGestureDelegateU3Ek__BackingField_2() const { return ___U3CGlobalGestureDelegateU3Ek__BackingField_2; }
	inline Il2CppObject ** get_address_of_U3CGlobalGestureDelegateU3Ek__BackingField_2() { return &___U3CGlobalGestureDelegateU3Ek__BackingField_2; }
	inline void set_U3CGlobalGestureDelegateU3Ek__BackingField_2(Il2CppObject * value)
	{
		___U3CGlobalGestureDelegateU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGlobalGestureDelegateU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_gesturesToReset_5() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ___gesturesToReset_5)); }
	inline List_1_t1721427117 * get_gesturesToReset_5() const { return ___gesturesToReset_5; }
	inline List_1_t1721427117 ** get_address_of_gesturesToReset_5() { return &___gesturesToReset_5; }
	inline void set_gesturesToReset_5(List_1_t1721427117 * value)
	{
		___gesturesToReset_5 = value;
		Il2CppCodeGenWriteBarrier(&___gesturesToReset_5, value);
	}

	inline static int32_t get_offset_of__updateBegan_6() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____updateBegan_6)); }
	inline Action_2_t2136039064 * get__updateBegan_6() const { return ____updateBegan_6; }
	inline Action_2_t2136039064 ** get_address_of__updateBegan_6() { return &____updateBegan_6; }
	inline void set__updateBegan_6(Action_2_t2136039064 * value)
	{
		____updateBegan_6 = value;
		Il2CppCodeGenWriteBarrier(&____updateBegan_6, value);
	}

	inline static int32_t get_offset_of__updateMoved_7() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____updateMoved_7)); }
	inline Action_2_t2136039064 * get__updateMoved_7() const { return ____updateMoved_7; }
	inline Action_2_t2136039064 ** get_address_of__updateMoved_7() { return &____updateMoved_7; }
	inline void set__updateMoved_7(Action_2_t2136039064 * value)
	{
		____updateMoved_7 = value;
		Il2CppCodeGenWriteBarrier(&____updateMoved_7, value);
	}

	inline static int32_t get_offset_of__updateEnded_8() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____updateEnded_8)); }
	inline Action_2_t2136039064 * get__updateEnded_8() const { return ____updateEnded_8; }
	inline Action_2_t2136039064 ** get_address_of__updateEnded_8() { return &____updateEnded_8; }
	inline void set__updateEnded_8(Action_2_t2136039064 * value)
	{
		____updateEnded_8 = value;
		Il2CppCodeGenWriteBarrier(&____updateEnded_8, value);
	}

	inline static int32_t get_offset_of__updateCancelled_9() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____updateCancelled_9)); }
	inline Action_2_t2136039064 * get__updateCancelled_9() const { return ____updateCancelled_9; }
	inline Action_2_t2136039064 ** get_address_of__updateCancelled_9() { return &____updateCancelled_9; }
	inline void set__updateCancelled_9(Action_2_t2136039064 * value)
	{
		____updateCancelled_9 = value;
		Il2CppCodeGenWriteBarrier(&____updateCancelled_9, value);
	}

	inline static int32_t get_offset_of__processTarget_10() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____processTarget_10)); }
	inline Action_1_t3076917440 * get__processTarget_10() const { return ____processTarget_10; }
	inline Action_1_t3076917440 ** get_address_of__processTarget_10() { return &____processTarget_10; }
	inline void set__processTarget_10(Action_1_t3076917440 * value)
	{
		____processTarget_10 = value;
		Il2CppCodeGenWriteBarrier(&____processTarget_10, value);
	}

	inline static int32_t get_offset_of__processTargetBegan_11() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ____processTargetBegan_11)); }
	inline Action_1_t3076917440 * get__processTargetBegan_11() const { return ____processTargetBegan_11; }
	inline Action_1_t3076917440 ** get_address_of__processTargetBegan_11() { return &____processTargetBegan_11; }
	inline void set__processTargetBegan_11(Action_1_t3076917440 * value)
	{
		____processTargetBegan_11 = value;
		Il2CppCodeGenWriteBarrier(&____processTargetBegan_11, value);
	}

	inline static int32_t get_offset_of_targetTouches_12() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ___targetTouches_12)); }
	inline Dictionary_2_t70405120 * get_targetTouches_12() const { return ___targetTouches_12; }
	inline Dictionary_2_t70405120 ** get_address_of_targetTouches_12() { return &___targetTouches_12; }
	inline void set_targetTouches_12(Dictionary_2_t70405120 * value)
	{
		___targetTouches_12 = value;
		Il2CppCodeGenWriteBarrier(&___targetTouches_12, value);
	}

	inline static int32_t get_offset_of_gestureTouches_13() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ___gestureTouches_13)); }
	inline Dictionary_2_t673677165 * get_gestureTouches_13() const { return ___gestureTouches_13; }
	inline Dictionary_2_t673677165 ** get_address_of_gestureTouches_13() { return &___gestureTouches_13; }
	inline void set_gestureTouches_13(Dictionary_2_t673677165 * value)
	{
		___gestureTouches_13 = value;
		Il2CppCodeGenWriteBarrier(&___gestureTouches_13, value);
	}

	inline static int32_t get_offset_of_activeGestures_14() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059, ___activeGestures_14)); }
	inline List_1_t1721427117 * get_activeGestures_14() const { return ___activeGestures_14; }
	inline List_1_t1721427117 ** get_address_of_activeGestures_14() { return &___activeGestures_14; }
	inline void set_activeGestures_14(List_1_t1721427117 * value)
	{
		___activeGestures_14 = value;
		Il2CppCodeGenWriteBarrier(&___activeGestures_14, value);
	}
};

struct GestureManagerInstance_t505647059_StaticFields
{
public:
	// TouchScript.GestureManagerInstance TouchScript.GestureManagerInstance::instance
	GestureManagerInstance_t505647059 * ___instance_3;
	// System.Boolean TouchScript.GestureManagerInstance::shuttingDown
	bool ___shuttingDown_4;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>> TouchScript.GestureManagerInstance::gestureListPool
	ObjectPool_1_t1074715964 * ___gestureListPool_15;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<TouchScript.TouchPoint>> TouchScript.GestureManagerInstance::touchListPool
	ObjectPool_1_t3977006358 * ___touchListPool_16;
	// TouchScript.Utils.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Transform>> TouchScript.GestureManagerInstance::transformListPool
	ObjectPool_1_t1997528037 * ___transformListPool_17;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059_StaticFields, ___instance_3)); }
	inline GestureManagerInstance_t505647059 * get_instance_3() const { return ___instance_3; }
	inline GestureManagerInstance_t505647059 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GestureManagerInstance_t505647059 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_shuttingDown_4() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059_StaticFields, ___shuttingDown_4)); }
	inline bool get_shuttingDown_4() const { return ___shuttingDown_4; }
	inline bool* get_address_of_shuttingDown_4() { return &___shuttingDown_4; }
	inline void set_shuttingDown_4(bool value)
	{
		___shuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_gestureListPool_15() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059_StaticFields, ___gestureListPool_15)); }
	inline ObjectPool_1_t1074715964 * get_gestureListPool_15() const { return ___gestureListPool_15; }
	inline ObjectPool_1_t1074715964 ** get_address_of_gestureListPool_15() { return &___gestureListPool_15; }
	inline void set_gestureListPool_15(ObjectPool_1_t1074715964 * value)
	{
		___gestureListPool_15 = value;
		Il2CppCodeGenWriteBarrier(&___gestureListPool_15, value);
	}

	inline static int32_t get_offset_of_touchListPool_16() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059_StaticFields, ___touchListPool_16)); }
	inline ObjectPool_1_t3977006358 * get_touchListPool_16() const { return ___touchListPool_16; }
	inline ObjectPool_1_t3977006358 ** get_address_of_touchListPool_16() { return &___touchListPool_16; }
	inline void set_touchListPool_16(ObjectPool_1_t3977006358 * value)
	{
		___touchListPool_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchListPool_16, value);
	}

	inline static int32_t get_offset_of_transformListPool_17() { return static_cast<int32_t>(offsetof(GestureManagerInstance_t505647059_StaticFields, ___transformListPool_17)); }
	inline ObjectPool_1_t1997528037 * get_transformListPool_17() const { return ___transformListPool_17; }
	inline ObjectPool_1_t1997528037 ** get_address_of_transformListPool_17() { return &___transformListPool_17; }
	inline void set_transformListPool_17(ObjectPool_1_t1997528037 * value)
	{
		___transformListPool_17 = value;
		Il2CppCodeGenWriteBarrier(&___transformListPool_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
