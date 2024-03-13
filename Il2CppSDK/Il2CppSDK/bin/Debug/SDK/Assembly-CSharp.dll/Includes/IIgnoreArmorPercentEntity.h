#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IIgnoreArmorPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IIgnoreArmorPercentEntity"));
	}


	template <typename T = IgnoreArmorPercentComponent*> T get_ignoreArmorPercent() {
		return ((T (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIgnoreArmorPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IIgnoreArmorPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(IIgnoreArmorPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

