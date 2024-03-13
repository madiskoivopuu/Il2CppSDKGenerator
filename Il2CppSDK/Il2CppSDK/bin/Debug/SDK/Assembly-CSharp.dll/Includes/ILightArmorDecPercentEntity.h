#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorDecPercentEntity"));
	}


	template <typename T = LightArmorDecPercentComponent*> T get_lightArmorDecPercent() {
		return ((T (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLightArmorDecPercent() {
		return ((T (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ILightArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ILightArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDecPercent() {
		return ((T (*)(ILightArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

