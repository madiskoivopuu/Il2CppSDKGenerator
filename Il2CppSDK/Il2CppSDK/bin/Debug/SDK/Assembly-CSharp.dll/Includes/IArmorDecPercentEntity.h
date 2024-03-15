#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorDecPercentEntity"));
	}


	template <typename R = ArmorDecPercentComponent*> R get_armorDecPercent() {
		return ((R (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmorDecPercent() {
		return ((R (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceArmorDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IArmorDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveArmorDecPercent() {
		return ((R (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

