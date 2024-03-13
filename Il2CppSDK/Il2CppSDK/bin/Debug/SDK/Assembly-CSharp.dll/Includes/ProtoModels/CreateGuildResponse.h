#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CreateGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CreateGuildResponse"));
	}

	template <typename T = MessageParser1CreateGuildResponse*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Player*> T& player_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildMessageType*> T& guild_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& CodeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& code_() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = MessageParser1CreateGuildResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCAF1C))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BCAF80))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB0A0))(this);
	}
	template <typename T = CreateGuildResponse*> T Clone() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB18C))(this);
	}
	template <typename T = Player*> T get_Player() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB1E8))(this);
	}
	template <typename T = void> T set_Player(Player* value) {
		return ((T (*)(CreateGuildResponse*, Player*))(Il2CppBase() + 0x1BCB1F0))(this, value);
	}
	template <typename T = GuildMessageType*> T get_Guild() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB1F8))(this);
	}
	template <typename T = void> T set_Guild(GuildMessageType* value) {
		return ((T (*)(CreateGuildResponse*, GuildMessageType*))(Il2CppBase() + 0x1BCB200))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB208))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(CreateGuildResponse*, int32_t))(Il2CppBase() + 0x1BCB210))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(CreateGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x1BCB218))(this, other);
	}
	template <typename T = bool> T Equals_1(CreateGuildResponse* other) {
		return ((T (*)(CreateGuildResponse*, CreateGuildResponse*))(Il2CppBase() + 0x1BCB288))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB2FC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB37C))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(CreateGuildResponse*, uintptr_t))(Il2CppBase() + 0x1BCB3E0))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(CreateGuildResponse*))(Il2CppBase() + 0x1BCB490))(this);
	}
	template <typename T = void> T MergeFrom(CreateGuildResponse* other) {
		return ((T (*)(CreateGuildResponse*, CreateGuildResponse*))(Il2CppBase() + 0x1BCB588))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(CreateGuildResponse*, uintptr_t))(Il2CppBase() + 0x1BCB698))(this, input);
	}

};

}
