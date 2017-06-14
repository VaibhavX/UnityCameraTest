#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.EventHandler`1<OSCsharp.Utils.ExceptionEventArgs>
struct EventHandler_1_t3778988004;
// OSCsharp.Net.UDPReceiver
struct UDPReceiver_t3846109956;
// System.Collections.Generic.List`1<TUIOsharp.DataProcessors.IDataProcessor>
struct List_1_t1583176531;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.TuioServer
struct  TuioServer_t595520884  : public Il2CppObject
{
public:
	// System.EventHandler`1<OSCsharp.Utils.ExceptionEventArgs> TUIOsharp.TuioServer::ErrorOccured
	EventHandler_1_t3778988004 * ___ErrorOccured_0;
	// OSCsharp.Net.UDPReceiver TUIOsharp.TuioServer::udpReceiver
	UDPReceiver_t3846109956 * ___udpReceiver_1;
	// System.Collections.Generic.List`1<TUIOsharp.DataProcessors.IDataProcessor> TUIOsharp.TuioServer::processors
	List_1_t1583176531 * ___processors_2;
	// System.Int32 TUIOsharp.TuioServer::<Port>k__BackingField
	int32_t ___U3CPortU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_ErrorOccured_0() { return static_cast<int32_t>(offsetof(TuioServer_t595520884, ___ErrorOccured_0)); }
	inline EventHandler_1_t3778988004 * get_ErrorOccured_0() const { return ___ErrorOccured_0; }
	inline EventHandler_1_t3778988004 ** get_address_of_ErrorOccured_0() { return &___ErrorOccured_0; }
	inline void set_ErrorOccured_0(EventHandler_1_t3778988004 * value)
	{
		___ErrorOccured_0 = value;
		Il2CppCodeGenWriteBarrier(&___ErrorOccured_0, value);
	}

	inline static int32_t get_offset_of_udpReceiver_1() { return static_cast<int32_t>(offsetof(TuioServer_t595520884, ___udpReceiver_1)); }
	inline UDPReceiver_t3846109956 * get_udpReceiver_1() const { return ___udpReceiver_1; }
	inline UDPReceiver_t3846109956 ** get_address_of_udpReceiver_1() { return &___udpReceiver_1; }
	inline void set_udpReceiver_1(UDPReceiver_t3846109956 * value)
	{
		___udpReceiver_1 = value;
		Il2CppCodeGenWriteBarrier(&___udpReceiver_1, value);
	}

	inline static int32_t get_offset_of_processors_2() { return static_cast<int32_t>(offsetof(TuioServer_t595520884, ___processors_2)); }
	inline List_1_t1583176531 * get_processors_2() const { return ___processors_2; }
	inline List_1_t1583176531 ** get_address_of_processors_2() { return &___processors_2; }
	inline void set_processors_2(List_1_t1583176531 * value)
	{
		___processors_2 = value;
		Il2CppCodeGenWriteBarrier(&___processors_2, value);
	}

	inline static int32_t get_offset_of_U3CPortU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TuioServer_t595520884, ___U3CPortU3Ek__BackingField_3)); }
	inline int32_t get_U3CPortU3Ek__BackingField_3() const { return ___U3CPortU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CPortU3Ek__BackingField_3() { return &___U3CPortU3Ek__BackingField_3; }
	inline void set_U3CPortU3Ek__BackingField_3(int32_t value)
	{
		___U3CPortU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
