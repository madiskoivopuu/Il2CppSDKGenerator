#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class RatioBonus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "RatioBonus"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ItemFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& item_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& count_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x138A69C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x138A700))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138A820))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138A918))(this);
	}
	template <typename T = Il2CppString*> T get_Item() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138A974))(this);
	}
	template <typename T = void> T set_Item(Il2CppString* value) {
		return ((T (*)(RatioBonus*, Il2CppString*))(Il2CppBase() + 0x138A97C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138A9FC))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(RatioBonus*, int32_t))(Il2CppBase() + 0x138AA04))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138AA0C))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138AA7C))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138AADC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138AB50))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138ABB4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(RatioBonus*))(Il2CppBase() + 0x138AC40))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138AD08))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(RatioBonus*, uintptr_t))(Il2CppBase() + 0x138AD54))(this, input);
	}

};

}
