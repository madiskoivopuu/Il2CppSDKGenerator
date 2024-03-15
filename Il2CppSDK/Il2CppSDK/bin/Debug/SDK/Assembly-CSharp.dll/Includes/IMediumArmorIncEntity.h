#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorIncEntity"));
	}


	template <typename R = MediumArmorIncComponent*> R get_mediumArmorInc() {
		return ((R (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMediumArmorInc() {
		return ((R (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMediumArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMediumArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(IMediumArmorIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMediumArmorInc() {
		return ((R (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

