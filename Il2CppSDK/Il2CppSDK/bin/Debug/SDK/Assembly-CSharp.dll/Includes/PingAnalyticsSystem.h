#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PingAnalyticsSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PingAnalyticsSystem"));
	}

	template <typename T = ArenaUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int64_t>*> T& _pingHistory() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& _currentTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& _currentPingUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _isEnabled() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _pingAnalyticsEventInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& _pingAnalyticsUpdateInterval() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& _pingLimitAnalytics() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Nullable1double>*> T& _lastSentValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(PingAnalyticsSystem*))(Il2CppBase() + 0x16F6EA4))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(PingAnalyticsSystem*))(Il2CppBase() + 0x16F6EB0))(this);
	}

};

