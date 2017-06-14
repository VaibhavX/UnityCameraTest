#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture2352305985.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_Base_PinnedT724632304.h"

// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Base.PinnedTrasformGestureBase
struct  PinnedTrasformGestureBase_t3366405746  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformStartedInvoker
	EventHandler_1_t1880931879 * ___transformStartedInvoker_35;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformedInvoker
	EventHandler_1_t1880931879 * ___transformedInvoker_36;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.PinnedTrasformGestureBase::transformCompletedInvoker
	EventHandler_1_t1880931879 * ___transformCompletedInvoker_37;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_38;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_39;
	// UnityEngine.Collider TouchScript.Gestures.Base.PinnedTrasformGestureBase::cachedCollider
	Collider_t3497673348 * ___cachedCollider_40;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::deltaRotation
	float ___deltaRotation_41;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::deltaScale
	float ___deltaScale_42;
	// UnityEngine.Vector2 TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelTranslationBuffer
	Vector2_t2243707579  ___screenPixelTranslationBuffer_43;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_44;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::angleBuffer
	float ___angleBuffer_45;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_46;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::scaleBuffer
	float ___scaleBuffer_47;
	// System.Boolean TouchScript.Gestures.Base.PinnedTrasformGestureBase::isTransforming
	bool ___isTransforming_48;
	// TouchScript.Gestures.Base.PinnedTrasformGestureBase/TransformType TouchScript.Gestures.Base.PinnedTrasformGestureBase::type
	int32_t ___type_49;
	// System.Single TouchScript.Gestures.Base.PinnedTrasformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_50;

public:
	inline static int32_t get_offset_of_transformStartedInvoker_35() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___transformStartedInvoker_35)); }
	inline EventHandler_1_t1880931879 * get_transformStartedInvoker_35() const { return ___transformStartedInvoker_35; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformStartedInvoker_35() { return &___transformStartedInvoker_35; }
	inline void set_transformStartedInvoker_35(EventHandler_1_t1880931879 * value)
	{
		___transformStartedInvoker_35 = value;
		Il2CppCodeGenWriteBarrier(&___transformStartedInvoker_35, value);
	}

	inline static int32_t get_offset_of_transformedInvoker_36() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___transformedInvoker_36)); }
	inline EventHandler_1_t1880931879 * get_transformedInvoker_36() const { return ___transformedInvoker_36; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformedInvoker_36() { return &___transformedInvoker_36; }
	inline void set_transformedInvoker_36(EventHandler_1_t1880931879 * value)
	{
		___transformedInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___transformedInvoker_36, value);
	}

	inline static int32_t get_offset_of_transformCompletedInvoker_37() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___transformCompletedInvoker_37)); }
	inline EventHandler_1_t1880931879 * get_transformCompletedInvoker_37() const { return ___transformCompletedInvoker_37; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformCompletedInvoker_37() { return &___transformCompletedInvoker_37; }
	inline void set_transformCompletedInvoker_37(EventHandler_1_t1880931879 * value)
	{
		___transformCompletedInvoker_37 = value;
		Il2CppCodeGenWriteBarrier(&___transformCompletedInvoker_37, value);
	}

	inline static int32_t get_offset_of_screenTransformPixelThreshold_38() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenTransformPixelThreshold_38)); }
	inline float get_screenTransformPixelThreshold_38() const { return ___screenTransformPixelThreshold_38; }
	inline float* get_address_of_screenTransformPixelThreshold_38() { return &___screenTransformPixelThreshold_38; }
	inline void set_screenTransformPixelThreshold_38(float value)
	{
		___screenTransformPixelThreshold_38 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThresholdSquared_39() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenTransformPixelThresholdSquared_39)); }
	inline float get_screenTransformPixelThresholdSquared_39() const { return ___screenTransformPixelThresholdSquared_39; }
	inline float* get_address_of_screenTransformPixelThresholdSquared_39() { return &___screenTransformPixelThresholdSquared_39; }
	inline void set_screenTransformPixelThresholdSquared_39(float value)
	{
		___screenTransformPixelThresholdSquared_39 = value;
	}

	inline static int32_t get_offset_of_cachedCollider_40() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___cachedCollider_40)); }
	inline Collider_t3497673348 * get_cachedCollider_40() const { return ___cachedCollider_40; }
	inline Collider_t3497673348 ** get_address_of_cachedCollider_40() { return &___cachedCollider_40; }
	inline void set_cachedCollider_40(Collider_t3497673348 * value)
	{
		___cachedCollider_40 = value;
		Il2CppCodeGenWriteBarrier(&___cachedCollider_40, value);
	}

	inline static int32_t get_offset_of_deltaRotation_41() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___deltaRotation_41)); }
	inline float get_deltaRotation_41() const { return ___deltaRotation_41; }
	inline float* get_address_of_deltaRotation_41() { return &___deltaRotation_41; }
	inline void set_deltaRotation_41(float value)
	{
		___deltaRotation_41 = value;
	}

	inline static int32_t get_offset_of_deltaScale_42() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___deltaScale_42)); }
	inline float get_deltaScale_42() const { return ___deltaScale_42; }
	inline float* get_address_of_deltaScale_42() { return &___deltaScale_42; }
	inline void set_deltaScale_42(float value)
	{
		___deltaScale_42 = value;
	}

	inline static int32_t get_offset_of_screenPixelTranslationBuffer_43() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenPixelTranslationBuffer_43)); }
	inline Vector2_t2243707579  get_screenPixelTranslationBuffer_43() const { return ___screenPixelTranslationBuffer_43; }
	inline Vector2_t2243707579 * get_address_of_screenPixelTranslationBuffer_43() { return &___screenPixelTranslationBuffer_43; }
	inline void set_screenPixelTranslationBuffer_43(Vector2_t2243707579  value)
	{
		___screenPixelTranslationBuffer_43 = value;
	}

	inline static int32_t get_offset_of_screenPixelRotationBuffer_44() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenPixelRotationBuffer_44)); }
	inline float get_screenPixelRotationBuffer_44() const { return ___screenPixelRotationBuffer_44; }
	inline float* get_address_of_screenPixelRotationBuffer_44() { return &___screenPixelRotationBuffer_44; }
	inline void set_screenPixelRotationBuffer_44(float value)
	{
		___screenPixelRotationBuffer_44 = value;
	}

	inline static int32_t get_offset_of_angleBuffer_45() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___angleBuffer_45)); }
	inline float get_angleBuffer_45() const { return ___angleBuffer_45; }
	inline float* get_address_of_angleBuffer_45() { return &___angleBuffer_45; }
	inline void set_angleBuffer_45(float value)
	{
		___angleBuffer_45 = value;
	}

	inline static int32_t get_offset_of_screenPixelScalingBuffer_46() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenPixelScalingBuffer_46)); }
	inline float get_screenPixelScalingBuffer_46() const { return ___screenPixelScalingBuffer_46; }
	inline float* get_address_of_screenPixelScalingBuffer_46() { return &___screenPixelScalingBuffer_46; }
	inline void set_screenPixelScalingBuffer_46(float value)
	{
		___screenPixelScalingBuffer_46 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_47() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___scaleBuffer_47)); }
	inline float get_scaleBuffer_47() const { return ___scaleBuffer_47; }
	inline float* get_address_of_scaleBuffer_47() { return &___scaleBuffer_47; }
	inline void set_scaleBuffer_47(float value)
	{
		___scaleBuffer_47 = value;
	}

	inline static int32_t get_offset_of_isTransforming_48() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___isTransforming_48)); }
	inline bool get_isTransforming_48() const { return ___isTransforming_48; }
	inline bool* get_address_of_isTransforming_48() { return &___isTransforming_48; }
	inline void set_isTransforming_48(bool value)
	{
		___isTransforming_48 = value;
	}

	inline static int32_t get_offset_of_type_49() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___type_49)); }
	inline int32_t get_type_49() const { return ___type_49; }
	inline int32_t* get_address_of_type_49() { return &___type_49; }
	inline void set_type_49(int32_t value)
	{
		___type_49 = value;
	}

	inline static int32_t get_offset_of_screenTransformThreshold_50() { return static_cast<int32_t>(offsetof(PinnedTrasformGestureBase_t3366405746, ___screenTransformThreshold_50)); }
	inline float get_screenTransformThreshold_50() const { return ___screenTransformThreshold_50; }
	inline float* get_address_of_screenTransformThreshold_50() { return &___screenTransformThreshold_50; }
	inline void set_screenTransformThreshold_50(float value)
	{
		___screenTransformThreshold_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
