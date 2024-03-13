#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TeleportInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TeleportInfoType"));
	}

	template <typename T = MessageParser1TeleportInfoType*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& FromFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& from_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ToFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& to_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1TeleportInfoType*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AD984))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AD9E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADB08))(this);
	}
	template <typename T = TeleportInfoType*> T Clone() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADBB0))(this);
	}
	template <typename T = int64_t> T get_From() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC0C))(this);
	}
	template <typename T = void> T set_From(int64_t value) {
		return ((T (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC14))(this, value);
	}
	template <typename T = int64_t> T get_To() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC1C))(this);
	}
	template <typename T = void> T set_To(int64_t value) {
		return ((T (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC24))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADC2C))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(TeleportInfoType*, int64_t))(Il2CppBase() + 0x16ADC34))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(TeleportInfoType*, Il2CppObject*))(Il2CppBase() + 0x16ADC3C))(this, other);
	}
	template <typename T = bool> T Equals_1(TeleportInfoType* other) {
		return ((T (*)(TeleportInfoType*, TeleportInfoType*))(Il2CppBase() + 0x16ADCE8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADD38))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADDC0))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(TeleportInfoType*, uintptr_t))(Il2CppBase() + 0x16ADE24))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(TeleportInfoType*))(Il2CppBase() + 0x16ADED4))(this);
	}
	template <typename T = void> T MergeFrom(TeleportInfoType* other) {
		return ((T (*)(TeleportInfoType*, TeleportInfoType*))(Il2CppBase() + 0x16ADFCC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(TeleportInfoType*, uintptr_t))(Il2CppBase() + 0x16ADFF8))(this, input);
	}

};

}
