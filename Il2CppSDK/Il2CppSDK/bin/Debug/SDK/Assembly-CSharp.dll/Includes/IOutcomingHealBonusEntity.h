#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IOutcomingHealBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IOutcomingHealBonusEntity"));
	}


	template <typename R = OutcomingHealBonusComponent*> R get_outcomingHealBonus() {
		return ((R (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasOutcomingHealBonus() {
		return ((R (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IOutcomingHealBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceOutcomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IOutcomingHealBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveOutcomingHealBonus() {
		return ((R (*)(IOutcomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

