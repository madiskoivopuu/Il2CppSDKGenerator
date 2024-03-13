#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorDecPercentEntity"));
	}


	template <typename T = HeavyArmorDecPercentComponent*> T get_heavyArmorDecPercent() {
		return ((T (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorDecPercent() {
		return ((T (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHeavyArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IHeavyArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorDecPercent() {
		return ((T (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

