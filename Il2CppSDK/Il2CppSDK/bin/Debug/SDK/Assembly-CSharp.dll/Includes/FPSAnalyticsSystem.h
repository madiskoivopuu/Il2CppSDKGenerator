#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FPSAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FPSAnalyticsSystem"));
	}

	template <typename R = float> R& _currentTimer() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& _currentfpsUpdateInterval() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = float> R& _accum() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& _frames() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	 Il2CppList<float>*& fpsHistory() {
		return *(Il2CppList<float>**)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _isEnabled() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _fpsAnalyticsEventInterval() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& _fpsAnalyticsUpdateInterval() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _fpsLimitAnalytics() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Nullable1float>*& _lastSentValue() {
		return *(Nullable1float>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(FPSAnalyticsSystem*))(Il2CppBase() + 0x1692064))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(FPSAnalyticsSystem*))(Il2CppBase() + 0x1692070))(this);
	}

};

