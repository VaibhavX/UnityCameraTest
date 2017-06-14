#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// TUIOsharp.Entities.TuioObject
struct TuioObject_t1236821014;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.TuioObjectEventArgs
struct  TuioObjectEventArgs_t1810743341  : public EventArgs_t3289624707
{
public:
	// TUIOsharp.Entities.TuioObject TUIOsharp.DataProcessors.TuioObjectEventArgs::Object
	TuioObject_t1236821014 * ___Object_1;

public:
	inline static int32_t get_offset_of_Object_1() { return static_cast<int32_t>(offsetof(TuioObjectEventArgs_t1810743341, ___Object_1)); }
	inline TuioObject_t1236821014 * get_Object_1() const { return ___Object_1; }
	inline TuioObject_t1236821014 ** get_address_of_Object_1() { return &___Object_1; }
	inline void set_Object_1(TuioObject_t1236821014 * value)
	{
		___Object_1 = value;
		Il2CppCodeGenWriteBarrier(&___Object_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
