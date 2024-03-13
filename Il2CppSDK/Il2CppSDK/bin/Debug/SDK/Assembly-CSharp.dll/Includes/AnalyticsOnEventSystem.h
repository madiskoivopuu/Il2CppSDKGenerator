#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOnEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOnEventSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1AnalyticsEntity*>*> T GetTrigger(IContext1AnalyticsEntity*>* context) {
		return ((T (*)(AnalyticsOnEventSystem*, IContext1AnalyticsEntity*>*))(Il2CppBase() + 0x12A42B4))(this, context);
	}
	template <typename T = bool> T Filter(AnalyticsEntity* entity) {
		return ((T (*)(AnalyticsOnEventSystem*, AnalyticsEntity*))(Il2CppBase() + 0x12A4308))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<AnalyticsEntity*>* entities) {
		return ((T (*)(AnalyticsOnEventSystem*, Il2CppList<AnalyticsEntity*>*))(Il2CppBase() + 0x12A4374))(this, entities);
	}

};

