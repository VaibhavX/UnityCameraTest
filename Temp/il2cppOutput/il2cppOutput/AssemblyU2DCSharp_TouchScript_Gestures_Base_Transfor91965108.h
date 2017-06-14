#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_Gestures_Gesture2352305985.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_TouchScript_Gestures_Base_Transfor94296928.h"

// System.String
struct String_t;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Gestures.Base.TransformGestureBase
struct  TransformGestureBase_t91965108  : public Gesture_t2352305985
{
public:
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformStartedInvoker
	EventHandler_1_t1880931879 * ___transformStartedInvoker_35;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformedInvoker
	EventHandler_1_t1880931879 * ___transformedInvoker_36;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Base.TransformGestureBase::transformCompletedInvoker
	EventHandler_1_t1880931879 * ___transformCompletedInvoker_37;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsPixelDistance
	float ___minScreenPointsPixelDistance_38;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsPixelDistanceSquared
	float ___minScreenPointsPixelDistanceSquared_39;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_40;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_41;
	// UnityEngine.Vector3 TouchScript.Gestures.Base.TransformGestureBase::deltaPosition
	Vector3_t2243707580  ___deltaPosition_42;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::deltaRotation
	float ___deltaRotation_43;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::deltaScale
	float ___deltaScale_44;
	// UnityEngine.Vector2 TouchScript.Gestures.Base.TransformGestureBase::screenPixelTranslationBuffer
	Vector2_t2243707579  ___screenPixelTranslationBuffer_45;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_46;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::angleBuffer
	float ___angleBuffer_47;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_48;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::scaleBuffer
	float ___scaleBuffer_49;
	// System.Boolean TouchScript.Gestures.Base.TransformGestureBase::isTransforming
	bool ___isTransforming_50;
	// TouchScript.Gestures.Base.TransformGestureBase/TransformType TouchScript.Gestures.Base.TransformGestureBase::type
	int32_t ___type_51;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::minScreenPointsDistance
	float ___minScreenPointsDistance_52;
	// System.Single TouchScript.Gestures.Base.TransformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_53;

public:
	inline static int32_t get_offset_of_transformStartedInvoker_35() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___transformStartedInvoker_35)); }
	inline EventHandler_1_t1880931879 * get_transformStartedInvoker_35() const { return ___transformStartedInvoker_35; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformStartedInvoker_35() { return &___transformStartedInvoker_35; }
	inline void set_transformStartedInvoker_35(EventHandler_1_t1880931879 * value)
	{
		___transformStartedInvoker_35 = value;
		Il2CppCodeGenWriteBarrier(&___transformStartedInvoker_35, value);
	}

	inline static int32_t get_offset_of_transformedInvoker_36() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___transformedInvoker_36)); }
	inline EventHandler_1_t1880931879 * get_transformedInvoker_36() const { return ___transformedInvoker_36; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformedInvoker_36() { return &___transformedInvoker_36; }
	inline void set_transformedInvoker_36(EventHandler_1_t1880931879 * value)
	{
		___transformedInvoker_36 = value;
		Il2CppCodeGenWriteBarrier(&___transformedInvoker_36, value);
	}

	inline static int32_t get_offset_of_transformCompletedInvoker_37() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___transformCompletedInvoker_37)); }
	inline EventHandler_1_t1880931879 * get_transformCompletedInvoker_37() const { return ___transformCompletedInvoker_37; }
	inline EventHandler_1_t1880931879 ** get_address_of_transformCompletedInvoker_37() { return &___transformCompletedInvoker_37; }
	inline void set_transformCompletedInvoker_37(EventHandler_1_t1880931879 * value)
	{
		___transformCompletedInvoker_37 = value;
		Il2CppCodeGenWriteBarrier(&___transformCompletedInvoker_37, value);
	}

	inline static int32_t get_offset_of_minScreenPointsPixelDistance_38() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___minScreenPointsPixelDistance_38)); }
	inline float get_minScreenPointsPixelDistance_38() const { return ___minScreenPointsPixelDistance_38; }
	inline float* get_address_of_minScreenPointsPixelDistance_38() { return &___minScreenPointsPixelDistance_38; }
	inline void set_minScreenPointsPixelDistance_38(float value)
	{
		___minScreenPointsPixelDistance_38 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsPixelDistanceSquared_39() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___minScreenPointsPixelDistanceSquared_39)); }
	inline float get_minScreenPointsPixelDistanceSquared_39() const { return ___minScreenPointsPixelDistanceSquared_39; }
	inline float* get_address_of_minScreenPointsPixelDistanceSquared_39() { return &___minScreenPointsPixelDistanceSquared_39; }
	inline void set_minScreenPointsPixelDistanceSquared_39(float value)
	{
		___minScreenPointsPixelDistanceSquared_39 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThreshold_40() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenTransformPixelThreshold_40)); }
	inline float get_screenTransformPixelThreshold_40() const { return ___screenTransformPixelThreshold_40; }
	inline float* get_address_of_screenTransformPixelThreshold_40() { return &___screenTransformPixelThreshold_40; }
	inline void set_screenTransformPixelThreshold_40(float value)
	{
		___screenTransformPixelThreshold_40 = value;
	}

	inline static int32_t get_offset_of_screenTransformPixelThresholdSquared_41() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenTransformPixelThresholdSquared_41)); }
	inline float get_screenTransformPixelThresholdSquared_41() const { return ___screenTransformPixelThresholdSquared_41; }
	inline float* get_address_of_screenTransformPixelThresholdSquared_41() { return &___screenTransformPixelThresholdSquared_41; }
	inline void set_screenTransformPixelThresholdSquared_41(float value)
	{
		___screenTransformPixelThresholdSquared_41 = value;
	}

	inline static int32_t get_offset_of_deltaPosition_42() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___deltaPosition_42)); }
	inline Vector3_t2243707580  get_deltaPosition_42() const { return ___deltaPosition_42; }
	inline Vector3_t2243707580 * get_address_of_deltaPosition_42() { return &___deltaPosition_42; }
	inline void set_deltaPosition_42(Vector3_t2243707580  value)
	{
		___deltaPosition_42 = value;
	}

	inline static int32_t get_offset_of_deltaRotation_43() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___deltaRotation_43)); }
	inline float get_deltaRotation_43() const { return ___deltaRotation_43; }
	inline float* get_address_of_deltaRotation_43() { return &___deltaRotation_43; }
	inline void set_deltaRotation_43(float value)
	{
		___deltaRotation_43 = value;
	}

	inline static int32_t get_offset_of_deltaScale_44() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___deltaScale_44)); }
	inline float get_deltaScale_44() const { return ___deltaScale_44; }
	inline float* get_address_of_deltaScale_44() { return &___deltaScale_44; }
	inline void set_deltaScale_44(float value)
	{
		___deltaScale_44 = value;
	}

	inline static int32_t get_offset_of_screenPixelTranslationBuffer_45() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenPixelTranslationBuffer_45)); }
	inline Vector2_t2243707579  get_screenPixelTranslationBuffer_45() const { return ___screenPixelTranslationBuffer_45; }
	inline Vector2_t2243707579 * get_address_of_screenPixelTranslationBuffer_45() { return &___screenPixelTranslationBuffer_45; }
	inline void set_screenPixelTranslationBuffer_45(Vector2_t2243707579  value)
	{
		___screenPixelTranslationBuffer_45 = value;
	}

	inline static int32_t get_offset_of_screenPixelRotationBuffer_46() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenPixelRotationBuffer_46)); }
	inline float get_screenPixelRotationBuffer_46() const { return ___screenPixelRotationBuffer_46; }
	inline float* get_address_of_screenPixelRotationBuffer_46() { return &___screenPixelRotationBuffer_46; }
	inline void set_screenPixelRotationBuffer_46(float value)
	{
		___screenPixelRotationBuffer_46 = value;
	}

	inline static int32_t get_offset_of_angleBuffer_47() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___angleBuffer_47)); }
	inline float get_angleBuffer_47() const { return ___angleBuffer_47; }
	inline float* get_address_of_angleBuffer_47() { return &___angleBuffer_47; }
	inline void set_angleBuffer_47(float value)
	{
		___angleBuffer_47 = value;
	}

	inline static int32_t get_offset_of_screenPixelScalingBuffer_48() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenPixelScalingBuffer_48)); }
	inline float get_screenPixelScalingBuffer_48() const { return ___screenPixelScalingBuffer_48; }
	inline float* get_address_of_screenPixelScalingBuffer_48() { return &___screenPixelScalingBuffer_48; }
	inline void set_screenPixelScalingBuffer_48(float value)
	{
		___screenPixelScalingBuffer_48 = value;
	}

	inline static int32_t get_offset_of_scaleBuffer_49() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___scaleBuffer_49)); }
	inline float get_scaleBuffer_49() const { return ___scaleBuffer_49; }
	inline float* get_address_of_scaleBuffer_49() { return &___scaleBuffer_49; }
	inline void set_scaleBuffer_49(float value)
	{
		___scaleBuffer_49 = value;
	}

	inline static int32_t get_offset_of_isTransforming_50() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___isTransforming_50)); }
	inline bool get_isTransforming_50() const { return ___isTransforming_50; }
	inline bool* get_address_of_isTransforming_50() { return &___isTransforming_50; }
	inline void set_isTransforming_50(bool value)
	{
		___isTransforming_50 = value;
	}

	inline static int32_t get_offset_of_type_51() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___type_51)); }
	inline int32_t get_type_51() const { return ___type_51; }
	inline int32_t* get_address_of_type_51() { return &___type_51; }
	inline void set_type_51(int32_t value)
	{
		___type_51 = value;
	}

	inline static int32_t get_offset_of_minScreenPointsDistance_52() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___minScreenPointsDistance_52)); }
	inline float get_minScreenPointsDistance_52() const { return ___minScreenPointsDistance_52; }
	inline float* get_address_of_minScreenPointsDistance_52() { return &___minScreenPointsDistance_52; }
	inline void set_minScreenPointsDistance_52(float value)
	{
		___minScreenPointsDistance_52 = value;
	}

	inline static int32_t get_offset_of_screenTransformThreshold_53() { return static_cast<int32_t>(offsetof(TransformGestureBase_t91965108, ___screenTransformThreshold_53)); }
	inline float get_screenTransformThreshold_53() const { return ___screenTransformThreshold_53; }
	inline float* get_address_of_screenTransformThreshold_53() { return &___screenTransformThreshold_53; }
	inline void set_screenTransformThreshold_53(float value)
	{
		___screenTransformThreshold_53 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
