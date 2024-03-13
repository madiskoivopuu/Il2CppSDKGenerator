#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackstabDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackstabDamageBonusEntity"));
	}


	template <typename T = BackstabDamageBonusComponent*> T get_backstabDamageBonus() {
		return ((T (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasBackstabDamageBonus() {
		return ((T (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBackstabDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IBackstabDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveBackstabDamageBonus() {
		return ((T (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

