#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildBossDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildBossDamageBonusEntity"));
	}


	template <typename T = uintptr_t> T get_guildBossDamageBonus() {
		return ((T (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasGuildBossDamageBonus() {
		return ((T (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddGuildBossDamageBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IGuildBossDamageBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceGuildBossDamageBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(IGuildBossDamageBonusEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveGuildBossDamageBonus() {
		return ((T (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
