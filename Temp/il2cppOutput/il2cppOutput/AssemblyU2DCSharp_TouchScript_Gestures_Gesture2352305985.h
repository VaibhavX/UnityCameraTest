#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_DebuggableMonoBehavi3136086048.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture_Ges2128095272.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture_Touc594133898.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.String
struct String_t;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t2091288363;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t4252506175;
// TouchScript.ITouchManager
struct ITouchManager_t2552034033;
// System.Collections.Generic.List`1<TouchScript.TouchPoint>
struct List_1_t328750215;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TouchScript.Gestures.Gesture
struct Gesture_t2352305985;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t1721427117;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t2635439978;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.TouchPoint>
struct ReadOnlyCollection_1_t1145414775;
// TouchScript.Utils.TimedSequence`1<TouchScript.TouchPoint>
struct TimedSequence_1_t2737250283;
// TouchScript.GestureManagerInstance
struct GestureManagerInstance_t505647059;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Gesture
struct  Gesture_t2352305985  : public DebuggableMonoBehaviour_t3136086048
{
public:
	// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs> TouchScript.Gestures.Gesture::stateChangedInvoker
	EventHandler_1_t2091288363 * ___stateChangedInvoker_4;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Gesture::cancelledInvoker
	EventHandler_1_t1880931879 * ___cancelledInvoker_5;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_6;
	// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::<Delegate>k__BackingField
	Il2CppObject * ___U3CDelegateU3Ek__BackingField_7;
	// TouchScript.ITouchManager TouchScript.Gestures.Gesture::<touchManager>k__BackingField
	Il2CppObject * ___U3CtouchManagerU3Ek__BackingField_8;
	// TouchScript.Gestures.Gesture/TouchesNumState TouchScript.Gestures.Gesture::<touchesNumState>k__BackingField
	int32_t ___U3CtouchesNumStateU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<TouchScript.TouchPoint> TouchScript.Gestures.Gesture::activeTouches
	List_1_t328750215 * ___activeTouches_10;
	// UnityEngine.Transform TouchScript.Gestures.Gesture::cachedTransform
	Transform_t3275118058 * ___cachedTransform_11;
	// System.Boolean TouchScript.Gestures.Gesture::advancedProps
	bool ___advancedProps_12;
	// System.Int32 TouchScript.Gestures.Gesture::minTouches
	int32_t ___minTouches_13;
	// System.Int32 TouchScript.Gestures.Gesture::maxTouches
	int32_t ___maxTouches_14;
	// System.Boolean TouchScript.Gestures.Gesture::combineTouches
	bool ___combineTouches_15;
	// System.Single TouchScript.Gestures.Gesture::combineTouchesInterval
	float ___combineTouchesInterval_16;
	// System.Boolean TouchScript.Gestures.Gesture::useSendMessage
	bool ___useSendMessage_17;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeMessages
	bool ___sendStateChangeMessages_18;
	// UnityEngine.GameObject TouchScript.Gestures.Gesture::sendMessageTarget
	GameObject_t1756533147 * ___sendMessageTarget_19;
	// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::requireGestureToFail
	Gesture_t2352305985 * ___requireGestureToFail_20;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Gestures.Gesture::friendlyGestures
	List_1_t1721427117 * ___friendlyGestures_21;
	// System.Int32 TouchScript.Gestures.Gesture::numTouches
	int32_t ___numTouches_22;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.Gesture::layer
	TouchLayer_t2635439978 * ___layer_23;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.TouchPoint> TouchScript.Gestures.Gesture::readonlyActiveTouches
	ReadOnlyCollection_1_t1145414775 * ___readonlyActiveTouches_24;
	// TouchScript.Utils.TimedSequence`1<TouchScript.TouchPoint> TouchScript.Gestures.Gesture::touchSequence
	TimedSequence_1_t2737250283 * ___touchSequence_25;
	// TouchScript.GestureManagerInstance TouchScript.Gestures.Gesture::gestureManagerInstance
	GestureManagerInstance_t505647059 * ___gestureManagerInstance_26;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::delayedStateChange
	int32_t ___delayedStateChange_27;
	// System.Boolean TouchScript.Gestures.Gesture::requiredGestureFailed
	bool ___requiredGestureFailed_28;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::state
	int32_t ___state_29;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedScreenPosition
	Vector2_t2243707579  ___cachedScreenPosition_30;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedPreviousScreenPosition
	Vector2_t2243707579  ___cachedPreviousScreenPosition_31;

public:
	inline static int32_t get_offset_of_stateChangedInvoker_4() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___stateChangedInvoker_4)); }
	inline EventHandler_1_t2091288363 * get_stateChangedInvoker_4() const { return ___stateChangedInvoker_4; }
	inline EventHandler_1_t2091288363 ** get_address_of_stateChangedInvoker_4() { return &___stateChangedInvoker_4; }
	inline void set_stateChangedInvoker_4(EventHandler_1_t2091288363 * value)
	{
		___stateChangedInvoker_4 = value;
		Il2CppCodeGenWriteBarrier(&___stateChangedInvoker_4, value);
	}

	inline static int32_t get_offset_of_cancelledInvoker_5() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___cancelledInvoker_5)); }
	inline EventHandler_1_t1880931879 * get_cancelledInvoker_5() const { return ___cancelledInvoker_5; }
	inline EventHandler_1_t1880931879 ** get_address_of_cancelledInvoker_5() { return &___cancelledInvoker_5; }
	inline void set_cancelledInvoker_5(EventHandler_1_t1880931879 * value)
	{
		___cancelledInvoker_5 = value;
		Il2CppCodeGenWriteBarrier(&___cancelledInvoker_5, value);
	}

	inline static int32_t get_offset_of_U3CPreviousStateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___U3CPreviousStateU3Ek__BackingField_6)); }
	inline int32_t get_U3CPreviousStateU3Ek__BackingField_6() const { return ___U3CPreviousStateU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CPreviousStateU3Ek__BackingField_6() { return &___U3CPreviousStateU3Ek__BackingField_6; }
	inline void set_U3CPreviousStateU3Ek__BackingField_6(int32_t value)
	{
		___U3CPreviousStateU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CDelegateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___U3CDelegateU3Ek__BackingField_7)); }
	inline Il2CppObject * get_U3CDelegateU3Ek__BackingField_7() const { return ___U3CDelegateU3Ek__BackingField_7; }
	inline Il2CppObject ** get_address_of_U3CDelegateU3Ek__BackingField_7() { return &___U3CDelegateU3Ek__BackingField_7; }
	inline void set_U3CDelegateU3Ek__BackingField_7(Il2CppObject * value)
	{
		___U3CDelegateU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDelegateU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CtouchManagerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___U3CtouchManagerU3Ek__BackingField_8)); }
	inline Il2CppObject * get_U3CtouchManagerU3Ek__BackingField_8() const { return ___U3CtouchManagerU3Ek__BackingField_8; }
	inline Il2CppObject ** get_address_of_U3CtouchManagerU3Ek__BackingField_8() { return &___U3CtouchManagerU3Ek__BackingField_8; }
	inline void set_U3CtouchManagerU3Ek__BackingField_8(Il2CppObject * value)
	{
		___U3CtouchManagerU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtouchManagerU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CtouchesNumStateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___U3CtouchesNumStateU3Ek__BackingField_9)); }
	inline int32_t get_U3CtouchesNumStateU3Ek__BackingField_9() const { return ___U3CtouchesNumStateU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtouchesNumStateU3Ek__BackingField_9() { return &___U3CtouchesNumStateU3Ek__BackingField_9; }
	inline void set_U3CtouchesNumStateU3Ek__BackingField_9(int32_t value)
	{
		___U3CtouchesNumStateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_activeTouches_10() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___activeTouches_10)); }
	inline List_1_t328750215 * get_activeTouches_10() const { return ___activeTouches_10; }
	inline List_1_t328750215 ** get_address_of_activeTouches_10() { return &___activeTouches_10; }
	inline void set_activeTouches_10(List_1_t328750215 * value)
	{
		___activeTouches_10 = value;
		Il2CppCodeGenWriteBarrier(&___activeTouches_10, value);
	}

	inline static int32_t get_offset_of_cachedTransform_11() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___cachedTransform_11)); }
	inline Transform_t3275118058 * get_cachedTransform_11() const { return ___cachedTransform_11; }
	inline Transform_t3275118058 ** get_address_of_cachedTransform_11() { return &___cachedTransform_11; }
	inline void set_cachedTransform_11(Transform_t3275118058 * value)
	{
		___cachedTransform_11 = value;
		Il2CppCodeGenWriteBarrier(&___cachedTransform_11, value);
	}

	inline static int32_t get_offset_of_advancedProps_12() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___advancedProps_12)); }
	inline bool get_advancedProps_12() const { return ___advancedProps_12; }
	inline bool* get_address_of_advancedProps_12() { return &___advancedProps_12; }
	inline void set_advancedProps_12(bool value)
	{
		___advancedProps_12 = value;
	}

	inline static int32_t get_offset_of_minTouches_13() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___minTouches_13)); }
	inline int32_t get_minTouches_13() const { return ___minTouches_13; }
	inline int32_t* get_address_of_minTouches_13() { return &___minTouches_13; }
	inline void set_minTouches_13(int32_t value)
	{
		___minTouches_13 = value;
	}

	inline static int32_t get_offset_of_maxTouches_14() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___maxTouches_14)); }
	inline int32_t get_maxTouches_14() const { return ___maxTouches_14; }
	inline int32_t* get_address_of_maxTouches_14() { return &___maxTouches_14; }
	inline void set_maxTouches_14(int32_t value)
	{
		___maxTouches_14 = value;
	}

	inline static int32_t get_offset_of_combineTouches_15() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___combineTouches_15)); }
	inline bool get_combineTouches_15() const { return ___combineTouches_15; }
	inline bool* get_address_of_combineTouches_15() { return &___combineTouches_15; }
	inline void set_combineTouches_15(bool value)
	{
		___combineTouches_15 = value;
	}

	inline static int32_t get_offset_of_combineTouchesInterval_16() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___combineTouchesInterval_16)); }
	inline float get_combineTouchesInterval_16() const { return ___combineTouchesInterval_16; }
	inline float* get_address_of_combineTouchesInterval_16() { return &___combineTouchesInterval_16; }
	inline void set_combineTouchesInterval_16(float value)
	{
		___combineTouchesInterval_16 = value;
	}

	inline static int32_t get_offset_of_useSendMessage_17() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___useSendMessage_17)); }
	inline bool get_useSendMessage_17() const { return ___useSendMessage_17; }
	inline bool* get_address_of_useSendMessage_17() { return &___useSendMessage_17; }
	inline void set_useSendMessage_17(bool value)
	{
		___useSendMessage_17 = value;
	}

	inline static int32_t get_offset_of_sendStateChangeMessages_18() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___sendStateChangeMessages_18)); }
	inline bool get_sendStateChangeMessages_18() const { return ___sendStateChangeMessages_18; }
	inline bool* get_address_of_sendStateChangeMessages_18() { return &___sendStateChangeMessages_18; }
	inline void set_sendStateChangeMessages_18(bool value)
	{
		___sendStateChangeMessages_18 = value;
	}

	inline static int32_t get_offset_of_sendMessageTarget_19() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___sendMessageTarget_19)); }
	inline GameObject_t1756533147 * get_sendMessageTarget_19() const { return ___sendMessageTarget_19; }
	inline GameObject_t1756533147 ** get_address_of_sendMessageTarget_19() { return &___sendMessageTarget_19; }
	inline void set_sendMessageTarget_19(GameObject_t1756533147 * value)
	{
		___sendMessageTarget_19 = value;
		Il2CppCodeGenWriteBarrier(&___sendMessageTarget_19, value);
	}

	inline static int32_t get_offset_of_requireGestureToFail_20() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___requireGestureToFail_20)); }
	inline Gesture_t2352305985 * get_requireGestureToFail_20() const { return ___requireGestureToFail_20; }
	inline Gesture_t2352305985 ** get_address_of_requireGestureToFail_20() { return &___requireGestureToFail_20; }
	inline void set_requireGestureToFail_20(Gesture_t2352305985 * value)
	{
		___requireGestureToFail_20 = value;
		Il2CppCodeGenWriteBarrier(&___requireGestureToFail_20, value);
	}

	inline static int32_t get_offset_of_friendlyGestures_21() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___friendlyGestures_21)); }
	inline List_1_t1721427117 * get_friendlyGestures_21() const { return ___friendlyGestures_21; }
	inline List_1_t1721427117 ** get_address_of_friendlyGestures_21() { return &___friendlyGestures_21; }
	inline void set_friendlyGestures_21(List_1_t1721427117 * value)
	{
		___friendlyGestures_21 = value;
		Il2CppCodeGenWriteBarrier(&___friendlyGestures_21, value);
	}

	inline static int32_t get_offset_of_numTouches_22() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___numTouches_22)); }
	inline int32_t get_numTouches_22() const { return ___numTouches_22; }
	inline int32_t* get_address_of_numTouches_22() { return &___numTouches_22; }
	inline void set_numTouches_22(int32_t value)
	{
		___numTouches_22 = value;
	}

	inline static int32_t get_offset_of_layer_23() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___layer_23)); }
	inline TouchLayer_t2635439978 * get_layer_23() const { return ___layer_23; }
	inline TouchLayer_t2635439978 ** get_address_of_layer_23() { return &___layer_23; }
	inline void set_layer_23(TouchLayer_t2635439978 * value)
	{
		___layer_23 = value;
		Il2CppCodeGenWriteBarrier(&___layer_23, value);
	}

	inline static int32_t get_offset_of_readonlyActiveTouches_24() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___readonlyActiveTouches_24)); }
	inline ReadOnlyCollection_1_t1145414775 * get_readonlyActiveTouches_24() const { return ___readonlyActiveTouches_24; }
	inline ReadOnlyCollection_1_t1145414775 ** get_address_of_readonlyActiveTouches_24() { return &___readonlyActiveTouches_24; }
	inline void set_readonlyActiveTouches_24(ReadOnlyCollection_1_t1145414775 * value)
	{
		___readonlyActiveTouches_24 = value;
		Il2CppCodeGenWriteBarrier(&___readonlyActiveTouches_24, value);
	}

	inline static int32_t get_offset_of_touchSequence_25() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___touchSequence_25)); }
	inline TimedSequence_1_t2737250283 * get_touchSequence_25() const { return ___touchSequence_25; }
	inline TimedSequence_1_t2737250283 ** get_address_of_touchSequence_25() { return &___touchSequence_25; }
	inline void set_touchSequence_25(TimedSequence_1_t2737250283 * value)
	{
		___touchSequence_25 = value;
		Il2CppCodeGenWriteBarrier(&___touchSequence_25, value);
	}

	inline static int32_t get_offset_of_gestureManagerInstance_26() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___gestureManagerInstance_26)); }
	inline GestureManagerInstance_t505647059 * get_gestureManagerInstance_26() const { return ___gestureManagerInstance_26; }
	inline GestureManagerInstance_t505647059 ** get_address_of_gestureManagerInstance_26() { return &___gestureManagerInstance_26; }
	inline void set_gestureManagerInstance_26(GestureManagerInstance_t505647059 * value)
	{
		___gestureManagerInstance_26 = value;
		Il2CppCodeGenWriteBarrier(&___gestureManagerInstance_26, value);
	}

	inline static int32_t get_offset_of_delayedStateChange_27() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___delayedStateChange_27)); }
	inline int32_t get_delayedStateChange_27() const { return ___delayedStateChange_27; }
	inline int32_t* get_address_of_delayedStateChange_27() { return &___delayedStateChange_27; }
	inline void set_delayedStateChange_27(int32_t value)
	{
		___delayedStateChange_27 = value;
	}

	inline static int32_t get_offset_of_requiredGestureFailed_28() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___requiredGestureFailed_28)); }
	inline bool get_requiredGestureFailed_28() const { return ___requiredGestureFailed_28; }
	inline bool* get_address_of_requiredGestureFailed_28() { return &___requiredGestureFailed_28; }
	inline void set_requiredGestureFailed_28(bool value)
	{
		___requiredGestureFailed_28 = value;
	}

	inline static int32_t get_offset_of_state_29() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___state_29)); }
	inline int32_t get_state_29() const { return ___state_29; }
	inline int32_t* get_address_of_state_29() { return &___state_29; }
	inline void set_state_29(int32_t value)
	{
		___state_29 = value;
	}

	inline static int32_t get_offset_of_cachedScreenPosition_30() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___cachedScreenPosition_30)); }
	inline Vector2_t2243707579  get_cachedScreenPosition_30() const { return ___cachedScreenPosition_30; }
	inline Vector2_t2243707579 * get_address_of_cachedScreenPosition_30() { return &___cachedScreenPosition_30; }
	inline void set_cachedScreenPosition_30(Vector2_t2243707579  value)
	{
		___cachedScreenPosition_30 = value;
	}

	inline static int32_t get_offset_of_cachedPreviousScreenPosition_31() { return static_cast<int32_t>(offsetof(Gesture_t2352305985, ___cachedPreviousScreenPosition_31)); }
	inline Vector2_t2243707579  get_cachedPreviousScreenPosition_31() const { return ___cachedPreviousScreenPosition_31; }
	inline Vector2_t2243707579 * get_address_of_cachedPreviousScreenPosition_31() { return &___cachedPreviousScreenPosition_31; }
	inline void set_cachedPreviousScreenPosition_31(Vector2_t2243707579  value)
	{
		___cachedPreviousScreenPosition_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
