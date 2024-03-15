#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILightArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILightArmorIncEntity"));
	}


	template <typename R = LightArmorIncComponent*> R get_lightArmorInc() {
		return ((R (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLightArmorInc() {
		return ((R (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLightArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLightArmorInc(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ILightArmorIncEntity*, float, ModifierGroup))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLightArmorInc() {
		return ((R (*)(ILightArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

