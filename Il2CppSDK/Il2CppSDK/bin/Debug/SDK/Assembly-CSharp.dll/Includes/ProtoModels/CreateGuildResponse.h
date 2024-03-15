#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateGuildResponse"));
	}

	 static MessageParser1<ProtoModels::CreateGuildResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::CreateGuildResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PlayerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::Player*> R& player_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildMessageType*> R& guild_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	 static MessageParser1<ProtoModels::CreateGuildResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::CreateGuildResponse*>* (*)(void *))(Il2CppBase() + 0x1BCAF1C))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1BCAF80))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB0A0))(this);
	}
	template <typename R = ProtoModels::CreateGuildResponse*> R Clone() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB18C))(this);
	}
	template <typename R = ProtoModels::Player*> R get_Player() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB1E8))(this);
	}
	template <typename R = void> R set_Player(ProtoModels::Player* value) {
		return ((R (*)(CreateGuildResponse*, ProtoModels::Player*))(Il2CppBase() + 0x1BCB1F0))(this, value);
	}
	template <typename R = ProtoModels::GuildMessageType*> R get_Guild() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB1F8))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildMessageType* value) {
		return ((R (*)(CreateGuildResponse*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x1BCB200))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB208))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(CreateGuildResponse*, int32_t))(Il2CppBase() + 0x1BCB210))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(CreateGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x1BCB218))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::CreateGuildResponse* other) {
		return ((R (*)(CreateGuildResponse*, ProtoModels::CreateGuildResponse*))(Il2CppBase() + 0x1BCB288))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB2FC))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB37C))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(CreateGuildResponse*, uintptr_t))(Il2CppBase() + 0x1BCB3E0))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB490))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::CreateGuildResponse* other) {
		return ((R (*)(CreateGuildResponse*, ProtoModels::CreateGuildResponse*))(Il2CppBase() + 0x1BCB588))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(CreateGuildResponse*, uintptr_t))(Il2CppBase() + 0x1BCB698))(this, input);
	}

};

}
