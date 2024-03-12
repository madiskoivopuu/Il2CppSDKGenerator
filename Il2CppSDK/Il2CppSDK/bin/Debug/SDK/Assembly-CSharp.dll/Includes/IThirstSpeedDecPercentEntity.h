#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IThirstSpeedDecPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IThirstSpeedDecPercentEntity"));
	}


	template <typename T = uintptr_t> T get_thirstSpeedDecPercent() {
		return ((T (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasThirstSpeedDecPercent() {
		return ((T (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddThirstSpeedDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IThirstSpeedDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceThirstSpeedDecPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IThirstSpeedDecPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveThirstSpeedDecPercent() {
		return ((T (*)(IThirstSpeedDecPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
