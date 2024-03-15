#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LoginAdminResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LoginAdminResponse"));
	}

	 static MessageParser1<ProtoModels::LoginAdminResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::LoginAdminResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TokenFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& token_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::LoginAdminResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::LoginAdminResponse*>* (*)(void *))(Il2CppBase() + 0x17285F0))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1728654))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728774))(this);
	}
	template <typename R = ProtoModels::LoginAdminResponse*> R Clone() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728904))(this);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728960))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(LoginAdminResponse*, int64_t))(Il2CppBase() + 0x1728968))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728970))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(LoginAdminResponse*, int32_t))(Il2CppBase() + 0x1728978))(this, value);
	}
	template <typename R = uintptr_t> R get_Token() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728980))(this);
	}
	template <typename R = void> R set_Token(uintptr_t value) {
		return ((R (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728988))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728A08))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(LoginAdminResponse*, Il2CppString*))(Il2CppBase() + 0x1728A10))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(LoginAdminResponse*, Il2CppObject*))(Il2CppBase() + 0x1728A90))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::LoginAdminResponse* other) {
		return ((R (*)(LoginAdminResponse*, ProtoModels::LoginAdminResponse*))(Il2CppBase() + 0x1728B00))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728BD8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728C98))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728CFC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(LoginAdminResponse*))(Il2CppBase() + 0x1728DEC))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::LoginAdminResponse* other) {
		return ((R (*)(LoginAdminResponse*, ProtoModels::LoginAdminResponse*))(Il2CppBase() + 0x1728F3C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(LoginAdminResponse*, uintptr_t))(Il2CppBase() + 0x1728FBC))(this, input);
	}

};

}
