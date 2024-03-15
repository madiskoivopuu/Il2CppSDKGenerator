#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateUserFCMTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateUserFCMTokenRequest"));
	}

	 static MessageParser1ProtoModels::UpdateUserFCMTokenRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::UpdateUserFCMTokenRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ServerIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& serverID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NewFCMTokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& newFCMToken_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::UpdateUserFCMTokenRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::UpdateUserFCMTokenRequest*>* (*)(void *))(Il2CppBase() + 0x1540BA4))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1540C08))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540D28))(this);
	}
	template <typename R = ProtoModels::UpdateUserFCMTokenRequest*> R Clone() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E24))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E80))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(UpdateUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1540E88))(this, value);
	}
	template <typename R = int64_t> R get_ServerID() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E90))(this);
	}
	template <typename R = void> R set_ServerID(int64_t value) {
		return ((R (*)(UpdateUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1540E98))(this, value);
	}
	template <typename R = Il2CppString*> R get_NewFCMToken() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540EA0))(this);
	}
	template <typename R = void> R set_NewFCMToken(Il2CppString* value) {
		return ((R (*)(UpdateUserFCMTokenRequest*, Il2CppString*))(Il2CppBase() + 0x1540EA8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdateUserFCMTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1540F28))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdateUserFCMTokenRequest* other) {
		return ((R (*)(UpdateUserFCMTokenRequest*, ProtoModels::UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540F98))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540FFC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x154108C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdateUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x15410F0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x15411A8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdateUserFCMTokenRequest* other) {
		return ((R (*)(UpdateUserFCMTokenRequest*, ProtoModels::UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x15412AC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdateUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x15412EC))(this, input);
	}

};

}
