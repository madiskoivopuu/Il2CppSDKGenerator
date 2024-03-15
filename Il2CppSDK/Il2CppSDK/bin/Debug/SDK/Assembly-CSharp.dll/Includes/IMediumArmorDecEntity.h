#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorDecEntity"));
	}


	template <typename R = MediumArmorDecComponent*> R get_mediumArmorDec() {
		return ((R (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMediumArmorDec() {
		return ((R (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMediumArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorDecEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorDecEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorDec() {
		return ((R (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

