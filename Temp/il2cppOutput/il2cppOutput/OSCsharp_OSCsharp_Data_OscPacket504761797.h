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
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Data.OscPacket
struct  OscPacket_t504761797  : public Il2CppObject
{
public:
	// System.String OSCsharp.Data.OscPacket::address
	String_t* ___address_1;
	// System.Collections.Generic.List`1<System.Object> OSCsharp.Data.OscPacket::data
	List_1_t2058570427 * ___data_2;

public:
	inline static int32_t get_offset_of_address_1() { return static_cast<int32_t>(offsetof(OscPacket_t504761797, ___address_1)); }
	inline String_t* get_address_1() const { return ___address_1; }
	inline String_t** get_address_of_address_1() { return &___address_1; }
	inline void set_address_1(String_t* value)
	{
		___address_1 = value;
		Il2CppCodeGenWriteBarrier(&___address_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(OscPacket_t504761797, ___data_2)); }
	inline List_1_t2058570427 * get_data_2() const { return ___data_2; }
	inline List_1_t2058570427 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(List_1_t2058570427 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}
};

struct OscPacket_t504761797_StaticFields
{
public:
	// System.Boolean OSCsharp.Data.OscPacket::littleEndianByteOrder
	bool ___littleEndianByteOrder_0;

public:
	inline static int32_t get_offset_of_littleEndianByteOrder_0() { return static_cast<int32_t>(offsetof(OscPacket_t504761797_StaticFields, ___littleEndianByteOrder_0)); }
	inline bool get_littleEndianByteOrder_0() const { return ___littleEndianByteOrder_0; }
	inline bool* get_address_of_littleEndianByteOrder_0() { return &___littleEndianByteOrder_0; }
	inline void set_littleEndianByteOrder_0(bool value)
	{
		___littleEndianByteOrder_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
