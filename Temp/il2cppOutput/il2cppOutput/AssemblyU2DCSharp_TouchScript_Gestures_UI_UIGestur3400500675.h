#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture2352305985.h"

// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Gestures.UI.UIGesture/TouchData>
struct Dictionary_2_t2888425610;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.UI.UIGesture
struct  UIGesture_t3400500675  : public Gesture_t2352305985
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Gestures.UI.UIGesture/TouchData> TouchScript.Gestures.UI.UIGesture::pointerData
	Dictionary_2_t2888425610 * ___pointerData_32;

public:
	inline static int32_t get_offset_of_pointerData_32() { return static_cast<int32_t>(offsetof(UIGesture_t3400500675, ___pointerData_32)); }
	inline Dictionary_2_t2888425610 * get_pointerData_32() const { return ___pointerData_32; }
	inline Dictionary_2_t2888425610 ** get_address_of_pointerData_32() { return &___pointerData_32; }
	inline void set_pointerData_32(Dictionary_2_t2888425610 * value)
	{
		___pointerData_32 = value;
		Il2CppCodeGenWriteBarrier(&___pointerData_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
