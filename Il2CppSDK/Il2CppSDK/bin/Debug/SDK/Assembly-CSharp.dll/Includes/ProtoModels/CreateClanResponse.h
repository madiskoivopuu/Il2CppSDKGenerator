#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateClanResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateClanResponse"));
	}

	 static MessageParser1ProtoModels::CreateClanResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::CreateClanResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename R = int32_t> static R& NewClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Clan*> R& newClan_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1ProtoModels::CreateClanResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::CreateClanResponse*>* (*)(void *))(Il2CppBase() + 0x134C70C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x134C770))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134C890))(this);
	}
	template <typename R = ProtoModels::CreateClanResponse*> R Clone() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134C9AC))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CA08))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CreateClanResponse*, int32_t))(Il2CppBase() + 0x134CA10))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CA18))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(CreateClanResponse*, Il2CppString*))(Il2CppBase() + 0x134CA20))(this, value);
	}
	template <typename R = ProtoModels::Clan*> R get_NewClan() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CAA0))(this);
	}
	template <typename R = void> R set_NewClan(ProtoModels::Clan* value) {
		return ((R (*)(CreateClanResponse*, ProtoModels::Clan*))(Il2CppBase() + 0x134CAA8))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CreateClanResponse*, Il2CppObject*))(Il2CppBase() + 0x134CAB0))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CreateClanResponse* other) {
		return ((R (*)(CreateClanResponse*, ProtoModels::CreateClanResponse*))(Il2CppBase() + 0x134CB20))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CB94))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CC20))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CC84))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CreateClanResponse*))(Il2CppBase() + 0x134CD3C))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CreateClanResponse* other) {
		return ((R (*)(CreateClanResponse*, ProtoModels::CreateClanResponse*))(Il2CppBase() + 0x134CE40))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CreateClanResponse*, uintptr_t))(Il2CppBase() + 0x134CF10))(this, input);
	}

};

}
