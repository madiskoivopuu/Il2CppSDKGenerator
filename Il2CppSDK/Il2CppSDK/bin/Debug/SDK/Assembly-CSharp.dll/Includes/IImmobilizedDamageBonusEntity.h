#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IImmobilizedDamageBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IImmobilizedDamageBonusEntity"));
	}


	template <typename R = ImmobilizedDamageBonusComponent*> R get_immobilizedDamageBonus() {
		return ((R (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasImmobilizedDamageBonus() {
		return ((R (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IImmobilizedDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceImmobilizedDamageBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IImmobilizedDamageBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveImmobilizedDamageBonus() {
		return ((R (*)(IImmobilizedDamageBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

