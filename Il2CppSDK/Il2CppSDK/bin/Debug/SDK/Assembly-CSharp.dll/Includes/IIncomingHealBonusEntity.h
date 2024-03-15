#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIncomingHealBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIncomingHealBonusEntity"));
	}


	template <typename R = IncomingHealBonusComponent*> R get_incomingHealBonus() {
		return ((R (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIncomingHealBonus() {
		return ((R (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIncomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IIncomingHealBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIncomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IIncomingHealBonusEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIncomingHealBonus() {
		return ((R (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

