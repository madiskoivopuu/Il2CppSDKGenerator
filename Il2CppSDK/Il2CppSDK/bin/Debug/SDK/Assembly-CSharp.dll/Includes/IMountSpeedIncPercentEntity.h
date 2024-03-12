#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_mountSpeedIncPercent() {
		return ((T (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountSpeedIncPercent() {
		return ((T (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMountSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMountSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeedIncPercent() {
		return ((T (*)(IMountSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
