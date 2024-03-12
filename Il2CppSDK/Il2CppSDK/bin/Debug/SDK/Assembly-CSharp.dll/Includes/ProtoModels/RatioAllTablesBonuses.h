#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioAllTablesBonuses
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioAllTablesBonuses"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& TablesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_tables_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& tables_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1389D7C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1389DE0))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x1389F00))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A058))(this);
	}
	template <typename T = void*> T get_Tables() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A0B4))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A0BC))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A12C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A1B8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A1E4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A248))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioAllTablesBonuses*))(Il2CppBase() + 0x138A2E8))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A378))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioAllTablesBonuses*, uintptr_t))(Il2CppBase() + 0x138A3F0))(this, input);
	}

};

}
