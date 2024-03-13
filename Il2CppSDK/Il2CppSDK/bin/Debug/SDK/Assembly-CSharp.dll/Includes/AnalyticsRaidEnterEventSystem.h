#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsRaidEnterEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsRaidEnterEventSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = ITimeManager*> T& _timeManager() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = IGroup1AnalyticsEntity*>*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _startCheckTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _startCheck() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(AnalyticsRaidEnterEventSystem*))(Il2CppBase() + 0x12A4660))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(AnalyticsRaidEnterEventSystem*))(Il2CppBase() + 0x12A474C))(this);
	}

};

