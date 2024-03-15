#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountAnswerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountAnswerRequest"));
	}

	 static MessageParser1ProtoModels::CommandCyclicAccountAnswerRequest*>*& _parser() {
		return *(MessageParser1ProtoModels::CommandCyclicAccountAnswerRequest*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& WipePriceCoinsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& wipePriceCoins_() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	 static MessageParser1ProtoModels::CommandCyclicAccountAnswerRequest*>* get_Parser() {
		return ((MessageParser1ProtoModels::CommandCyclicAccountAnswerRequest*>* (*)(void *))(Il2CppBase() + 0xE25888))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0xE258EC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25A0C))(this);
	}
	template <typename R = ProtoModels::CommandCyclicAccountAnswerRequest*> R Clone() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25B8C))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25BE8))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, int32_t))(Il2CppBase() + 0xE25BF0))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25BF8))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, Il2CppString*))(Il2CppBase() + 0xE25C00))(this, value);
	}
	template <typename R = int64_t> R get_UserID() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25C80))(this);
	}
	template <typename R = void> R set_UserID(int64_t value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, int64_t))(Il2CppBase() + 0xE25C88))(this, value);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R get_MasterAccount() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25C90))(this);
	}
	template <typename R = void> R set_MasterAccount(ProtoModels::CyclicMasterAccountType* value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0xE25C98))(this, value);
	}
	template <typename R = ProtoModels::CyclicMasterAccountType*> R get_CyclicAccount() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CA0))(this);
	}
	template <typename R = void> R set_CyclicAccount(ProtoModels::CyclicMasterAccountType* value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, ProtoModels::CyclicMasterAccountType*))(Il2CppBase() + 0xE25CA8))(this, value);
	}
	template <typename R = ProtoModels::CyclicServerDetailType*> R get_ServerDetail() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CB0))(this);
	}
	template <typename R = void> R set_ServerDetail(ProtoModels::CyclicServerDetailType* value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, ProtoModels::CyclicServerDetailType*))(Il2CppBase() + 0xE25CB8))(this, value);
	}
	template <typename R = int32_t> R get_WipePriceCoins() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CC0))(this);
	}
	template <typename R = void> R set_WipePriceCoins(int32_t value) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, int32_t))(Il2CppBase() + 0xE25CC8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, Il2CppObject*))(Il2CppBase() + 0xE25CD0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CommandCyclicAccountAnswerRequest* other) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, ProtoModels::CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25D40))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25DFC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25EF4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25F58))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE260C0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CommandCyclicAccountAnswerRequest* other) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, ProtoModels::CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE262B4))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE26448))(this, input);
	}

};

}
