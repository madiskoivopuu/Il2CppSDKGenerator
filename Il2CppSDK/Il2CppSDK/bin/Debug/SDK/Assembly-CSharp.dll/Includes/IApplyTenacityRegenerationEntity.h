#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyTenacityRegenerationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyTenacityRegenerationEntity"));
	}


	template <typename R = ApplyTenacityRegenerationComponent*> R get_applyTenacityRegeneration() {
		return ((R (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasApplyTenacityRegeneration() {
		return ((R (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(IApplyTenacityRegenerationEntity*, bool, float))(Il2CppBase() + 0x0))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(IApplyTenacityRegenerationEntity*, bool, float))(Il2CppBase() + 0x0))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R RemoveApplyTenacityRegeneration() {
		return ((R (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

