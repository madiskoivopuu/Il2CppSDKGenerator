#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RaidNotificationsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RaidNotificationsSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& _lastCachedSecond() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& _raidAlertShowed() {
		return *(R*)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(RaidNotificationsSystem*))(Il2CppBase() + 0x170D6A0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(RaidNotificationsSystem*))(Il2CppBase() + 0x170D6A4))(this);
	}

};

