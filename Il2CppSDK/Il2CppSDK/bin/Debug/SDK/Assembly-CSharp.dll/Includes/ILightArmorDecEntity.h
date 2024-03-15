#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorDecEntity"));
	}


	template <typename R = LightArmorDecComponent*> R get_lightArmorDec() {
		return ((R (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLightArmorDec() {
		return ((R (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLightArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorDecEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorDec(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorDecEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorDec() {
		return ((R (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

