#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorIncEntity"));
	}


	template <typename R = ArmorIncComponent*> R get_armorInc() {
		return ((R (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmorInc() {
		return ((R (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorInc() {
		return ((R (*)(IArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

