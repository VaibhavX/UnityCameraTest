#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// TUIOsharp.Entities.TuioBlob
struct TuioBlob_t2046943414;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.TuioBlobEventArgs
struct  TuioBlobEventArgs_t3562978179  : public EventArgs_t3289624707
{
public:
	// TUIOsharp.Entities.TuioBlob TUIOsharp.DataProcessors.TuioBlobEventArgs::Blob
	TuioBlob_t2046943414 * ___Blob_1;

public:
	inline static int32_t get_offset_of_Blob_1() { return static_cast<int32_t>(offsetof(TuioBlobEventArgs_t3562978179, ___Blob_1)); }
	inline TuioBlob_t2046943414 * get_Blob_1() const { return ___Blob_1; }
	inline TuioBlob_t2046943414 ** get_address_of_Blob_1() { return &___Blob_1; }
	inline void set_Blob_1(TuioBlob_t2046943414 * value)
	{
		___Blob_1 = value;
		Il2CppCodeGenWriteBarrier(&___Blob_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
