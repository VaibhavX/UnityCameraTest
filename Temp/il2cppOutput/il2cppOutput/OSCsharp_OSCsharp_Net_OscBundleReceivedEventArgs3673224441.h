#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// OSCsharp.Data.OscBundle
struct OscBundle_t1126010605;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Net.OscBundleReceivedEventArgs
struct  OscBundleReceivedEventArgs_t3673224441  : public EventArgs_t3289624707
{
public:
	// OSCsharp.Data.OscBundle OSCsharp.Net.OscBundleReceivedEventArgs::<Bundle>k__BackingField
	OscBundle_t1126010605 * ___U3CBundleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBundleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(OscBundleReceivedEventArgs_t3673224441, ___U3CBundleU3Ek__BackingField_1)); }
	inline OscBundle_t1126010605 * get_U3CBundleU3Ek__BackingField_1() const { return ___U3CBundleU3Ek__BackingField_1; }
	inline OscBundle_t1126010605 ** get_address_of_U3CBundleU3Ek__BackingField_1() { return &___U3CBundleU3Ek__BackingField_1; }
	inline void set_U3CBundleU3Ek__BackingField_1(OscBundle_t1126010605 * value)
	{
		___U3CBundleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CBundleU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
