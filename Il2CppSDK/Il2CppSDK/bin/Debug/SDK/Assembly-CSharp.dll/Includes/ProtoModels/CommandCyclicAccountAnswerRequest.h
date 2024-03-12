#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CommandCyclicAccountAnswerRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CommandCyclicAccountAnswerRequest"));
	}

	template <typename T = void*> static T& _parser() {
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
	template <typename T = uintptr_t> T& masterAccount_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& CyclicAccountFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& cyclicAccount_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& ServerDetailFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& serverDetail_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& WipePriceCoinsFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& wipePriceCoins_() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0xE25888))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0xE258EC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25A0C))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25B8C))(this);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25BE8))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, int32_t))(Il2CppBase() + 0xE25BF0))(this, value);
	}
	template <typename T = Il2CppString*> T get_CodeMessage() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25BF8))(this);
	}
	template <typename T = void> T set_CodeMessage(Il2CppString* value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, Il2CppString*))(Il2CppBase() + 0xE25C00))(this, value);
	}
	template <typename T = int64_t> T get_UserID() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25C80))(this);
	}
	template <typename T = void> T set_UserID(int64_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, int64_t))(Il2CppBase() + 0xE25C88))(this, value);
	}
	template <typename T = uintptr_t> T get_MasterAccount() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25C90))(this);
	}
	template <typename T = void> T set_MasterAccount(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25C98))(this, value);
	}
	template <typename T = uintptr_t> T get_CyclicAccount() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CA0))(this);
	}
	template <typename T = void> T set_CyclicAccount(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25CA8))(this, value);
	}
	template <typename T = uintptr_t> T get_ServerDetail() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CB0))(this);
	}
	template <typename T = void> T set_ServerDetail(uintptr_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25CB8))(this, value);
	}
	template <typename T = int32_t> T get_WipePriceCoins() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25CC0))(this);
	}
	template <typename T = void> T set_WipePriceCoins(int32_t value) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, int32_t))(Il2CppBase() + 0xE25CC8))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25CD0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25D40))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25DFC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE25EF4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE25F58))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CommandCyclicAccountAnswerRequest*))(Il2CppBase() + 0xE260C0))(this);
	}
	template <typename T = void> T MergeFrom(uintptr_t other) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE262B4))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CommandCyclicAccountAnswerRequest*, uintptr_t))(Il2CppBase() + 0xE26448))(this, input);
	}

};

}
