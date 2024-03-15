#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlayerDistrict
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlayerDistrict"));
	}

	 static MessageParser1ProtoModels::PlayerDistrict*>*& _parser() {
		return *(MessageParser1ProtoModels::PlayerDistrict*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& LevelFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& level_() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 static MessageParser1ProtoModels::PlayerDistrict*>* get_Parser() {
		return ((MessageParser1ProtoModels::PlayerDistrict*>* (*)(void *))(Il2CppBase() + 0x1563ACC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1563B30))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563C50))(this);
	}
	template <typename R = ProtoModels::PlayerDistrict*> R Clone() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563CE8))(this);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563D54))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(PlayerDistrict*, int32_t))(Il2CppBase() + 0x1563D5C))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PlayerDistrict*, Il2CppObject*))(Il2CppBase() + 0x1563D64))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PlayerDistrict* other) {
		return ((R (*)(PlayerDistrict*, ProtoModels::PlayerDistrict*))(Il2CppBase() + 0x1563DF0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563E20))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563E60))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563EC4))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PlayerDistrict*))(Il2CppBase() + 0x1563F1C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PlayerDistrict* other) {
		return ((R (*)(PlayerDistrict*, ProtoModels::PlayerDistrict*))(Il2CppBase() + 0x1563F98))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PlayerDistrict*, uintptr_t))(Il2CppBase() + 0x1563FAC))(this, input);
	}

};

}
