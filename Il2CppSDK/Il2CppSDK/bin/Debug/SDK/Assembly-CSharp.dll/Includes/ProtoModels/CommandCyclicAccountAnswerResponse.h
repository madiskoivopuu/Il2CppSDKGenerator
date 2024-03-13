#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountAnswerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountAnswerResponse"));
	}

	template <typename T = MessageParser1CommandCyclicAccountAnswerResponse*>*> static T& _parser() {
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
	template <typename T = int32_t> static T& UserIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& userID_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& MasterAccountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CyclicMasterAccountType*> T& masterAccount_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CyclicAccountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CyclicMasterAccountType*> T& cyclicAccount_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ServerDetailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = CyclicServerDetailType*> T& serverDetail_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& OldMainUserFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& oldMainUser_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = MessageParser1CommandCyclicAccountAnswerResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE26764))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE267C8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE268E8))(this);
	}
	template <typename T = CommandCyclicAccountAnswerResponse*> T Clone() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26A7C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26AD8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, int32_t))(Il2CppBase() + 0xE26AE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26AE8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, Il2CppString*))(Il2CppBase() + 0xE26AF0))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B70))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, int64_t))(Il2CppBase() + 0xE26B78))(this, value);
	}
	template <typename T = CyclicMasterAccountType*> T get_MasterAccount() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B80))(this);
	}
	template <typename T = void> T set_MasterAccount(CyclicMasterAccountType* value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, CyclicMasterAccountType*))(Il2CppBase() + 0xE26B88))(this, value);
	}
	template <typename T = CyclicMasterAccountType*> T get_CyclicAccount() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26B90))(this);
	}
	template <typename T = void> T set_CyclicAccount(CyclicMasterAccountType* value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, CyclicMasterAccountType*))(Il2CppBase() + 0xE26B98))(this, value);
	}
	template <typename T = CyclicServerDetailType*> T get_ServerDetail() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26BA0))(this);
	}
	template <typename T = void> T set_ServerDetail(CyclicServerDetailType* value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, CyclicServerDetailType*))(Il2CppBase() + 0xE26BA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_OldMainUser() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26BB0))(this);
	}
	template <typename T = void> T set_OldMainUser(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, Il2CppString*))(Il2CppBase() + 0xE26BB8))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, Il2CppObject*))(Il2CppBase() + 0xE26C38))(this, other);
	}
	template <typename T = bool> T Equals_1(CommandCyclicAccountAnswerResponse* other) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26CA8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26D6C))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE26E68))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, uintptr_t))(Il2CppBase() + 0xE26ECC))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE2703C))(this);
	}
	template <typename T = void> T MergeFrom(CommandCyclicAccountAnswerResponse* other) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, CommandCyclicAccountAnswerResponse*))(Il2CppBase() + 0xE27238))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CommandCyclicAccountAnswerResponse*, uintptr_t))(Il2CppBase() + 0xE273E4))(this, input);
	}

};

}
