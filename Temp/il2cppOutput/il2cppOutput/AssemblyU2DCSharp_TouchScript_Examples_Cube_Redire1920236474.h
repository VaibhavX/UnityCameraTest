#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_InputSources_InputSo3078263767.h"

// TouchScript.Gestures.MetaGesture
struct MetaGesture_t1110051842;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.Examples.Cube.RedirectInput
struct  RedirectInput_t1920236474  : public InputSource_t3078263767
{
public:
	// System.Int32 TouchScript.Examples.Cube.RedirectInput::Width
	int32_t ___Width_5;
	// System.Int32 TouchScript.Examples.Cube.RedirectInput::Height
	int32_t ___Height_6;
	// TouchScript.Gestures.MetaGesture TouchScript.Examples.Cube.RedirectInput::gesture
	MetaGesture_t1110051842 * ___gesture_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TouchScript.Examples.Cube.RedirectInput::map
	Dictionary_2_t1079703083 * ___map_8;

public:
	inline static int32_t get_offset_of_Width_5() { return static_cast<int32_t>(offsetof(RedirectInput_t1920236474, ___Width_5)); }
	inline int32_t get_Width_5() const { return ___Width_5; }
	inline int32_t* get_address_of_Width_5() { return &___Width_5; }
	inline void set_Width_5(int32_t value)
	{
		___Width_5 = value;
	}

	inline static int32_t get_offset_of_Height_6() { return static_cast<int32_t>(offsetof(RedirectInput_t1920236474, ___Height_6)); }
	inline int32_t get_Height_6() const { return ___Height_6; }
	inline int32_t* get_address_of_Height_6() { return &___Height_6; }
	inline void set_Height_6(int32_t value)
	{
		___Height_6 = value;
	}

	inline static int32_t get_offset_of_gesture_7() { return static_cast<int32_t>(offsetof(RedirectInput_t1920236474, ___gesture_7)); }
	inline MetaGesture_t1110051842 * get_gesture_7() const { return ___gesture_7; }
	inline MetaGesture_t1110051842 ** get_address_of_gesture_7() { return &___gesture_7; }
	inline void set_gesture_7(MetaGesture_t1110051842 * value)
	{
		___gesture_7 = value;
		Il2CppCodeGenWriteBarrier(&___gesture_7, value);
	}

	inline static int32_t get_offset_of_map_8() { return static_cast<int32_t>(offsetof(RedirectInput_t1920236474, ___map_8)); }
	inline Dictionary_2_t1079703083 * get_map_8() const { return ___map_8; }
	inline Dictionary_2_t1079703083 ** get_address_of_map_8() { return &___map_8; }
	inline void set_map_8(Dictionary_2_t1079703083 * value)
	{
		___map_8 = value;
		Il2CppCodeGenWriteBarrier(&___map_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
