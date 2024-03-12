#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMaxTenacityIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMaxTenacityIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_maxTenacityIncPercent() {
		return ((T (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMaxTenacityIncPercent() {
		return ((T (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMaxTenacityIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMaxTenacityIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxTenacityIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMaxTenacityIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxTenacityIncPercent() {
		return ((T (*)(IMaxTenacityIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
