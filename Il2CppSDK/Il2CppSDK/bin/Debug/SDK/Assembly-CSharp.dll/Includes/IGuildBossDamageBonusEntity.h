#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IGuildBossDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IGuildBossDamageBonusEntity"));
	}


	template <typename R = GuildBossDamageBonusComponent*> R get_guildBossDamageBonus() {
		return ((R (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasGuildBossDamageBonus() {
		return ((R (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddGuildBossDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IGuildBossDamageBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceGuildBossDamageBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IGuildBossDamageBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveGuildBossDamageBonus() {
		return ((R (*)(IGuildBossDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

