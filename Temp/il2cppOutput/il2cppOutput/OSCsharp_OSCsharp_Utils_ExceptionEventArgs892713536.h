#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Exception
struct Exception_t1927440687;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OSCsharp.Utils.ExceptionEventArgs
struct  ExceptionEventArgs_t892713536  : public EventArgs_t3289624707
{
public:
	// System.Exception OSCsharp.Utils.ExceptionEventArgs::<Exception>k__BackingField
	Exception_t1927440687 * ___U3CExceptionU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ExceptionEventArgs_t892713536, ___U3CExceptionU3Ek__BackingField_1)); }
	inline Exception_t1927440687 * get_U3CExceptionU3Ek__BackingField_1() const { return ___U3CExceptionU3Ek__BackingField_1; }
	inline Exception_t1927440687 ** get_address_of_U3CExceptionU3Ek__BackingField_1() { return &___U3CExceptionU3Ek__BackingField_1; }
	inline void set_U3CExceptionU3Ek__BackingField_1(Exception_t1927440687 * value)
	{
		___U3CExceptionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExceptionU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
