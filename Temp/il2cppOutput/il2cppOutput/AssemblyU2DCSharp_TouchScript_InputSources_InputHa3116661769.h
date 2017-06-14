#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Func`4<UnityEngine.Vector2,TouchScript.Tags,System.Boolean,TouchScript.TouchPoint>
struct Func_4_t1475708928;
// System.Action`2<System.Int32,UnityEngine.Vector2>
struct Action_2_t1542075644;
// System.Action`1<System.Int32>
struct Action_1_t1873676830;
// TouchScript.Tags
struct Tags_t1265380163;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.InputHandlers.MouseHandler
struct  MouseHandler_t3116661769  : public Il2CppObject
{
public:
	// System.Func`4<UnityEngine.Vector2,TouchScript.Tags,System.Boolean,TouchScript.TouchPoint> TouchScript.InputSources.InputHandlers.MouseHandler::beginTouch
	Func_4_t1475708928 * ___beginTouch_0;
	// System.Action`2<System.Int32,UnityEngine.Vector2> TouchScript.InputSources.InputHandlers.MouseHandler::moveTouch
	Action_2_t1542075644 * ___moveTouch_1;
	// System.Action`1<System.Int32> TouchScript.InputSources.InputHandlers.MouseHandler::endTouch
	Action_1_t1873676830 * ___endTouch_2;
	// System.Action`1<System.Int32> TouchScript.InputSources.InputHandlers.MouseHandler::cancelTouch
	Action_1_t1873676830 * ___cancelTouch_3;
	// TouchScript.Tags TouchScript.InputSources.InputHandlers.MouseHandler::tags
	Tags_t1265380163 * ___tags_4;
	// System.Int32 TouchScript.InputSources.InputHandlers.MouseHandler::mousePointId
	int32_t ___mousePointId_5;
	// System.Int32 TouchScript.InputSources.InputHandlers.MouseHandler::fakeMousePointId
	int32_t ___fakeMousePointId_6;
	// UnityEngine.Vector3 TouchScript.InputSources.InputHandlers.MouseHandler::mousePointPos
	Vector3_t2243707580  ___mousePointPos_7;

public:
	inline static int32_t get_offset_of_beginTouch_0() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___beginTouch_0)); }
	inline Func_4_t1475708928 * get_beginTouch_0() const { return ___beginTouch_0; }
	inline Func_4_t1475708928 ** get_address_of_beginTouch_0() { return &___beginTouch_0; }
	inline void set_beginTouch_0(Func_4_t1475708928 * value)
	{
		___beginTouch_0 = value;
		Il2CppCodeGenWriteBarrier(&___beginTouch_0, value);
	}

	inline static int32_t get_offset_of_moveTouch_1() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___moveTouch_1)); }
	inline Action_2_t1542075644 * get_moveTouch_1() const { return ___moveTouch_1; }
	inline Action_2_t1542075644 ** get_address_of_moveTouch_1() { return &___moveTouch_1; }
	inline void set_moveTouch_1(Action_2_t1542075644 * value)
	{
		___moveTouch_1 = value;
		Il2CppCodeGenWriteBarrier(&___moveTouch_1, value);
	}

	inline static int32_t get_offset_of_endTouch_2() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___endTouch_2)); }
	inline Action_1_t1873676830 * get_endTouch_2() const { return ___endTouch_2; }
	inline Action_1_t1873676830 ** get_address_of_endTouch_2() { return &___endTouch_2; }
	inline void set_endTouch_2(Action_1_t1873676830 * value)
	{
		___endTouch_2 = value;
		Il2CppCodeGenWriteBarrier(&___endTouch_2, value);
	}

	inline static int32_t get_offset_of_cancelTouch_3() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___cancelTouch_3)); }
	inline Action_1_t1873676830 * get_cancelTouch_3() const { return ___cancelTouch_3; }
	inline Action_1_t1873676830 ** get_address_of_cancelTouch_3() { return &___cancelTouch_3; }
	inline void set_cancelTouch_3(Action_1_t1873676830 * value)
	{
		___cancelTouch_3 = value;
		Il2CppCodeGenWriteBarrier(&___cancelTouch_3, value);
	}

	inline static int32_t get_offset_of_tags_4() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___tags_4)); }
	inline Tags_t1265380163 * get_tags_4() const { return ___tags_4; }
	inline Tags_t1265380163 ** get_address_of_tags_4() { return &___tags_4; }
	inline void set_tags_4(Tags_t1265380163 * value)
	{
		___tags_4 = value;
		Il2CppCodeGenWriteBarrier(&___tags_4, value);
	}

	inline static int32_t get_offset_of_mousePointId_5() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___mousePointId_5)); }
	inline int32_t get_mousePointId_5() const { return ___mousePointId_5; }
	inline int32_t* get_address_of_mousePointId_5() { return &___mousePointId_5; }
	inline void set_mousePointId_5(int32_t value)
	{
		___mousePointId_5 = value;
	}

	inline static int32_t get_offset_of_fakeMousePointId_6() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___fakeMousePointId_6)); }
	inline int32_t get_fakeMousePointId_6() const { return ___fakeMousePointId_6; }
	inline int32_t* get_address_of_fakeMousePointId_6() { return &___fakeMousePointId_6; }
	inline void set_fakeMousePointId_6(int32_t value)
	{
		___fakeMousePointId_6 = value;
	}

	inline static int32_t get_offset_of_mousePointPos_7() { return static_cast<int32_t>(offsetof(MouseHandler_t3116661769, ___mousePointPos_7)); }
	inline Vector3_t2243707580  get_mousePointPos_7() const { return ___mousePointPos_7; }
	inline Vector3_t2243707580 * get_address_of_mousePointPos_7() { return &___mousePointPos_7; }
	inline void set_mousePointPos_7(Vector3_t2243707580  value)
	{
		___mousePointPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
