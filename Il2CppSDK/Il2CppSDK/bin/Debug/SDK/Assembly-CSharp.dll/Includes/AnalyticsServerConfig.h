#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsServerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsServerConfig"));
	}

	template <typename T = uintptr_t> T& FPS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Ping() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_FPS() {
		return ((T (*)(AnalyticsServerConfig*))(Il2CppBase() + 0x12A4EF8))(this);
	}
	template <typename T = void> T set_FPS(uintptr_t value) {
		return ((T (*)(AnalyticsServerConfig*, uintptr_t))(Il2CppBase() + 0x12A4F00))(this, value);
	}
	template <typename T = uintptr_t> T get_Ping() {
		return ((T (*)(AnalyticsServerConfig*))(Il2CppBase() + 0x12A4F08))(this);
	}
	template <typename T = void> T set_Ping(uintptr_t value) {
		return ((T (*)(AnalyticsServerConfig*, uintptr_t))(Il2CppBase() + 0x12A4F10))(this, value);
	}

};

}
