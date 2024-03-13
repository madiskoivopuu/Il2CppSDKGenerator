#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorIncEntity"));
	}


	template <typename T = MediumArmorIncComponent*> T get_mediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMediumArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMediumArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

