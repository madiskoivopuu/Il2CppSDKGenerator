#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhaseNotificationSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhaseNotificationSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _windowsManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _warningWasShown() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _lastPhase() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Execute() {
		return ((T (*)(PhaseNotificationSystem*))(Il2CppBase() + 0x16F60DC))(this);
	}

};

}
