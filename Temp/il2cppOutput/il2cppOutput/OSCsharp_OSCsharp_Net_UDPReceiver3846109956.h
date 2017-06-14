#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "OSCsharp_OSCsharp_Net_TransmissionType529366678.h"

// System.EventHandler`1<OSCsharp.Net.OscPacketReceivedEventArgs>
struct EventHandler_1_t1873352441;
// System.EventHandler`1<OSCsharp.Net.OscBundleReceivedEventArgs>
struct EventHandler_1_t2264531613;
// System.EventHandler`1<OSCsharp.Utils.ExceptionEventArgs>
struct EventHandler_1_t3778988004;
// System.EventHandler`1<OSCsharp.Net.OscMessageReceivedEventArgs>
struct EventHandler_1_t4149316328;
// System.Net.Sockets.UdpClient
struct UdpClient_t1278197702;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Net.IPAddress
struct IPAddress_t1399971723;
// System.Net.IPEndPoint
struct IPEndPoint_t2615413766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Net.UDPReceiver
struct  UDPReceiver_t3846109956  : public Il2CppObject
{
public:
	// System.EventHandler`1<OSCsharp.Net.OscPacketReceivedEventArgs> OSCsharp.Net.UDPReceiver::PacketReceived
	EventHandler_1_t1873352441 * ___PacketReceived_0;
	// System.EventHandler`1<OSCsharp.Net.OscBundleReceivedEventArgs> OSCsharp.Net.UDPReceiver::BundleReceived
	EventHandler_1_t2264531613 * ___BundleReceived_1;
	// System.EventHandler`1<OSCsharp.Utils.ExceptionEventArgs> OSCsharp.Net.UDPReceiver::ErrorOccured
	EventHandler_1_t3778988004 * ___ErrorOccured_2;
	// System.EventHandler`1<OSCsharp.Net.OscMessageReceivedEventArgs> OSCsharp.Net.UDPReceiver::messageReceivedInvoker
	EventHandler_1_t4149316328 * ___messageReceivedInvoker_3;
	// System.Net.Sockets.UdpClient OSCsharp.Net.UDPReceiver::udpClient
	UdpClient_t1278197702 * ___udpClient_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) OSCsharp.Net.UDPReceiver::acceptingConnections
	bool ___acceptingConnections_5;
	// System.AsyncCallback OSCsharp.Net.UDPReceiver::callback
	AsyncCallback_t163412349 * ___callback_6;
	// System.Net.IPAddress OSCsharp.Net.UDPReceiver::<IPAddress>k__BackingField
	IPAddress_t1399971723 * ___U3CIPAddressU3Ek__BackingField_7;
	// System.Int32 OSCsharp.Net.UDPReceiver::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_8;
	// System.Net.IPAddress OSCsharp.Net.UDPReceiver::<MulticastAddress>k__BackingField
	IPAddress_t1399971723 * ___U3CMulticastAddressU3Ek__BackingField_9;
	// System.Net.IPEndPoint OSCsharp.Net.UDPReceiver::<IPEndPoint>k__BackingField
	IPEndPoint_t2615413766 * ___U3CIPEndPointU3Ek__BackingField_10;
	// OSCsharp.Net.TransmissionType OSCsharp.Net.UDPReceiver::<TransmissionType>k__BackingField
	int32_t ___U3CTransmissionTypeU3Ek__BackingField_11;
	// System.Boolean OSCsharp.Net.UDPReceiver::<ConsumeParsingExceptions>k__BackingField
	bool ___U3CConsumeParsingExceptionsU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_PacketReceived_0() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___PacketReceived_0)); }
	inline EventHandler_1_t1873352441 * get_PacketReceived_0() const { return ___PacketReceived_0; }
	inline EventHandler_1_t1873352441 ** get_address_of_PacketReceived_0() { return &___PacketReceived_0; }
	inline void set_PacketReceived_0(EventHandler_1_t1873352441 * value)
	{
		___PacketReceived_0 = value;
		Il2CppCodeGenWriteBarrier(&___PacketReceived_0, value);
	}

	inline static int32_t get_offset_of_BundleReceived_1() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___BundleReceived_1)); }
	inline EventHandler_1_t2264531613 * get_BundleReceived_1() const { return ___BundleReceived_1; }
	inline EventHandler_1_t2264531613 ** get_address_of_BundleReceived_1() { return &___BundleReceived_1; }
	inline void set_BundleReceived_1(EventHandler_1_t2264531613 * value)
	{
		___BundleReceived_1 = value;
		Il2CppCodeGenWriteBarrier(&___BundleReceived_1, value);
	}

	inline static int32_t get_offset_of_ErrorOccured_2() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___ErrorOccured_2)); }
	inline EventHandler_1_t3778988004 * get_ErrorOccured_2() const { return ___ErrorOccured_2; }
	inline EventHandler_1_t3778988004 ** get_address_of_ErrorOccured_2() { return &___ErrorOccured_2; }
	inline void set_ErrorOccured_2(EventHandler_1_t3778988004 * value)
	{
		___ErrorOccured_2 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorOccured_2, value);
	}

	inline static int32_t get_offset_of_messageReceivedInvoker_3() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___messageReceivedInvoker_3)); }
	inline EventHandler_1_t4149316328 * get_messageReceivedInvoker_3() const { return ___messageReceivedInvoker_3; }
	inline EventHandler_1_t4149316328 ** get_address_of_messageReceivedInvoker_3() { return &___messageReceivedInvoker_3; }
	inline void set_messageReceivedInvoker_3(EventHandler_1_t4149316328 * value)
	{
		___messageReceivedInvoker_3 = value;
		Il2CppCodeGenWriteBarrier(&___messageReceivedInvoker_3, value);
	}

	inline static int32_t get_offset_of_udpClient_4() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___udpClient_4)); }
	inline UdpClient_t1278197702 * get_udpClient_4() const { return ___udpClient_4; }
	inline UdpClient_t1278197702 ** get_address_of_udpClient_4() { return &___udpClient_4; }
	inline void set_udpClient_4(UdpClient_t1278197702 * value)
	{
		___udpClient_4 = value;
		Il2CppCodeGenWriteBarrier(&___udpClient_4, value);
	}

	inline static int32_t get_offset_of_acceptingConnections_5() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___acceptingConnections_5)); }
	inline bool get_acceptingConnections_5() const { return ___acceptingConnections_5; }
	inline bool* get_address_of_acceptingConnections_5() { return &___acceptingConnections_5; }
	inline void set_acceptingConnections_5(bool value)
	{
		___acceptingConnections_5 = value;
	}

	inline static int32_t get_offset_of_callback_6() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___callback_6)); }
	inline AsyncCallback_t163412349 * get_callback_6() const { return ___callback_6; }
	inline AsyncCallback_t163412349 ** get_address_of_callback_6() { return &___callback_6; }
	inline void set_callback_6(AsyncCallback_t163412349 * value)
	{
		___callback_6 = value;
		Il2CppCodeGenWriteBarrier(&___callback_6, value);
	}

	inline static int32_t get_offset_of_U3CIPAddressU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CIPAddressU3Ek__BackingField_7)); }
	inline IPAddress_t1399971723 * get_U3CIPAddressU3Ek__BackingField_7() const { return ___U3CIPAddressU3Ek__BackingField_7; }
	inline IPAddress_t1399971723 ** get_address_of_U3CIPAddressU3Ek__BackingField_7() { return &___U3CIPAddressU3Ek__BackingField_7; }
	inline void set_U3CIPAddressU3Ek__BackingField_7(IPAddress_t1399971723 * value)
	{
		___U3CIPAddressU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIPAddressU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CPortU3Ek__BackingField_8)); }
	inline int32_t get_U3CPortU3Ek__BackingField_8() const { return ___U3CPortU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_8() { return &___U3CPortU3Ek__BackingField_8; }
	inline void set_U3CPortU3Ek__BackingField_8(int32_t value)
	{
		___U3CPortU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMulticastAddressU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CMulticastAddressU3Ek__BackingField_9)); }
	inline IPAddress_t1399971723 * get_U3CMulticastAddressU3Ek__BackingField_9() const { return ___U3CMulticastAddressU3Ek__BackingField_9; }
	inline IPAddress_t1399971723 ** get_address_of_U3CMulticastAddressU3Ek__BackingField_9() { return &___U3CMulticastAddressU3Ek__BackingField_9; }
	inline void set_U3CMulticastAddressU3Ek__BackingField_9(IPAddress_t1399971723 * value)
	{
		___U3CMulticastAddressU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMulticastAddressU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CIPEndPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CIPEndPointU3Ek__BackingField_10)); }
	inline IPEndPoint_t2615413766 * get_U3CIPEndPointU3Ek__BackingField_10() const { return ___U3CIPEndPointU3Ek__BackingField_10; }
	inline IPEndPoint_t2615413766 ** get_address_of_U3CIPEndPointU3Ek__BackingField_10() { return &___U3CIPEndPointU3Ek__BackingField_10; }
	inline void set_U3CIPEndPointU3Ek__BackingField_10(IPEndPoint_t2615413766 * value)
	{
		___U3CIPEndPointU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIPEndPointU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CTransmissionTypeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CTransmissionTypeU3Ek__BackingField_11)); }
	inline int32_t get_U3CTransmissionTypeU3Ek__BackingField_11() const { return ___U3CTransmissionTypeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CTransmissionTypeU3Ek__BackingField_11() { return &___U3CTransmissionTypeU3Ek__BackingField_11; }
	inline void set_U3CTransmissionTypeU3Ek__BackingField_11(int32_t value)
	{
		___U3CTransmissionTypeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CConsumeParsingExceptionsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(UDPReceiver_t3846109956, ___U3CConsumeParsingExceptionsU3Ek__BackingField_12)); }
	inline bool get_U3CConsumeParsingExceptionsU3Ek__BackingField_12() const { return ___U3CConsumeParsingExceptionsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CConsumeParsingExceptionsU3Ek__BackingField_12() { return &___U3CConsumeParsingExceptionsU3Ek__BackingField_12; }
	inline void set_U3CConsumeParsingExceptionsU3Ek__BackingField_12(bool value)
	{
		___U3CConsumeParsingExceptionsU3Ek__BackingField_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
