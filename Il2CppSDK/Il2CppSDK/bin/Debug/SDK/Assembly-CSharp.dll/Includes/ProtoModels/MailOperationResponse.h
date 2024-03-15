#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class MailOperationResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "MailOperationResponse"));
	}

	 static MessageParser1<ProtoModels::MailOperationResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::MailOperationResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Mail*> R& mail_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MailIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& mailID_() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 static MessageParser1<ProtoModels::MailOperationResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::MailOperationResponse*>* (*)(void *))(Il2CppBase() + 0x125EA88))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x125EAEC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EC0C))(this);
	}
	template <typename R = ProtoModels::MailOperationResponse*> R Clone() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125ED34))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125ED90))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(MailOperationResponse*, int32_t))(Il2CppBase() + 0x125ED98))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EDA0))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(MailOperationResponse*, Il2CppString*))(Il2CppBase() + 0x125EDA8))(this, value);
	}
	template <typename R = ProtoModels::Mail*> R get_Mail() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EE28))(this);
	}
	template <typename R = void> R set_Mail(ProtoModels::Mail* value) {
		return ((R (*)(MailOperationResponse*, ProtoModels::Mail*))(Il2CppBase() + 0x125EE30))(this, value);
	}
	template <typename R = int64_t> R get_MailID() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EE38))(this);
	}
	template <typename R = void> R set_MailID(int64_t value) {
		return ((R (*)(MailOperationResponse*, int64_t))(Il2CppBase() + 0x125EE40))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(MailOperationResponse*, Il2CppObject*))(Il2CppBase() + 0x125EE48))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::MailOperationResponse* other) {
		return ((R (*)(MailOperationResponse*, ProtoModels::MailOperationResponse*))(Il2CppBase() + 0x125EEB8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EF3C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125EFE8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(MailOperationResponse*, uintptr_t))(Il2CppBase() + 0x125F04C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(MailOperationResponse*))(Il2CppBase() + 0x125F130))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::MailOperationResponse* other) {
		return ((R (*)(MailOperationResponse*, ProtoModels::MailOperationResponse*))(Il2CppBase() + 0x125F270))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(MailOperationResponse*, uintptr_t))(Il2CppBase() + 0x125F344))(this, input);
	}

};

}
