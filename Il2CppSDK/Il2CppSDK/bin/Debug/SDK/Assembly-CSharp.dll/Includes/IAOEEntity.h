#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAOEEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAOEEntity"));
	}


	template <typename R = AOEComponent*> R get_aOE() {
		return ((R (*)(IAOEEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAOE() {
		return ((R (*)(IAOEEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(IAOEEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x0))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R ReplaceAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(IAOEEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x0))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R RemoveAOE() {
		return ((R (*)(IAOEEntity*))(Il2CppBase() + 0x0))(this);
	}

};

