#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthIncPercentEntity"));
	}


	template <typename R = MaxHealthIncPercentComponent*> R get_maxHealthIncPercent() {
		return ((R (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxHealthIncPercent() {
		return ((R (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxHealthIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxHealthIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxHealthIncPercent() {
		return ((R (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

