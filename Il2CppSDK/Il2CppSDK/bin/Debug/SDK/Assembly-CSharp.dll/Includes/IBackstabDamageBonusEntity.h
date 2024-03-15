#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IBackstabDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBackstabDamageBonusEntity"));
	}


	template <typename R = BackstabDamageBonusComponent*> R get_backstabDamageBonus() {
		return ((R (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasBackstabDamageBonus() {
		return ((R (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBackstabDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceBackstabDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IBackstabDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveBackstabDamageBonus() {
		return ((R (*)(IBackstabDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

