#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemEntity"));
	}

	template <typename T = CantDeleteComponent*> static T& cantDeleteComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IndestructibleComponent*> static T& indestructibleComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = InstantComponent*> static T& instantComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = LoadCartComponent*> static T& loadCartComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = UndeletableComponent*> static T& undeletableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = UndropableComponent*> static T& undropableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6008))(this);
	}
	template <typename T = AIUseComponent*> T get_aIUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6088))(this);
	}
	template <typename T = bool> T get_hasAIUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6110))(this);
	}
	template <typename T = void> T AddAIUse(int32_t newAttackCount, float newDelay, float newPeriod, float newDistance, Nullable1int32_t>* newUseCount, bool newOnlyOnBorder, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, TargetsSelector* newSelector) {
		return ((T (*)(ItemEntity*, int32_t, float, float, float, Nullable1int32_t>*, bool, Il2CppString*, Il2CppString*, TargetsSelector*))(Il2CppBase() + 0x10F611C))(this, newAttackCount, newDelay, newPeriod, newDistance, newUseCount, newOnlyOnBorder, newActorCondition, newTargetCondition, newSelector);
	}
	template <typename T = void> T ReplaceAIUse(int32_t newAttackCount, float newDelay, float newPeriod, float newDistance, Nullable1int32_t>* newUseCount, bool newOnlyOnBorder, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, TargetsSelector* newSelector) {
		return ((T (*)(ItemEntity*, int32_t, float, float, float, Nullable1int32_t>*, bool, Il2CppString*, Il2CppString*, TargetsSelector*))(Il2CppBase() + 0x10F62A8))(this, newAttackCount, newDelay, newPeriod, newDistance, newUseCount, newOnlyOnBorder, newActorCondition, newTargetCondition, newSelector);
	}
	template <typename T = void> T RemoveAIUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6434))(this);
	}
	template <typename T = AOEComponent*> T get_aOE() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F35E8))(this);
	}
	template <typename T = bool> T get_hasAOE() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F35DC))(this);
	}
	template <typename T = void> T AddAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<uintptr_t>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((T (*)(ItemEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<uintptr_t>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x10F6440))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename T = void> T ReplaceAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<uintptr_t>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((T (*)(ItemEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<uintptr_t>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x10F66BC))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename T = void> T RemoveAOE() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6938))(this);
	}
	template <typename T = ActionSoundComponent*> T get_actionSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6944))(this);
	}
	template <typename T = bool> T get_hasActionSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F69CC))(this);
	}
	template <typename T = void> T AddActionSound(Il2CppString* newStart, Il2CppString* newApply, Il2CppString* newTarget, Il2CppString* newBreak) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F69D8))(this, newStart, newApply, newTarget, newBreak);
	}
	template <typename T = void> T ReplaceActionSound(Il2CppString* newStart, Il2CppString* newApply, Il2CppString* newTarget, Il2CppString* newBreak) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F6B30))(this, newStart, newApply, newTarget, newBreak);
	}
	template <typename T = void> T RemoveActionSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6C88))(this);
	}
	template <typename T = ActiveConditionComponent*> T get_activeCondition() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6C94))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6D1C))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x10F6D28))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x10F6E78))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6FC8))(this);
	}
	template <typename T = AddExperienceComponent*> T get_addExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F6FD4))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F705C))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F7068))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F716C))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7270))(this);
	}
	template <typename T = AddExpertiseComponent*> T get_addExpertise() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F727C))(this);
	}
	template <typename T = bool> T get_hasAddExpertise() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7304))(this);
	}
	template <typename T = void> T AddAddExpertise(PlayerClassType* newClassType, float newValue) {
		return ((T (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F7310))(this, newClassType, newValue);
	}
	template <typename T = void> T ReplaceAddExpertise(PlayerClassType* newClassType, float newValue) {
		return ((T (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F7424))(this, newClassType, newValue);
	}
	template <typename T = void> T RemoveAddExpertise() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7538))(this);
	}
	template <typename T = AddMasteryComponent*> T get_addMastery() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7544))(this);
	}
	template <typename T = bool> T get_hasAddMastery() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F75CC))(this);
	}
	template <typename T = void> T AddAddMastery(PlayerClassType* newClassType, float newValue) {
		return ((T (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F75D8))(this, newClassType, newValue);
	}
	template <typename T = void> T ReplaceAddMastery(PlayerClassType* newClassType, float newValue) {
		return ((T (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F76EC))(this, newClassType, newValue);
	}
	template <typename T = void> T RemoveAddMastery() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7800))(this);
	}
	template <typename T = AddPetExperienceComponent*> T get_addPetExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F780C))(this);
	}
	template <typename T = bool> T get_hasAddPetExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7894))(this);
	}
	template <typename T = void> T AddAddPetExperience(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F78A0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddPetExperience(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F79A4))(this, newValue);
	}
	template <typename T = void> T RemoveAddPetExperience() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7AA8))(this);
	}
	template <typename T = AddShieldSeconds*> T get_addShieldSeconds() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7AB4))(this);
	}
	template <typename T = bool> T get_hasAddShieldSeconds() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7B3C))(this);
	}
	template <typename T = void> T AddAddShieldSeconds(int64_t newValue) {
		return ((T (*)(ItemEntity*, int64_t))(Il2CppBase() + 0x10F7B48))(this, newValue);
	}
	template <typename T = void> T ReplaceAddShieldSeconds(int64_t newValue) {
		return ((T (*)(ItemEntity*, int64_t))(Il2CppBase() + 0x10F7C4C))(this, newValue);
	}
	template <typename T = void> T RemoveAddShieldSeconds() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7D50))(this);
	}
	template <typename T = AlvesBpPointsComponent*> T get_alvesBpPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7D5C))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7DE4))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F7DF0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F7EF4))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F7FF8))(this);
	}
	template <typename T = AlvesWavesBadgesT1Component*> T get_alvesWavesBadgesT1() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8004))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F808C))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8098))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F819C))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F82A0))(this);
	}
	template <typename T = AlvesWavesBadgesT2Component*> T get_alvesWavesBadgesT2() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F82AC))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8334))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8340))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8444))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8548))(this);
	}
	template <typename T = AlvesWavesBadgesT3Component*> T get_alvesWavesBadgesT3() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8554))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F85DC))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F85E8))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F86EC))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F87F0))(this);
	}
	template <typename T = AnalyticSettingsComponent*> T get_analyticSettings() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F87FC))(this);
	}
	template <typename T = bool> T get_hasAnalyticSettings() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8884))(this);
	}
	template <typename T = void> T AddAnalyticSettings(Il2CppString* newEventName, Il2CppString* newActionName, ActionLabels* newAddLabel, ActionLabels* newRemoveLabel) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, ActionLabels*, ActionLabels*))(Il2CppBase() + 0x10F8890))(this, newEventName, newActionName, newAddLabel, newRemoveLabel);
	}
	template <typename T = void> T ReplaceAnalyticSettings(Il2CppString* newEventName, Il2CppString* newActionName, ActionLabels* newAddLabel, ActionLabels* newRemoveLabel) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, ActionLabels*, ActionLabels*))(Il2CppBase() + 0x10F8A00))(this, newEventName, newActionName, newAddLabel, newRemoveLabel);
	}
	template <typename T = void> T RemoveAnalyticSettings() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8B70))(this);
	}
	template <typename T = AnimatorComponent*> T get_animator() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8B7C))(this);
	}
	template <typename T = bool> T get_hasAnimator() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8C04))(this);
	}
	template <typename T = void> T AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x10F8C10))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x10F8DB8))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T RemoveAnimator() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F8F60))(this);
	}
	template <typename T = ApplyActorMagicByGradeComponent*> T get_applyActorMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4978))(this);
	}
	template <typename T = bool> T get_hasApplyActorMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F496C))(this);
	}
	template <typename T = void> T AddApplyActorMagicByGrade(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F8F6C))(this, newNames);
	}
	template <typename T = void> T ReplaceApplyActorMagicByGrade(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F9080))(this, newNames);
	}
	template <typename T = void> T RemoveApplyActorMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9194))(this);
	}
	template <typename T = ApplyActorMagicComponent*> T get_applyActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4058))(this);
	}
	template <typename T = bool> T get_hasApplyActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F404C))(this);
	}
	template <typename T = void> T AddApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F91A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F40E0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9308))(this);
	}
	template <typename T = ApplyCosmeticToInventoryComponent*> T get_applyCosmeticToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9314))(this);
	}
	template <typename T = bool> T get_hasApplyCosmeticToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F939C))(this);
	}
	template <typename T = void> T AddApplyCosmeticToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F93A8))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename T = void> T ReplaceApplyCosmeticToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F94EC))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename T = void> T RemoveApplyCosmeticToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9630))(this);
	}
	template <typename T = ApplyDurabilityDamageComponent*> T get_applyDurabilityDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F963C))(this);
	}
	template <typename T = bool> T get_hasApplyDurabilityDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F96C4))(this);
	}
	template <typename T = void> T AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(ItemEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x10F96D0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(ItemEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x10F9804))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T RemoveApplyDurabilityDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9938))(this);
	}
	template <typename T = ApplyLevelCapUpComponent*> T get_applyLevelCapUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9944))(this);
	}
	template <typename T = bool> T get_hasApplyLevelCapUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F99CC))(this);
	}
	template <typename T = void> T AddApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F99D8))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F9ADC))(this, newValue);
	}
	template <typename T = void> T RemoveApplyLevelCapUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9BE0))(this);
	}
	template <typename T = ApplyLocationMagicComponent*> T get_applyLocationMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9BEC))(this);
	}
	template <typename T = bool> T get_hasApplyLocationMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9C74))(this);
	}
	template <typename T = void> T AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F9C80))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F9DE8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyLocationMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9F50))(this);
	}
	template <typename T = ApplyMapEventComponent*> T get_applyMapEvent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9F5C))(this);
	}
	template <typename T = bool> T get_hasApplyMapEvent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F9FE4))(this);
	}
	template <typename T = void> T AddApplyMapEvent(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F9FF0))(this, newName);
	}
	template <typename T = void> T ReplaceApplyMapEvent(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FA104))(this, newName);
	}
	template <typename T = void> T RemoveApplyMapEvent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA218))(this);
	}
	template <typename T = ApplyMountToInventoryComponent*> T get_applyMountToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA224))(this);
	}
	template <typename T = bool> T get_hasApplyMountToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA2AC))(this);
	}
	template <typename T = void> T AddApplyMountToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA2B8))(this, newName, newRandomGroup);
	}
	template <typename T = void> T ReplaceApplyMountToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA3E0))(this, newName, newRandomGroup);
	}
	template <typename T = void> T RemoveApplyMountToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA508))(this);
	}
	template <typename T = ApplyPetToInventoryComponent*> T get_applyPetToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA514))(this);
	}
	template <typename T = bool> T get_hasApplyPetToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA59C))(this);
	}
	template <typename T = void> T AddApplyPetToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA5A8))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename T = void> T ReplaceApplyPetToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA6EC))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename T = void> T RemoveApplyPetToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA830))(this);
	}
	template <typename T = ApplyPlaceComponent*> T get_applyPlace() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA83C))(this);
	}
	template <typename T = bool> T get_hasApplyPlace() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FA8C4))(this);
	}
	template <typename T = void> T AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10FA8D0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10FAA08))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyPlace() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FAB40))(this);
	}
	template <typename T = ApplyResourcesToInventoryComponent*> T get_applyResourcesToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FAB4C))(this);
	}
	template <typename T = bool> T get_hasApplyResourcesToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FABD4))(this);
	}
	template <typename T = void> T AddApplyResourcesToInventory(Il2CppArray<uintptr_t>* newValues, Il2CppString* newRandomGroup, bool newShowNotification, bool newLogResult, Il2CppString* newButtonText) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppString*, bool, bool, Il2CppString*))(Il2CppBase() + 0x10FABE0))(this, newValues, newRandomGroup, newShowNotification, newLogResult, newButtonText);
	}
	template <typename T = void> T ReplaceApplyResourcesToInventory(Il2CppArray<uintptr_t>* newValues, Il2CppString* newRandomGroup, bool newShowNotification, bool newLogResult, Il2CppString* newButtonText) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppString*, bool, bool, Il2CppString*))(Il2CppBase() + 0x10FAD44))(this, newValues, newRandomGroup, newShowNotification, newLogResult, newButtonText);
	}
	template <typename T = void> T RemoveApplyResourcesToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FAEA8))(this);
	}
	template <typename T = ApplyRuneToInventoryComponent*> T get_applyRuneToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FAEB4))(this);
	}
	template <typename T = bool> T get_hasApplyRuneToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FAF3C))(this);
	}
	template <typename T = void> T AddApplyRuneToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FAF48))(this, newName, newRandomGroup);
	}
	template <typename T = void> T ReplaceApplyRuneToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FB070))(this, newName, newRandomGroup);
	}
	template <typename T = void> T RemoveApplyRuneToInventory() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB198))(this);
	}
	template <typename T = ApplyTargetMagicComponent*> T get_applyTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3C60))(this);
	}
	template <typename T = bool> T get_hasApplyTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3C54))(this);
	}
	template <typename T = void> T AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10FB1A4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F3CE8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB30C))(this);
	}
	template <typename T = ApplyToInventoryOnDeleteComponent*> T get_applyToInventoryOnDelete() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB318))(this);
	}
	template <typename T = bool> T get_hasApplyToInventoryOnDelete() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB3A0))(this);
	}
	template <typename T = void> T AddApplyToInventoryOnDelete(Il2CppArray<uintptr_t>* newToCommonInventory) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FB3AC))(this, newToCommonInventory);
	}
	template <typename T = void> T ReplaceApplyToInventoryOnDelete(Il2CppArray<uintptr_t>* newToCommonInventory) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FB4C0))(this, newToCommonInventory);
	}
	template <typename T = void> T RemoveApplyToInventoryOnDelete() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB5D4))(this);
	}
	template <typename T = ArmingCoatComponent*> T get_armingCoat() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB5E0))(this);
	}
	template <typename T = bool> T get_hasArmingCoat() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB668))(this);
	}
	template <typename T = void> T AddArmingCoat(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FB674))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCoat(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FB788))(this, newName);
	}
	template <typename T = void> T RemoveArmingCoat() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB89C))(this);
	}
	template <typename T = ArmorComponent*> T get_armor() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB8A8))(this);
	}
	template <typename T = bool> T get_hasArmor() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FB930))(this);
	}
	template <typename T = void> T AddArmor(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10FB93C))(this, newValue);
	}
	template <typename T = void> T ReplaceArmor(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10FBA40))(this, newValue);
	}
	template <typename T = void> T RemoveArmor() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FBB44))(this);
	}
	template <typename T = AttackActionComponent*> T get_attackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F39D0))(this);
	}
	template <typename T = bool> T get_hasAttackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F39C4))(this);
	}
	template <typename T = void> T AddAttackAction(Il2CppString* newName, Il2CppString* newAltName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FBB50))(this, newName, newAltName);
	}
	template <typename T = void> T ReplaceAttackAction(Il2CppString* newName, Il2CppString* newAltName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FBC78))(this, newName, newAltName);
	}
	template <typename T = void> T RemoveAttackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FBDA0))(this);
	}
	template <typename T = AuraComponent*> T get_aura() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FBDAC))(this);
	}
	template <typename T = bool> T get_hasAura() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FBE34))(this);
	}
	template <typename T = void> T AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x10FBE40))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0x10FBF98))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveAura() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC0F0))(this);
	}
	template <typename T = BopComponent*> T get_bop() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC0FC))(this);
	}
	template <typename T = bool> T get_hasBop() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC184))(this);
	}
	template <typename T = void> T AddBop(Il2CppString* newActiveCondition) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC190))(this, newActiveCondition);
	}
	template <typename T = void> T ReplaceBop(Il2CppString* newActiveCondition) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC2A4))(this, newActiveCondition);
	}
	template <typename T = void> T RemoveBop() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC3B8))(this);
	}
	template <typename T = BattlePassComponent*> T get_battlePass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F5BEC))(this);
	}
	template <typename T = bool> T get_hasBattlePass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC3C4))(this);
	}
	template <typename T = void> T AddBattlePass(int32_t newStep, Il2CppString* newStepName, int32_t newPoints, int32_t newInfinityPoints, CurrencyType* newCurrencyType, bool newNextBestReward, Il2CppArray<uintptr_t>* newBestMainRewards, Il2CppArray<uintptr_t>* newBestPremiumRewards, Il2CppArray<uintptr_t>* newMasterServerMainRewards, Il2CppArray<uintptr_t>* newMasterServerPremiumRewards, Il2CppArray<uintptr_t>* newMainReward, Il2CppArray<uintptr_t>* newPremiumReward) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, int32_t, int32_t, CurrencyType*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FC3D0))(this, newStep, newStepName, newPoints, newInfinityPoints, newCurrencyType, newNextBestReward, newBestMainRewards, newBestPremiumRewards, newMasterServerMainRewards, newMasterServerPremiumRewards, newMainReward, newPremiumReward);
	}
	template <typename T = void> T ReplaceBattlePass(int32_t newStep, Il2CppString* newStepName, int32_t newPoints, int32_t newInfinityPoints, CurrencyType* newCurrencyType, bool newNextBestReward, Il2CppArray<uintptr_t>* newBestMainRewards, Il2CppArray<uintptr_t>* newBestPremiumRewards, Il2CppArray<uintptr_t>* newMasterServerMainRewards, Il2CppArray<uintptr_t>* newMasterServerPremiumRewards, Il2CppArray<uintptr_t>* newMainReward, Il2CppArray<uintptr_t>* newPremiumReward) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, int32_t, int32_t, CurrencyType*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FC5A8))(this, newStep, newStepName, newPoints, newInfinityPoints, newCurrencyType, newNextBestReward, newBestMainRewards, newBestPremiumRewards, newMasterServerMainRewards, newMasterServerPremiumRewards, newMainReward, newPremiumReward);
	}
	template <typename T = void> T RemoveBattlePass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC780))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2168))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F607C))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC78C))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC8A0))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC9B4))(this);
	}
	template <typename T = BookComponent*> T get_book() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FC9C0))(this);
	}
	template <typename T = bool> T get_hasBook() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FCA48))(this);
	}
	template <typename T = void> T AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FCA54))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FCBC8))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename T = void> T RemoveBook() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FCD3C))(this);
	}
	template <typename T = BossDescriptionComponent*> T get_bossDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FCD48))(this);
	}
	template <typename T = bool> T get_hasBossDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FCDD0))(this);
	}
	template <typename T = void> T AddBossDescription(Il2CppArray<uintptr_t>* newPhases, Il2CppArray<uintptr_t>* newSkills, Difficulty* newDifficulty, Il2CppString* newLocationName, Il2CppString* newExitTag, Il2CppString* newToLocationName, Il2CppString* newLocationImage, Il2CppString* newBossTransparentImage, Il2CppArray<uintptr_t>* newBestRewards) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Difficulty*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FCDDC))(this, newPhases, newSkills, newDifficulty, newLocationName, newExitTag, newToLocationName, newLocationImage, newBossTransparentImage, newBestRewards);
	}
	template <typename T = void> T ReplaceBossDescription(Il2CppArray<uintptr_t>* newPhases, Il2CppArray<uintptr_t>* newSkills, Difficulty* newDifficulty, Il2CppString* newLocationName, Il2CppString* newExitTag, Il2CppString* newToLocationName, Il2CppString* newLocationImage, Il2CppString* newBossTransparentImage, Il2CppArray<uintptr_t>* newBestRewards) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Difficulty*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FCFA4))(this, newPhases, newSkills, newDifficulty, newLocationName, newExitTag, newToLocationName, newLocationImage, newBossTransparentImage, newBestRewards);
	}
	template <typename T = void> T RemoveBossDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD16C))(this);
	}
	template <typename T = BreakActionEffectComponent*> T get_breakActionEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD178))(this);
	}
	template <typename T = bool> T get_hasBreakActionEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD200))(this);
	}
	template <typename T = void> T AddBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x10FD20C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x10FD3A8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveBreakActionEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD544))(this);
	}
	template <typename T = BusyActionComponent*> T get_busyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD550))(this);
	}
	template <typename T = bool> T get_hasBusyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD5D8))(this);
	}
	template <typename T = void> T AddBusyAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD5E4))(this, newName);
	}
	template <typename T = void> T ReplaceBusyAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD6F8))(this, newName);
	}
	template <typename T = void> T RemoveBusyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD80C))(this);
	}
	template <typename T = CanOperateComponent*> T get_canOperate() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD818))(this);
	}
	template <typename T = bool> T get_hasCanOperate() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FD8A0))(this);
	}
	template <typename T = void> T AddCanOperate(Il2CppString* newCondition) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD8AC))(this, newCondition);
	}
	template <typename T = void> T ReplaceCanOperate(Il2CppString* newCondition) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD9C0))(this, newCondition);
	}
	template <typename T = void> T RemoveCanOperate() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDAD4))(this);
	}
	template <typename T = CancelUseComponent*> T get_cancelUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDAE0))(this);
	}
	template <typename T = bool> T get_hasCancelUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4A00))(this);
	}
	template <typename T = void> T AddCancelUse(Il2CppString* newMagicName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FDB68))(this, newMagicName);
	}
	template <typename T = void> T ReplaceCancelUse(Il2CppString* newMagicName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F4A0C))(this, newMagicName);
	}
	template <typename T = void> T RemoveCancelUse() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDC7C))(this);
	}
	template <typename T = bool> T get_isCantDelete() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDC88))(this);
	}
	template <typename T = void> T set_isCantDelete(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x10FDC94))(this, value);
	}
	template <typename T = CashbackCoinsComponent*> T get_cashbackCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDDAC))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FDE34))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FDE40))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FDF44))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE048))(this);
	}
	template <typename T = CastActionComponent*> T get_castAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE054))(this);
	}
	template <typename T = bool> T get_hasCastAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE0DC))(this);
	}
	template <typename T = void> T AddCastAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE0E8))(this, newName);
	}
	template <typename T = void> T ReplaceCastAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE1FC))(this, newName);
	}
	template <typename T = void> T RemoveCastAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE310))(this);
	}
	template <typename T = CheatSettingComponent*> T get_cheatSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE31C))(this);
	}
	template <typename T = bool> T get_hasCheatSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE3A4))(this);
	}
	template <typename T = void> T AddCheatSetting(Il2CppString* newCategory) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE3B0))(this, newCategory);
	}
	template <typename T = void> T ReplaceCheatSetting(Il2CppString* newCategory) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE4C4))(this, newCategory);
	}
	template <typename T = void> T RemoveCheatSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE5D8))(this);
	}
	template <typename T = CoinsComponent*> T get_coins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE5E4))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE66C))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FE678))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FE77C))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE880))(this);
	}
	template <typename T = ColorComponent*> T get_color() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE88C))(this);
	}
	template <typename T = bool> T get_hasColor() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FE914))(this);
	}
	template <typename T = void> T AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x10FE920))(this, newPriority, newHexColor);
	}
	template <typename T = void> T ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x10FEA3C))(this, newPriority, newHexColor);
	}
	template <typename T = void> T RemoveColor() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEB58))(this);
	}
	template <typename T = CompatibleViewsComponent*> T get_compatibleViews() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEB64))(this);
	}
	template <typename T = bool> T get_hasCompatibleViews() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEBEC))(this);
	}
	template <typename T = void> T AddCompatibleViews(Il2CppArray<uintptr_t>* newItems, Il2CppArray<uintptr_t>* newNotItems) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FEBF8))(this, newItems, newNotItems);
	}
	template <typename T = void> T ReplaceCompatibleViews(Il2CppArray<uintptr_t>* newItems, Il2CppArray<uintptr_t>* newNotItems) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FED20))(this, newItems, newNotItems);
	}
	template <typename T = void> T RemoveCompatibleViews() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEE48))(this);
	}
	template <typename T = ContainerActionComponent*> T get_containerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEE54))(this);
	}
	template <typename T = bool> T get_hasContainerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FEEDC))(this);
	}
	template <typename T = void> T AddContainerAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FEEE8))(this, newName);
	}
	template <typename T = void> T ReplaceContainerAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FEFFC))(this, newName);
	}
	template <typename T = void> T RemoveContainerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF110))(this);
	}
	template <typename T = ConvertToComponent*> T get_convertTo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF11C))(this);
	}
	template <typename T = bool> T get_hasConvertTo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF1A4))(this);
	}
	template <typename T = void> T AddConvertTo(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FF1B0))(this, newName, newNames);
	}
	template <typename T = void> T ReplaceConvertTo(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10FF2D8))(this, newName, newNames);
	}
	template <typename T = void> T RemoveConvertTo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF400))(this);
	}
	template <typename T = CooldownComponent*> T get_cooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF40C))(this);
	}
	template <typename T = bool> T get_hasCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF494))(this);
	}
	template <typename T = void> T AddCooldown(float newValue, float newInitial) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10FF4A0))(this, newValue, newInitial);
	}
	template <typename T = void> T ReplaceCooldown(float newValue, float newInitial) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10FF5A8))(this, newValue, newInitial);
	}
	template <typename T = void> T RemoveCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF6B0))(this);
	}
	template <typename T = CostumeFeetComponent*> T get_costumeFeet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF6BC))(this);
	}
	template <typename T = bool> T get_hasCostumeFeet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF744))(this);
	}
	template <typename T = void> T AddCostumeFeet(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FF750))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeFeet(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FF864))(this, newName);
	}
	template <typename T = void> T RemoveCostumeFeet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF978))(this);
	}
	template <typename T = CraftActionComponent*> T get_craftAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FF984))(this);
	}
	template <typename T = bool> T get_hasCraftAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFA0C))(this);
	}
	template <typename T = void> T AddCraftAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FFA18))(this, newName);
	}
	template <typename T = void> T ReplaceCraftAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FFB2C))(this, newName);
	}
	template <typename T = void> T RemoveCraftAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFC40))(this);
	}
	template <typename T = CraftCooldownComponent*> T get_craftCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFC4C))(this);
	}
	template <typename T = bool> T get_hasCraftCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFCD4))(this);
	}
	template <typename T = void> T AddCraftCooldown(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10FFCE0))(this, newValue);
	}
	template <typename T = void> T ReplaceCraftCooldown(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10FFDE4))(this, newValue);
	}
	template <typename T = void> T RemoveCraftCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFEE8))(this);
	}
	template <typename T = CurrencyTypeComponent*> T get_currencyType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFEF4))(this);
	}
	template <typename T = bool> T get_hasCurrencyType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10FFF7C))(this);
	}
	template <typename T = void> T AddCurrencyType(CurrencyType* newType) {
		return ((T (*)(ItemEntity*, CurrencyType*))(Il2CppBase() + 0x10FFF88))(this, newType);
	}
	template <typename T = void> T ReplaceCurrencyType(CurrencyType* newType) {
		return ((T (*)(ItemEntity*, CurrencyType*))(Il2CppBase() + 0x110008C))(this, newType);
	}
	template <typename T = void> T RemoveCurrencyType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100190))(this);
	}
	template <typename T = CyclicPointsComponent*> T get_cyclicPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110019C))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100224))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100230))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100334))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100438))(this);
	}
	template <typename T = CyclicPremiumTokensComponent*> T get_cyclicPremiumTokens() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100444))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11004CC))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11004D8))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11005DC))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11006E0))(this);
	}
	template <typename T = CyclicYmirSoulComponent*> T get_cyclicYmirSoul() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11006EC))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100774))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100780))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100884))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100988))(this);
	}
	template <typename T = DailyShopActionComponent*> T get_dailyShopAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100994))(this);
	}
	template <typename T = bool> T get_hasDailyShopAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100A1C))(this);
	}
	template <typename T = void> T AddDailyShopAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1100A28))(this, newName);
	}
	template <typename T = void> T ReplaceDailyShopAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1100B3C))(this, newName);
	}
	template <typename T = void> T RemoveDailyShopAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100C50))(this);
	}
	template <typename T = DamageComponent*> T get_damage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F28D0))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F28C4))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1100C5C))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F2958))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100D60))(this);
	}
	template <typename T = DamageTypeComponent*> T get_damageType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100D6C))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1100DF4))(this);
	}
	template <typename T = void> T AddDamageType(DamageType* newValue) {
		return ((T (*)(ItemEntity*, DamageType*))(Il2CppBase() + 0x1100E00))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(DamageType* newValue) {
		return ((T (*)(ItemEntity*, DamageType*))(Il2CppBase() + 0x1100F04))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101008))(this);
	}
	template <typename T = DelayComponent*> T get_delay() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101014))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110109C))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11010A8))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11011AC))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11012B0))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11012BC))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10EE790))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1101344))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110146C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101594))(this);
	}
	template <typename T = DestroyActionComponent*> T get_destroyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11015A0))(this);
	}
	template <typename T = bool> T get_hasDestroyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101628))(this);
	}
	template <typename T = void> T AddDestroyAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101634))(this, newName);
	}
	template <typename T = void> T ReplaceDestroyAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101748))(this, newName);
	}
	template <typename T = void> T RemoveDestroyAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110185C))(this);
	}
	template <typename T = DiplomacyManagementActionComponent*> T get_diplomacyManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101868))(this);
	}
	template <typename T = bool> T get_hasDiplomacyManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11018F0))(this);
	}
	template <typename T = void> T AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11018FC))(this, newName);
	}
	template <typename T = void> T ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101A10))(this, newName);
	}
	template <typename T = void> T RemoveDiplomacyManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101B24))(this);
	}
	template <typename T = DismountCooldownComponent*> T get_dismountCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101B30))(this);
	}
	template <typename T = bool> T get_hasDismountCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101BB8))(this);
	}
	template <typename T = void> T AddDismountCooldown(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1101BC4))(this, newValue);
	}
	template <typename T = void> T ReplaceDismountCooldown(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1101CC8))(this, newValue);
	}
	template <typename T = void> T RemoveDismountCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101DCC))(this);
	}
	template <typename T = DistanceComponent*> T get_distance() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101DD8))(this);
	}
	template <typename T = bool> T get_hasDistance() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1101E60))(this);
	}
	template <typename T = void> T AddDistance(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1101E6C))(this, newValue);
	}
	template <typename T = void> T ReplaceDistance(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1101F70))(this, newValue);
	}
	template <typename T = void> T RemoveDistance() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102074))(this);
	}
	template <typename T = DualVariantComponent*> T get_dualVariant() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102080))(this);
	}
	template <typename T = bool> T get_hasDualVariant() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102108))(this);
	}
	template <typename T = void> T AddDualVariant(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102114))(this, newName);
	}
	template <typename T = void> T ReplaceDualVariant(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102228))(this, newName);
	}
	template <typename T = void> T RemoveDualVariant() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110233C))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102348))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11023D0))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11023DC))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11024E0))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11025E4))(this);
	}
	template <typename T = EmojiActionComponent*> T get_emojiAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11025F0))(this);
	}
	template <typename T = bool> T get_hasEmojiAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102678))(this);
	}
	template <typename T = void> T AddEmojiAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102684))(this, newName);
	}
	template <typename T = void> T ReplaceEmojiAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102798))(this, newName);
	}
	template <typename T = void> T RemoveEmojiAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11028AC))(this);
	}
	template <typename T = EnemyInteractComponent*> T get_enemyInteract() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11028B8))(this);
	}
	template <typename T = bool> T get_hasEnemyInteract() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102940))(this);
	}
	template <typename T = void> T AddEnemyInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(ItemEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110294C))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceEnemyInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(ItemEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1102AF8))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveEnemyInteract() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102CA4))(this);
	}
	template <typename T = EquipMagicByGradeComponent*> T get_equipMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4B2C))(this);
	}
	template <typename T = bool> T get_hasEquipMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4B20))(this);
	}
	template <typename T = void> T AddEquipMagicByGrade(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1102CB0))(this, newNames);
	}
	template <typename T = void> T ReplaceEquipMagicByGrade(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1102DC4))(this, newNames);
	}
	template <typename T = void> T RemoveEquipMagicByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102ED8))(this);
	}
	template <typename T = EquipMagicComponent*> T get_equipMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2DAC))(this);
	}
	template <typename T = bool> T get_hasEquipMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2DA0))(this);
	}
	template <typename T = void> T AddEquipMagic(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1102EE4))(this, newNames);
	}
	template <typename T = void> T ReplaceEquipMagic(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F2E34))(this, newNames);
	}
	template <typename T = void> T RemoveEquipMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1102FF8))(this);
	}
	template <typename T = EquipQuestComponent*> T get_equipQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103004))(this);
	}
	template <typename T = bool> T get_hasEquipQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110308C))(this);
	}
	template <typename T = void> T AddEquipQuest(Il2CppString* newName, Nullable1int32_t>* newActiveSlotIndex) {
		return ((T (*)(ItemEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x1103098))(this, newName, newActiveSlotIndex);
	}
	template <typename T = void> T ReplaceEquipQuest(Il2CppString* newName, Nullable1int32_t>* newActiveSlotIndex) {
		return ((T (*)(ItemEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x11031B4))(this, newName, newActiveSlotIndex);
	}
	template <typename T = void> T RemoveEquipQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11032D0))(this);
	}
	template <typename T = EquipSetComponent*> T get_equipSet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2F54))(this);
	}
	template <typename T = bool> T get_hasEquipSet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2F48))(this);
	}
	template <typename T = void> T AddEquipSet(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11032DC))(this, newName);
	}
	template <typename T = void> T ReplaceEquipSet(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F2FDC))(this, newName);
	}
	template <typename T = void> T RemoveEquipSet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11033F0))(this);
	}
	template <typename T = EquipmentComponent*> T get_equipment() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10EFCF8))(this);
	}
	template <typename T = bool> T get_hasEquipment() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10EFCEC))(this);
	}
	template <typename T = void> T AddEquipment(EquipmentType* newType, bool newNoArming, int32_t newArmed) {
		return ((T (*)(ItemEntity*, EquipmentType*, bool, int32_t))(Il2CppBase() + 0x11033FC))(this, newType, newNoArming, newArmed);
	}
	template <typename T = void> T ReplaceEquipment(EquipmentType* newType, bool newNoArming, int32_t newArmed) {
		return ((T (*)(ItemEntity*, EquipmentType*, bool, int32_t))(Il2CppBase() + 0x10F23C8))(this, newType, newNoArming, newArmed);
	}
	template <typename T = void> T RemoveEquipment() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110351C))(this);
	}
	template <typename T = EventBpPointsAComponent*> T get_eventBpPointsA() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103528))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11035B0))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11035BC))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11036C0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11037C4))(this);
	}
	template <typename T = EventBpPointsBComponent*> T get_eventBpPointsB() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11037D0))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103858))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103864))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103968))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103A6C))(this);
	}
	template <typename T = EventBpPointsCComponent*> T get_eventBpPointsC() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103A78))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103B00))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103B0C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103C10))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103D14))(this);
	}
	template <typename T = ExplodeComponent*> T get_explode() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103D20))(this);
	}
	template <typename T = bool> T get_hasExplode() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103DA8))(this);
	}
	template <typename T = void> T AddExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((T (*)(ItemEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x1103DB4))(this, newItem, newType);
	}
	template <typename T = void> T ReplaceExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((T (*)(ItemEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x1103ED0))(this, newItem, newType);
	}
	template <typename T = void> T RemoveExplode() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1103FEC))(this);
	}
	template <typename T = ExtraLevelCapComponent*> T get_extraLevelCap() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F5C80))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F5C74))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103FF8))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11040FC))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104200))(this);
	}
	template <typename T = FinalizeActionComponent*> T get_finalizeAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110420C))(this);
	}
	template <typename T = bool> T get_hasFinalizeAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104294))(this);
	}
	template <typename T = void> T AddFinalizeAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11042A0))(this, newName);
	}
	template <typename T = void> T ReplaceFinalizeAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11043B4))(this, newName);
	}
	template <typename T = void> T RemoveFinalizeAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11044C8))(this);
	}
	template <typename T = FinishQuestComponent*> T get_finishQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11044D4))(this);
	}
	template <typename T = bool> T get_hasFinishQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110455C))(this);
	}
	template <typename T = void> T AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1104568))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x11046B0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename T = void> T RemoveFinishQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11047F8))(this);
	}
	template <typename T = FreeAttackActionComponent*> T get_freeAttackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104804))(this);
	}
	template <typename T = bool> T get_hasFreeAttackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110488C))(this);
	}
	template <typename T = void> T AddFreeAttackAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104898))(this, newName);
	}
	template <typename T = void> T ReplaceFreeAttackAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11049AC))(this, newName);
	}
	template <typename T = void> T RemoveFreeAttackAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104AC0))(this);
	}
	template <typename T = FreeCastActionComponent*> T get_freeCastAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104ACC))(this);
	}
	template <typename T = bool> T get_hasFreeCastAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104B54))(this);
	}
	template <typename T = void> T AddFreeCastAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104B60))(this, newName);
	}
	template <typename T = void> T ReplaceFreeCastAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104C74))(this, newName);
	}
	template <typename T = void> T RemoveFreeCastAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104D88))(this);
	}
	template <typename T = FuelComponent*> T get_fuel() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104D94))(this);
	}
	template <typename T = bool> T get_hasFuel() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1104E1C))(this);
	}
	template <typename T = void> T AddFuel(Il2CppString* newType, float newTime) {
		return ((T (*)(ItemEntity*, Il2CppString*, float))(Il2CppBase() + 0x1104E28))(this, newType, newTime);
	}
	template <typename T = void> T ReplaceFuel(Il2CppString* newType, float newTime) {
		return ((T (*)(ItemEntity*, Il2CppString*, float))(Il2CppBase() + 0x1104F4C))(this, newType, newTime);
	}
	template <typename T = void> T RemoveFuel() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105070))(this);
	}
	template <typename T = GenderComponent*> T get_gender() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110507C))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105104))(this);
	}
	template <typename T = void> T AddGender(Gender* newType) {
		return ((T (*)(ItemEntity*, Gender*))(Il2CppBase() + 0x1105110))(this, newType);
	}
	template <typename T = void> T ReplaceGender(Gender* newType) {
		return ((T (*)(ItemEntity*, Gender*))(Il2CppBase() + 0x1105214))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105318))(this);
	}
	template <typename T = GhostyRuneDescriptionComponent*> T get_ghostyRuneDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105324))(this);
	}
	template <typename T = bool> T get_hasGhostyRuneDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11053AC))(this);
	}
	template <typename T = void> T AddGhostyRuneDescription(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newDisabledText, Nullable1Icon*>* newIcon, float newLifeTime) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1Icon*>*, float))(Il2CppBase() + 0x11053B8))(this, newCaption, newText, newDisabledText, newIcon, newLifeTime);
	}
	template <typename T = void> T ReplaceGhostyRuneDescription(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newDisabledText, Nullable1Icon*>* newIcon, float newLifeTime) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1Icon*>*, float))(Il2CppBase() + 0x1105530))(this, newCaption, newText, newDisabledText, newIcon, newLifeTime);
	}
	template <typename T = void> T RemoveGhostyRuneDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11056A8))(this);
	}
	template <typename T = GiantReputationComponent*> T get_giantReputation() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11056B4))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110573C))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1105748))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110584C))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105950))(this);
	}
	template <typename T = GradeComponent*> T get_grade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110595C))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11059E4))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11059F0))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F47D4))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105AF4))(this);
	}
	template <typename T = GradeUpComponent*> T get_gradeUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105B00))(this);
	}
	template <typename T = bool> T get_hasGradeUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105B88))(this);
	}
	template <typename T = void> T AddGradeUp(Il2CppString* newCaption, Il2CppString* newDescription, Il2CppArray<uintptr_t>* newConditions, Il2CppArray<uintptr_t>* newResources, Il2CppString* newToItemName, int32_t newSilverPrice, float newChance) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1105B94))(this, newCaption, newDescription, newConditions, newResources, newToItemName, newSilverPrice, newChance);
	}
	template <typename T = void> T ReplaceGradeUp(Il2CppString* newCaption, Il2CppString* newDescription, Il2CppArray<uintptr_t>* newConditions, Il2CppArray<uintptr_t>* newResources, Il2CppString* newToItemName, int32_t newSilverPrice, float newChance) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1105D20))(this, newCaption, newDescription, newConditions, newResources, newToItemName, newSilverPrice, newChance);
	}
	template <typename T = void> T RemoveGradeUp() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105EAC))(this);
	}
	template <typename T = GroupCooldownComponent*> T get_groupCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105EB8))(this);
	}
	template <typename T = bool> T get_hasGroupCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1105F40))(this);
	}
	template <typename T = void> T AddGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1105F4C))(this, newValues);
	}
	template <typename T = void> T ReplaceGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1106060))(this, newValues);
	}
	template <typename T = void> T RemoveGroupCooldown() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106174))(this);
	}
	template <typename T = GuildBossCoinsComponent*> T get_guildBossCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106180))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106208))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106214))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106318))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110641C))(this);
	}
	template <typename T = GuildCoinsComponent*> T get_guildCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106428))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11064B0))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11064BC))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11065C0))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11066C4))(this);
	}
	template <typename T = HealComponent*> T get_heal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11066D0))(this);
	}
	template <typename T = bool> T get_hasHeal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106758))(this);
	}
	template <typename T = void> T AddHeal(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1106764))(this, newValue);
	}
	template <typename T = void> T ReplaceHeal(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x1106868))(this, newValue);
	}
	template <typename T = void> T RemoveHeal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110696C))(this);
	}
	template <typename T = HealPredictionComponent*> T get_healPrediction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106978))(this);
	}
	template <typename T = bool> T get_hasHealPrediction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106A00))(this);
	}
	template <typename T = void> T AddHealPrediction(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106A0C))(this, newValue);
	}
	template <typename T = void> T ReplaceHealPrediction(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106B10))(this, newValue);
	}
	template <typename T = void> T RemoveHealPrediction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106C14))(this);
	}
	template <typename T = HitActorMagicComponent*> T get_hitActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3E5C))(this);
	}
	template <typename T = bool> T get_hasHitActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3E50))(this);
	}
	template <typename T = void> T AddHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1106C20))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F3EE4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitActorMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106D88))(this);
	}
	template <typename T = HitTargetMagicComponent*> T get_hitTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3A64))(this);
	}
	template <typename T = bool> T get_hasHitTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3A58))(this);
	}
	template <typename T = void> T AddHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1106D94))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10F3AEC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitTargetMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106EFC))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1106F08))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10EE4E8))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1106F90))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11070E8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107240))(this);
	}
	template <typename T = IgnoreArmorPercentComponent*> T get_ignoreArmorPercent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4510))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4368))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x110724C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x10F4374))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107360))(this);
	}
	template <typename T = bool> T get_isIndestructible() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3704))(this);
	}
	template <typename T = void> T set_isIndestructible(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x10F3710))(this, value);
	}
	template <typename T = InfluenceComponent*> T get_influence() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110736C))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11073F4))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1107400))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1107504))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107608))(this);
	}
	template <typename T = InstantActionComponent*> T get_instantAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107614))(this);
	}
	template <typename T = bool> T get_hasInstantAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110769C))(this);
	}
	template <typename T = void> T AddInstantAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11076A8))(this, newName);
	}
	template <typename T = void> T ReplaceInstantAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11077BC))(this, newName);
	}
	template <typename T = void> T RemoveInstantAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11078D0))(this);
	}
	template <typename T = bool> T get_isInstant() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11078DC))(this);
	}
	template <typename T = void> T set_isInstant(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x11078E8))(this, value);
	}
	template <typename T = InstantEffectComponent*> T get_instantEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107A00))(this);
	}
	template <typename T = bool> T get_hasInstantEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107A88))(this);
	}
	template <typename T = void> T AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1107A94))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1107BEC))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T RemoveInstantEffect() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107D44))(this);
	}
	template <typename T = InteractActionComponent*> T get_interactAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107D50))(this);
	}
	template <typename T = bool> T get_hasInteractAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1107DD8))(this);
	}
	template <typename T = void> T AddInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1107DE4))(this, newName, newList);
	}
	template <typename T = void> T ReplaceInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1107F0C))(this, newName, newList);
	}
	template <typename T = void> T RemoveInteractAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108034))(this);
	}
	template <typename T = InteractComponent*> T get_interact() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108040))(this);
	}
	template <typename T = bool> T get_hasInteract() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11080C8))(this);
	}
	template <typename T = void> T AddInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(ItemEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x11080D4))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceInteract(ActionType* newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(ItemEntity*, ActionType*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1108280))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveInteract() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110842C))(this);
	}
	template <typename T = InteractRadiusComponent*> T get_interactRadius() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F367C))(this);
	}
	template <typename T = bool> T get_hasInteractRadius() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3670))(this);
	}
	template <typename T = void> T AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(ItemEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x1108438))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(ItemEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x1108578))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T RemoveInteractRadius() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11086B8))(this);
	}
	template <typename T = InventoryContainerComponent*> T get_inventoryContainer() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11086C4))(this);
	}
	template <typename T = bool> T get_hasInventoryContainer() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110874C))(this);
	}
	template <typename T = void> T AddInventoryContainer(Il2CppArray<uintptr_t>* newRequiredItems, Il2CppString* newAnalyticName, Il2CppString* newDescription, Il2CppString* newButtonText, Il2CppString* newNoFreeSlotsText) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1108758))(this, newRequiredItems, newAnalyticName, newDescription, newButtonText, newNoFreeSlotsText);
	}
	template <typename T = void> T ReplaceInventoryContainer(Il2CppArray<uintptr_t>* newRequiredItems, Il2CppString* newAnalyticName, Il2CppString* newDescription, Il2CppString* newButtonText, Il2CppString* newNoFreeSlotsText) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11088CC))(this, newRequiredItems, newAnalyticName, newDescription, newButtonText, newNoFreeSlotsText);
	}
	template <typename T = void> T RemoveInventoryContainer() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108A40))(this);
	}
	template <typename T = InventoryMagicComponent*> T get_inventoryMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F30FC))(this);
	}
	template <typename T = bool> T get_hasInventoryMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F30F0))(this);
	}
	template <typename T = void> T AddInventoryMagic(Il2CppString* newContainerCondition, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1108A4C))(this, newContainerCondition, newNames);
	}
	template <typename T = void> T ReplaceInventoryMagic(Il2CppString* newContainerCondition, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F3184))(this, newContainerCondition, newNames);
	}
	template <typename T = void> T RemoveInventoryMagic() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108B74))(this);
	}
	template <typename T = LifeStealComponent*> T get_lifeSteal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4488))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4248))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1108B80))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x10F4254))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108C94))(this);
	}
	template <typename T = bool> T get_isLoadCart() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108CA0))(this);
	}
	template <typename T = void> T set_isLoadCart(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x1108CAC))(this, value);
	}
	template <typename T = LockActionComponent*> T get_lockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108DC4))(this);
	}
	template <typename T = bool> T get_hasLockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1108E4C))(this);
	}
	template <typename T = void> T AddLockAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1108E58))(this, newName);
	}
	template <typename T = void> T ReplaceLockAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1108F6C))(this, newName);
	}
	template <typename T = void> T RemoveLockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109080))(this);
	}
	template <typename T = LoopSoundComponent*> T get_loopSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110908C))(this);
	}
	template <typename T = bool> T get_hasLoopSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109114))(this);
	}
	template <typename T = void> T AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109120))(this, newWork, newLoop);
	}
	template <typename T = void> T ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109248))(this, newWork, newLoop);
	}
	template <typename T = void> T RemoveLoopSound() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109370))(this);
	}
	template <typename T = MailStackComponent*> T get_mailStack() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110937C))(this);
	}
	template <typename T = bool> T get_hasMailStack() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109404))(this);
	}
	template <typename T = void> T AddMailStack(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109410))(this, newValue);
	}
	template <typename T = void> T ReplaceMailStack(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109514))(this, newValue);
	}
	template <typename T = void> T RemoveMailStack() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109618))(this);
	}
	template <typename T = MaxDurabilityByGradeComponent*> T get_maxDurabilityByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4F00))(this);
	}
	template <typename T = bool> T get_hasMaxDurabilityByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4EF4))(this);
	}
	template <typename T = void> T AddMaxDurabilityByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1109624))(this, newValues);
	}
	template <typename T = void> T ReplaceMaxDurabilityByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1109738))(this, newValues);
	}
	template <typename T = void> T RemoveMaxDurabilityByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110984C))(this);
	}
	template <typename T = MaxDurabilityComponent*> T get_maxDurability() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3834))(this);
	}
	template <typename T = bool> T get_hasMaxDurability() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3828))(this);
	}
	template <typename T = void> T AddMaxDurability(float newValue, float newRecoverySpeed) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x1109858))(this, newValue, newRecoverySpeed);
	}
	template <typename T = void> T ReplaceMaxDurability(float newValue, float newRecoverySpeed) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10F38BC))(this, newValue, newRecoverySpeed);
	}
	template <typename T = void> T RemoveMaxDurability() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4F88))(this);
	}
	template <typename T = MaxGradeComponent*> T get_maxGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109960))(this);
	}
	template <typename T = bool> T get_hasMaxGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11099E8))(this);
	}
	template <typename T = void> T AddMaxGrade(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11099F4))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxGrade(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109AF8))(this, newValue);
	}
	template <typename T = void> T RemoveMaxGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109BFC))(this);
	}
	template <typename T = MiningActionComponent*> T get_miningAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109C08))(this);
	}
	template <typename T = bool> T get_hasMiningAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109C90))(this);
	}
	template <typename T = void> T AddMiningAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1109C9C))(this, newName);
	}
	template <typename T = void> T ReplaceMiningAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1109DB0))(this, newName);
	}
	template <typename T = void> T RemoveMiningAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109EC4))(this);
	}
	template <typename T = MorphComponent*> T get_morph() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109ED0))(this);
	}
	template <typename T = bool> T get_hasMorph() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1109F58))(this);
	}
	template <typename T = void> T AddMorph(Il2CppString* newBase, Il2CppString* newSource) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109F64))(this, newBase, newSource);
	}
	template <typename T = void> T ReplaceMorph(Il2CppString* newBase, Il2CppString* newSource) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F4598))(this, newBase, newSource);
	}
	template <typename T = void> T RemoveMorph() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A08C))(this);
	}
	template <typename T = MountComponent*> T get_mount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A098))(this);
	}
	template <typename T = bool> T get_hasMount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A120))(this);
	}
	template <typename T = void> T AddMount(int32_t newOrder, Il2CppString* newType, Il2CppArray<uintptr_t>* newSkillsRG, Il2CppArray<uintptr_t>* newFeatures) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110A12C))(this, newOrder, newType, newSkillsRG, newFeatures);
	}
	template <typename T = void> T ReplaceMount(int32_t newOrder, Il2CppString* newType, Il2CppArray<uintptr_t>* newSkillsRG, Il2CppArray<uintptr_t>* newFeatures) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110A278))(this, newOrder, newType, newSkillsRG, newFeatures);
	}
	template <typename T = void> T RemoveMount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A3C4))(this);
	}
	template <typename T = MountInfoComponent*> T get_mountInfo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A3D0))(this);
	}
	template <typename T = bool> T get_hasMountInfo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A458))(this);
	}
	template <typename T = void> T AddMountInfo(int32_t newStartGrade, Il2CppString* newSkillsTag) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x110A464))(this, newStartGrade, newSkillsTag);
	}
	template <typename T = void> T ReplaceMountInfo(int32_t newStartGrade, Il2CppString* newSkillsTag) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x110A580))(this, newStartGrade, newSkillsTag);
	}
	template <typename T = void> T RemoveMountInfo() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A69C))(this);
	}
	template <typename T = NextSkillComponent*> T get_nextSkill() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A6A8))(this);
	}
	template <typename T = bool> T get_hasNextSkill() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A730))(this);
	}
	template <typename T = void> T AddNextSkill(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110A73C))(this, newName);
	}
	template <typename T = void> T ReplaceNextSkill(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110A850))(this, newName);
	}
	template <typename T = void> T RemoveNextSkill() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A964))(this);
	}
	template <typename T = NoteComponent*> T get_note() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A970))(this);
	}
	template <typename T = bool> T get_hasNote() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110A9F8))(this);
	}
	template <typename T = void> T AddNote(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newBackground) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AA04))(this, newCaption, newText, newBackground);
	}
	template <typename T = void> T ReplaceNote(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newBackground) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AB48))(this, newCaption, newText, newBackground);
	}
	template <typename T = void> T RemoveNote() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110AC8C))(this);
	}
	template <typename T = NotificationComponent*> T get_notification() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110AC98))(this);
	}
	template <typename T = bool> T get_hasNotification() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110AD20))(this);
	}
	template <typename T = void> T AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(ItemEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AD2C))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((T (*)(ItemEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AE98))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename T = void> T RemoveNotification() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B004))(this);
	}
	template <typename T = OdinsCupActionComponent*> T get_odinsCupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B010))(this);
	}
	template <typename T = bool> T get_hasOdinsCupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B098))(this);
	}
	template <typename T = void> T AddOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B0A4))(this, newName);
	}
	template <typename T = void> T ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B1B8))(this, newName);
	}
	template <typename T = void> T RemoveOdinsCupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B2CC))(this);
	}
	template <typename T = OfferActionComponent*> T get_offerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B2D8))(this);
	}
	template <typename T = bool> T get_hasOfferAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B360))(this);
	}
	template <typename T = void> T AddOfferAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B36C))(this, newName);
	}
	template <typename T = void> T ReplaceOfferAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B480))(this, newName);
	}
	template <typename T = void> T RemoveOfferAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B594))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B5A0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B628))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110B634))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F4C48))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B748))(this);
	}
	template <typename T = OrderComponent*> T get_order() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B754))(this);
	}
	template <typename T = bool> T get_hasOrder() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B7DC))(this);
	}
	template <typename T = void> T AddOrder(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110B7E8))(this, newValue);
	}
	template <typename T = void> T ReplaceOrder(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110B8EC))(this, newValue);
	}
	template <typename T = void> T RemoveOrder() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B9F0))(this);
	}
	template <typename T = PageComponent*> T get_page() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110B9FC))(this);
	}
	template <typename T = bool> T get_hasPage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110BA84))(this);
	}
	template <typename T = void> T AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110BA90))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110BBD4))(this, newCaption, newCaptionImage, newText);
	}
	template <typename T = void> T RemovePage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110BD18))(this);
	}
	template <typename T = PetComponent*> T get_pet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4E6C))(this);
	}
	template <typename T = bool> T get_hasPet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4E60))(this);
	}
	template <typename T = void> T AddPet(int32_t newOrder, Il2CppString* newType, Il2CppArray<uintptr_t>* newSkill1, Il2CppArray<uintptr_t>* newSkill2, Il2CppArray<uintptr_t>* newSkill3) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110BD24))(this, newOrder, newType, newSkill1, newSkill2, newSkill3);
	}
	template <typename T = void> T ReplacePet(int32_t newOrder, Il2CppString* newType, Il2CppArray<uintptr_t>* newSkill1, Il2CppArray<uintptr_t>* newSkill2, Il2CppArray<uintptr_t>* newSkill3) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110BE8C))(this, newOrder, newType, newSkill1, newSkill2, newSkill3);
	}
	template <typename T = void> T RemovePet() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110BFF4))(this);
	}
	template <typename T = PickupActionComponent*> T get_pickupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C000))(this);
	}
	template <typename T = bool> T get_hasPickupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C088))(this);
	}
	template <typename T = void> T AddPickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110C094))(this, newName, newList);
	}
	template <typename T = void> T ReplacePickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110C1BC))(this, newName, newList);
	}
	template <typename T = void> T RemovePickupAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C2E4))(this);
	}
	template <typename T = PlayerClassComponent*> T get_playerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C2F0))(this);
	}
	template <typename T = bool> T get_hasPlayerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C378))(this);
	}
	template <typename T = void> T AddPlayerClass(PlayerClassType* newType) {
		return ((T (*)(ItemEntity*, PlayerClassType*))(Il2CppBase() + 0x110C384))(this, newType);
	}
	template <typename T = void> T ReplacePlayerClass(PlayerClassType* newType) {
		return ((T (*)(ItemEntity*, PlayerClassType*))(Il2CppBase() + 0x10F4D5C))(this, newType);
	}
	template <typename T = void> T RemovePlayerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C488))(this);
	}
	template <typename T = PlayerClassDescriptionComponent*> T get_playerClassDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C494))(this);
	}
	template <typename T = bool> T get_hasPlayerClassDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C51C))(this);
	}
	template <typename T = void> T AddPlayerClassDescription(Il2CppString* newMainQuest, Il2CppString* newMasteryQuest, Il2CppString* newExpertiseQuest, Il2CppString* newBlockerQuest, Il2CppArray<uintptr_t>* newOtherQuests, Il2CppArray<uintptr_t>* newRelated, Il2CppString* newNext, int32_t newLevel, int32_t newRow, int32_t newGrade, Il2CppArray<uintptr_t>* newRole, bool newIsNew, Il2CppString* newAvailableCondition, Il2CppString* newWeaponTag, Il2CppString* newArmorTag) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110C528))(this, newMainQuest, newMasteryQuest, newExpertiseQuest, newBlockerQuest, newOtherQuests, newRelated, newNext, newLevel, newRow, newGrade, newRole, newIsNew, newAvailableCondition, newWeaponTag, newArmorTag);
	}
	template <typename T = void> T ReplacePlayerClassDescription(Il2CppString* newMainQuest, Il2CppString* newMasteryQuest, Il2CppString* newExpertiseQuest, Il2CppString* newBlockerQuest, Il2CppArray<uintptr_t>* newOtherQuests, Il2CppArray<uintptr_t>* newRelated, Il2CppString* newNext, int32_t newLevel, int32_t newRow, int32_t newGrade, Il2CppArray<uintptr_t>* newRole, bool newIsNew, Il2CppString* newAvailableCondition, Il2CppString* newWeaponTag, Il2CppString* newArmorTag) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110C770))(this, newMainQuest, newMasteryQuest, newExpertiseQuest, newBlockerQuest, newOtherQuests, newRelated, newNext, newLevel, newRow, newGrade, newRole, newIsNew, newAvailableCondition, newWeaponTag, newArmorTag);
	}
	template <typename T = void> T RemovePlayerClassDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C9B8))(this);
	}
	template <typename T = PlayerKillActionComponent*> T get_playerKillAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110C9C4))(this);
	}
	template <typename T = bool> T get_hasPlayerKillAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CA4C))(this);
	}
	template <typename T = void> T AddPlayerKillAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CA58))(this, newName);
	}
	template <typename T = void> T ReplacePlayerKillAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CB6C))(this, newName);
	}
	template <typename T = void> T RemovePlayerKillAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CC80))(this);
	}
	template <typename T = PortalActionComponent*> T get_portalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CC8C))(this);
	}
	template <typename T = bool> T get_hasPortalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CD14))(this);
	}
	template <typename T = void> T AddPortalAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CD20))(this, newName);
	}
	template <typename T = void> T ReplacePortalAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CE34))(this, newName);
	}
	template <typename T = void> T RemovePortalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CF48))(this);
	}
	template <typename T = PortalsPointsComponent*> T get_portalsPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CF54))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110CFDC))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110CFE8))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110D0EC))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D1F0))(this);
	}
	template <typename T = PowerByGradeComponent*> T get_powerByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F48E4))(this);
	}
	template <typename T = bool> T get_hasPowerByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F48D8))(this);
	}
	template <typename T = void> T AddPowerByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110D1FC))(this, newValues);
	}
	template <typename T = void> T ReplacePowerByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110D310))(this, newValues);
	}
	template <typename T = void> T RemovePowerByGrade() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D424))(this);
	}
	template <typename T = PowerComponent*> T get_power() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F32B8))(this);
	}
	template <typename T = bool> T get_hasPower() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F32AC))(this);
	}
	template <typename T = void> T AddPower(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x110D430))(this, newValue);
	}
	template <typename T = void> T ReplacePower(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x10F3340))(this, newValue);
	}
	template <typename T = void> T RemovePower() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D534))(this);
	}
	template <typename T = PrefabComponent*> T get_prefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F21FC))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F21F0))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x110D540))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, WorldResourcesType* newResourceType) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, WorldResourcesType*))(Il2CppBase() + 0x10F2284))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D684))(this);
	}
	template <typename T = PreviewPrefabComponent*> T get_previewPrefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D690))(this);
	}
	template <typename T = bool> T get_hasPreviewPrefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D718))(this);
	}
	template <typename T = void> T AddPreviewPrefab(Il2CppString* newPreviewName, Il2CppString* newPrefabName, Il2CppString* newBlueprint, WorldResourcesType* newResourceType, Nullable1float>* newAngle) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, WorldResourcesType*, Nullable1float>*))(Il2CppBase() + 0x110D724))(this, newPreviewName, newPrefabName, newBlueprint, newResourceType, newAngle);
	}
	template <typename T = void> T ReplacePreviewPrefab(Il2CppString* newPreviewName, Il2CppString* newPrefabName, Il2CppString* newBlueprint, WorldResourcesType* newResourceType, Nullable1float>* newAngle) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, WorldResourcesType*, Nullable1float>*))(Il2CppBase() + 0x110D880))(this, newPreviewName, newPrefabName, newBlueprint, newResourceType, newAngle);
	}
	template <typename T = void> T RemovePreviewPrefab() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D9DC))(this);
	}
	template <typename T = ProgressQuestComponent*> T get_progressQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110D9E8))(this);
	}
	template <typename T = bool> T get_hasProgressQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110DA70))(this);
	}
	template <typename T = void> T AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x110DA7C))(this, newName, newTag, newValue);
	}
	template <typename T = void> T ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x110DBB4))(this, newName, newTag, newValue);
	}
	template <typename T = void> T RemoveProgressQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110DCEC))(this);
	}
	template <typename T = RarityComponent*> T get_rarity() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3450))(this);
	}
	template <typename T = bool> T get_hasRarity() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F3444))(this);
	}
	template <typename T = void> T AddRarity(Rarity* newValue) {
		return ((T (*)(ItemEntity*, Rarity*))(Il2CppBase() + 0x110DCF8))(this, newValue);
	}
	template <typename T = void> T ReplaceRarity(Rarity* newValue) {
		return ((T (*)(ItemEntity*, Rarity*))(Il2CppBase() + 0x10F34D8))(this, newValue);
	}
	template <typename T = void> T RemoveRarity() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110DDFC))(this);
	}
	template <typename T = RavenNestManagementActionComponent*> T get_ravenNestManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110DE08))(this);
	}
	template <typename T = bool> T get_hasRavenNestManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110DE90))(this);
	}
	template <typename T = void> T AddRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110DE9C))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110DFB0))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E0C4))(this);
	}
	template <typename T = RavenNestStatsActionComponent*> T get_ravenNestStatsAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E0D0))(this);
	}
	template <typename T = bool> T get_hasRavenNestStatsAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E158))(this);
	}
	template <typename T = void> T AddRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E164))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E278))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestStatsAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E38C))(this);
	}
	template <typename T = RepairActionComponent*> T get_repairAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E398))(this);
	}
	template <typename T = bool> T get_hasRepairAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E420))(this);
	}
	template <typename T = void> T AddRepairAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E42C))(this, newName);
	}
	template <typename T = void> T ReplaceRepairAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E540))(this, newName);
	}
	template <typename T = void> T RemoveRepairAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E654))(this);
	}
	template <typename T = RequiredComponent*> T get_required() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E660))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E6E8))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110E6F4))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110E7F8))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E8FC))(this);
	}
	template <typename T = RestoreMetabolismComponent*> T get_restoreMetabolism() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E908))(this);
	}
	template <typename T = bool> T get_hasRestoreMetabolism() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110E990))(this);
	}
	template <typename T = void> T AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x110E99C))(this, newThirst, newHunger);
	}
	template <typename T = void> T ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x110EAA4))(this, newThirst, newHunger);
	}
	template <typename T = void> T RemoveRestoreMetabolism() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EBAC))(this);
	}
	template <typename T = ResurrectActionComponent*> T get_resurrectAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EBB8))(this);
	}
	template <typename T = bool> T get_hasResurrectAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EC40))(this);
	}
	template <typename T = void> T AddResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110EC4C))(this, newName, newList);
	}
	template <typename T = void> T ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110ED74))(this, newName, newList);
	}
	template <typename T = void> T RemoveResurrectAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EE9C))(this);
	}
	template <typename T = RuneComponent*> T get_rune() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EEA8))(this);
	}
	template <typename T = bool> T get_hasRune() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110EF30))(this);
	}
	template <typename T = void> T AddRune(RuneType* newType) {
		return ((T (*)(ItemEntity*, RuneType*))(Il2CppBase() + 0x110EF3C))(this, newType);
	}
	template <typename T = void> T ReplaceRune(RuneType* newType) {
		return ((T (*)(ItemEntity*, RuneType*))(Il2CppBase() + 0x110F040))(this, newType);
	}
	template <typename T = void> T RemoveRune() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F144))(this);
	}
	template <typename T = RuneDescriptionComponent*> T get_runeDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4BC0))(this);
	}
	template <typename T = bool> T get_hasRuneDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F4BB4))(this);
	}
	template <typename T = void> T AddRuneDescription(Il2CppString* newMagicName, Il2CppString* newParamsDescription, Il2CppArray<uintptr_t>* newParamsByGrade) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110F150))(this, newMagicName, newParamsDescription, newParamsByGrade);
	}
	template <typename T = void> T ReplaceRuneDescription(Il2CppString* newMagicName, Il2CppString* newParamsDescription, Il2CppArray<uintptr_t>* newParamsByGrade) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x110F294))(this, newMagicName, newParamsDescription, newParamsByGrade);
	}
	template <typename T = void> T RemoveRuneDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F3D8))(this);
	}
	template <typename T = SagaComponent*> T get_saga() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F3E4))(this);
	}
	template <typename T = bool> T get_hasSaga() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F46C))(this);
	}
	template <typename T = void> T AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110F478))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110F5D0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename T = void> T RemoveSaga() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F728))(this);
	}
	template <typename T = SaveActionComponent*> T get_saveAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F734))(this);
	}
	template <typename T = bool> T get_hasSaveAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110F7BC))(this);
	}
	template <typename T = void> T AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110F7C8))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110F918))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T RemoveSaveAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FA68))(this);
	}
	template <typename T = SaviorPointsComponent*> T get_saviorPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FA74))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FAFC))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FB08))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FC0C))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FD10))(this);
	}
	template <typename T = SeasonPointsComponent*> T get_seasonPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FD1C))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FDA4))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FDB0))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FEB4))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FFB8))(this);
	}
	template <typename T = SelectClassActionComponent*> T get_selectClassAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x110FFC4))(this);
	}
	template <typename T = bool> T get_hasSelectClassAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111004C))(this);
	}
	template <typename T = void> T AddSelectClassAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110058))(this, newName);
	}
	template <typename T = void> T ReplaceSelectClassAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x111016C))(this, newName);
	}
	template <typename T = void> T RemoveSelectClassAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110280))(this);
	}
	template <typename T = SelectMountActionComponent*> T get_selectMountAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111028C))(this);
	}
	template <typename T = bool> T get_hasSelectMountAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110314))(this);
	}
	template <typename T = void> T AddSelectMountAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110320))(this, newName);
	}
	template <typename T = void> T ReplaceSelectMountAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110434))(this, newName);
	}
	template <typename T = void> T RemoveSelectMountAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110548))(this);
	}
	template <typename T = SelectPetActionComponent*> T get_selectPetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110554))(this);
	}
	template <typename T = bool> T get_hasSelectPetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11105DC))(this);
	}
	template <typename T = void> T AddSelectPetAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11105E8))(this, newName);
	}
	template <typename T = void> T ReplaceSelectPetAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11106FC))(this, newName);
	}
	template <typename T = void> T RemoveSelectPetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110810))(this);
	}
	template <typename T = ShieldManagementActionComponent*> T get_shieldManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111081C))(this);
	}
	template <typename T = bool> T get_hasShieldManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11108A4))(this);
	}
	template <typename T = void> T AddShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11108B0))(this, newName);
	}
	template <typename T = void> T ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11109C4))(this, newName);
	}
	template <typename T = void> T RemoveShieldManagementAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110AD8))(this);
	}
	template <typename T = ShortNameComponent*> T get_shortName() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110AE4))(this);
	}
	template <typename T = bool> T get_hasShortName() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110B6C))(this);
	}
	template <typename T = void> T AddShortName(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110B78))(this, newName);
	}
	template <typename T = void> T ReplaceShortName(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110C8C))(this, newName);
	}
	template <typename T = void> T RemoveShortName() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110DA0))(this);
	}
	template <typename T = SilverComponent*> T get_silver() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110DAC))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1110E34))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1110E40))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1110F44))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111048))(this);
	}
	template <typename T = SilverPriceComponent*> T get_silverPrice() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111054))(this);
	}
	template <typename T = bool> T get_hasSilverPrice() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11110C0))(this);
	}
	template <typename T = void> T AddSilverPrice(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11110CC))(this, newValue);
	}
	template <typename T = void> T ReplaceSilverPrice(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11111B4))(this, newValue);
	}
	template <typename T = void> T RemoveSilverPrice() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111129C))(this);
	}
	template <typename T = SingleGroupsComponent*> T get_singleGroups() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11112A8))(this);
	}
	template <typename T = bool> T get_hasSingleGroups() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111330))(this);
	}
	template <typename T = void> T AddSingleGroups(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x111133C))(this, newNames);
	}
	template <typename T = void> T ReplaceSingleGroups(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1111450))(this, newNames);
	}
	template <typename T = void> T RemoveSingleGroups() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111564))(this);
	}
	template <typename T = SkillDescriptionComponent*> T get_skillDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111570))(this);
	}
	template <typename T = bool> T get_hasSkillDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11115F8))(this);
	}
	template <typename T = void> T AddSkillDescription(int32_t newTier, Il2CppString* newCondition, Il2CppString* newChargedCondition, bool newDontShowInUI, Il2CppArray<uintptr_t>* newAltSkills) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1111604))(this, newTier, newCondition, newChargedCondition, newDontShowInUI, newAltSkills);
	}
	template <typename T = void> T ReplaceSkillDescription(int32_t newTier, Il2CppString* newCondition, Il2CppString* newChargedCondition, bool newDontShowInUI, Il2CppArray<uintptr_t>* newAltSkills) {
		return ((T (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1111764))(this, newTier, newCondition, newChargedCondition, newDontShowInUI, newAltSkills);
	}
	template <typename T = void> T RemoveSkillDescription() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11118C4))(this);
	}
	template <typename T = SkillShotActionComponent*> T get_skillShotAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11118D0))(this);
	}
	template <typename T = bool> T get_hasSkillShotAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111958))(this);
	}
	template <typename T = void> T AddSkillShotAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111964))(this, newArrow, newName);
	}
	template <typename T = void> T ReplaceSkillShotAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111A8C))(this, newArrow, newName);
	}
	template <typename T = void> T RemoveSkillShotAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111BB4))(this);
	}
	template <typename T = SkillShotTargetActionComponent*> T get_skillShotTargetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111BC0))(this);
	}
	template <typename T = bool> T get_hasSkillShotTargetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111C48))(this);
	}
	template <typename T = void> T AddSkillShotTargetAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111C54))(this, newArrow, newName);
	}
	template <typename T = void> T ReplaceSkillShotTargetAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111D7C))(this, newArrow, newName);
	}
	template <typename T = void> T RemoveSkillShotTargetAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111EA4))(this);
	}
	template <typename T = SkillsComponent*> T get_skills() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111EB0))(this);
	}
	template <typename T = bool> T get_hasSkills() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1111F38))(this);
	}
	template <typename T = void> T AddSkills(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1111F44))(this, newValues);
	}
	template <typename T = void> T ReplaceSkills(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F46C0))(this, newValues);
	}
	template <typename T = void> T RemoveSkills() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112058))(this);
	}
	template <typename T = SlotCountComponent*> T get_slotCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112064))(this);
	}
	template <typename T = bool> T get_hasSlotCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11120EC))(this);
	}
	template <typename T = void> T AddSlotCount(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11120F8))(this, newValue);
	}
	template <typename T = void> T ReplaceSlotCount(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11121FC))(this, newValue);
	}
	template <typename T = void> T RemoveSlotCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112300))(this);
	}
	template <typename T = SneakDamageComponent*> T get_sneakDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2A68))(this);
	}
	template <typename T = bool> T get_hasSneakDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2A5C))(this);
	}
	template <typename T = void> T AddSneakDamage(float newPvP, float newPvE) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x111230C))(this, newPvP, newPvE);
	}
	template <typename T = void> T ReplaceSneakDamage(float newPvP, float newPvE) {
		return ((T (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10F2AF0))(this, newPvP, newPvE);
	}
	template <typename T = void> T RemoveSneakDamage() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112414))(this);
	}
	template <typename T = SocketComponent*> T get_socket() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F24F4))(this);
	}
	template <typename T = bool> T get_hasSocket() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F24E8))(this);
	}
	template <typename T = void> T AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(ItemEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1112420))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((T (*)(ItemEntity*, Il2CppString*, bool))(Il2CppBase() + 0x10F257C))(this, newName, newIgnoreRotation);
	}
	template <typename T = void> T RemoveSocket() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F269C))(this);
	}
	template <typename T = SpeedComponent*> T get_speed() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112540))(this);
	}
	template <typename T = bool> T get_hasSpeed() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11125C8))(this);
	}
	template <typename T = void> T AddSpeed(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11125D4))(this, newValue);
	}
	template <typename T = void> T ReplaceSpeed(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11126D8))(this, newValue);
	}
	template <typename T = void> T RemoveSpeed() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11127DC))(this);
	}
	template <typename T = StackCountComponent*> T get_stackCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11127E8))(this);
	}
	template <typename T = bool> T get_hasStackCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112870))(this);
	}
	template <typename T = void> T AddStackCount(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x111287C))(this, newValue);
	}
	template <typename T = void> T ReplaceStackCount(int32_t newValue) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1112980))(this, newValue);
	}
	template <typename T = void> T RemoveStackCount() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112A84))(this);
	}
	template <typename T = StartQuestComponent*> T get_startQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112A90))(this);
	}
	template <typename T = bool> T get_hasStartQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112B18))(this);
	}
	template <typename T = void> T AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1112B24))(this, newName, newTag);
	}
	template <typename T = void> T ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1112C4C))(this, newName, newTag);
	}
	template <typename T = void> T RemoveStartQuest() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112D74))(this);
	}
	template <typename T = StartTournamentActionComponent*> T get_startTournamentAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112D80))(this);
	}
	template <typename T = bool> T get_hasStartTournamentAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1112E08))(this);
	}
	template <typename T = void> T AddStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1112E14))(this, newName);
	}
	template <typename T = void> T ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1112F28))(this, newName);
	}
	template <typename T = void> T RemoveStartTournamentAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111303C))(this);
	}
	template <typename T = StoreProductComponent*> T get_storeProduct() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113048))(this);
	}
	template <typename T = bool> T get_hasStoreProduct() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11130D0))(this);
	}
	template <typename T = void> T AddStoreProduct(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11130DC))(this, newName);
	}
	template <typename T = void> T ReplaceStoreProduct(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11131F0))(this, newName);
	}
	template <typename T = void> T RemoveStoreProduct() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113304))(this);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2C04))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F2BF8))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1113310))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ItemEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10F2C8C))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113424))(this);
	}
	template <typename T = TenacityBlockTimeComponent*> T get_tenacityBlockTime() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113430))(this);
	}
	template <typename T = bool> T get_hasTenacityBlockTime() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11134B8))(this);
	}
	template <typename T = void> T AddTenacityBlockTime(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11134C4))(this, newValue);
	}
	template <typename T = void> T ReplaceTenacityBlockTime(float newValue) {
		return ((T (*)(ItemEntity*, float))(Il2CppBase() + 0x11135C8))(this, newValue);
	}
	template <typename T = void> T RemoveTenacityBlockTime() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11136CC))(this);
	}
	template <typename T = TicketsComponent*> T get_tickets() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11136D8))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113760))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x111376C))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113870))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113974))(this);
	}
	template <typename T = ToolTipComponent*> T get_toolTip() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113980))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113A08))(this);
	}
	template <typename T = void> T AddToolTip(ToolTipValue* newValue) {
		return ((T (*)(ItemEntity*, ToolTipValue*))(Il2CppBase() + 0x1113A14))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(ToolTipValue* newValue) {
		return ((T (*)(ItemEntity*, ToolTipValue*))(Il2CppBase() + 0x1113B28))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113C3C))(this);
	}
	template <typename T = TournamentPointsComponent*> T get_tournamentPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113C48))(this);
	}
	template <typename T = bool> T get_hasTournamentPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113CD0))(this);
	}
	template <typename T = void> T AddTournamentPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113CDC))(this, newCount);
	}
	template <typename T = void> T ReplaceTournamentPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113DE0))(this, newCount);
	}
	template <typename T = void> T RemoveTournamentPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113EE4))(this);
	}
	template <typename T = bool> T get_isUndeletable() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1113EF0))(this);
	}
	template <typename T = void> T set_isUndeletable(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x1113EFC))(this, value);
	}
	template <typename T = bool> T get_isUndropable() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114014))(this);
	}
	template <typename T = void> T set_isUndropable(bool value) {
		return ((T (*)(ItemEntity*, bool))(Il2CppBase() + 0x1114020))(this, value);
	}
	template <typename T = UnlockActionComponent*> T get_unlockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114138))(this);
	}
	template <typename T = bool> T get_hasUnlockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11141C0))(this);
	}
	template <typename T = void> T AddUnlockAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11141CC))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11142E0))(this, newName);
	}
	template <typename T = void> T RemoveUnlockAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11143F4))(this);
	}
	template <typename T = UnlockContainerActionComponent*> T get_unlockContainerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114400))(this);
	}
	template <typename T = bool> T get_hasUnlockContainerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114488))(this);
	}
	template <typename T = void> T AddUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114494))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11145A8))(this, newName);
	}
	template <typename T = void> T RemoveUnlockContainerAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11146BC))(this);
	}
	template <typename T = UnlockPlayerClassComponent*> T get_unlockPlayerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11146C8))(this);
	}
	template <typename T = bool> T get_hasUnlockPlayerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114750))(this);
	}
	template <typename T = void> T AddUnlockPlayerClass(Il2CppString* newName, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x111475C))(this, newName, newResourceRG);
	}
	template <typename T = void> T ReplaceUnlockPlayerClass(Il2CppString* newName, Il2CppString* newResourceRG) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1114884))(this, newName, newResourceRG);
	}
	template <typename T = void> T RemoveUnlockPlayerClass() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11149AC))(this);
	}
	template <typename T = UnlockPortalActionComponent*> T get_unlockPortalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11149B8))(this);
	}
	template <typename T = bool> T get_hasUnlockPortalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114A40))(this);
	}
	template <typename T = void> T AddUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114A4C))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114B60))(this, newName);
	}
	template <typename T = void> T RemoveUnlockPortalAction() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114C74))(this);
	}
	template <typename T = VIPPointsComponent*> T get_vIPPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114C80))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114D08))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1114D14))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1114E18))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114F1C))(this);
	}
	template <typename T = WalletSettingComponent*> T get_walletSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114F28))(this);
	}
	template <typename T = bool> T get_hasWalletSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x1114FB0))(this);
	}
	template <typename T = void> T AddWalletSetting(bool newShowEmpty, Il2CppString* newShowCondition, WalletType* newType) {
		return ((T (*)(ItemEntity*, bool, Il2CppString*, WalletType*))(Il2CppBase() + 0x1114FBC))(this, newShowEmpty, newShowCondition, newType);
	}
	template <typename T = void> T ReplaceWalletSetting(bool newShowEmpty, Il2CppString* newShowCondition, WalletType* newType) {
		return ((T (*)(ItemEntity*, bool, Il2CppString*, WalletType*))(Il2CppBase() + 0x11150EC))(this, newShowEmpty, newShowCondition, newType);
	}
	template <typename T = void> T RemoveWalletSetting() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x111521C))(this);
	}
	template <typename T = WeaponPrefabsComponent*> T get_weaponPrefabs() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F26B4))(this);
	}
	template <typename T = bool> T get_hasWeaponPrefabs() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x10F26A8))(this);
	}
	template <typename T = void> T AddWeaponPrefabs(Il2CppString* newSecondPrefab, Il2CppString* newSecondSocket, Il2CppString* newBulletPrefab, Il2CppString* newBulletSocket, Il2CppString* newToolPrefab, Il2CppString* newToolSocket) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1115228))(this, newSecondPrefab, newSecondSocket, newBulletPrefab, newBulletSocket, newToolPrefab, newToolSocket);
	}
	template <typename T = void> T ReplaceWeaponPrefabs(Il2CppString* newSecondPrefab, Il2CppString* newSecondSocket, Il2CppString* newBulletPrefab, Il2CppString* newBulletSocket, Il2CppString* newToolPrefab, Il2CppString* newToolSocket) {
		return ((T (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F273C))(this, newSecondPrefab, newSecondSocket, newBulletPrefab, newBulletSocket, newToolPrefab, newToolSocket);
	}
	template <typename T = void> T RemoveWeaponPrefabs() {
		return ((T (*)(ItemEntity*))(Il2CppBase() + 0x11153B0))(this);
	}

};

