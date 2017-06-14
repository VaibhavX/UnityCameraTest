#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_TouchPhase2458120420.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.InputHandlers.TouchHandler/TouchState
struct  TouchState_t2732082299 
{
public:
	// System.Int32 TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::Id
	int32_t ___Id_0;
	// UnityEngine.TouchPhase TouchScript.InputSources.InputHandlers.TouchHandler/TouchState::Phase
	int32_t ___Phase_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(TouchState_t2732082299, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Phase_1() { return static_cast<int32_t>(offsetof(TouchState_t2732082299, ___Phase_1)); }
	inline int32_t get_Phase_1() const { return ___Phase_1; }
	inline int32_t* get_address_of_Phase_1() { return &___Phase_1; }
	inline void set_Phase_1(int32_t value)
	{
		___Phase_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
