#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginAdminRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginAdminRequest"));
	}

	template <typename T = MessageParser1LoginAdminRequest*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& EmailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& email_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PasswordFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& password_() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = MessageParser1LoginAdminRequest*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1727CD8))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1727D3C))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727E5C))(this);
	}
	template <typename T = LoginAdminRequest*> T Clone() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727F68))(this);
	}
	template <typename T = Il2CppString*> T get_Email() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x1727FC4))(this);
	}
	template <typename T = void> T set_Email(Il2CppString* value) {
		return ((T (*)(LoginAdminRequest*, Il2CppString*))(Il2CppBase() + 0x1727FCC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Password() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x172804C))(this);
	}
	template <typename T = void> T set_Password(Il2CppString* value) {
		return ((T (*)(LoginAdminRequest*, Il2CppString*))(Il2CppBase() + 0x1728054))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(LoginAdminRequest*, Il2CppObject*))(Il2CppBase() + 0x17280D4))(this, other);
	}
	template <typename T = bool> T Equals_1(LoginAdminRequest* other) {
		return ((T (*)(LoginAdminRequest*, LoginAdminRequest*))(Il2CppBase() + 0x1728144))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x17281AC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x1728218))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LoginAdminRequest*, uintptr_t))(Il2CppBase() + 0x172827C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LoginAdminRequest*))(Il2CppBase() + 0x1728310))(this);
	}
	template <typename T = void> T MergeFrom(LoginAdminRequest* other) {
		return ((T (*)(LoginAdminRequest*, LoginAdminRequest*))(Il2CppBase() + 0x17283E0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LoginAdminRequest*, uintptr_t))(Il2CppBase() + 0x1728440))(this, input);
	}

};

}
