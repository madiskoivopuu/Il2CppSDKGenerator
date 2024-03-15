#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorDecPercentEntity"));
	}


	template <typename R = MediumArmorDecPercentComponent*> R get_mediumArmorDecPercent() {
		return ((R (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDecPercent() {
		return ((R (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMediumArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMediumArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDecPercent() {
		return ((R (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

