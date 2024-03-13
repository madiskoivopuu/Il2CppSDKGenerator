#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class UpdateGuildResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "UpdateGuildResponse"));
	}

	template <typename T = MessageParser1UpdateGuildResponse*>*> static T& _parser() {
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

	template <typename T = MessageParser1UpdateGuildResponse*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x153E184))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x153E1E8))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E308))(this);
	}
	template <typename T = UpdateGuildResponse*> T Clone() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E3F4))(this);
	}
	template <typename T = Player*> T get_Player() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E450))(this);
	}
	template <typename T = void> T set_Player(Player* value) {
		return ((T (*)(UpdateGuildResponse*, Player*))(Il2CppBase() + 0x153E458))(this, value);
	}
	template <typename T = GuildMessageType*> T get_Guild() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E460))(this);
	}
	template <typename T = void> T set_Guild(GuildMessageType* value) {
		return ((T (*)(UpdateGuildResponse*, GuildMessageType*))(Il2CppBase() + 0x153E468))(this, value);
	}
	template <typename T = int32_t> T get_Code() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E470))(this);
	}
	template <typename T = void> T set_Code(int32_t value) {
		return ((T (*)(UpdateGuildResponse*, int32_t))(Il2CppBase() + 0x153E478))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(UpdateGuildResponse*, Il2CppObject*))(Il2CppBase() + 0x153E480))(this, other);
	}
	template <typename T = bool> T Equals_1(UpdateGuildResponse* other) {
		return ((T (*)(UpdateGuildResponse*, UpdateGuildResponse*))(Il2CppBase() + 0x153E4F0))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E564))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E5E4))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(UpdateGuildResponse*, uintptr_t))(Il2CppBase() + 0x153E648))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(UpdateGuildResponse*))(Il2CppBase() + 0x153E6F8))(this);
	}
	template <typename T = void> T MergeFrom(UpdateGuildResponse* other) {
		return ((T (*)(UpdateGuildResponse*, UpdateGuildResponse*))(Il2CppBase() + 0x153E7F0))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(UpdateGuildResponse*, uintptr_t))(Il2CppBase() + 0x153E900))(this, input);
	}

};

}
