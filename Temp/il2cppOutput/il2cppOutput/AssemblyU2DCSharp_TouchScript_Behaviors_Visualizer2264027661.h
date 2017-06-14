#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.Behaviors.Visualizer.TouchProxyBase
struct TouchProxyBase_t4188753234;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// TouchScript.Utils.ObjectPool`1<TouchScript.Behaviors.Visualizer.TouchProxyBase>
struct ObjectPool_1_t3542042081;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Behaviors.Visualizer.TouchProxyBase>
struct Dictionary_2_t3196578869;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Behaviors.Visualizer.TouchVisualizer
struct  TouchVisualizer_t2264027661  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.Behaviors.Visualizer.TouchProxyBase TouchScript.Behaviors.Visualizer.TouchVisualizer::touchProxy
	TouchProxyBase_t4188753234 * ___touchProxy_2;
	// System.Boolean TouchScript.Behaviors.Visualizer.TouchVisualizer::showTouchId
	bool ___showTouchId_3;
	// System.Boolean TouchScript.Behaviors.Visualizer.TouchVisualizer::showTags
	bool ___showTags_4;
	// System.Boolean TouchScript.Behaviors.Visualizer.TouchVisualizer::useDPI
	bool ___useDPI_5;
	// System.Single TouchScript.Behaviors.Visualizer.TouchVisualizer::touchSize
	float ___touchSize_6;
	// System.Int32 TouchScript.Behaviors.Visualizer.TouchVisualizer::defaultSize
	int32_t ___defaultSize_7;
	// UnityEngine.RectTransform TouchScript.Behaviors.Visualizer.TouchVisualizer::rect
	RectTransform_t3349966182 * ___rect_8;
	// TouchScript.Utils.ObjectPool`1<TouchScript.Behaviors.Visualizer.TouchProxyBase> TouchScript.Behaviors.Visualizer.TouchVisualizer::pool
	ObjectPool_1_t3542042081 * ___pool_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Behaviors.Visualizer.TouchProxyBase> TouchScript.Behaviors.Visualizer.TouchVisualizer::proxies
	Dictionary_2_t3196578869 * ___proxies_10;

public:
	inline static int32_t get_offset_of_touchProxy_2() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___touchProxy_2)); }
	inline TouchProxyBase_t4188753234 * get_touchProxy_2() const { return ___touchProxy_2; }
	inline TouchProxyBase_t4188753234 ** get_address_of_touchProxy_2() { return &___touchProxy_2; }
	inline void set_touchProxy_2(TouchProxyBase_t4188753234 * value)
	{
		___touchProxy_2 = value;
		Il2CppCodeGenWriteBarrier(&___touchProxy_2, value);
	}

	inline static int32_t get_offset_of_showTouchId_3() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___showTouchId_3)); }
	inline bool get_showTouchId_3() const { return ___showTouchId_3; }
	inline bool* get_address_of_showTouchId_3() { return &___showTouchId_3; }
	inline void set_showTouchId_3(bool value)
	{
		___showTouchId_3 = value;
	}

	inline static int32_t get_offset_of_showTags_4() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___showTags_4)); }
	inline bool get_showTags_4() const { return ___showTags_4; }
	inline bool* get_address_of_showTags_4() { return &___showTags_4; }
	inline void set_showTags_4(bool value)
	{
		___showTags_4 = value;
	}

	inline static int32_t get_offset_of_useDPI_5() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___useDPI_5)); }
	inline bool get_useDPI_5() const { return ___useDPI_5; }
	inline bool* get_address_of_useDPI_5() { return &___useDPI_5; }
	inline void set_useDPI_5(bool value)
	{
		___useDPI_5 = value;
	}

	inline static int32_t get_offset_of_touchSize_6() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___touchSize_6)); }
	inline float get_touchSize_6() const { return ___touchSize_6; }
	inline float* get_address_of_touchSize_6() { return &___touchSize_6; }
	inline void set_touchSize_6(float value)
	{
		___touchSize_6 = value;
	}

	inline static int32_t get_offset_of_defaultSize_7() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___defaultSize_7)); }
	inline int32_t get_defaultSize_7() const { return ___defaultSize_7; }
	inline int32_t* get_address_of_defaultSize_7() { return &___defaultSize_7; }
	inline void set_defaultSize_7(int32_t value)
	{
		___defaultSize_7 = value;
	}

	inline static int32_t get_offset_of_rect_8() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___rect_8)); }
	inline RectTransform_t3349966182 * get_rect_8() const { return ___rect_8; }
	inline RectTransform_t3349966182 ** get_address_of_rect_8() { return &___rect_8; }
	inline void set_rect_8(RectTransform_t3349966182 * value)
	{
		___rect_8 = value;
		Il2CppCodeGenWriteBarrier(&___rect_8, value);
	}

	inline static int32_t get_offset_of_pool_9() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___pool_9)); }
	inline ObjectPool_1_t3542042081 * get_pool_9() const { return ___pool_9; }
	inline ObjectPool_1_t3542042081 ** get_address_of_pool_9() { return &___pool_9; }
	inline void set_pool_9(ObjectPool_1_t3542042081 * value)
	{
		___pool_9 = value;
		Il2CppCodeGenWriteBarrier(&___pool_9, value);
	}

	inline static int32_t get_offset_of_proxies_10() { return static_cast<int32_t>(offsetof(TouchVisualizer_t2264027661, ___proxies_10)); }
	inline Dictionary_2_t3196578869 * get_proxies_10() const { return ___proxies_10; }
	inline Dictionary_2_t3196578869 ** get_address_of_proxies_10() { return &___proxies_10; }
	inline void set_proxies_10(Dictionary_2_t3196578869 * value)
	{
		___proxies_10 = value;
		Il2CppCodeGenWriteBarrier(&___proxies_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
