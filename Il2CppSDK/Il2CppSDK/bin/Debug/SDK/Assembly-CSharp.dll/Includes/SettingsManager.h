#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _availableResolutions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& HighFPSKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetAvailableResolutions() {
		return ((T (*)(void *))(Il2CppBase() + 0x1625E08))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentScreenResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x1626288))(0);
	}
	template <typename T = void> static T set_CurrentScreenResolution(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x162631C))(0, value);
	}
	template <typename T = int32_t> static T get_MSAA() {
		return ((T (*)(void *))(Il2CppBase() + 0x16263C8))(0);
	}
	template <typename T = void> static T set_MSAA(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1626440))(0, value);
	}
	template <typename T = bool> static T get_HighFPS() {
		return ((T (*)(void *))(Il2CppBase() + 0x16264B4))(0);
	}
	template <typename T = void> static T set_HighFPS(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x162650C))(0, value);
	}
	template <typename T = unsigned char> static T GetAutoDetectedQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x162655C))(0);
	}
	template <typename T = bool> static T IsDeviceSupported() {
		return ((T (*)(void *))(Il2CppBase() + 0x16265F8))(0);
	}

};

}
