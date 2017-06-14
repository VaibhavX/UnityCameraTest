#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.EventHandler`1<TUIOsharp.DataProcessors.TuioBlobEventArgs>
struct EventHandler_1_t2154285351;
// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioBlob>
struct Dictionary_2_t1054769049;
// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioBlob>
struct List_1_t1416064546;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.BlobProcessor
struct  BlobProcessor_t3603341577  : public Il2CppObject
{
public:
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioBlobEventArgs> TUIOsharp.DataProcessors.BlobProcessor::BlobAdded
	EventHandler_1_t2154285351 * ___BlobAdded_0;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioBlobEventArgs> TUIOsharp.DataProcessors.BlobProcessor::BlobUpdated
	EventHandler_1_t2154285351 * ___BlobUpdated_1;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioBlobEventArgs> TUIOsharp.DataProcessors.BlobProcessor::BlobRemoved
	EventHandler_1_t2154285351 * ___BlobRemoved_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioBlob> TUIOsharp.DataProcessors.BlobProcessor::blobs
	Dictionary_2_t1054769049 * ___blobs_3;
	// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioBlob> TUIOsharp.DataProcessors.BlobProcessor::updatedBlobs
	List_1_t1416064546 * ___updatedBlobs_4;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.BlobProcessor::addedBlobs
	List_1_t1440998580 * ___addedBlobs_5;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.BlobProcessor::removedBlobs
	List_1_t1440998580 * ___removedBlobs_6;
	// System.Int32 TUIOsharp.DataProcessors.BlobProcessor::<FrameNumber>k__BackingField
	int32_t ___U3CFrameNumberU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_BlobAdded_0() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___BlobAdded_0)); }
	inline EventHandler_1_t2154285351 * get_BlobAdded_0() const { return ___BlobAdded_0; }
	inline EventHandler_1_t2154285351 ** get_address_of_BlobAdded_0() { return &___BlobAdded_0; }
	inline void set_BlobAdded_0(EventHandler_1_t2154285351 * value)
	{
		___BlobAdded_0 = value;
		Il2CppCodeGenWriteBarrier(&___BlobAdded_0, value);
	}

	inline static int32_t get_offset_of_BlobUpdated_1() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___BlobUpdated_1)); }
	inline EventHandler_1_t2154285351 * get_BlobUpdated_1() const { return ___BlobUpdated_1; }
	inline EventHandler_1_t2154285351 ** get_address_of_BlobUpdated_1() { return &___BlobUpdated_1; }
	inline void set_BlobUpdated_1(EventHandler_1_t2154285351 * value)
	{
		___BlobUpdated_1 = value;
		Il2CppCodeGenWriteBarrier(&___BlobUpdated_1, value);
	}

	inline static int32_t get_offset_of_BlobRemoved_2() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___BlobRemoved_2)); }
	inline EventHandler_1_t2154285351 * get_BlobRemoved_2() const { return ___BlobRemoved_2; }
	inline EventHandler_1_t2154285351 ** get_address_of_BlobRemoved_2() { return &___BlobRemoved_2; }
	inline void set_BlobRemoved_2(EventHandler_1_t2154285351 * value)
	{
		___BlobRemoved_2 = value;
		Il2CppCodeGenWriteBarrier(&___BlobRemoved_2, value);
	}

	inline static int32_t get_offset_of_blobs_3() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___blobs_3)); }
	inline Dictionary_2_t1054769049 * get_blobs_3() const { return ___blobs_3; }
	inline Dictionary_2_t1054769049 ** get_address_of_blobs_3() { return &___blobs_3; }
	inline void set_blobs_3(Dictionary_2_t1054769049 * value)
	{
		___blobs_3 = value;
		Il2CppCodeGenWriteBarrier(&___blobs_3, value);
	}

	inline static int32_t get_offset_of_updatedBlobs_4() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___updatedBlobs_4)); }
	inline List_1_t1416064546 * get_updatedBlobs_4() const { return ___updatedBlobs_4; }
	inline List_1_t1416064546 ** get_address_of_updatedBlobs_4() { return &___updatedBlobs_4; }
	inline void set_updatedBlobs_4(List_1_t1416064546 * value)
	{
		___updatedBlobs_4 = value;
		Il2CppCodeGenWriteBarrier(&___updatedBlobs_4, value);
	}

	inline static int32_t get_offset_of_addedBlobs_5() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___addedBlobs_5)); }
	inline List_1_t1440998580 * get_addedBlobs_5() const { return ___addedBlobs_5; }
	inline List_1_t1440998580 ** get_address_of_addedBlobs_5() { return &___addedBlobs_5; }
	inline void set_addedBlobs_5(List_1_t1440998580 * value)
	{
		___addedBlobs_5 = value;
		Il2CppCodeGenWriteBarrier(&___addedBlobs_5, value);
	}

	inline static int32_t get_offset_of_removedBlobs_6() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___removedBlobs_6)); }
	inline List_1_t1440998580 * get_removedBlobs_6() const { return ___removedBlobs_6; }
	inline List_1_t1440998580 ** get_address_of_removedBlobs_6() { return &___removedBlobs_6; }
	inline void set_removedBlobs_6(List_1_t1440998580 * value)
	{
		___removedBlobs_6 = value;
		Il2CppCodeGenWriteBarrier(&___removedBlobs_6, value);
	}

	inline static int32_t get_offset_of_U3CFrameNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BlobProcessor_t3603341577, ___U3CFrameNumberU3Ek__BackingField_7)); }
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
