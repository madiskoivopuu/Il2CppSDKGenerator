#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITriggerViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITriggerViewEntity"));
	}


	template <typename T = uintptr_t> T get_triggerView() {
		return ((T (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTriggerView() {
		return ((T (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(ITriggerViewEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(ITriggerViewEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T RemoveTriggerView() {
		return ((T (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
