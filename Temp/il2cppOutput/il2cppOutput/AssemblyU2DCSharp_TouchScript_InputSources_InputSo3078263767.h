#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_t2162613424;
// TouchScript.TouchManagerInstance
struct TouchManagerInstance_t2629118981;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.InputSource
struct  InputSource_t3078263767  : public MonoBehaviour_t1158329972
{
public:
	// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::<CoordinatesRemapper>k__BackingField
	Il2CppObject * ___U3CCoordinatesRemapperU3Ek__BackingField_2;
	// System.Boolean TouchScript.InputSources.InputSource::advancedProps
	bool ___advancedProps_3;
	// TouchScript.TouchManagerInstance TouchScript.InputSources.InputSource::manager
	TouchManagerInstance_t2629118981 * ___manager_4;

public:
	inline static int32_t get_offset_of_U3CCoordinatesRemapperU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(InputSource_t3078263767, ___U3CCoordinatesRemapperU3Ek__BackingField_2)); }
	inline Il2CppObject * get_U3CCoordinatesRemapperU3Ek__BackingField_2() const { return ___U3CCoordinatesRemapperU3Ek__BackingField_2; }
	inline Il2CppObject ** get_address_of_U3CCoordinatesRemapperU3Ek__BackingField_2() { return &___U3CCoordinatesRemapperU3Ek__BackingField_2; }
	inline void set_U3CCoordinatesRemapperU3Ek__BackingField_2(Il2CppObject * value)
	{
		___U3CCoordinatesRemapperU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCoordinatesRemapperU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_advancedProps_3() { return static_cast<int32_t>(offsetof(InputSource_t3078263767, ___advancedProps_3)); }
	inline bool get_advancedProps_3() const { return ___advancedProps_3; }
	inline bool* get_address_of_advancedProps_3() { return &___advancedProps_3; }
	inline void set_advancedProps_3(bool value)
	{
		___advancedProps_3 = value;
	}

	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(InputSource_t3078263767, ___manager_4)); }
	inline TouchManagerInstance_t2629118981 * get_manager_4() const { return ___manager_4; }
	inline TouchManagerInstance_t2629118981 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(TouchManagerInstance_t2629118981 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier(&___manager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
