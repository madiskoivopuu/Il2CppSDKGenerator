#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIncomingHealBonusEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIncomingHealBonusEntity"));
	}


	template <typename T = IncomingHealBonusComponent*> T get_incomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIncomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIncomingHealBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIncomingHealBonus(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIncomingHealBonusEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIncomingHealBonus() {
		return ((T (*)(IIncomingHealBonusEntity*))(Il2CppBase() + 0x0))(this);
	}

};

