#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioTableBonuses
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioTableBonuses"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TiersFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tiers_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& tiers_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138D35C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138D3C0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D4E0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D638))(this);
	}
	template <typename T = void*> T get_Tiers() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D694))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D69C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D70C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D798))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D7C4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D828))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioTableBonuses*))(Il2CppBase() + 0x138D8C8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D958))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioTableBonuses*, uintptr_t))(Il2CppBase() + 0x138D9D0))(this, input);
	}

};

}
