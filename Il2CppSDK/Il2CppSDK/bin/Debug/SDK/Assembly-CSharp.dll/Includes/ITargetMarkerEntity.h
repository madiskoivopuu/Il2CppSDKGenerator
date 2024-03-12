#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetMarkerEntity"));
	}


	template <typename T = uintptr_t> T get_targetMarker() {
		return ((T (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasTargetMarker() {
		return ((T (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(ITargetMarkerEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T ReplaceTargetMarker(int32_t newPriority, Il2CppArray<uintptr_t>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((T (*)(ITargetMarkerEntity*, int32_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename T = void> T RemoveTargetMarker() {
		return ((T (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
