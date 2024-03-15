#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsAddPlayerLevelSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsAddPlayerLevelSystem"));
	}

	template <typename R = ICommonClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	 ICollector1<AnalyticsEntity*>* GetTrigger(IContext1<AnalyticsEntity*>* context) {
		return ((ICollector1<AnalyticsEntity*>* (*)(AnalyticsAddPlayerLevelSystem*, IContext1<AnalyticsEntity*>*))(Il2CppBase() + 0x129E6E8))(this, context);
	}
	template <typename R = bool> R Filter(AnalyticsEntity* entity) {
		return ((R (*)(AnalyticsAddPlayerLevelSystem*, AnalyticsEntity*))(Il2CppBase() + 0x129E8D8))(this, entity);
	}
	template <typename R = void> R Execute(Il2CppList<AnalyticsEntity*>* entities) {
		return ((R (*)(AnalyticsAddPlayerLevelSystem*, Il2CppList<AnalyticsEntity*>*))(Il2CppBase() + 0x129E948))(this, entities);
	}

};

