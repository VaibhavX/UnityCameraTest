#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// OSCsharp.Data.OscMessage
struct OscMessage_t2764280154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Net.OscMessageReceivedEventArgs
struct  OscMessageReceivedEventArgs_t1263041860  : public EventArgs_t3289624707
{
public:
	// OSCsharp.Data.OscMessage OSCsharp.Net.OscMessageReceivedEventArgs::<Message>k__BackingField
	OscMessage_t2764280154 * ___U3CMessageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OscMessageReceivedEventArgs_t1263041860, ___U3CMessageU3Ek__BackingField_1)); }
	inline OscMessage_t2764280154 * get_U3CMessageU3Ek__BackingField_1() const { return ___U3CMessageU3Ek__BackingField_1; }
	inline OscMessage_t2764280154 ** get_address_of_U3CMessageU3Ek__BackingField_1() { return &___U3CMessageU3Ek__BackingField_1; }
	inline void set_U3CMessageU3Ek__BackingField_1(OscMessage_t2764280154 * value)
	{
		___U3CMessageU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMessageU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
