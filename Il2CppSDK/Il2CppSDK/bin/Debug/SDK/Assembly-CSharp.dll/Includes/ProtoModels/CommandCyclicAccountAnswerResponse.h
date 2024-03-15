#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountAnswerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountAnswerResponse"));
	}

	 static MessageParser1<ProtoModels::CommandCyclicAccountAnswerResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::CommandCyclicAccountAnswerResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& UserIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& userID_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& MasterAccountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R& masterAccount_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CyclicAccountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R& cyclicAccount_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& ServerDetailFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::CyclicServerDetailType*> R& serverDetail_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& OldMainUserFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& oldMainUser_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1<ProtoModels::CommandCyclicAccountAnswerResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CommandCyclicAccountAnswerResponse*>* (*)(void *))(Il2CppBase() + 0xE26764))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE267C8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE268E8))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountAnswerResponse*> R Clone() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26A7C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26AD8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, int32_t))(Il2CppBase() + 0xE26AE0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26AE8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, Il2CppString*))(Il2CppBase() + 0xE26AF0))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B70))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, int64_t))(Il2CppBase() + 0xE26B78))(this, value);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R get_MasterAccount() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B80))(this);
	}
	template <typename R = void> R set_MasterAccount(ProtoModels::CyclicMasterAccountType* value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0xE26B88))(this, value);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R get_CyclicAccount() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B90))(this);
	}
	template <typename R = void> R set_CyclicAccount(ProtoModels::CyclicMasterAccountType* value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0xE26B98))(this, value);
	}
	template <typename R = ProtoModels::CyclicServerDetailType*> R get_ServerDetail() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26BA0))(this);
	}
	template <typename R = void> R set_ServerDetail(ProtoModels::CyclicServerDetailType* value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, ProtoModels::CyclicServerDetailType*))(Il2CppBase() + 0xE26BA8))(this, value);
	}
	template <typename R = Il2CppString*> R get_OldMainUser() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26BB0))(this);
	}
	template <typename R = void> R set_OldMainUser(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, Il2CppString*))(Il2CppBase() + 0xE26BB8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, Il2CppObject*))(Il2CppBase() + 0xE26C38))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CommandCyclicAccountAnswerResponse* other) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, ProtoModels::CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26CA8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26D6C))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26E68))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, uintptr_t))(Il2CppBase() + 0xE26ECC))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE2703C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CommandCyclicAccountAnswerResponse* other) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, ProtoModels::CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE27238))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CommandCyclicAccountAnswerResponse*, uintptr_t))(Il2CppBase() + 0xE273E4))(this, input);
	}

};

}
