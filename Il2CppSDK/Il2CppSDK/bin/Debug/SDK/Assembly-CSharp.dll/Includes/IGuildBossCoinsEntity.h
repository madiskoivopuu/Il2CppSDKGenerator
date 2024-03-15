#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildBossCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildBossCoinsEntity"));
	}


	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(IGuildBossCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(IGuildBossCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

