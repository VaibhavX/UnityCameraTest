#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.EventHandler`1<TUIOsharp.DataProcessors.TuioCursorEventArgs>
struct EventHandler_1_t3249264480;
// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioCursor>
struct Dictionary_2_t858177054;
// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioCursor>
struct List_1_t1219472551;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.CursorProcessor
struct  CursorProcessor_t1785954004  : public Il2CppObject
{
public:
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioCursorEventArgs> TUIOsharp.DataProcessors.CursorProcessor::CursorAdded
	EventHandler_1_t3249264480 * ___CursorAdded_0;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioCursorEventArgs> TUIOsharp.DataProcessors.CursorProcessor::CursorUpdated
	EventHandler_1_t3249264480 * ___CursorUpdated_1;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioCursorEventArgs> TUIOsharp.DataProcessors.CursorProcessor::CursorRemoved
	EventHandler_1_t3249264480 * ___CursorRemoved_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioCursor> TUIOsharp.DataProcessors.CursorProcessor::cursors
	Dictionary_2_t858177054 * ___cursors_3;
	// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioCursor> TUIOsharp.DataProcessors.CursorProcessor::updatedCursors
	List_1_t1219472551 * ___updatedCursors_4;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.CursorProcessor::addedCursors
	List_1_t1440998580 * ___addedCursors_5;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.CursorProcessor::removedCursors
	List_1_t1440998580 * ___removedCursors_6;
	// System.Int32 TUIOsharp.DataProcessors.CursorProcessor::<FrameNumber>k__BackingField
	int32_t ___U3CFrameNumberU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_CursorAdded_0() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___CursorAdded_0)); }
	inline EventHandler_1_t3249264480 * get_CursorAdded_0() const { return ___CursorAdded_0; }
	inline EventHandler_1_t3249264480 ** get_address_of_CursorAdded_0() { return &___CursorAdded_0; }
	inline void set_CursorAdded_0(EventHandler_1_t3249264480 * value)
	{
		___CursorAdded_0 = value;
		Il2CppCodeGenWriteBarrier(&___CursorAdded_0, value);
	}

	inline static int32_t get_offset_of_CursorUpdated_1() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___CursorUpdated_1)); }
	inline EventHandler_1_t3249264480 * get_CursorUpdated_1() const { return ___CursorUpdated_1; }
	inline EventHandler_1_t3249264480 ** get_address_of_CursorUpdated_1() { return &___CursorUpdated_1; }
	inline void set_CursorUpdated_1(EventHandler_1_t3249264480 * value)
	{
		___CursorUpdated_1 = value;
		Il2CppCodeGenWriteBarrier(&___CursorUpdated_1, value);
	}

	inline static int32_t get_offset_of_CursorRemoved_2() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___CursorRemoved_2)); }
	inline EventHandler_1_t3249264480 * get_CursorRemoved_2() const { return ___CursorRemoved_2; }
	inline EventHandler_1_t3249264480 ** get_address_of_CursorRemoved_2() { return &___CursorRemoved_2; }
	inline void set_CursorRemoved_2(EventHandler_1_t3249264480 * value)
	{
		___CursorRemoved_2 = value;
		Il2CppCodeGenWriteBarrier(&___CursorRemoved_2, value);
	}

	inline static int32_t get_offset_of_cursors_3() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___cursors_3)); }
	inline Dictionary_2_t858177054 * get_cursors_3() const { return ___cursors_3; }
	inline Dictionary_2_t858177054 ** get_address_of_cursors_3() { return &___cursors_3; }
	inline void set_cursors_3(Dictionary_2_t858177054 * value)
	{
		___cursors_3 = value;
		Il2CppCodeGenWriteBarrier(&___cursors_3, value);
	}

	inline static int32_t get_offset_of_updatedCursors_4() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___updatedCursors_4)); }
	inline List_1_t1219472551 * get_updatedCursors_4() const { return ___updatedCursors_4; }
	inline List_1_t1219472551 ** get_address_of_updatedCursors_4() { return &___updatedCursors_4; }
	inline void set_updatedCursors_4(List_1_t1219472551 * value)
	{
		___updatedCursors_4 = value;
		Il2CppCodeGenWriteBarrier(&___updatedCursors_4, value);
	}

	inline static int32_t get_offset_of_addedCursors_5() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___addedCursors_5)); }
	inline List_1_t1440998580 * get_addedCursors_5() const { return ___addedCursors_5; }
	inline List_1_t1440998580 ** get_address_of_addedCursors_5() { return &___addedCursors_5; }
	inline void set_addedCursors_5(List_1_t1440998580 * value)
	{
		___addedCursors_5 = value;
		Il2CppCodeGenWriteBarrier(&___addedCursors_5, value);
	}

	inline static int32_t get_offset_of_removedCursors_6() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___removedCursors_6)); }
	inline List_1_t1440998580 * get_removedCursors_6() const { return ___removedCursors_6; }
	inline List_1_t1440998580 ** get_address_of_removedCursors_6() { return &___removedCursors_6; }
	inline void set_removedCursors_6(List_1_t1440998580 * value)
	{
		___removedCursors_6 = value;
		Il2CppCodeGenWriteBarrier(&___removedCursors_6, value);
	}

	inline static int32_t get_offset_of_U3CFrameNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CursorProcessor_t1785954004, ___U3CFrameNumberU3Ek__BackingField_7)); }
	inline int32_t get_U3CFrameNumberU3Ek__BackingField_7() const { return ___U3CFrameNumberU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CFrameNumberU3Ek__BackingField_7() { return &___U3CFrameNumberU3Ek__BackingField_7; }
	inline void set_U3CFrameNumberU3Ek__BackingField_7(int32_t value)
	{
		___U3CFrameNumberU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
