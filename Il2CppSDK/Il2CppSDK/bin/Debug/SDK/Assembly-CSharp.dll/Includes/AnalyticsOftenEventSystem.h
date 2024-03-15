#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOftenEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOftenEventSystem"));
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
	template <typename R = int64_t> R& _lastSentTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(AnalyticsOftenEventSystem*))(Il2CppBase() + 0x12A3A6C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(AnalyticsOftenEventSystem*))(Il2CppBase() + 0x12A3B58))(this);
	}

};

