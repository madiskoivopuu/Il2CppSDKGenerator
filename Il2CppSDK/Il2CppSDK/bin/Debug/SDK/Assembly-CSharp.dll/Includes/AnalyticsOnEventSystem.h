#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOnEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOnEventSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1AnalyticsEntity*>* GetTrigger(IContext1AnalyticsEntity*>* context) {
		return ((ICollector1AnalyticsEntity*>* (*)(AnalyticsOnEventSystem*, IContext1AnalyticsEntity*>*))(Il2CppBase() + 0x12A42B4))(this, context);
	}
	template <typename R = bool> R Filter(AnalyticsEntity* entity) {
		return ((R (*)(AnalyticsOnEventSystem*, AnalyticsEntity*))(Il2CppBase() + 0x12A4308))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AnalyticsEntity*>* entities) {
		return ((R (*)(AnalyticsOnEventSystem*, Il2CppList<AnalyticsEntity*>*))(Il2CppBase() + 0x12A4374))(this, entities);
	}

};

