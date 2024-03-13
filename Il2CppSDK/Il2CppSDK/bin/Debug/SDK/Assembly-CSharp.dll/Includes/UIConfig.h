#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIConfig"));
	}

	template <typename T = uintptr_t> static T& HEALTHBAR_GREEN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& HEALTHBAR_RED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& HEALTHBAR_YELLOW() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = OurDeviceGeneration*> static T& DEFAULT_DEVICE_GENERATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T ColorFromHEX(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x102F28C))(0, value);
	}
	template <typename T = Nullable1uintptr_t>*> static T ToColor(Il2CppString* hexStr, Nullable1uintptr_t>* defaultValue) {
		return ((T (*)(void *, Il2CppString*, Nullable1uintptr_t>*))(Il2CppBase() + 0x102F2D0))(0, hexStr, defaultValue);
	}
	template <typename T = OurDeviceGeneration*> static T GetDeviceGeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x102F43C))(0);
	}

};

