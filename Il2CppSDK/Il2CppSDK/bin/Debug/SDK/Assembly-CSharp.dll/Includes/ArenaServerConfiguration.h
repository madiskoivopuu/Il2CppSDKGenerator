#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaServerConfiguration"));
	}

	template <typename R = MapConfiguration*> R& Map() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ServerConfiguration*> R& Server() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = PvpConfiguration*> R& Pvp() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TournamentConfiguration*> R& Tournament() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = GameConfiguration*> R& Game() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ClanConfiguration*> R& Clan() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = GuildConfiguration*> R& Guild() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = StoreConfiguration*> R& Store() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = VipDefaultsConfiguration*> R& VipDefaults() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = MapConfiguration*> R get_Map() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713178))(this);
	}
	template <typename R = ServerConfiguration*> R get_Server() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713180))(this);
	}
	template <typename R = PvpConfiguration*> R get_Pvp() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713188))(this);
	}
	template <typename R = TournamentConfiguration*> R get_Tournament() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713190))(this);
	}
	template <typename R = GameConfiguration*> R get_Game() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713198))(this);
	}
	template <typename R = ClanConfiguration*> R get_Clan() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131A0))(this);
	}
	template <typename R = GuildConfiguration*> R get_Guild() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131A8))(this);
	}
	template <typename R = StoreConfiguration*> R get_Store() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131B0))(this);
	}
	template <typename R = VipDefaultsConfiguration*> R get_VipDefaults() {
		return ((R (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131B8))(this);
	}

};

