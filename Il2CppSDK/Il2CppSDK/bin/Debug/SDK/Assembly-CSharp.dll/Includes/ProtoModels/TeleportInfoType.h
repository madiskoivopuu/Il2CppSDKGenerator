#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TeleportInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TeleportInfoType"));
	}

	 static MessageParser1ProtoModels::TeleportInfoType*>*& _parser() {
		return *(MessageParser1ProtoModels::TeleportInfoType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& FromFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& from_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ToFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& to_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::TeleportInfoType*>* get_Parser() {
		return ((MessageParser1ProtoModels::TeleportInfoType*>* (*)(void *))(Il2CppBase() + 0x16AD984))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x16AD9E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADB08))(this);
	}
	template <typename R = ProtoModels::TeleportInfoType*> R Clone() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADBB0))(this);
	}
	template <typename R = int64_t> R get_From() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC0C))(this);
	}
	template <typename R = void> R set_From(int64_t value) {
		return ((R (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC14))(this, value);
	}
	template <typename R = int64_t> R get_To() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC1C))(this);
	}
	template <typename R = void> R set_To(int64_t value) {
		return ((R (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC24))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC2C))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC34))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(TeleportInfoType*, Il2CppObject*))(Il2CppBase() + 0x16ADC3C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::TeleportInfoType* other) {
		return ((R (*)(TeleportInfoType*, ProtoModels::TeleportInfoType*))(Il2CppBase() + 0x16ADCE8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADD38))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADDC0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(TeleportInfoType*, uintptr_t))(Il2CppBase() + 0x16ADE24))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADED4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::TeleportInfoType* other) {
		return ((R (*)(TeleportInfoType*, ProtoModels::TeleportInfoType*))(Il2CppBase() + 0x16ADFCC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(TeleportInfoType*, uintptr_t))(Il2CppBase() + 0x16ADFF8))(this, input);
	}

};

}
