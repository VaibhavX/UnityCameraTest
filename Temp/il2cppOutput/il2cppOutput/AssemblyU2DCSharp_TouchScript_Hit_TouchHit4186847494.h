#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_TouchScript_Hit_TouchHit_TouchHi1472696400.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_RaycastHit2D4063908774.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResul21186376.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Hit.TouchHit
struct  TouchHit_t4186847494 
{
public:
	// TouchScript.Hit.TouchHit/TouchHitType TouchScript.Hit.TouchHit::type
	int32_t ___type_0;
	// UnityEngine.Transform TouchScript.Hit.TouchHit::transform
	Transform_t3275118058 * ___transform_1;
	// UnityEngine.RaycastHit TouchScript.Hit.TouchHit::raycastHit
	RaycastHit_t87180320  ___raycastHit_2;
	// UnityEngine.RaycastHit2D TouchScript.Hit.TouchHit::raycastHit2D
	RaycastHit2D_t4063908774  ___raycastHit2D_3;
	// UnityEngine.EventSystems.RaycastResult TouchScript.Hit.TouchHit::raycastResult
	RaycastResult_t21186376  ___raycastResult_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TouchHit_t4186847494, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(TouchHit_t4186847494, ___transform_1)); }
	inline Transform_t3275118058 * get_transform_1() const { return ___transform_1; }
	inline Transform_t3275118058 ** get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Transform_t3275118058 * value)
	{
		___transform_1 = value;
		Il2CppCodeGenWriteBarrier(&___transform_1, value);
	}

	inline static int32_t get_offset_of_raycastHit_2() { return static_cast<int32_t>(offsetof(TouchHit_t4186847494, ___raycastHit_2)); }
	inline RaycastHit_t87180320  get_raycastHit_2() const { return ___raycastHit_2; }
	inline RaycastHit_t87180320 * get_address_of_raycastHit_2() { return &___raycastHit_2; }
	inline void set_raycastHit_2(RaycastHit_t87180320  value)
	{
		___raycastHit_2 = value;
	}

	inline static int32_t get_offset_of_raycastHit2D_3() { return static_cast<int32_t>(offsetof(TouchHit_t4186847494, ___raycastHit2D_3)); }
	inline RaycastHit2D_t4063908774  get_raycastHit2D_3() const { return ___raycastHit2D_3; }
	inline RaycastHit2D_t4063908774 * get_address_of_raycastHit2D_3() { return &___raycastHit2D_3; }
	inline void set_raycastHit2D_3(RaycastHit2D_t4063908774  value)
	{
		___raycastHit2D_3 = value;
	}

	inline static int32_t get_offset_of_raycastResult_4() { return static_cast<int32_t>(offsetof(TouchHit_t4186847494, ___raycastResult_4)); }
	inline RaycastResult_t21186376  get_raycastResult_4() const { return ___raycastResult_4; }
	inline RaycastResult_t21186376 * get_address_of_raycastResult_4() { return &___raycastResult_4; }
	inline void set_raycastResult_4(RaycastResult_t21186376  value)
	{
		___raycastResult_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of TouchScript.Hit.TouchHit
struct TouchHit_t4186847494_marshaled_pinvoke
{
	int32_t ___type_0;
	Transform_t3275118058 * ___transform_1;
	RaycastHit_t87180320_marshaled_pinvoke ___raycastHit_2;
	RaycastHit2D_t4063908774_marshaled_pinvoke ___raycastHit2D_3;
	RaycastResult_t21186376_marshaled_pinvoke ___raycastResult_4;
};
// Native definition for COM marshalling of TouchScript.Hit.TouchHit
struct TouchHit_t4186847494_marshaled_com
{
	int32_t ___type_0;
	Transform_t3275118058 * ___transform_1;
	RaycastHit_t87180320_marshaled_com ___raycastHit_2;
	RaycastHit2D_t4063908774_marshaled_com ___raycastHit2D_3;
	RaycastResult_t21186376_marshaled_com ___raycastResult_4;
};
