#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmorDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmorDecPercentEntity"));
	}


	template <typename T = uintptr_t> T get_armorDecPercent() {
		return ((T (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmorDecPercent() {
		return ((T (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmorDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceArmorDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IArmorDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveArmorDecPercent() {
		return ((T (*)(IArmorDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
