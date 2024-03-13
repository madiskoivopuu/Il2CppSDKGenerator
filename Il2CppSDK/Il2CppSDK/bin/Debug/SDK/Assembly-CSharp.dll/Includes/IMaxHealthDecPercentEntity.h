#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthDecPercentEntity"));
	}


	template <typename T = MaxHealthDecPercentComponent*> T get_maxHealthDecPercent() {
		return ((T (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthDecPercent() {
		return ((T (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthDecPercent() {
		return ((T (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

