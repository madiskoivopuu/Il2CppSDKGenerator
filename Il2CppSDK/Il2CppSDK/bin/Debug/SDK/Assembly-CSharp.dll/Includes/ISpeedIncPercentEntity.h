#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_speedIncPercent() {
		return ((T (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSpeedIncPercent() {
		return ((T (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(ISpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveSpeedIncPercent() {
		return ((T (*)(ISpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
