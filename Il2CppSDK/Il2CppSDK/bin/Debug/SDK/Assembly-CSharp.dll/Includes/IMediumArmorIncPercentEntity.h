#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_mediumArmorIncPercent() {
		return ((T (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorIncPercent() {
		return ((T (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorIncPercent() {
		return ((T (*)(IMediumArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
