#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsServerConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsServerConfig"));
	}

	template <typename R = UpdateIntervalConfig*> R& FPS() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = UpdateIntervalConfig*> R& Ping() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = UpdateIntervalConfig*> R get_FPS() {
		return ((R (*)(AnalyticsServerConfig*))(Il2CppBase() + 0x12A4EF8))(this);
	}
	template <typename R = void> R set_FPS(UpdateIntervalConfig* value) {
		return ((R (*)(AnalyticsServerConfig*, UpdateIntervalConfig*))(Il2CppBase() + 0x12A4F00))(this, value);
	}
	template <typename R = UpdateIntervalConfig*> R get_Ping() {
		return ((R (*)(AnalyticsServerConfig*))(Il2CppBase() + 0x12A4F08))(this);
	}
	template <typename R = void> R set_Ping(UpdateIntervalConfig* value) {
		return ((R (*)(AnalyticsServerConfig*, UpdateIntervalConfig*))(Il2CppBase() + 0x12A4F10))(this, value);
	}

};

