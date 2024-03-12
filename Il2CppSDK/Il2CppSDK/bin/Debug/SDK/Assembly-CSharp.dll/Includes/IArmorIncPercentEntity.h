#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_armorIncPercent() {
		return ((T (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmorIncPercent() {
		return ((T (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorIncPercent() {
		return ((T (*)(IArmorIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
