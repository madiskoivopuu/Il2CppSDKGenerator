#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreArmorPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreArmorPercentEntity"));
	}


	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IIgnoreArmorPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IIgnoreArmorPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

