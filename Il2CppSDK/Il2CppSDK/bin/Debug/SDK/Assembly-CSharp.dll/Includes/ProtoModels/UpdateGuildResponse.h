#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateGuildResponse"));
	}

	 static MessageParser1ProtoModels::UpdateGuildResponse*>*& _parser() {
		return *(MessageParser1ProtoModels::UpdateGuildResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
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

	 static MessageParser1ProtoModels::UpdateGuildResponse*>* get_Parser() {
		return ((MessageParser1ProtoModels::UpdateGuildResponse*>* (*)(void *))(Il2CppBase() + 0x153E184))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x153E1E8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E308))(this);
	}
	template <typename R = ProtoModels::UpdateGuildResponse*> R Clone() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E3F4))(this);
	}
	template <typename R = ProtoModels::Player*> R get_Player() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E450))(this);
	}
	template <typename R = void> R set_Player(ProtoModels::Player* value) {
		return ((R (*)(UpdateGuildResponse*, ProtoModels::Player*))(Il2CppBase() + 0x153E458))(this, value);
	}
	template <typename R = ProtoModels::GuildMessageType*> R get_Guild() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E460))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildMessageType* value) {
		return ((R (*)(UpdateGuildResponse*, ProtoModels::GuildMessageType*))(Il2CppBase() + 0x153E468))(this, value);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E470))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(UpdateGuildResponse*, int32_t))(Il2CppBase() + 0x153E478))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(UpdateGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x153E480))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::UpdateGuildResponse* other) {
		return ((R (*)(UpdateGuildResponse*, ProtoModels::UpdateGuildResponse*))(Il2CppBase() + 0x153E4F0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E564))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E5E4))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(UpdateGuildResponse*, uintptr_t))(Il2CppBase() + 0x153E648))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E6F8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::UpdateGuildResponse* other) {
		return ((R (*)(UpdateGuildResponse*, ProtoModels::UpdateGuildResponse*))(Il2CppBase() + 0x153E7F0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(UpdateGuildResponse*, uintptr_t))(Il2CppBase() + 0x153E900))(this, input);
	}

};

}
