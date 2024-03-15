#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthDecPercentEntity"));
	}


	template <typename R = MaxHealthDecPercentComponent*> R get_maxHealthDecPercent() {
		return ((R (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthDecPercent() {
		return ((R (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxHealthDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthDecPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxHealthDecPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthDecPercent() {
		return ((R (*)(IMaxHealthDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

