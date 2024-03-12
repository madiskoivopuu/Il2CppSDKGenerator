#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LongSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LongSet"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ValuesFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _repeated_values_codec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> T& values_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1732704))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1732768))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x1732888))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x17329E0))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x1732A3C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732A44))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732AB4))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x1732B40))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x1732B6C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732BD0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LongSet*))(Il2CppBase() + 0x1732C70))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732D00))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LongSet*, uintptr_t))(Il2CppBase() + 0x1732D78))(this, input);
	}

};

}
