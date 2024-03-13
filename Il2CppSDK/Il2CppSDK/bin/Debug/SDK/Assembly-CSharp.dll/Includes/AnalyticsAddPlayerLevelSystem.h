#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsAddPlayerLevelSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsAddPlayerLevelSystem"));
	}

	template <typename T = ICommonClientWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = ICollector1AnalyticsEntity*>*> T GetTrigger(IContext1AnalyticsEntity*>* context) {
		return ((T (*)(AnalyticsAddPlayerLevelSystem*, IContext1AnalyticsEntity*>*))(Il2CppBase() + 0x129E6E8))(this, context);
	}
	template <typename T = bool> T Filter(AnalyticsEntity* entity) {
		return ((T (*)(AnalyticsAddPlayerLevelSystem*, AnalyticsEntity*))(Il2CppBase() + 0x129E8D8))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<AnalyticsEntity*>* entities) {
		return ((T (*)(AnalyticsAddPlayerLevelSystem*, Il2CppList<AnalyticsEntity*>*))(Il2CppBase() + 0x129E948))(this, entities);
	}

};

