#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.UI.UIGesture/TouchData
struct  TouchData_t3880599975 
{
public:
	// System.Boolean TouchScript.Gestures.UI.UIGesture/TouchData::OnTarget
	bool ___OnTarget_0;
	// UnityEngine.EventSystems.PointerEventData TouchScript.Gestures.UI.UIGesture/TouchData::Data
	PointerEventData_t1599784723 * ___Data_1;

public:
	inline static int32_t get_offset_of_OnTarget_0() { return static_cast<int32_t>(offsetof(TouchData_t3880599975, ___OnTarget_0)); }
	inline bool get_OnTarget_0() const { return ___OnTarget_0; }
	inline bool* get_address_of_OnTarget_0() { return &___OnTarget_0; }
	inline void set_OnTarget_0(bool value)
	{
		___OnTarget_0 = value;
	}

	inline static int32_t get_offset_of_Data_1() { return static_cast<int32_t>(offsetof(TouchData_t3880599975, ___Data_1)); }
	inline PointerEventData_t1599784723 * get_Data_1() const { return ___Data_1; }
	inline PointerEventData_t1599784723 ** get_address_of_Data_1() { return &___Data_1; }
	inline void set_Data_1(PointerEventData_t1599784723 * value)
	{
		___Data_1 = value;
		Il2CppCodeGenWriteBarrier(&___Data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TouchScript.Gestures.UI.UIGesture/TouchData
struct TouchData_t3880599975_marshaled_pinvoke
{
	int32_t ___OnTarget_0;
	PointerEventData_t1599784723 * ___Data_1;
};
// Native definition for COM marshalling of TouchScript.Gestures.UI.UIGesture/TouchData
struct TouchData_t3880599975_marshaled_com
{
	int32_t ___OnTarget_0;
	PointerEventData_t1599784723 * ___Data_1;
};
