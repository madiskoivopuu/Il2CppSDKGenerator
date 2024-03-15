#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityIncPercentEntity"));
	}


	template <typename R = MaxTenacityIncPercentComponent*> R get_maxTenacityIncPercent() {
		return ((R (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMaxTenacityIncPercent() {
		return ((R (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxTenacityIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxTenacityIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMaxTenacityIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxTenacityIncPercent() {
		return ((R (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};
