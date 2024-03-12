#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountSpeedEntity"));
	}


	template <typename T = uintptr_t> T get_mountSpeed() {
		return ((T (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMountSpeed() {
		return ((T (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMountSpeed(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMountSpeedEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMountSpeed(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMountSpeedEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMountSpeed() {
		return ((T (*)(IMountSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
