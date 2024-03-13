#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MailOperationResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MailOperationResponse"));
	}

	template <typename T = MessageParser1MailOperationResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& CodeMessageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& codeMessage_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Mail*> T& mail_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MailIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& mailID_() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = MessageParser1MailOperationResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x125EA88))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x125EAEC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EC0C))(this);
	}
	template <typename T = MailOperationResponse*> T Clone() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125ED34))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125ED90))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(MailOperationResponse*, int32_t))(Il2CppBase() + 0x125ED98))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EDA0))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(MailOperationResponse*, Il2CppString*))(Il2CppBase() + 0x125EDA8))(this, value);
	}
	template <typename T = Mail*> T get_Mail() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EE28))(this);
	}
	template <typename T = void> T set_Mail(Mail* value) {
		return ((T (*)(MailOperationResponse*, Mail*))(Il2CppBase() + 0x125EE30))(this, value);
	}
	template <typename T = int64_t> T get_MailID() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EE38))(this);
	}
	template <typename T = void> T set_MailID(int64_t value) {
		return ((T (*)(MailOperationResponse*, int64_t))(Il2CppBase() + 0x125EE40))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(MailOperationResponse*, Il2CppObject*))(Il2CppBase() + 0x125EE48))(this, other);
	}
	template <typename T = bool> T Equals_1(MailOperationResponse* other) {
		return ((T (*)(MailOperationResponse*, MailOperationResponse*))(Il2CppBase() + 0x125EEB8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EF3C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125EFE8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(MailOperationResponse*, uintptr_t))(Il2CppBase() + 0x125F04C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(MailOperationResponse*))(Il2CppBase() + 0x125F130))(this);
	}
	template <typename T = void> T MergeFrom(MailOperationResponse* other) {
		return ((T (*)(MailOperationResponse*, MailOperationResponse*))(Il2CppBase() + 0x125F270))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(MailOperationResponse*, uintptr_t))(Il2CppBase() + 0x125F344))(this, input);
	}

};

}
