#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnalyticsOnEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnalyticsOnEventSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(AnalyticsOnEventSystem*, void*))(Il2CppBase() + 0x12A42B4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t entity) {
		return ((T (*)(AnalyticsOnEventSystem*, uintptr_t))(Il2CppBase() + 0x12A4308))(this, entity);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* entities) {
		return ((T (*)(AnalyticsOnEventSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x12A4374))(this, entities);
	}

};

}
