#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMediumArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMediumArmorDecEntity"));
	}


	template <typename T = uintptr_t> T get_mediumArmorDec() {
		return ((T (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMediumArmorDec() {
		return ((T (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMediumArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMediumArmorDec(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMediumArmorDecEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMediumArmorDec() {
		return ((T (*)(IMediumArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
