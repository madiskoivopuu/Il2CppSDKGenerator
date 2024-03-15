#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhaseNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhaseNotificationSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = UIWindowsManager*> R& _windowsManager() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _warningWasShown() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& _lastPhase() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(PhaseNotificationSystem*))(Il2CppBase() + 0x16F60DC))(this);
	}

};

