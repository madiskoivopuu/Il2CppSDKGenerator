#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorDecEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorDecEntity"));
	}


	template <typename R = ArmorDecComponent*> R get_armorDec() {
		return ((R (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmorDec() {
		return ((R (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDec(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorDecEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDec() {
		return ((R (*)(IArmorDecEntity*))(Il2CppBase() + 0x0))(this);
	}

};

