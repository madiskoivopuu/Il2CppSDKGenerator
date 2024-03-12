#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOftenEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOftenEventSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _lastSentTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AnalyticsOftenEventSystem*))(Il2CppBase() + 0x12A3A6C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AnalyticsOftenEventSystem*))(Il2CppBase() + 0x12A3B58))(this);
	}

};

}
