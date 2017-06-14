#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "OSCsharp_OSCsharp_Data_OscPacket504761797.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Data.OscMessage
struct  OscMessage_t2764280154  : public OscPacket_t504761797
{
public:
	// System.String OSCsharp.Data.OscMessage::typeTag
	String_t* ___typeTag_19;

public:
	inline static int32_t get_offset_of_typeTag_19() { return static_cast<int32_t>(offsetof(OscMessage_t2764280154, ___typeTag_19)); }
	inline String_t* get_typeTag_19() const { return ___typeTag_19; }
	inline String_t** get_address_of_typeTag_19() { return &___typeTag_19; }
	inline void set_typeTag_19(String_t* value)
	{
		___typeTag_19 = value;
		Il2CppCodeGenWriteBarrier(&___typeTag_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
