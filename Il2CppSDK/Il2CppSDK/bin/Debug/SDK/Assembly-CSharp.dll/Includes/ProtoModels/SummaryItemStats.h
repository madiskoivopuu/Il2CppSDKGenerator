#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SummaryItemStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SummaryItemStats"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& StatFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_stat_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& stat_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A1A9C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A1B00))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1C20))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1D78))(this);
	}
	template <typename T = void*> T get_Stat() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1DD4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A1DDC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A1E4C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1ED8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A1F04))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A1F68))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SummaryItemStats*))(Il2CppBase() + 0x16A2008))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A2098))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SummaryItemStats*, uintptr_t))(Il2CppBase() + 0x16A2110))(this, input);
	}

};

}
