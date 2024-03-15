#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorDecEntity"));
	}


	template <typename R = HeavyArmorDecComponent*> R get_heavyArmorDec() {
		return ((R (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorDec() {
		return ((R (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHeavyArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHeavyArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorDec() {
		return ((R (*)(IHeavyArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

