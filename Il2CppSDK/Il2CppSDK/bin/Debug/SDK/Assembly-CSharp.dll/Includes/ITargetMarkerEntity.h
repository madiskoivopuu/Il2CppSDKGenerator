#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetMarkerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetMarkerEntity"));
	}


	template <typename R = TargetMarkerComponent*> R get_targetMarker() {
		return ((R (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasTargetMarker() {
		return ((R (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(ITargetMarkerEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R ReplaceTargetMarker(int32_t newPriority, Il2CppArray<Il2CppString*>* newTags, Il2CppString* newEffect, Il2CppString* newArrowEffect, Il2CppString* newPathEffect, Il2CppString* newAlertButton, Il2CppString* newActorCondition, Il2CppString* newTargetCondition) {
		return ((R (*)(ITargetMarkerEntity*, int32_t, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newPriority, newTags, newEffect, newArrowEffect, newPathEffect, newAlertButton, newActorCondition, newTargetCondition);
	}
	template <typename R = void> R RemoveTargetMarker() {
		return ((R (*)(ITargetMarkerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

