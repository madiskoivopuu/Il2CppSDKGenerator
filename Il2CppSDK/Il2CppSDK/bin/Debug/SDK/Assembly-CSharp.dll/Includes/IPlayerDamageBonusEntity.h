#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerDamageBonusEntity"));
	}


	template <typename R = PlayerDamageBonusComponent*> R get_playerDamageBonus() {
		return ((R (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageBonus() {
		return ((R (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPlayerDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IPlayerDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageBonus() {
		return ((R (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

