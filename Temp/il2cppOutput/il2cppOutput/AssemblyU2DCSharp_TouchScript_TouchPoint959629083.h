#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharp_TouchScript_Hit_TouchHit4186847494.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t2635439978;
// TouchScript.InputSources.IInputSource
struct IInputSource_t3266560338;
// TouchScript.Tags
struct Tags_t1265380163;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t309261261;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.TouchPoint
struct  TouchPoint_t959629083  : public Il2CppObject
{
public:
	// System.Int32 TouchScript.TouchPoint::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_0;
	// UnityEngine.Transform TouchScript.TouchPoint::<Target>k__BackingField
	Transform_t3275118058 * ___U3CTargetU3Ek__BackingField_1;
	// UnityEngine.Vector2 TouchScript.TouchPoint::<PreviousPosition>k__BackingField
	Vector2_t2243707579  ___U3CPreviousPositionU3Ek__BackingField_2;
	// TouchScript.Hit.TouchHit TouchScript.TouchPoint::<Hit>k__BackingField
	TouchHit_t4186847494  ___U3CHitU3Ek__BackingField_3;
	// TouchScript.Layers.TouchLayer TouchScript.TouchPoint::<Layer>k__BackingField
	TouchLayer_t2635439978 * ___U3CLayerU3Ek__BackingField_4;
	// TouchScript.InputSources.IInputSource TouchScript.TouchPoint::<InputSource>k__BackingField
	Il2CppObject * ___U3CInputSourceU3Ek__BackingField_5;
	// TouchScript.Tags TouchScript.TouchPoint::<Tags>k__BackingField
	Tags_t1265380163 * ___U3CTagsU3Ek__BackingField_6;
	// System.Int32 TouchScript.TouchPoint::refCount
	int32_t ___refCount_7;
	// UnityEngine.Vector2 TouchScript.TouchPoint::position
	Vector2_t2243707579  ___position_8;
	// UnityEngine.Vector2 TouchScript.TouchPoint::newPosition
	Vector2_t2243707579  ___newPosition_9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TouchScript.TouchPoint::properties
	Dictionary_2_t309261261 * ___properties_10;

public:
	inline static int32_t get_offset_of_U3CIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CIdU3Ek__BackingField_0)); }
	inline int32_t get_U3CIdU3Ek__BackingField_0() const { return ___U3CIdU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIdU3Ek__BackingField_0() { return &___U3CIdU3Ek__BackingField_0; }
	inline void set_U3CIdU3Ek__BackingField_0(int32_t value)
	{
		___U3CIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CTargetU3Ek__BackingField_1)); }
	inline Transform_t3275118058 * get_U3CTargetU3Ek__BackingField_1() const { return ___U3CTargetU3Ek__BackingField_1; }
	inline Transform_t3275118058 ** get_address_of_U3CTargetU3Ek__BackingField_1() { return &___U3CTargetU3Ek__BackingField_1; }
	inline void set_U3CTargetU3Ek__BackingField_1(Transform_t3275118058 * value)
	{
		___U3CTargetU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CPreviousPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CPreviousPositionU3Ek__BackingField_2)); }
	inline Vector2_t2243707579  get_U3CPreviousPositionU3Ek__BackingField_2() const { return ___U3CPreviousPositionU3Ek__BackingField_2; }
	inline Vector2_t2243707579 * get_address_of_U3CPreviousPositionU3Ek__BackingField_2() { return &___U3CPreviousPositionU3Ek__BackingField_2; }
	inline void set_U3CPreviousPositionU3Ek__BackingField_2(Vector2_t2243707579  value)
	{
		___U3CPreviousPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CHitU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CHitU3Ek__BackingField_3)); }
	inline TouchHit_t4186847494  get_U3CHitU3Ek__BackingField_3() const { return ___U3CHitU3Ek__BackingField_3; }
	inline TouchHit_t4186847494 * get_address_of_U3CHitU3Ek__BackingField_3() { return &___U3CHitU3Ek__BackingField_3; }
	inline void set_U3CHitU3Ek__BackingField_3(TouchHit_t4186847494  value)
	{
		___U3CHitU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CLayerU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CLayerU3Ek__BackingField_4)); }
	inline TouchLayer_t2635439978 * get_U3CLayerU3Ek__BackingField_4() const { return ___U3CLayerU3Ek__BackingField_4; }
	inline TouchLayer_t2635439978 ** get_address_of_U3CLayerU3Ek__BackingField_4() { return &___U3CLayerU3Ek__BackingField_4; }
	inline void set_U3CLayerU3Ek__BackingField_4(TouchLayer_t2635439978 * value)
	{
		___U3CLayerU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CLayerU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CInputSourceU3Ek__BackingField_5)); }
	inline Il2CppObject * get_U3CInputSourceU3Ek__BackingField_5() const { return ___U3CInputSourceU3Ek__BackingField_5; }
	inline Il2CppObject ** get_address_of_U3CInputSourceU3Ek__BackingField_5() { return &___U3CInputSourceU3Ek__BackingField_5; }
	inline void set_U3CInputSourceU3Ek__BackingField_5(Il2CppObject * value)
	{
		___U3CInputSourceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInputSourceU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CTagsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___U3CTagsU3Ek__BackingField_6)); }
	inline Tags_t1265380163 * get_U3CTagsU3Ek__BackingField_6() const { return ___U3CTagsU3Ek__BackingField_6; }
	inline Tags_t1265380163 ** get_address_of_U3CTagsU3Ek__BackingField_6() { return &___U3CTagsU3Ek__BackingField_6; }
	inline void set_U3CTagsU3Ek__BackingField_6(Tags_t1265380163 * value)
	{
		___U3CTagsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTagsU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_refCount_7() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___refCount_7)); }
	inline int32_t get_refCount_7() const { return ___refCount_7; }
	inline int32_t* get_address_of_refCount_7() { return &___refCount_7; }
	inline void set_refCount_7(int32_t value)
	{
		___refCount_7 = value;
	}

	inline static int32_t get_offset_of_position_8() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___position_8)); }
	inline Vector2_t2243707579  get_position_8() const { return ___position_8; }
	inline Vector2_t2243707579 * get_address_of_position_8() { return &___position_8; }
	inline void set_position_8(Vector2_t2243707579  value)
	{
		___position_8 = value;
	}

	inline static int32_t get_offset_of_newPosition_9() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___newPosition_9)); }
	inline Vector2_t2243707579  get_newPosition_9() const { return ___newPosition_9; }
	inline Vector2_t2243707579 * get_address_of_newPosition_9() { return &___newPosition_9; }
	inline void set_newPosition_9(Vector2_t2243707579  value)
	{
		___newPosition_9 = value;
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(TouchPoint_t959629083, ___properties_10)); }
	inline Dictionary_2_t309261261 * get_properties_10() const { return ___properties_10; }
	inline Dictionary_2_t309261261 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(Dictionary_2_t309261261 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier(&___properties_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
