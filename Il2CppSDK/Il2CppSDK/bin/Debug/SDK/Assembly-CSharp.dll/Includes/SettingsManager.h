#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettingsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettingsManager"));
	}

	template <typename R = Il2CppArray<FBResolution>*> static R& _availableResolutions() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& HighFPSKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppArray<FBResolution>*> static R GetAvailableResolutions() {
		return ((R (*)(void *))(Il2CppBase() + 0x1625E08))(0);
	}
	template <typename R = FBResolution> static R get_CurrentScreenResolution() {
		return ((R (*)(void *))(Il2CppBase() + 0x1626288))(0);
	}
	template <typename R = void> static R set_CurrentScreenResolution(FBResolution value) {
		return ((R (*)(void *, FBResolution))(Il2CppBase() + 0x162631C))(0, value);
	}
	template <typename R = int32_t> static R get_MSAA() {
		return ((R (*)(void *))(Il2CppBase() + 0x16263C8))(0);
	}
	template <typename R = void> static R set_MSAA(int32_t value) {
		return ((R (*)(void *, int32_t))(Il2CppBase() + 0x1626440))(0, value);
	}
	template <typename R = bool> static R get_HighFPS() {
		return ((R (*)(void *))(Il2CppBase() + 0x16264B4))(0);
	}
	template <typename R = void> static R set_HighFPS(bool value) {
		return ((R (*)(void *, bool))(Il2CppBase() + 0x162650C))(0, value);
	}
	template <typename R = uint8_t> static R GetAutoDetectedQuality() {
		return ((R (*)(void *))(Il2CppBase() + 0x162655C))(0);
	}
	template <typename R = bool> static R IsDeviceSupported() {
		return ((R (*)(void *))(Il2CppBase() + 0x16265F8))(0);
	}

};

