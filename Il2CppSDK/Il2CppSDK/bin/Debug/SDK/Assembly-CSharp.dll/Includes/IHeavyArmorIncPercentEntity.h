#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorIncPercentEntity"));
	}


	template <typename R = HeavyArmorIncPercentComponent*> R get_heavyArmorIncPercent() {
		return ((R (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorIncPercent() {
		return ((R (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHeavyArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHeavyArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IHeavyArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorIncPercent() {
		return ((R (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

