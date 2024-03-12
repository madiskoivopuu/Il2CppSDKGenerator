#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IThirstSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IThirstSpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_thirstSpeedIncPercent() {
		return ((T (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedIncPercent() {
		return ((T (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddThirstSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IThirstSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IThirstSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedIncPercent() {
		return ((T (*)(IThirstSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
