#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerDistrict
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerDistrict"));
	}

	template <typename T = void*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& LevelFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& level_() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1563ACC))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1563B30))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563C50))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563CE8))(this);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563D54))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(PlayerDistrict*, int32_t))(Il2CppBase() + 0x1563D5C))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563D64))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563DF0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563E20))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563E60))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563EC4))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(PlayerDistrict*))(Il2CppBase() + 0x1563F1C))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563F98))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563FAC))(this, input);
	}

};

}
