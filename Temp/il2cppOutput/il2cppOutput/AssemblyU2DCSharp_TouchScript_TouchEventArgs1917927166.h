#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Collections.Generic.IList`1<TouchScript.TouchPoint>
struct IList_1_t1500569684;
// TouchScript.TouchEventArgs
struct TouchEventArgs_t1917927166;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchEventArgs
struct  TouchEventArgs_t1917927166  : public EventArgs_t3289624707
{
public:
	// System.Collections.Generic.IList`1<TouchScript.TouchPoint> TouchScript.TouchEventArgs::<Touches>k__BackingField
	Il2CppObject* ___U3CTouchesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTouchesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TouchEventArgs_t1917927166, ___U3CTouchesU3Ek__BackingField_1)); }
	inline Il2CppObject* get_U3CTouchesU3Ek__BackingField_1() const { return ___U3CTouchesU3Ek__BackingField_1; }
	inline Il2CppObject** get_address_of_U3CTouchesU3Ek__BackingField_1() { return &___U3CTouchesU3Ek__BackingField_1; }
	inline void set_U3CTouchesU3Ek__BackingField_1(Il2CppObject* value)
	{
		___U3CTouchesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTouchesU3Ek__BackingField_1, value);
	}
};

struct TouchEventArgs_t1917927166_StaticFields
{
public:
	// TouchScript.TouchEventArgs TouchScript.TouchEventArgs::instance
	TouchEventArgs_t1917927166 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(TouchEventArgs_t1917927166_StaticFields, ___instance_2)); }
	inline TouchEventArgs_t1917927166 * get_instance_2() const { return ___instance_2; }
	inline TouchEventArgs_t1917927166 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(TouchEventArgs_t1917927166 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
