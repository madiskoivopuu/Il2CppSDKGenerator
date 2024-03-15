#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsRaidEnterEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsRaidEnterEventSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = ITimeManager*> R& _timeManager() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 IGroup1AnalyticsEntity*>*& _entities() {
		return *(IGroup1AnalyticsEntity*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& _startCheckTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = bool> R& _startCheck() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AnalyticsRaidEnterEventSystem*))(Il2CppBase() + 0x12A4660))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AnalyticsRaidEnterEventSystem*))(Il2CppBase() + 0x12A474C))(this);
	}

};

