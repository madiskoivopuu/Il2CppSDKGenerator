#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorIncPercentEntity"));
	}


	template <typename R = LightArmorIncPercentComponent*> R get_lightArmorIncPercent() {
		return ((R (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLightArmorIncPercent() {
		return ((R (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLightArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorIncPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorIncPercentEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorIncPercent() {
		return ((R (*)(ILightArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

