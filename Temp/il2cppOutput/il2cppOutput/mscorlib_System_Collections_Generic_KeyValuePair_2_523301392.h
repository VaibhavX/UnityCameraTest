#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// TouchScript.Layers.ProjectionParams
struct ProjectionParams_t2712959773;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,TouchScript.Layers.ProjectionParams>
struct  KeyValuePair_2_t523301392 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Canvas_t209405766 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProjectionParams_t2712959773 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t523301392, ___key_0)); }
	inline Canvas_t209405766 * get_key_0() const { return ___key_0; }
	inline Canvas_t209405766 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Canvas_t209405766 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t523301392, ___value_1)); }
	inline ProjectionParams_t2712959773 * get_value_1() const { return ___value_1; }
	inline ProjectionParams_t2712959773 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProjectionParams_t2712959773 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
