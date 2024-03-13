#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildCoinsEntity"));
	}


	template <typename T = GuildCoinsComponent*> T get_guildCoins() {
		return ((T (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(IGuildCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(IGuildCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

