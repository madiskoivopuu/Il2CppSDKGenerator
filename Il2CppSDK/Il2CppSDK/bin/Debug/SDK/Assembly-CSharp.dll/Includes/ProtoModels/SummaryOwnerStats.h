#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class SummaryOwnerStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "SummaryOwnerStats"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& OwnerStatFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _map_ownerStat_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& ownerStat_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A2394))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16A23F8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2518))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2670))(this);
	}
	template <typename T = void*> T get_OwnerStat() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A26CC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A26D4))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2744))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A27D0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A27FC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2860))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(SummaryOwnerStats*))(Il2CppBase() + 0x16A2900))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2990))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(SummaryOwnerStats*, uintptr_t))(Il2CppBase() + 0x16A2A08))(this, input);
	}

};

}
