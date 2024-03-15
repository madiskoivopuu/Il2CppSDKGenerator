#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorIncPercentEntity"));
	}


	template <typename R = MediumArmorIncPercentComponent*> R get_mediumArmorIncPercent() {
		return ((R (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMediumArmorIncPercent() {
		return ((R (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMediumArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorIncPercent() {
		return ((R (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

