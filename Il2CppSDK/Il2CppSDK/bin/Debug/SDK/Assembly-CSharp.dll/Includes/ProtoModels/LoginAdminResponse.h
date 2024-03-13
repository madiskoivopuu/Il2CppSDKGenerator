#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginAdminResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginAdminResponse"));
	}

	template <typename T = MessageParser1LoginAdminResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& TokenFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& token_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1LoginAdminResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x17285F0))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1728654))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728774))(this);
	}
	template <typename T = LoginAdminResponse*> T Clone() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728904))(this);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728960))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(LoginAdminResponse*, int64_t))(Il2CppBase() + 0x1728968))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728970))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(LoginAdminResponse*, int32_t))(Il2CppBase() + 0x1728978))(this, value);
	}
	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728980))(this);
	}
	template <typename T = void> T set_Token(uintptr_t value) {
		return ((T (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728988))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728A08))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(LoginAdminResponse*, Il2CppString*))(Il2CppBase() + 0x1728A10))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(LoginAdminResponse*, Il2CppObject*))(Il2CppBase() + 0x1728A90))(this, other);
	}
	template <typename T = bool> T Equals_1(LoginAdminResponse* other) {
		return ((T (*)(LoginAdminResponse*, LoginAdminResponse*))(Il2CppBase() + 0x1728B00))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728BD8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728C98))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728CFC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728DEC))(this);
	}
	template <typename T = void> T MergeFrom(LoginAdminResponse* other) {
		return ((T (*)(LoginAdminResponse*, LoginAdminResponse*))(Il2CppBase() + 0x1728F3C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728FBC))(this, input);
	}

};

}
