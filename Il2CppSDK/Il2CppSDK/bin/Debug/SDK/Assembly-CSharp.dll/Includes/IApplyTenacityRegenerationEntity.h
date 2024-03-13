#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IApplyTenacityRegenerationEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IApplyTenacityRegenerationEntity"));
	}


	template <typename T = ApplyTenacityRegenerationComponent*> T get_applyTenacityRegeneration() {
		return ((T (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasApplyTenacityRegeneration() {
		return ((T (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(IApplyTenacityRegenerationEntity*, bool, float))(Il2CppBase() + 0x0))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(IApplyTenacityRegenerationEntity*, bool, float))(Il2CppBase() + 0x0))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T RemoveApplyTenacityRegeneration() {
		return ((T (*)(IApplyTenacityRegenerationEntity*))(Il2CppBase() + 0x0))(this);
	}

};

