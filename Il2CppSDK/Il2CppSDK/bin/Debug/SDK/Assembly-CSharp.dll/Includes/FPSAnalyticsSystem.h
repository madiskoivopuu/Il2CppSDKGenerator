#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPSAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FPSAnalyticsSystem"));
	}

	template <typename T = float> T& _currentTimer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _currentfpsUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& _accum() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _frames() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<float>*> T& fpsHistory() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _isEnabled() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _fpsAnalyticsEventInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _fpsAnalyticsUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _fpsLimitAnalytics() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> T& _lastSentValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(FPSAnalyticsSystem*))(Il2CppBase() + 0x1692064))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(FPSAnalyticsSystem*))(Il2CppBase() + 0x1692070))(this);
	}

};

}
