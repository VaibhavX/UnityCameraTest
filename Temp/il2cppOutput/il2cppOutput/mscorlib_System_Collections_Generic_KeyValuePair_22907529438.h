#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// TUIOsharp.Entities.TuioBlob
struct TuioBlob_t2046943414;
// TouchScript.TouchPoint
struct TouchPoint_t959629083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<TUIOsharp.Entities.TuioBlob,TouchScript.TouchPoint>
struct  KeyValuePair_2_t2907529438 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TuioBlob_t2046943414 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TouchPoint_t959629083 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2907529438, ___key_0)); }
	inline TuioBlob_t2046943414 * get_key_0() const { return ___key_0; }
	inline TuioBlob_t2046943414 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TuioBlob_t2046943414 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2907529438, ___value_1)); }
	inline TouchPoint_t959629083 * get_value_1() const { return ___value_1; }
	inline TouchPoint_t959629083 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TouchPoint_t959629083 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
