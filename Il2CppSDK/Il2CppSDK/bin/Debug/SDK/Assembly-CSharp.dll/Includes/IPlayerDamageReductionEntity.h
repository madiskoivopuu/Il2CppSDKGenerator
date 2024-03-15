#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerDamageReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerDamageReductionEntity"));
	}


	template <typename R = PlayerDamageReductionComponent*> R get_playerDamageReduction() {
		return ((R (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPlayerDamageReduction() {
		return ((R (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPlayerDamageReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IPlayerDamageReductionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplacePlayerDamageReduction(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IPlayerDamageReductionEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemovePlayerDamageReduction() {
		return ((R (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

