#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.Sockets.UdpClient
struct UdpClient_t1278197702;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Net.UDPReceiver/UdpState
struct  UdpState_t1122067727  : public Il2CppObject
{
public:
	// System.Net.Sockets.UdpClient OSCsharp.Net.UDPReceiver/UdpState::<Client>k__BackingField
	UdpClient_t1278197702 * ___U3CClientU3Ek__BackingField_0;
	// System.Net.IPEndPoint OSCsharp.Net.UDPReceiver/UdpState::<IPEndPoint>k__BackingField
	IPEndPoint_t2615413766 * ___U3CIPEndPointU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UdpState_t1122067727, ___U3CClientU3Ek__BackingField_0)); }
	inline UdpClient_t1278197702 * get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline UdpClient_t1278197702 ** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(UdpClient_t1278197702 * value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClientU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIPEndPointU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UdpState_t1122067727, ___U3CIPEndPointU3Ek__BackingField_1)); }
	inline IPEndPoint_t2615413766 * get_U3CIPEndPointU3Ek__BackingField_1() const { return ___U3CIPEndPointU3Ek__BackingField_1; }
	inline IPEndPoint_t2615413766 ** get_address_of_U3CIPEndPointU3Ek__BackingField_1() { return &___U3CIPEndPointU3Ek__BackingField_1; }
	inline void set_U3CIPEndPointU3Ek__BackingField_1(IPEndPoint_t2615413766 * value)
	{
		___U3CIPEndPointU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIPEndPointU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
