#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect1406276862.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t607610358;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.TouchScriptInputModule
struct  TouchScriptInputModule_t3561165032  : public BaseInputModule_t1295781545
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> TouchScript.Behaviors.TouchScriptInputModule::pointerEvents
	Dictionary_2_t607610358 * ___pointerEvents_8;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::horizontalAxis
	String_t* ___horizontalAxis_9;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::verticalAxis
	String_t* ___verticalAxis_10;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::submitButton
	String_t* ___submitButton_11;
	// System.String TouchScript.Behaviors.TouchScriptInputModule::cancelButton
	String_t* ___cancelButton_12;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::inputActionsPerSecond
	float ___inputActionsPerSecond_13;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::repeatDelay
	float ___repeatDelay_14;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::nextActionTime
	float ___nextActionTime_15;
	// UnityEngine.EventSystems.MoveDirection TouchScript.Behaviors.TouchScriptInputModule::lastMoveDirection
	int32_t ___lastMoveDirection_16;
	// System.Single TouchScript.Behaviors.TouchScriptInputModule::lastMoveStartTime
	float ___lastMoveStartTime_17;

public:
	inline static int32_t get_offset_of_pointerEvents_8() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___pointerEvents_8)); }
	inline Dictionary_2_t607610358 * get_pointerEvents_8() const { return ___pointerEvents_8; }
	inline Dictionary_2_t607610358 ** get_address_of_pointerEvents_8() { return &___pointerEvents_8; }
	inline void set_pointerEvents_8(Dictionary_2_t607610358 * value)
	{
		___pointerEvents_8 = value;
		Il2CppCodeGenWriteBarrier(&___pointerEvents_8, value);
	}

	inline static int32_t get_offset_of_horizontalAxis_9() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___horizontalAxis_9)); }
	inline String_t* get_horizontalAxis_9() const { return ___horizontalAxis_9; }
	inline String_t** get_address_of_horizontalAxis_9() { return &___horizontalAxis_9; }
	inline void set_horizontalAxis_9(String_t* value)
	{
		___horizontalAxis_9 = value;
		Il2CppCodeGenWriteBarrier(&___horizontalAxis_9, value);
	}

	inline static int32_t get_offset_of_verticalAxis_10() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___verticalAxis_10)); }
	inline String_t* get_verticalAxis_10() const { return ___verticalAxis_10; }
	inline String_t** get_address_of_verticalAxis_10() { return &___verticalAxis_10; }
	inline void set_verticalAxis_10(String_t* value)
	{
		___verticalAxis_10 = value;
		Il2CppCodeGenWriteBarrier(&___verticalAxis_10, value);
	}

	inline static int32_t get_offset_of_submitButton_11() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___submitButton_11)); }
	inline String_t* get_submitButton_11() const { return ___submitButton_11; }
	inline String_t** get_address_of_submitButton_11() { return &___submitButton_11; }
	inline void set_submitButton_11(String_t* value)
	{
		___submitButton_11 = value;
		Il2CppCodeGenWriteBarrier(&___submitButton_11, value);
	}

	inline static int32_t get_offset_of_cancelButton_12() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___cancelButton_12)); }
	inline String_t* get_cancelButton_12() const { return ___cancelButton_12; }
	inline String_t** get_address_of_cancelButton_12() { return &___cancelButton_12; }
	inline void set_cancelButton_12(String_t* value)
	{
		___cancelButton_12 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButton_12, value);
	}

	inline static int32_t get_offset_of_inputActionsPerSecond_13() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___inputActionsPerSecond_13)); }
	inline float get_inputActionsPerSecond_13() const { return ___inputActionsPerSecond_13; }
	inline float* get_address_of_inputActionsPerSecond_13() { return &___inputActionsPerSecond_13; }
	inline void set_inputActionsPerSecond_13(float value)
	{
		___inputActionsPerSecond_13 = value;
	}

	inline static int32_t get_offset_of_repeatDelay_14() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___repeatDelay_14)); }
	inline float get_repeatDelay_14() const { return ___repeatDelay_14; }
	inline float* get_address_of_repeatDelay_14() { return &___repeatDelay_14; }
	inline void set_repeatDelay_14(float value)
	{
		___repeatDelay_14 = value;
	}

	inline static int32_t get_offset_of_nextActionTime_15() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___nextActionTime_15)); }
	inline float get_nextActionTime_15() const { return ___nextActionTime_15; }
	inline float* get_address_of_nextActionTime_15() { return &___nextActionTime_15; }
	inline void set_nextActionTime_15(float value)
	{
		___nextActionTime_15 = value;
	}

	inline static int32_t get_offset_of_lastMoveDirection_16() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___lastMoveDirection_16)); }
	inline int32_t get_lastMoveDirection_16() const { return ___lastMoveDirection_16; }
	inline int32_t* get_address_of_lastMoveDirection_16() { return &___lastMoveDirection_16; }
	inline void set_lastMoveDirection_16(int32_t value)
	{
		___lastMoveDirection_16 = value;
	}

	inline static int32_t get_offset_of_lastMoveStartTime_17() { return static_cast<int32_t>(offsetof(TouchScriptInputModule_t3561165032, ___lastMoveStartTime_17)); }
	inline float get_lastMoveStartTime_17() const { return ___lastMoveStartTime_17; }
	inline float* get_address_of_lastMoveStartTime_17() { return &___lastMoveStartTime_17; }
	inline void set_lastMoveStartTime_17(float value)
	{
		___lastMoveStartTime_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
