#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITriggerViewEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITriggerViewEntity"));
	}


	template <typename R = TriggerViewComponent*> R get_triggerView() {
		return ((R (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTriggerView() {
		return ((R (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(ITriggerViewEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(ITriggerViewEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R RemoveTriggerView() {
		return ((R (*)(ITriggerViewEntity*))(Il2CppBase() + 0x0))(this);
	}

};

