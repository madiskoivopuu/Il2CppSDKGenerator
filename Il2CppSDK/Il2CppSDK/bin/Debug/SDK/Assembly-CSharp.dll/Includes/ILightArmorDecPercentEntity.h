#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorDecPercentEntity"));
	}


	template <typename R = LightArmorDecPercentComponent*> R get_lightArmorDecPercent() {
		return ((R (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLightArmorDecPercent() {
		return ((R (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ILightArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ILightArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDecPercent() {
		return ((R (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

