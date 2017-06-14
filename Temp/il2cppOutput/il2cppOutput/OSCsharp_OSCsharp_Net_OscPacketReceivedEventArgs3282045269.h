#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// OSCsharp.Data.OscPacket
struct OscPacket_t504761797;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Net.OscPacketReceivedEventArgs
struct  OscPacketReceivedEventArgs_t3282045269  : public EventArgs_t3289624707
{
public:
	// OSCsharp.Data.OscPacket OSCsharp.Net.OscPacketReceivedEventArgs::<Packet>k__BackingField
	OscPacket_t504761797 * ___U3CPacketU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPacketU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OscPacketReceivedEventArgs_t3282045269, ___U3CPacketU3Ek__BackingField_1)); }
	inline OscPacket_t504761797 * get_U3CPacketU3Ek__BackingField_1() const { return ___U3CPacketU3Ek__BackingField_1; }
	inline OscPacket_t504761797 ** get_address_of_U3CPacketU3Ek__BackingField_1() { return &___U3CPacketU3Ek__BackingField_1; }
	inline void set_U3CPacketU3Ek__BackingField_1(OscPacket_t504761797 * value)
	{
		___U3CPacketU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPacketU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
