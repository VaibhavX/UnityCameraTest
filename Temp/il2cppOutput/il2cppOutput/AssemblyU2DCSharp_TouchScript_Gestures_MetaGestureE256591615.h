#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// TouchScript.TouchPoint
struct TouchPoint_t959629083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.MetaGestureEventArgs
struct  MetaGestureEventArgs_t256591615  : public EventArgs_t3289624707
{
public:
	// TouchScript.TouchPoint TouchScript.Gestures.MetaGestureEventArgs::<Touch>k__BackingField
	TouchPoint_t959629083 * ___U3CTouchU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTouchU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MetaGestureEventArgs_t256591615, ___U3CTouchU3Ek__BackingField_1)); }
	inline TouchPoint_t959629083 * get_U3CTouchU3Ek__BackingField_1() const { return ___U3CTouchU3Ek__BackingField_1; }
	inline TouchPoint_t959629083 ** get_address_of_U3CTouchU3Ek__BackingField_1() { return &___U3CTouchU3Ek__BackingField_1; }
	inline void set_U3CTouchU3Ek__BackingField_1(TouchPoint_t959629083 * value)
	{
		___U3CTouchU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTouchU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
