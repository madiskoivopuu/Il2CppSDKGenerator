#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginAdminRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginAdminRequest"));
	}

	 static MessageParser1ProtoModels::LoginAdminRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::LoginAdminRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& EmailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& email_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PasswordFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& password_() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::LoginAdminRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::LoginAdminRequest*>* (*)(void *))(Il2CppBase() + 0x1727CD8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1727D3C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727E5C))(this);
	}
	template <typename R = ProtoModels::LoginAdminRequest*> R Clone() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727F68))(this);
	}
	template <typename R = Il2CppString*> R get_Email() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727FC4))(this);
	}
	template <typename R = void> R set_Email(Il2CppString* value) {
		return ((R (*)(LoginAdminRequest*, Il2CppString*))(Il2CppBase() + 0x1727FCC))(this, value);
	}
	template <typename R = Il2CppString*> R get_Password() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x172804C))(this);
	}
	template <typename R = void> R set_Password(Il2CppString* value) {
		return ((R (*)(LoginAdminRequest*, Il2CppString*))(Il2CppBase() + 0x1728054))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LoginAdminRequest*, Il2CppObject*))(Il2CppBase() + 0x17280D4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LoginAdminRequest* other) {
		return ((R (*)(LoginAdminRequest*, ProtoModels::LoginAdminRequest*))(Il2CppBase() + 0x1728144))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x17281AC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x1728218))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LoginAdminRequest*, uintptr_t))(Il2CppBase() + 0x172827C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LoginAdminRequest*))(Il2CppBase() + 0x1728310))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LoginAdminRequest* other) {
		return ((R (*)(LoginAdminRequest*, ProtoModels::LoginAdminRequest*))(Il2CppBase() + 0x17283E0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LoginAdminRequest*, uintptr_t))(Il2CppBase() + 0x1728440))(this, input);
	}

};

}
