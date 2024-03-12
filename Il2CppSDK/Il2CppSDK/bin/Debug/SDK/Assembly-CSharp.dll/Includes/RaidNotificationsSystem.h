#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidNotificationsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidNotificationsSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _lastCachedSecond() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _raidAlertShowed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(RaidNotificationsSystem*))(Il2CppBase() + 0x170D6A0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(RaidNotificationsSystem*))(Il2CppBase() + 0x170D6A4))(this);
	}

};

}
