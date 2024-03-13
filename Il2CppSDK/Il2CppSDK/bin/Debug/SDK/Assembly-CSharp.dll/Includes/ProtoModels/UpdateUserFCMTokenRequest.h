#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateUserFCMTokenRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateUserFCMTokenRequest"));
	}

	template <typename T = MessageParser1UpdateUserFCMTokenRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& ServerIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& serverID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NewFCMTokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& newFCMToken_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1UpdateUserFCMTokenRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1540BA4))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1540C08))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540D28))(this);
	}
	template <typename T = UpdateUserFCMTokenRequest*> T Clone() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E24))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E80))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(UpdateUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1540E88))(this, value);
	}
	template <typename T = int64_t> T get_ServerID() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540E90))(this);
	}
	template <typename T = void> T set_ServerID(int64_t value) {
		return ((T (*)(UpdateUserFCMTokenRequest*, int64_t))(Il2CppBase() + 0x1540E98))(this, value);
	}
	template <typename T = Il2CppString*> T get_NewFCMToken() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540EA0))(this);
	}
	template <typename T = void> T set_NewFCMToken(Il2CppString* value) {
		return ((T (*)(UpdateUserFCMTokenRequest*, Il2CppString*))(Il2CppBase() + 0x1540EA8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UpdateUserFCMTokenRequest*, Il2CppObject*))(Il2CppBase() + 0x1540F28))(this, other);
	}
	template <typename T = bool> T Equals_1(UpdateUserFCMTokenRequest* other) {
		return ((T (*)(UpdateUserFCMTokenRequest*, UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540F98))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x1540FFC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x154108C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdateUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x15410F0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x15411A8))(this);
	}
	template <typename T = void> T MergeFrom(UpdateUserFCMTokenRequest* other) {
		return ((T (*)(UpdateUserFCMTokenRequest*, UpdateUserFCMTokenRequest*))(Il2CppBase() + 0x15412AC))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdateUserFCMTokenRequest*, uintptr_t))(Il2CppBase() + 0x15412EC))(this, input);
	}

};

}
