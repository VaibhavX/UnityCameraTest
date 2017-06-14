#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// TUIOsharp.Entities.TuioCursor
struct TuioCursor_t1850351419;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.TuioCursorEventArgs
struct  TuioCursorEventArgs_t362990012  : public EventArgs_t3289624707
{
public:
	// TUIOsharp.Entities.TuioCursor TUIOsharp.DataProcessors.TuioCursorEventArgs::Cursor
	TuioCursor_t1850351419 * ___Cursor_1;

public:
	inline static int32_t get_offset_of_Cursor_1() { return static_cast<int32_t>(offsetof(TuioCursorEventArgs_t362990012, ___Cursor_1)); }
	inline TuioCursor_t1850351419 * get_Cursor_1() const { return ___Cursor_1; }
	inline TuioCursor_t1850351419 ** get_address_of_Cursor_1() { return &___Cursor_1; }
	inline void set_Cursor_1(TuioCursor_t1850351419 * value)
	{
		___Cursor_1 = value;
		Il2CppCodeGenWriteBarrier(&___Cursor_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
