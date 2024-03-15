#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildCoinsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildCoinsEntity"));
	}


	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(IGuildCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(IGuildCoinsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(IGuildCoinsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

