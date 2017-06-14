#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Gestures.TransformGesture
struct TransformGesture_t780972309;
// TouchScript.Behaviors.Transformer
struct Transformer_t946377179;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Checker
struct  Checker_t2497813511  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Gestures.TransformGesture TouchScript.Examples.Checker::gesture
	TransformGesture_t780972309 * ___gesture_2;
	// TouchScript.Behaviors.Transformer TouchScript.Examples.Checker::transformer
	Transformer_t946377179 * ___transformer_3;
	// UnityEngine.Rigidbody TouchScript.Examples.Checker::rb
	Rigidbody_t4233889191 * ___rb_4;

public:
	inline static int32_t get_offset_of_gesture_2() { return static_cast<int32_t>(offsetof(Checker_t2497813511, ___gesture_2)); }
	inline TransformGesture_t780972309 * get_gesture_2() const { return ___gesture_2; }
	inline TransformGesture_t780972309 ** get_address_of_gesture_2() { return &___gesture_2; }
	inline void set_gesture_2(TransformGesture_t780972309 * value)
	{
		___gesture_2 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_2, value);
	}

	inline static int32_t get_offset_of_transformer_3() { return static_cast<int32_t>(offsetof(Checker_t2497813511, ___transformer_3)); }
	inline Transformer_t946377179 * get_transformer_3() const { return ___transformer_3; }
	inline Transformer_t946377179 ** get_address_of_transformer_3() { return &___transformer_3; }
	inline void set_transformer_3(Transformer_t946377179 * value)
	{
		___transformer_3 = value;
		Il2CppCodeGenWriteBarrier(&___transformer_3, value);
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Checker_t2497813511, ___rb_4)); }
	inline Rigidbody_t4233889191 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody_t4233889191 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
