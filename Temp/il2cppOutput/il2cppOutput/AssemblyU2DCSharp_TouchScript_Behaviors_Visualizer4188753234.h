#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.Visualizer.TouchProxyBase
struct  TouchProxyBase_t4188753234  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean TouchScript.Behaviors.Visualizer.TouchProxyBase::<ShowTouchId>k__BackingField
	bool ___U3CShowTouchIdU3Ek__BackingField_2;
	// System.Boolean TouchScript.Behaviors.Visualizer.TouchProxyBase::<ShowTags>k__BackingField
	bool ___U3CShowTagsU3Ek__BackingField_3;
	// UnityEngine.RectTransform TouchScript.Behaviors.Visualizer.TouchProxyBase::rect
	RectTransform_t3349966182 * ___rect_4;
	// System.Int32 TouchScript.Behaviors.Visualizer.TouchProxyBase::size
	int32_t ___size_5;

public:
	inline static int32_t get_offset_of_U3CShowTouchIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchProxyBase_t4188753234, ___U3CShowTouchIdU3Ek__BackingField_2)); }
	inline bool get_U3CShowTouchIdU3Ek__BackingField_2() const { return ___U3CShowTouchIdU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CShowTouchIdU3Ek__BackingField_2() { return &___U3CShowTouchIdU3Ek__BackingField_2; }
	inline void set_U3CShowTouchIdU3Ek__BackingField_2(bool value)
	{
		___U3CShowTouchIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CShowTagsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TouchProxyBase_t4188753234, ___U3CShowTagsU3Ek__BackingField_3)); }
	inline bool get_U3CShowTagsU3Ek__BackingField_3() const { return ___U3CShowTagsU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CShowTagsU3Ek__BackingField_3() { return &___U3CShowTagsU3Ek__BackingField_3; }
	inline void set_U3CShowTagsU3Ek__BackingField_3(bool value)
	{
		___U3CShowTagsU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(TouchProxyBase_t4188753234, ___rect_4)); }
	inline RectTransform_t3349966182 * get_rect_4() const { return ___rect_4; }
	inline RectTransform_t3349966182 ** get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(RectTransform_t3349966182 * value)
	{
		___rect_4 = value;
		Il2CppCodeGenWriteBarrier(&___rect_4, value);
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(TouchProxyBase_t4188753234, ___size_5)); }
	inline int32_t get_size_5() const { return ___size_5; }
	inline int32_t* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(int32_t value)
	{
		___size_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
