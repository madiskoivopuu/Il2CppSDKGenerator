#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaConfiguration"));
	}

	 static MessageParser1ProtoModels::ArenaConfiguration*>*& _parser() {
		return *(MessageParser1ProtoModels::ArenaConfiguration*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& ServerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ServerConfiguration*> R& server_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& PvpFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaPvpConfiguration*> R& pvp_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& MapFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::MapConfiguration*> R& map_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& TournamentFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaTournamentConfiguration*> R& tournament_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& ClanFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ClanConfiguration*> R& clan_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& GameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaGameConfiguration*> R& game_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& StoreFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaStore*> R& store_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& GuildFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::GuildConfig*> R& guild_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& VipFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::ArenaVipLevels*> R& vip_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1ProtoModels::ArenaConfiguration*>* get_Parser() {
		return ((MessageParser1ProtoModels::ArenaConfiguration*>* (*)(void *))(Il2CppBase() + 0x1E1B798))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E1B7FC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1B91C))(this);
	}
	template <typename R = ProtoModels::ArenaConfiguration*> R Clone() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BB6C))(this);
	}
	template <typename R = ProtoModels::ServerConfiguration*> R get_Server() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBC8))(this);
	}
	template <typename R = void> R set_Server(ProtoModels::ServerConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ServerConfiguration*))(Il2CppBase() + 0x1E1BBD0))(this, value);
	}
	template <typename R = ProtoModels::ArenaPvpConfiguration*> R get_Pvp() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBD8))(this);
	}
	template <typename R = void> R set_Pvp(ProtoModels::ArenaPvpConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaPvpConfiguration*))(Il2CppBase() + 0x1E1BBE0))(this, value);
	}
	template <typename R = ProtoModels::MapConfiguration*> R get_Map() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBE8))(this);
	}
	template <typename R = void> R set_Map(ProtoModels::MapConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::MapConfiguration*))(Il2CppBase() + 0x1E1BBF0))(this, value);
	}
	template <typename R = ProtoModels::ArenaTournamentConfiguration*> R get_Tournament() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBF8))(this);
	}
	template <typename R = void> R set_Tournament(ProtoModels::ArenaTournamentConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaTournamentConfiguration*))(Il2CppBase() + 0x1E1BC00))(this, value);
	}
	template <typename R = ProtoModels::ClanConfiguration*> R get_Clan() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC08))(this);
	}
	template <typename R = void> R set_Clan(ProtoModels::ClanConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ClanConfiguration*))(Il2CppBase() + 0x1E1BC10))(this, value);
	}
	template <typename R = ProtoModels::ArenaGameConfiguration*> R get_Game() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC18))(this);
	}
	template <typename R = void> R set_Game(ProtoModels::ArenaGameConfiguration* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaGameConfiguration*))(Il2CppBase() + 0x1E1BC20))(this, value);
	}
	template <typename R = ProtoModels::ArenaStore*> R get_Store() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC28))(this);
	}
	template <typename R = void> R set_Store(ProtoModels::ArenaStore* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaStore*))(Il2CppBase() + 0x1E1BC30))(this, value);
	}
	template <typename R = ProtoModels::GuildConfig*> R get_Guild() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC38))(this);
	}
	template <typename R = void> R set_Guild(ProtoModels::GuildConfig* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::GuildConfig*))(Il2CppBase() + 0x1E1BC40))(this, value);
	}
	template <typename R = ProtoModels::ArenaVipLevels*> R get_Vip() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC48))(this);
	}
	template <typename R = void> R set_Vip(ProtoModels::ArenaVipLevels* value) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaVipLevels*))(Il2CppBase() + 0x1E1BC50))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaConfiguration*, Il2CppObject*))(Il2CppBase() + 0x1E1BC58))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaConfiguration* other) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaConfiguration*))(Il2CppBase() + 0x1E1BCC8))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BDB8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BEB8))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaConfiguration*, uintptr_t))(Il2CppBase() + 0x1E1BF1C))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1C0D4))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaConfiguration* other) {
		return ((R (*)(ArenaConfiguration*, ProtoModels::ArenaConfiguration*))(Il2CppBase() + 0x1E1C334))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaConfiguration*, uintptr_t))(Il2CppBase() + 0x1E1C76C))(this, input);
	}

};

}
