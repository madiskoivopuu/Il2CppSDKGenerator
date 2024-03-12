#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorDecPercentEntity"));
	}


	template <typename T = uintptr_t> T get_mediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDecPercent() {
		return ((T (*)(IMediumArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
