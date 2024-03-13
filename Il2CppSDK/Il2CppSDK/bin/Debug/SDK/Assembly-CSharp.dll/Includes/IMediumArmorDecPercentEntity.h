#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorDecPercentEntity"));
	}


	template <typename T = MediumArmorDecPercentComponent*> T get_mediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMediumArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMediumArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

