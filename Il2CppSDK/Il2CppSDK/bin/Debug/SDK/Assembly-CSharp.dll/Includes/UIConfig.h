#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIConfig"));
	}

	template <typename R = uintptr_t> static R& HEALTHBAR_GREEN() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> static R& HEALTHBAR_RED() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& HEALTHBAR_YELLOW() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static Il2CppDictionary<Il2CppString*, uintptr_t>*& _cache() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = OurDeviceGeneration> static R& DEFAULT_DEVICE_GENERATION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> static R ColorFromHEX(int64_t value) {
		return ((R (*)(void *, int64_t))(Il2CppBase() + 0x102F28C))(0, value);
	}
	 static Nullable1<uintptr_t>* ToColor(Il2CppString* hexStr, Nullable1<uintptr_t>* defaultValue) {
		return ((Nullable1<uintptr_t>* (*)(void *, Il2CppString*, Nullable1<uintptr_t>*))(Il2CppBase() + 0x102F2D0))(0, hexStr, defaultValue);
	}
	template <typename R = OurDeviceGeneration> static R GetDeviceGeneration() {
		return ((R (*)(void *))(Il2CppBase() + 0x102F43C))(0);
	}

};

