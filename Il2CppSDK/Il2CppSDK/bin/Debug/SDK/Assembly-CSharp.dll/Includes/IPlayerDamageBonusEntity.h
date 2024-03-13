#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerDamageBonusEntity"));
	}


	template <typename T = PlayerDamageBonusComponent*> T get_playerDamageBonus() {
		return ((T (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageBonus() {
		return ((T (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageBonus() {
		return ((T (*)(IPlayerDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

