#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildBossCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildBossCoinsEntity"));
	}


	template <typename T = uintptr_t> T get_guildBossCoins() {
		return ((T (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(IGuildBossCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(IGuildBossCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(IGuildBossCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
