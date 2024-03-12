#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapClanSaveDataType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapClanSaveDataType"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PVEFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_pVE_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& pVE_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& TimeLocationResetFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_timeLocationReset_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> T& timeLocationReset_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D5EB8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x12D5F1C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D603C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6214))(this);
	}
	template <typename T = void*> T get_PVE() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6270))(this);
	}
	template <typename T = void*> T get_TimeLocationReset() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6278))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D6280))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D62F0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D63A8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6400))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D6464))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6538))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D6610))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D66B0))(this, input);
	}

};

}
