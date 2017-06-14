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
// OSCsharp.Data.OscTimeTag
struct OscTimeTag_t625345318;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Data.OscBundle
struct  OscBundle_t1126010605  : public OscPacket_t504761797
{
public:
	// OSCsharp.Data.OscTimeTag OSCsharp.Data.OscBundle::timeStamp
	OscTimeTag_t625345318 * ___timeStamp_4;

public:
	inline static int32_t get_offset_of_timeStamp_4() { return static_cast<int32_t>(offsetof(OscBundle_t1126010605, ___timeStamp_4)); }
	inline OscTimeTag_t625345318 * get_timeStamp_4() const { return ___timeStamp_4; }
	inline OscTimeTag_t625345318 ** get_address_of_timeStamp_4() { return &___timeStamp_4; }
	inline void set_timeStamp_4(OscTimeTag_t625345318 * value)
	{
		___timeStamp_4 = value;
		Il2CppCodeGenWriteBarrier(&___timeStamp_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
