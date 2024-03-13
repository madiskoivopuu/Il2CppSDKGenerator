#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPlayerDamageReductionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPlayerDamageReductionEntity"));
	}


	template <typename T = PlayerDamageReductionComponent*> T get_playerDamageReduction() {
		return ((T (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPlayerDamageReduction() {
		return ((T (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerDamageReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplacePlayerDamageReduction(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IPlayerDamageReductionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemovePlayerDamageReduction() {
		return ((T (*)(IPlayerDamageReductionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

