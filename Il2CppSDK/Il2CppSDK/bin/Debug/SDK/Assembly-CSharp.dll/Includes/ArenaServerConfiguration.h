#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArenaServerConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArenaServerConfiguration"));
	}

	template <typename T = MapConfiguration*> T& Map() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ServerConfiguration*> T& Server() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = PvpConfiguration*> T& Pvp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TournamentConfiguration*> T& Tournament() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = GameConfiguration*> T& Game() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ClanConfiguration*> T& Clan() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = GuildConfiguration*> T& Guild() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = StoreConfiguration*> T& Store() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = VipDefaultsConfiguration*> T& VipDefaults() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MapConfiguration*> T get_Map() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713178))(this);
	}
	template <typename T = ServerConfiguration*> T get_Server() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713180))(this);
	}
	template <typename T = PvpConfiguration*> T get_Pvp() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713188))(this);
	}
	template <typename T = TournamentConfiguration*> T get_Tournament() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713190))(this);
	}
	template <typename T = GameConfiguration*> T get_Game() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x2713198))(this);
	}
	template <typename T = ClanConfiguration*> T get_Clan() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131A0))(this);
	}
	template <typename T = GuildConfiguration*> T get_Guild() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131A8))(this);
	}
	template <typename T = StoreConfiguration*> T get_Store() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131B0))(this);
	}
	template <typename T = VipDefaultsConfiguration*> T get_VipDefaults() {
		return ((T (*)(ArenaServerConfiguration*))(Il2CppBase() + 0x27131B8))(this);
	}

};

