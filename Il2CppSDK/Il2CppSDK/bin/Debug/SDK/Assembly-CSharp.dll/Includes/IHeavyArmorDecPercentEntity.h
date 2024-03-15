#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorDecPercentEntity"));
	}


	template <typename R = HeavyArmorDecPercentComponent*> R get_heavyArmorDecPercent() {
		return ((R (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDecPercent() {
		return ((R (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHeavyArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHeavyArmorDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDecPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHeavyArmorDecPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDecPercent() {
		return ((R (*)(IHeavyArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

