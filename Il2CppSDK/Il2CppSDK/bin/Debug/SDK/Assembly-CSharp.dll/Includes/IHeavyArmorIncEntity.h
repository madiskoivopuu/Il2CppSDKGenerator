#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorIncEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorIncEntity"));
	}


	template <typename R = HeavyArmorIncComponent*> R get_heavyArmorInc() {
		return ((R (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasHeavyArmorInc() {
		return ((R (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHeavyArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHeavyArmorInc(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IHeavyArmorIncEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHeavyArmorInc() {
		return ((R (*)(IHeavyArmorIncEntity*))(Il2CppBase() + 0x0))(this);
	}

};

