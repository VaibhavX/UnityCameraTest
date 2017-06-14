#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Gestures.PinnedTransformGesture
struct PinnedTransformGesture_t2478931093;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Checkers.Board
struct  Board_t613715212  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Gestures.PinnedTransformGesture TouchScript.Examples.Checkers.Board::gesture
	PinnedTransformGesture_t2478931093 * ___gesture_2;

public:
	inline static int32_t get_offset_of_gesture_2() { return static_cast<int32_t>(offsetof(Board_t613715212, ___gesture_2)); }
	inline PinnedTransformGesture_t2478931093 * get_gesture_2() const { return ___gesture_2; }
	inline PinnedTransformGesture_t2478931093 ** get_address_of_gesture_2() { return &___gesture_2; }
	inline void set_gesture_2(PinnedTransformGesture_t2478931093 * value)
	{
		___gesture_2 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
