#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// OSCsharp.Data.OscTimeTag
struct OscTimeTag_t625345318;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Data.OscTimeTag
struct  OscTimeTag_t625345318  : public Il2CppObject
{
public:
	// System.DateTime OSCsharp.Data.OscTimeTag::timeStamp
	DateTime_t693205669  ___timeStamp_2;

public:
	inline static int32_t get_offset_of_timeStamp_2() { return static_cast<int32_t>(offsetof(OscTimeTag_t625345318, ___timeStamp_2)); }
	inline DateTime_t693205669  get_timeStamp_2() const { return ___timeStamp_2; }
	inline DateTime_t693205669 * get_address_of_timeStamp_2() { return &___timeStamp_2; }
	inline void set_timeStamp_2(DateTime_t693205669  value)
	{
		___timeStamp_2 = value;
	}
};

struct OscTimeTag_t625345318_StaticFields
{
public:
	// System.DateTime OSCsharp.Data.OscTimeTag::Epoch
	DateTime_t693205669  ___Epoch_0;
	// OSCsharp.Data.OscTimeTag OSCsharp.Data.OscTimeTag::MinValue
	OscTimeTag_t625345318 * ___MinValue_1;

public:
	inline static int32_t get_offset_of_Epoch_0() { return static_cast<int32_t>(offsetof(OscTimeTag_t625345318_StaticFields, ___Epoch_0)); }
	inline DateTime_t693205669  get_Epoch_0() const { return ___Epoch_0; }
	inline DateTime_t693205669 * get_address_of_Epoch_0() { return &___Epoch_0; }
	inline void set_Epoch_0(DateTime_t693205669  value)
	{
		___Epoch_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(OscTimeTag_t625345318_StaticFields, ___MinValue_1)); }
	inline OscTimeTag_t625345318 * get_MinValue_1() const { return ___MinValue_1; }
	inline OscTimeTag_t625345318 ** get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(OscTimeTag_t625345318 * value)
	{
		___MinValue_1 = value;
		Il2CppCodeGenWriteBarrier(&___MinValue_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
