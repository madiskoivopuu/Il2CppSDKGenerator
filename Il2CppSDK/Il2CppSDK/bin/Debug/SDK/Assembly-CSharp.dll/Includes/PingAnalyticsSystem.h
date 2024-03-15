#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PingAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PingAnalyticsSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Il2CppList<int64_t>*& _pingHistory() {
		return *(Il2CppList<int64_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& _currentTimer() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& _currentPingUpdateInterval() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& _isEnabled() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _pingAnalyticsEventInterval() {
		return *(R*)((uintptr_t)this + 0x2C);
	}
	template <typename R = float> R& _pingAnalyticsUpdateInterval() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int64_t> R& _pingLimitAnalytics() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Nullable1double>*& _lastSentValue() {
		return *(Nullable1double>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(PingAnalyticsSystem*))(Il2CppBase() + 0x16F6EA4))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(PingAnalyticsSystem*))(Il2CppBase() + 0x16F6EB0))(this);
	}

};

