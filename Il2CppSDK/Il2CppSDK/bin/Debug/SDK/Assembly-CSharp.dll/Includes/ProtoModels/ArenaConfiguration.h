#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaConfiguration"));
	}

	template <typename T = MessageParser1ArenaConfiguration*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServerConfiguration*> T& server_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& PvpFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaPvpConfiguration*> T& pvp_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& MapFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MapConfiguration*> T& map_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TournamentFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaTournamentConfiguration*> T& tournament_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ClanFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ClanConfiguration*> T& clan_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& GameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaGameConfiguration*> T& game_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& StoreFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaStore*> T& store_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& GuildFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = GuildConfig*> T& guild_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& VipFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ArenaVipLevels*> T& vip_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1ArenaConfiguration*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1B798))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E1B7FC))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1B91C))(this);
	}
	template <typename T = ArenaConfiguration*> T Clone() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BB6C))(this);
	}
	template <typename T = ServerConfiguration*> T get_Server() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBC8))(this);
	}
	template <typename T = void> T set_Server(ServerConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, ServerConfiguration*))(Il2CppBase() + 0x1E1BBD0))(this, value);
	}
	template <typename T = ArenaPvpConfiguration*> T get_Pvp() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBD8))(this);
	}
	template <typename T = void> T set_Pvp(ArenaPvpConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, ArenaPvpConfiguration*))(Il2CppBase() + 0x1E1BBE0))(this, value);
	}
	template <typename T = MapConfiguration*> T get_Map() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBE8))(this);
	}
	template <typename T = void> T set_Map(MapConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, MapConfiguration*))(Il2CppBase() + 0x1E1BBF0))(this, value);
	}
	template <typename T = ArenaTournamentConfiguration*> T get_Tournament() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BBF8))(this);
	}
	template <typename T = void> T set_Tournament(ArenaTournamentConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, ArenaTournamentConfiguration*))(Il2CppBase() + 0x1E1BC00))(this, value);
	}
	template <typename T = ClanConfiguration*> T get_Clan() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC08))(this);
	}
	template <typename T = void> T set_Clan(ClanConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, ClanConfiguration*))(Il2CppBase() + 0x1E1BC10))(this, value);
	}
	template <typename T = ArenaGameConfiguration*> T get_Game() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC18))(this);
	}
	template <typename T = void> T set_Game(ArenaGameConfiguration* value) {
		return ((T (*)(ArenaConfiguration*, ArenaGameConfiguration*))(Il2CppBase() + 0x1E1BC20))(this, value);
	}
	template <typename T = ArenaStore*> T get_Store() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC28))(this);
	}
	template <typename T = void> T set_Store(ArenaStore* value) {
		return ((T (*)(ArenaConfiguration*, ArenaStore*))(Il2CppBase() + 0x1E1BC30))(this, value);
	}
	template <typename T = GuildConfig*> T get_Guild() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC38))(this);
	}
	template <typename T = void> T set_Guild(GuildConfig* value) {
		return ((T (*)(ArenaConfiguration*, GuildConfig*))(Il2CppBase() + 0x1E1BC40))(this, value);
	}
	template <typename T = ArenaVipLevels*> T get_Vip() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BC48))(this);
	}
	template <typename T = void> T set_Vip(ArenaVipLevels* value) {
		return ((T (*)(ArenaConfiguration*, ArenaVipLevels*))(Il2CppBase() + 0x1E1BC50))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(ArenaConfiguration*, Il2CppObject*))(Il2CppBase() + 0x1E1BC58))(this, other);
	}
	template <typename T = bool> T Equals_1(ArenaConfiguration* other) {
		return ((T (*)(ArenaConfiguration*, ArenaConfiguration*))(Il2CppBase() + 0x1E1BCC8))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BDB8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1BEB8))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(ArenaConfiguration*, uintptr_t))(Il2CppBase() + 0x1E1BF1C))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(ArenaConfiguration*))(Il2CppBase() + 0x1E1C0D4))(this);
	}
	template <typename T = void> T MergeFrom(ArenaConfiguration* other) {
		return ((T (*)(ArenaConfiguration*, ArenaConfiguration*))(Il2CppBase() + 0x1E1C334))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(ArenaConfiguration*, uintptr_t))(Il2CppBase() + 0x1E1C76C))(this, input);
	}

};

}
