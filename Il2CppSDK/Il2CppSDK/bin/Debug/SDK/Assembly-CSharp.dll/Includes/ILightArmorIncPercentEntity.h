#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_lightArmorIncPercent() {
		return ((T (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLightArmorIncPercent() {
		return ((T (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLightArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILightArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(ILightArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorIncPercent() {
		return ((T (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
