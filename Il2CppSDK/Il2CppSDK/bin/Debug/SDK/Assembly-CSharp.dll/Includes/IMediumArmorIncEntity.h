#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorIncEntity"));
	}


	template <typename T = uintptr_t> T get_mediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorInc(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorIncEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorInc() {
		return ((T (*)(IMediumArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
