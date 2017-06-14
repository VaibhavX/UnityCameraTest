#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_TouchScript_InputSources_InputSo3078263767.h"
#include "AssemblyU2DCSharp_TouchScript_InputSources_TuioInpu948942308.h"

// System.String
struct String_t;
// System.Collections.Generic.List`1<TouchScript.InputSources.TuioObjectMapping>
struct List_1_t3450048260;
// TouchScript.Tags
struct Tags_t1265380163;
// TUIOsharp.TuioServer
struct TuioServer_t595520884;
// TUIOsharp.DataProcessors.CursorProcessor
struct CursorProcessor_t1785954004;
// TUIOsharp.DataProcessors.ObjectProcessor
struct ObjectProcessor_t221569383;
// TUIOsharp.DataProcessors.BlobProcessor
struct BlobProcessor_t3603341577;
// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioCursor,TouchScript.TouchPoint>
struct Dictionary_2_t2117679327;
// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioBlob,TouchScript.TouchPoint>
struct Dictionary_2_t855216920;
// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioObject,TouchScript.TouchPoint>
struct Dictionary_2_t788444728;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchScript.InputSources.TuioInput
struct  TuioInput_t352576185  : public InputSource_t3078263767
{
public:
	// System.Int32 TouchScript.InputSources.TuioInput::tuioPort
	int32_t ___tuioPort_6;
	// TouchScript.InputSources.TuioInput/InputType TouchScript.InputSources.TuioInput::supportedInputs
	int32_t ___supportedInputs_7;
	// System.Collections.Generic.List`1<TouchScript.InputSources.TuioObjectMapping> TouchScript.InputSources.TuioInput::tuioObjectMappings
	List_1_t3450048260 * ___tuioObjectMappings_8;
	// TouchScript.Tags TouchScript.InputSources.TuioInput::cursorTags
	Tags_t1265380163 * ___cursorTags_9;
	// TouchScript.Tags TouchScript.InputSources.TuioInput::blobTags
	Tags_t1265380163 * ___blobTags_10;
	// TouchScript.Tags TouchScript.InputSources.TuioInput::objectTags
	Tags_t1265380163 * ___objectTags_11;
	// TUIOsharp.TuioServer TouchScript.InputSources.TuioInput::server
	TuioServer_t595520884 * ___server_12;
	// TUIOsharp.DataProcessors.CursorProcessor TouchScript.InputSources.TuioInput::cursorProcessor
	CursorProcessor_t1785954004 * ___cursorProcessor_13;
	// TUIOsharp.DataProcessors.ObjectProcessor TouchScript.InputSources.TuioInput::objectProcessor
	ObjectProcessor_t221569383 * ___objectProcessor_14;
	// TUIOsharp.DataProcessors.BlobProcessor TouchScript.InputSources.TuioInput::blobProcessor
	BlobProcessor_t3603341577 * ___blobProcessor_15;
	// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioCursor,TouchScript.TouchPoint> TouchScript.InputSources.TuioInput::cursorToInternalId
	Dictionary_2_t2117679327 * ___cursorToInternalId_16;
	// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioBlob,TouchScript.TouchPoint> TouchScript.InputSources.TuioInput::blobToInternalId
	Dictionary_2_t855216920 * ___blobToInternalId_17;
	// System.Collections.Generic.Dictionary`2<TUIOsharp.Entities.TuioObject,TouchScript.TouchPoint> TouchScript.InputSources.TuioInput::objectToInternalId
	Dictionary_2_t788444728 * ___objectToInternalId_18;
	// System.Int32 TouchScript.InputSources.TuioInput::screenWidth
	int32_t ___screenWidth_19;
	// System.Int32 TouchScript.InputSources.TuioInput::screenHeight
	int32_t ___screenHeight_20;

public:
	inline static int32_t get_offset_of_tuioPort_6() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___tuioPort_6)); }
	inline int32_t get_tuioPort_6() const { return ___tuioPort_6; }
	inline int32_t* get_address_of_tuioPort_6() { return &___tuioPort_6; }
	inline void set_tuioPort_6(int32_t value)
	{
		___tuioPort_6 = value;
	}

	inline static int32_t get_offset_of_supportedInputs_7() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___supportedInputs_7)); }
	inline int32_t get_supportedInputs_7() const { return ___supportedInputs_7; }
	inline int32_t* get_address_of_supportedInputs_7() { return &___supportedInputs_7; }
	inline void set_supportedInputs_7(int32_t value)
	{
		___supportedInputs_7 = value;
	}

	inline static int32_t get_offset_of_tuioObjectMappings_8() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___tuioObjectMappings_8)); }
	inline List_1_t3450048260 * get_tuioObjectMappings_8() const { return ___tuioObjectMappings_8; }
	inline List_1_t3450048260 ** get_address_of_tuioObjectMappings_8() { return &___tuioObjectMappings_8; }
	inline void set_tuioObjectMappings_8(List_1_t3450048260 * value)
	{
		___tuioObjectMappings_8 = value;
		Il2CppCodeGenWriteBarrier(&___tuioObjectMappings_8, value);
	}

	inline static int32_t get_offset_of_cursorTags_9() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___cursorTags_9)); }
	inline Tags_t1265380163 * get_cursorTags_9() const { return ___cursorTags_9; }
	inline Tags_t1265380163 ** get_address_of_cursorTags_9() { return &___cursorTags_9; }
	inline void set_cursorTags_9(Tags_t1265380163 * value)
	{
		___cursorTags_9 = value;
		Il2CppCodeGenWriteBarrier(&___cursorTags_9, value);
	}

	inline static int32_t get_offset_of_blobTags_10() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___blobTags_10)); }
	inline Tags_t1265380163 * get_blobTags_10() const { return ___blobTags_10; }
	inline Tags_t1265380163 ** get_address_of_blobTags_10() { return &___blobTags_10; }
	inline void set_blobTags_10(Tags_t1265380163 * value)
	{
		___blobTags_10 = value;
		Il2CppCodeGenWriteBarrier(&___blobTags_10, value);
	}

	inline static int32_t get_offset_of_objectTags_11() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___objectTags_11)); }
	inline Tags_t1265380163 * get_objectTags_11() const { return ___objectTags_11; }
	inline Tags_t1265380163 ** get_address_of_objectTags_11() { return &___objectTags_11; }
	inline void set_objectTags_11(Tags_t1265380163 * value)
	{
		___objectTags_11 = value;
		Il2CppCodeGenWriteBarrier(&___objectTags_11, value);
	}

	inline static int32_t get_offset_of_server_12() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___server_12)); }
	inline TuioServer_t595520884 * get_server_12() const { return ___server_12; }
	inline TuioServer_t595520884 ** get_address_of_server_12() { return &___server_12; }
	inline void set_server_12(TuioServer_t595520884 * value)
	{
		___server_12 = value;
		Il2CppCodeGenWriteBarrier(&___server_12, value);
	}

	inline static int32_t get_offset_of_cursorProcessor_13() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___cursorProcessor_13)); }
	inline CursorProcessor_t1785954004 * get_cursorProcessor_13() const { return ___cursorProcessor_13; }
	inline CursorProcessor_t1785954004 ** get_address_of_cursorProcessor_13() { return &___cursorProcessor_13; }
	inline void set_cursorProcessor_13(CursorProcessor_t1785954004 * value)
	{
		___cursorProcessor_13 = value;
		Il2CppCodeGenWriteBarrier(&___cursorProcessor_13, value);
	}

	inline static int32_t get_offset_of_objectProcessor_14() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___objectProcessor_14)); }
	inline ObjectProcessor_t221569383 * get_objectProcessor_14() const { return ___objectProcessor_14; }
	inline ObjectProcessor_t221569383 ** get_address_of_objectProcessor_14() { return &___objectProcessor_14; }
	inline void set_objectProcessor_14(ObjectProcessor_t221569383 * value)
	{
		___objectProcessor_14 = value;
		Il2CppCodeGenWriteBarrier(&___objectProcessor_14, value);
	}

	inline static int32_t get_offset_of_blobProcessor_15() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___blobProcessor_15)); }
	inline BlobProcessor_t3603341577 * get_blobProcessor_15() const { return ___blobProcessor_15; }
	inline BlobProcessor_t3603341577 ** get_address_of_blobProcessor_15() { return &___blobProcessor_15; }
	inline void set_blobProcessor_15(BlobProcessor_t3603341577 * value)
	{
		___blobProcessor_15 = value;
		Il2CppCodeGenWriteBarrier(&___blobProcessor_15, value);
	}

	inline static int32_t get_offset_of_cursorToInternalId_16() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___cursorToInternalId_16)); }
	inline Dictionary_2_t2117679327 * get_cursorToInternalId_16() const { return ___cursorToInternalId_16; }
	inline Dictionary_2_t2117679327 ** get_address_of_cursorToInternalId_16() { return &___cursorToInternalId_16; }
	inline void set_cursorToInternalId_16(Dictionary_2_t2117679327 * value)
	{
		___cursorToInternalId_16 = value;
		Il2CppCodeGenWriteBarrier(&___cursorToInternalId_16, value);
	}

	inline static int32_t get_offset_of_blobToInternalId_17() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___blobToInternalId_17)); }
	inline Dictionary_2_t855216920 * get_blobToInternalId_17() const { return ___blobToInternalId_17; }
	inline Dictionary_2_t855216920 ** get_address_of_blobToInternalId_17() { return &___blobToInternalId_17; }
	inline void set_blobToInternalId_17(Dictionary_2_t855216920 * value)
	{
		___blobToInternalId_17 = value;
		Il2CppCodeGenWriteBarrier(&___blobToInternalId_17, value);
	}

	inline static int32_t get_offset_of_objectToInternalId_18() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___objectToInternalId_18)); }
	inline Dictionary_2_t788444728 * get_objectToInternalId_18() const { return ___objectToInternalId_18; }
	inline Dictionary_2_t788444728 ** get_address_of_objectToInternalId_18() { return &___objectToInternalId_18; }
	inline void set_objectToInternalId_18(Dictionary_2_t788444728 * value)
	{
		___objectToInternalId_18 = value;
		Il2CppCodeGenWriteBarrier(&___objectToInternalId_18, value);
	}

	inline static int32_t get_offset_of_screenWidth_19() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___screenWidth_19)); }
	inline int32_t get_screenWidth_19() const { return ___screenWidth_19; }
	inline int32_t* get_address_of_screenWidth_19() { return &___screenWidth_19; }
	inline void set_screenWidth_19(int32_t value)
	{
		___screenWidth_19 = value;
	}

	inline static int32_t get_offset_of_screenHeight_20() { return static_cast<int32_t>(offsetof(TuioInput_t352576185, ___screenHeight_20)); }
	inline int32_t get_screenHeight_20() const { return ___screenHeight_20; }
	inline int32_t* get_address_of_screenHeight_20() { return &___screenHeight_20; }
	inline void set_screenHeight_20(int32_t value)
	{
		___screenHeight_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
