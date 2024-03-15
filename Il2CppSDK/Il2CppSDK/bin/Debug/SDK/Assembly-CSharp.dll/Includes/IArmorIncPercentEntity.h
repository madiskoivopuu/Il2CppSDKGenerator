#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorIncPercentEntity"));
	}


	template <typename R = ArmorIncPercentComponent*> R get_armorIncPercent() {
		return ((R (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmorIncPercent() {
		return ((R (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorIncPercent() {
		return ((R (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

