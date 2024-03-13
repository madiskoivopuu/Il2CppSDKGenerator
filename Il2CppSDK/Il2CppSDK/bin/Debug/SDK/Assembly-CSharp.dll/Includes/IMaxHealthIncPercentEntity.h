#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxHealthIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxHealthIncPercentEntity"));
	}


	template <typename T = MaxHealthIncPercentComponent*> T get_maxHealthIncPercent() {
		return ((T (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxHealthIncPercent() {
		return ((T (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxHealthIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(IMaxHealthIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxHealthIncPercent() {
		return ((T (*)(IMaxHealthIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

