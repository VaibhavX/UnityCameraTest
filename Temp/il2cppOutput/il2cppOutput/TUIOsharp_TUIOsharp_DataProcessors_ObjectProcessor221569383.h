#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.EventHandler`1<TUIOsharp.DataProcessors.TuioObjectEventArgs>
struct EventHandler_1_t402050513;
// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioObject>
struct Dictionary_2_t244646649;
// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioObject>
struct List_1_t605942146;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TUIOsharp.DataProcessors.ObjectProcessor
struct  ObjectProcessor_t221569383  : public Il2CppObject
{
public:
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioObjectEventArgs> TUIOsharp.DataProcessors.ObjectProcessor::ObjectAdded
	EventHandler_1_t402050513 * ___ObjectAdded_0;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioObjectEventArgs> TUIOsharp.DataProcessors.ObjectProcessor::ObjectUpdated
	EventHandler_1_t402050513 * ___ObjectUpdated_1;
	// System.EventHandler`1<TUIOsharp.DataProcessors.TuioObjectEventArgs> TUIOsharp.DataProcessors.ObjectProcessor::ObjectRemoved
	EventHandler_1_t402050513 * ___ObjectRemoved_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,TUIOsharp.Entities.TuioObject> TUIOsharp.DataProcessors.ObjectProcessor::objects
	Dictionary_2_t244646649 * ___objects_3;
	// System.Collections.Generic.List`1<TUIOsharp.Entities.TuioObject> TUIOsharp.DataProcessors.ObjectProcessor::updatedObjects
	List_1_t605942146 * ___updatedObjects_4;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.ObjectProcessor::addedObjects
	List_1_t1440998580 * ___addedObjects_5;
	// System.Collections.Generic.List`1<System.Int32> TUIOsharp.DataProcessors.ObjectProcessor::removedObjects
	List_1_t1440998580 * ___removedObjects_6;
	// System.Int32 TUIOsharp.DataProcessors.ObjectProcessor::<FrameNumber>k__BackingField
	int32_t ___U3CFrameNumberU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_ObjectAdded_0() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___ObjectAdded_0)); }
	inline EventHandler_1_t402050513 * get_ObjectAdded_0() const { return ___ObjectAdded_0; }
	inline EventHandler_1_t402050513 ** get_address_of_ObjectAdded_0() { return &___ObjectAdded_0; }
	inline void set_ObjectAdded_0(EventHandler_1_t402050513 * value)
	{
		___ObjectAdded_0 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectAdded_0, value);
	}

	inline static int32_t get_offset_of_ObjectUpdated_1() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___ObjectUpdated_1)); }
	inline EventHandler_1_t402050513 * get_ObjectUpdated_1() const { return ___ObjectUpdated_1; }
	inline EventHandler_1_t402050513 ** get_address_of_ObjectUpdated_1() { return &___ObjectUpdated_1; }
	inline void set_ObjectUpdated_1(EventHandler_1_t402050513 * value)
	{
		___ObjectUpdated_1 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectUpdated_1, value);
	}

	inline static int32_t get_offset_of_ObjectRemoved_2() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___ObjectRemoved_2)); }
	inline EventHandler_1_t402050513 * get_ObjectRemoved_2() const { return ___ObjectRemoved_2; }
	inline EventHandler_1_t402050513 ** get_address_of_ObjectRemoved_2() { return &___ObjectRemoved_2; }
	inline void set_ObjectRemoved_2(EventHandler_1_t402050513 * value)
	{
		___ObjectRemoved_2 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectRemoved_2, value);
	}

	inline static int32_t get_offset_of_objects_3() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___objects_3)); }
	inline Dictionary_2_t244646649 * get_objects_3() const { return ___objects_3; }
	inline Dictionary_2_t244646649 ** get_address_of_objects_3() { return &___objects_3; }
	inline void set_objects_3(Dictionary_2_t244646649 * value)
	{
		___objects_3 = value;
		Il2CppCodeGenWriteBarrier(&___objects_3, value);
	}

	inline static int32_t get_offset_of_updatedObjects_4() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___updatedObjects_4)); }
	inline List_1_t605942146 * get_updatedObjects_4() const { return ___updatedObjects_4; }
	inline List_1_t605942146 ** get_address_of_updatedObjects_4() { return &___updatedObjects_4; }
	inline void set_updatedObjects_4(List_1_t605942146 * value)
	{
		___updatedObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___updatedObjects_4, value);
	}

	inline static int32_t get_offset_of_addedObjects_5() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___addedObjects_5)); }
	inline List_1_t1440998580 * get_addedObjects_5() const { return ___addedObjects_5; }
	inline List_1_t1440998580 ** get_address_of_addedObjects_5() { return &___addedObjects_5; }
	inline void set_addedObjects_5(List_1_t1440998580 * value)
	{
		___addedObjects_5 = value;
		Il2CppCodeGenWriteBarrier(&___addedObjects_5, value);
	}

	inline static int32_t get_offset_of_removedObjects_6() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___removedObjects_6)); }
	inline List_1_t1440998580 * get_removedObjects_6() const { return ___removedObjects_6; }
	inline List_1_t1440998580 ** get_address_of_removedObjects_6() { return &___removedObjects_6; }
	inline void set_removedObjects_6(List_1_t1440998580 * value)
	{
		___removedObjects_6 = value;
		Il2CppCodeGenWriteBarrier(&___removedObjects_6, value);
	}

	inline static int32_t get_offset_of_U3CFrameNumberU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ObjectProcessor_t221569383, ___U3CFrameNumberU3Ek__BackingField_7)); }
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
