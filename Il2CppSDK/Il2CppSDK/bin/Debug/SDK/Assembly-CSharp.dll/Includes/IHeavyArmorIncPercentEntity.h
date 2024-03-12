#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IHeavyArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IHeavyArmorIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_heavyArmorIncPercent() {
		return ((T (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasHeavyArmorIncPercent() {
		return ((T (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddHeavyArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHeavyArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IHeavyArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHeavyArmorIncPercent() {
		return ((T (*)(IHeavyArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
