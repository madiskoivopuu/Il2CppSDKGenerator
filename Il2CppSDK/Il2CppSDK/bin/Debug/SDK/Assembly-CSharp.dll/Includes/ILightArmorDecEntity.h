#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorDecEntity"));
	}


	template <typename T = LightArmorDecComponent*> T get_lightArmorDec() {
		return ((T (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLightArmorDec() {
		return ((T (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ILightArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLightArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ILightArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLightArmorDec() {
		return ((T (*)(ILightArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

