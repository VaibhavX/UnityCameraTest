#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.TuioObjectMapping
struct  TuioObjectMapping_t4080927128  : public Il2CppObject
{
public:
	// System.Int32 TouchScript.InputSources.TuioObjectMapping::Id
	int32_t ___Id_0;
	// System.String TouchScript.InputSources.TuioObjectMapping::Tag
	String_t* ___Tag_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(TuioObjectMapping_t4080927128, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Tag_1() { return static_cast<int32_t>(offsetof(TuioObjectMapping_t4080927128, ___Tag_1)); }
	inline String_t* get_Tag_1() const { return ___Tag_1; }
	inline String_t** get_address_of_Tag_1() { return &___Tag_1; }
	inline void set_Tag_1(String_t* value)
	{
		___Tag_1 = value;
		Il2CppCodeGenWriteBarrier(&___Tag_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
