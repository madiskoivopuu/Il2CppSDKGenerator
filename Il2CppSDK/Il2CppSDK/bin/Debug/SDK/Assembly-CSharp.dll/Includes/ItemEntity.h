#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemEntity"));
	}

	template <typename R = CantDeleteComponent*> static R& cantDeleteComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = IndestructibleComponent*> static R& indestructibleComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = InstantComponent*> static R& instantComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = LoadCartComponent*> static R& loadCartComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = UndeletableComponent*> static R& undeletableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = UndropableComponent*> static R& undropableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6008))(this);
	}
	template <typename R = AIUseComponent*> R get_aIUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6088))(this);
	}
	template <typename R = bool> R get_hasAIUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6110))(this);
	}
	template <typename R = void> R AddAIUse(int32_t newAttackCount, float newDelay, float newPeriod, float newDistance, Nullable1int32_t>* newUseCount, bool newOnlyOnBorder, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, TargetsSelector* newSelector) {
		return ((R (*)(ItemEntity*, int32_t, float, float, float, Nullable1int32_t>*, bool, Il2CppString*, Il2CppString*, TargetsSelector*))(Il2CppBase() + 0x10F611C))(this, newAttackCount, newDelay, newPeriod, newDistance, newUseCount, newOnlyOnBorder, newActorCondition, newTargetCondition, newSelector);
	}
	template <typename R = void> R ReplaceAIUse(int32_t newAttackCount, float newDelay, float newPeriod, float newDistance, Nullable1int32_t>* newUseCount, bool newOnlyOnBorder, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, TargetsSelector* newSelector) {
		return ((R (*)(ItemEntity*, int32_t, float, float, float, Nullable1int32_t>*, bool, Il2CppString*, Il2CppString*, TargetsSelector*))(Il2CppBase() + 0x10F62A8))(this, newAttackCount, newDelay, newPeriod, newDistance, newUseCount, newOnlyOnBorder, newActorCondition, newTargetCondition, newSelector);
	}
	template <typename R = void> R RemoveAIUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6434))(this);
	}
	template <typename R = AOEComponent*> R get_aOE() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F35E8))(this);
	}
	template <typename R = bool> R get_hasAOE() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F35DC))(this);
	}
	template <typename R = void> R AddAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(ItemEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x10F6440))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R ReplaceAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(ItemEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x10F66BC))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R RemoveAOE() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6938))(this);
	}
	template <typename R = ActionSoundComponent*> R get_actionSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6944))(this);
	}
	template <typename R = bool> R get_hasActionSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F69CC))(this);
	}
	template <typename R = void> R AddActionSound(Il2CppString* newStart, Il2CppString* newApply, Il2CppString* newTarget, Il2CppString* newBreak) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F69D8))(this, newStart, newApply, newTarget, newBreak);
	}
	template <typename R = void> R ReplaceActionSound(Il2CppString* newStart, Il2CppString* newApply, Il2CppString* newTarget, Il2CppString* newBreak) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F6B30))(this, newStart, newApply, newTarget, newBreak);
	}
	template <typename R = void> R RemoveActionSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6C88))(this);
	}
	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6C94))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6D1C))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x10F6D28))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x10F6E78))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6FC8))(this);
	}
	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F6FD4))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F705C))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F7068))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F716C))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7270))(this);
	}
	template <typename R = AddExpertiseComponent*> R get_addExpertise() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F727C))(this);
	}
	template <typename R = bool> R get_hasAddExpertise() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7304))(this);
	}
	template <typename R = void> R AddAddExpertise(PlayerClassType* newClassType, float newValue) {
		return ((R (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F7310))(this, newClassType, newValue);
	}
	template <typename R = void> R ReplaceAddExpertise(PlayerClassType* newClassType, float newValue) {
		return ((R (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F7424))(this, newClassType, newValue);
	}
	template <typename R = void> R RemoveAddExpertise() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7538))(this);
	}
	template <typename R = AddMasteryComponent*> R get_addMastery() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7544))(this);
	}
	template <typename R = bool> R get_hasAddMastery() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F75CC))(this);
	}
	template <typename R = void> R AddAddMastery(PlayerClassType* newClassType, float newValue) {
		return ((R (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F75D8))(this, newClassType, newValue);
	}
	template <typename R = void> R ReplaceAddMastery(PlayerClassType* newClassType, float newValue) {
		return ((R (*)(ItemEntity*, PlayerClassType*, float))(Il2CppBase() + 0x10F76EC))(this, newClassType, newValue);
	}
	template <typename R = void> R RemoveAddMastery() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7800))(this);
	}
	template <typename R = AddPetExperienceComponent*> R get_addPetExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F780C))(this);
	}
	template <typename R = bool> R get_hasAddPetExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7894))(this);
	}
	template <typename R = void> R AddAddPetExperience(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F78A0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddPetExperience(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F79A4))(this, newValue);
	}
	template <typename R = void> R RemoveAddPetExperience() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7AA8))(this);
	}
	template <typename R = AddShieldSeconds*> R get_addShieldSeconds() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7AB4))(this);
	}
	template <typename R = bool> R get_hasAddShieldSeconds() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7B3C))(this);
	}
	template <typename R = void> R AddAddShieldSeconds(int64_t newValue) {
		return ((R (*)(ItemEntity*, int64_t))(Il2CppBase() + 0x10F7B48))(this, newValue);
	}
	template <typename R = void> R ReplaceAddShieldSeconds(int64_t newValue) {
		return ((R (*)(ItemEntity*, int64_t))(Il2CppBase() + 0x10F7C4C))(this, newValue);
	}
	template <typename R = void> R RemoveAddShieldSeconds() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7D50))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7D5C))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7DE4))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F7DF0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F7EF4))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F7FF8))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8004))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F808C))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8098))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F819C))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F82A0))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F82AC))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8334))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8340))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F8444))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8548))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8554))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F85DC))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F85E8))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F86EC))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F87F0))(this);
	}
	template <typename R = AnalyticSettingsComponent*> R get_analyticSettings() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F87FC))(this);
	}
	template <typename R = bool> R get_hasAnalyticSettings() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8884))(this);
	}
	template <typename R = void> R AddAnalyticSettings(Il2CppString* newEventName, Il2CppString* newActionName, ActionLabels* newAddLabel, ActionLabels* newRemoveLabel) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, ActionLabels*, ActionLabels*))(Il2CppBase() + 0x10F8890))(this, newEventName, newActionName, newAddLabel, newRemoveLabel);
	}
	template <typename R = void> R ReplaceAnalyticSettings(Il2CppString* newEventName, Il2CppString* newActionName, ActionLabels* newAddLabel, ActionLabels* newRemoveLabel) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, ActionLabels*, ActionLabels*))(Il2CppBase() + 0x10F8A00))(this, newEventName, newActionName, newAddLabel, newRemoveLabel);
	}
	template <typename R = void> R RemoveAnalyticSettings() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8B70))(this);
	}
	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8B7C))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8C04))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x10F8C10))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x10F8DB8))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F8F60))(this);
	}
	template <typename R = ApplyActorMagicByGradeComponent*> R get_applyActorMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4978))(this);
	}
	template <typename R = bool> R get_hasApplyActorMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F496C))(this);
	}
	template <typename R = void> R AddApplyActorMagicByGrade(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F8F6C))(this, newNames);
	}
	template <typename R = void> R ReplaceApplyActorMagicByGrade(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F9080))(this, newNames);
	}
	template <typename R = void> R RemoveApplyActorMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9194))(this);
	}
	template <typename R = ApplyActorMagicComponent*> R get_applyActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4058))(this);
	}
	template <typename R = bool> R get_hasApplyActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F404C))(this);
	}
	template <typename R = void> R AddApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F91A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F40E0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9308))(this);
	}
	template <typename R = ApplyCosmeticToInventoryComponent*> R get_applyCosmeticToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9314))(this);
	}
	template <typename R = bool> R get_hasApplyCosmeticToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F939C))(this);
	}
	template <typename R = void> R AddApplyCosmeticToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F93A8))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename R = void> R ReplaceApplyCosmeticToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F94EC))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename R = void> R RemoveApplyCosmeticToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9630))(this);
	}
	template <typename R = ApplyDurabilityDamageComponent*> R get_applyDurabilityDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F963C))(this);
	}
	template <typename R = bool> R get_hasApplyDurabilityDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F96C4))(this);
	}
	template <typename R = void> R AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(ItemEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x10F96D0))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(ItemEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x10F9804))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R RemoveApplyDurabilityDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9938))(this);
	}
	template <typename R = ApplyLevelCapUpComponent*> R get_applyLevelCapUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9944))(this);
	}
	template <typename R = bool> R get_hasApplyLevelCapUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F99CC))(this);
	}
	template <typename R = void> R AddApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F99D8))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F9ADC))(this, newValue);
	}
	template <typename R = void> R RemoveApplyLevelCapUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9BE0))(this);
	}
	template <typename R = ApplyLocationMagicComponent*> R get_applyLocationMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9BEC))(this);
	}
	template <typename R = bool> R get_hasApplyLocationMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9C74))(this);
	}
	template <typename R = void> R AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F9C80))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F9DE8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyLocationMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9F50))(this);
	}
	template <typename R = ApplyMapEventComponent*> R get_applyMapEvent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9F5C))(this);
	}
	template <typename R = bool> R get_hasApplyMapEvent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F9FE4))(this);
	}
	template <typename R = void> R AddApplyMapEvent(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F9FF0))(this, newName);
	}
	template <typename R = void> R ReplaceApplyMapEvent(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FA104))(this, newName);
	}
	template <typename R = void> R RemoveApplyMapEvent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA218))(this);
	}
	template <typename R = ApplyMountToInventoryComponent*> R get_applyMountToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA224))(this);
	}
	template <typename R = bool> R get_hasApplyMountToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA2AC))(this);
	}
	template <typename R = void> R AddApplyMountToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA2B8))(this, newName, newRandomGroup);
	}
	template <typename R = void> R ReplaceApplyMountToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA3E0))(this, newName, newRandomGroup);
	}
	template <typename R = void> R RemoveApplyMountToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA508))(this);
	}
	template <typename R = ApplyPetToInventoryComponent*> R get_applyPetToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA514))(this);
	}
	template <typename R = bool> R get_hasApplyPetToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA59C))(this);
	}
	template <typename R = void> R AddApplyPetToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA5A8))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename R = void> R ReplaceApplyPetToInventory(Il2CppString* newName, Il2CppString* newRandomGroup, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FA6EC))(this, newName, newRandomGroup, newResourceRG);
	}
	template <typename R = void> R RemoveApplyPetToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA830))(this);
	}
	template <typename R = ApplyPlaceComponent*> R get_applyPlace() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA83C))(this);
	}
	template <typename R = bool> R get_hasApplyPlace() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FA8C4))(this);
	}
	template <typename R = void> R AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x10FA8D0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x10FAA08))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyPlace() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FAB40))(this);
	}
	template <typename R = ApplyResourcesToInventoryComponent*> R get_applyResourcesToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FAB4C))(this);
	}
	template <typename R = bool> R get_hasApplyResourcesToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FABD4))(this);
	}
	template <typename R = void> R AddApplyResourcesToInventory(Il2CppArray<Resource*>* newValues, Il2CppString* newRandomGroup, bool newShowNotification, bool newLogResult, Il2CppString* newButtonText) {
		return ((R (*)(ItemEntity*, Il2CppArray<Resource*>*, Il2CppString*, bool, bool, Il2CppString*))(Il2CppBase() + 0x10FABE0))(this, newValues, newRandomGroup, newShowNotification, newLogResult, newButtonText);
	}
	template <typename R = void> R ReplaceApplyResourcesToInventory(Il2CppArray<Resource*>* newValues, Il2CppString* newRandomGroup, bool newShowNotification, bool newLogResult, Il2CppString* newButtonText) {
		return ((R (*)(ItemEntity*, Il2CppArray<Resource*>*, Il2CppString*, bool, bool, Il2CppString*))(Il2CppBase() + 0x10FAD44))(this, newValues, newRandomGroup, newShowNotification, newLogResult, newButtonText);
	}
	template <typename R = void> R RemoveApplyResourcesToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FAEA8))(this);
	}
	template <typename R = ApplyRuneToInventoryComponent*> R get_applyRuneToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FAEB4))(this);
	}
	template <typename R = bool> R get_hasApplyRuneToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FAF3C))(this);
	}
	template <typename R = void> R AddApplyRuneToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FAF48))(this, newName, newRandomGroup);
	}
	template <typename R = void> R ReplaceApplyRuneToInventory(Il2CppString* newName, Il2CppString* newRandomGroup) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FB070))(this, newName, newRandomGroup);
	}
	template <typename R = void> R RemoveApplyRuneToInventory() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB198))(this);
	}
	template <typename R = ApplyTargetMagicComponent*> R get_applyTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3C60))(this);
	}
	template <typename R = bool> R get_hasApplyTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3C54))(this);
	}
	template <typename R = void> R AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10FB1A4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F3CE8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB30C))(this);
	}
	template <typename R = ApplyToInventoryOnDeleteComponent*> R get_applyToInventoryOnDelete() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB318))(this);
	}
	template <typename R = bool> R get_hasApplyToInventoryOnDelete() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB3A0))(this);
	}
	template <typename R = void> R AddApplyToInventoryOnDelete(Il2CppArray<Resource*>* newToCommonInventory) {
		return ((R (*)(ItemEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x10FB3AC))(this, newToCommonInventory);
	}
	template <typename R = void> R ReplaceApplyToInventoryOnDelete(Il2CppArray<Resource*>* newToCommonInventory) {
		return ((R (*)(ItemEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x10FB4C0))(this, newToCommonInventory);
	}
	template <typename R = void> R RemoveApplyToInventoryOnDelete() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB5D4))(this);
	}
	template <typename R = ArmingCoatComponent*> R get_armingCoat() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB5E0))(this);
	}
	template <typename R = bool> R get_hasArmingCoat() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB668))(this);
	}
	template <typename R = void> R AddArmingCoat(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FB674))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCoat(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FB788))(this, newName);
	}
	template <typename R = void> R RemoveArmingCoat() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB89C))(this);
	}
	template <typename R = ArmorComponent*> R get_armor() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB8A8))(this);
	}
	template <typename R = bool> R get_hasArmor() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FB930))(this);
	}
	template <typename R = void> R AddArmor(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10FB93C))(this, newValue);
	}
	template <typename R = void> R ReplaceArmor(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10FBA40))(this, newValue);
	}
	template <typename R = void> R RemoveArmor() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FBB44))(this);
	}
	template <typename R = AttackActionComponent*> R get_attackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F39D0))(this);
	}
	template <typename R = bool> R get_hasAttackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F39C4))(this);
	}
	template <typename R = void> R AddAttackAction(Il2CppString* newName, Il2CppString* newAltName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FBB50))(this, newName, newAltName);
	}
	template <typename R = void> R ReplaceAttackAction(Il2CppString* newName, Il2CppString* newAltName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FBC78))(this, newName, newAltName);
	}
	template <typename R = void> R RemoveAttackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FBDA0))(this);
	}
	template <typename R = AuraComponent*> R get_aura() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FBDAC))(this);
	}
	template <typename R = bool> R get_hasAura() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FBE34))(this);
	}
	template <typename R = void> R AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x10FBE40))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x10FBF98))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveAura() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC0F0))(this);
	}
	template <typename R = BopComponent*> R get_bop() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC0FC))(this);
	}
	template <typename R = bool> R get_hasBop() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC184))(this);
	}
	template <typename R = void> R AddBop(Il2CppString* newActiveCondition) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC190))(this, newActiveCondition);
	}
	template <typename R = void> R ReplaceBop(Il2CppString* newActiveCondition) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC2A4))(this, newActiveCondition);
	}
	template <typename R = void> R RemoveBop() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC3B8))(this);
	}
	template <typename R = BattlePassComponent*> R get_battlePass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F5BEC))(this);
	}
	template <typename R = bool> R get_hasBattlePass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC3C4))(this);
	}
	template <typename R = void> R AddBattlePass(int32_t newStep, Il2CppString* newStepName, int32_t newPoints, int32_t newInfinityPoints, CurrencyType* newCurrencyType, bool newNextBestReward, Il2CppArray<uint8_t>* newBestMainRewards, Il2CppArray<uint8_t>* newBestPremiumRewards, Il2CppArray<MainServerRewardType*>* newMasterServerMainRewards, Il2CppArray<MainServerRewardType*>* newMasterServerPremiumRewards, Il2CppArray<Resource*>* newMainReward, Il2CppArray<Resource*>* newPremiumReward) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, int32_t, int32_t, CurrencyType*, bool, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*, Il2CppArray<MainServerRewardType*>*, Il2CppArray<MainServerRewardType*>*, Il2CppArray<Resource*>*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x10FC3D0))(this, newStep, newStepName, newPoints, newInfinityPoints, newCurrencyType, newNextBestReward, newBestMainRewards, newBestPremiumRewards, newMasterServerMainRewards, newMasterServerPremiumRewards, newMainReward, newPremiumReward);
	}
	template <typename R = void> R ReplaceBattlePass(int32_t newStep, Il2CppString* newStepName, int32_t newPoints, int32_t newInfinityPoints, CurrencyType* newCurrencyType, bool newNextBestReward, Il2CppArray<uint8_t>* newBestMainRewards, Il2CppArray<uint8_t>* newBestPremiumRewards, Il2CppArray<MainServerRewardType*>* newMasterServerMainRewards, Il2CppArray<MainServerRewardType*>* newMasterServerPremiumRewards, Il2CppArray<Resource*>* newMainReward, Il2CppArray<Resource*>* newPremiumReward) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, int32_t, int32_t, CurrencyType*, bool, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*, Il2CppArray<MainServerRewardType*>*, Il2CppArray<MainServerRewardType*>*, Il2CppArray<Resource*>*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x10FC5A8))(this, newStep, newStepName, newPoints, newInfinityPoints, newCurrencyType, newNextBestReward, newBestMainRewards, newBestPremiumRewards, newMasterServerMainRewards, newMasterServerPremiumRewards, newMainReward, newPremiumReward);
	}
	template <typename R = void> R RemoveBattlePass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC780))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2168))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F607C))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC78C))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FC8A0))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC9B4))(this);
	}
	template <typename R = BookComponent*> R get_book() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FC9C0))(this);
	}
	template <typename R = bool> R get_hasBook() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FCA48))(this);
	}
	template <typename R = void> R AddBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FCA54))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R ReplaceBook(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newInitialCapImage, Il2CppString* newInitialCapText, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10FCBC8))(this, newCaption, newCaptionImage, newInitialCapImage, newInitialCapText, newText);
	}
	template <typename R = void> R RemoveBook() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FCD3C))(this);
	}
	template <typename R = BossDescriptionComponent*> R get_bossDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FCD48))(this);
	}
	template <typename R = bool> R get_hasBossDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FCDD0))(this);
	}
	template <typename R = void> R AddBossDescription(Il2CppArray<PhaseDescription*>* newPhases, Il2CppArray<SkillDescription*>* newSkills, Difficulty* newDifficulty, Il2CppString* newLocationName, Il2CppString* newExitTag, Il2CppString* newToLocationName, Il2CppString* newLocationImage, Il2CppString* newBossTransparentImage, Il2CppArray<Il2CppString*>* newBestRewards) {
		return ((R (*)(ItemEntity*, Il2CppArray<PhaseDescription*>*, Il2CppArray<SkillDescription*>*, Difficulty*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10FCDDC))(this, newPhases, newSkills, newDifficulty, newLocationName, newExitTag, newToLocationName, newLocationImage, newBossTransparentImage, newBestRewards);
	}
	template <typename R = void> R ReplaceBossDescription(Il2CppArray<PhaseDescription*>* newPhases, Il2CppArray<SkillDescription*>* newSkills, Difficulty* newDifficulty, Il2CppString* newLocationName, Il2CppString* newExitTag, Il2CppString* newToLocationName, Il2CppString* newLocationImage, Il2CppString* newBossTransparentImage, Il2CppArray<Il2CppString*>* newBestRewards) {
		return ((R (*)(ItemEntity*, Il2CppArray<PhaseDescription*>*, Il2CppArray<SkillDescription*>*, Difficulty*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10FCFA4))(this, newPhases, newSkills, newDifficulty, newLocationName, newExitTag, newToLocationName, newLocationImage, newBossTransparentImage, newBestRewards);
	}
	template <typename R = void> R RemoveBossDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD16C))(this);
	}
	template <typename R = BreakActionEffectComponent*> R get_breakActionEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD178))(this);
	}
	template <typename R = bool> R get_hasBreakActionEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD200))(this);
	}
	template <typename R = void> R AddBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x10FD20C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x10FD3A8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveBreakActionEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD544))(this);
	}
	template <typename R = BusyActionComponent*> R get_busyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD550))(this);
	}
	template <typename R = bool> R get_hasBusyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD5D8))(this);
	}
	template <typename R = void> R AddBusyAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD5E4))(this, newName);
	}
	template <typename R = void> R ReplaceBusyAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD6F8))(this, newName);
	}
	template <typename R = void> R RemoveBusyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD80C))(this);
	}
	template <typename R = CanOperateComponent*> R get_canOperate() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD818))(this);
	}
	template <typename R = bool> R get_hasCanOperate() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FD8A0))(this);
	}
	template <typename R = void> R AddCanOperate(Il2CppString* newCondition) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD8AC))(this, newCondition);
	}
	template <typename R = void> R ReplaceCanOperate(Il2CppString* newCondition) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FD9C0))(this, newCondition);
	}
	template <typename R = void> R RemoveCanOperate() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDAD4))(this);
	}
	template <typename R = CancelUseComponent*> R get_cancelUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDAE0))(this);
	}
	template <typename R = bool> R get_hasCancelUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4A00))(this);
	}
	template <typename R = void> R AddCancelUse(Il2CppString* newMagicName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FDB68))(this, newMagicName);
	}
	template <typename R = void> R ReplaceCancelUse(Il2CppString* newMagicName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F4A0C))(this, newMagicName);
	}
	template <typename R = void> R RemoveCancelUse() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDC7C))(this);
	}
	template <typename R = bool> R get_isCantDelete() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDC88))(this);
	}
	template <typename R = void> R set_isCantDelete(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x10FDC94))(this, value);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDDAC))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FDE34))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FDE40))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FDF44))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE048))(this);
	}
	template <typename R = CastActionComponent*> R get_castAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE054))(this);
	}
	template <typename R = bool> R get_hasCastAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE0DC))(this);
	}
	template <typename R = void> R AddCastAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE0E8))(this, newName);
	}
	template <typename R = void> R ReplaceCastAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE1FC))(this, newName);
	}
	template <typename R = void> R RemoveCastAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE310))(this);
	}
	template <typename R = CheatSettingComponent*> R get_cheatSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE31C))(this);
	}
	template <typename R = bool> R get_hasCheatSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE3A4))(this);
	}
	template <typename R = void> R AddCheatSetting(Il2CppString* newCategory) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE3B0))(this, newCategory);
	}
	template <typename R = void> R ReplaceCheatSetting(Il2CppString* newCategory) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FE4C4))(this, newCategory);
	}
	template <typename R = void> R RemoveCheatSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE5D8))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE5E4))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE66C))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FE678))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10FE77C))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE880))(this);
	}
	template <typename R = ColorComponent*> R get_color() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE88C))(this);
	}
	template <typename R = bool> R get_hasColor() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FE914))(this);
	}
	template <typename R = void> R AddColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x10FE920))(this, newPriority, newHexColor);
	}
	template <typename R = void> R ReplaceColor(int32_t newPriority, Il2CppString* newHexColor) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x10FEA3C))(this, newPriority, newHexColor);
	}
	template <typename R = void> R RemoveColor() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEB58))(this);
	}
	template <typename R = CompatibleViewsComponent*> R get_compatibleViews() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEB64))(this);
	}
	template <typename R = bool> R get_hasCompatibleViews() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEBEC))(this);
	}
	template <typename R = void> R AddCompatibleViews(Il2CppArray<Il2CppString*>* newItems, Il2CppArray<Il2CppString*>* newNotItems) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10FEBF8))(this, newItems, newNotItems);
	}
	template <typename R = void> R ReplaceCompatibleViews(Il2CppArray<Il2CppString*>* newItems, Il2CppArray<Il2CppString*>* newNotItems) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10FED20))(this, newItems, newNotItems);
	}
	template <typename R = void> R RemoveCompatibleViews() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEE48))(this);
	}
	template <typename R = ContainerActionComponent*> R get_containerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEE54))(this);
	}
	template <typename R = bool> R get_hasContainerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FEEDC))(this);
	}
	template <typename R = void> R AddContainerAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FEEE8))(this, newName);
	}
	template <typename R = void> R ReplaceContainerAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FEFFC))(this, newName);
	}
	template <typename R = void> R RemoveContainerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF110))(this);
	}
	template <typename R = ConvertToComponent*> R get_convertTo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF11C))(this);
	}
	template <typename R = bool> R get_hasConvertTo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF1A4))(this);
	}
	template <typename R = void> R AddConvertTo(Il2CppString* newName, Il2CppArray<ResourceElement*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<ResourceElement*>*))(Il2CppBase() + 0x10FF1B0))(this, newName, newNames);
	}
	template <typename R = void> R ReplaceConvertTo(Il2CppString* newName, Il2CppArray<ResourceElement*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<ResourceElement*>*))(Il2CppBase() + 0x10FF2D8))(this, newName, newNames);
	}
	template <typename R = void> R RemoveConvertTo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF400))(this);
	}
	template <typename R = CooldownComponent*> R get_cooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF40C))(this);
	}
	template <typename R = bool> R get_hasCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF494))(this);
	}
	template <typename R = void> R AddCooldown(float newValue, float newInitial) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10FF4A0))(this, newValue, newInitial);
	}
	template <typename R = void> R ReplaceCooldown(float newValue, float newInitial) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10FF5A8))(this, newValue, newInitial);
	}
	template <typename R = void> R RemoveCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF6B0))(this);
	}
	template <typename R = CostumeFeetComponent*> R get_costumeFeet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF6BC))(this);
	}
	template <typename R = bool> R get_hasCostumeFeet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF744))(this);
	}
	template <typename R = void> R AddCostumeFeet(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FF750))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeFeet(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FF864))(this, newName);
	}
	template <typename R = void> R RemoveCostumeFeet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF978))(this);
	}
	template <typename R = CraftActionComponent*> R get_craftAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FF984))(this);
	}
	template <typename R = bool> R get_hasCraftAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFA0C))(this);
	}
	template <typename R = void> R AddCraftAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FFA18))(this, newName);
	}
	template <typename R = void> R ReplaceCraftAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10FFB2C))(this, newName);
	}
	template <typename R = void> R RemoveCraftAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFC40))(this);
	}
	template <typename R = CraftCooldownComponent*> R get_craftCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFC4C))(this);
	}
	template <typename R = bool> R get_hasCraftCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFCD4))(this);
	}
	template <typename R = void> R AddCraftCooldown(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10FFCE0))(this, newValue);
	}
	template <typename R = void> R ReplaceCraftCooldown(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10FFDE4))(this, newValue);
	}
	template <typename R = void> R RemoveCraftCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFEE8))(this);
	}
	template <typename R = CurrencyTypeComponent*> R get_currencyType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFEF4))(this);
	}
	template <typename R = bool> R get_hasCurrencyType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10FFF7C))(this);
	}
	template <typename R = void> R AddCurrencyType(CurrencyType* newType) {
		return ((R (*)(ItemEntity*, CurrencyType*))(Il2CppBase() + 0x10FFF88))(this, newType);
	}
	template <typename R = void> R ReplaceCurrencyType(CurrencyType* newType) {
		return ((R (*)(ItemEntity*, CurrencyType*))(Il2CppBase() + 0x110008C))(this, newType);
	}
	template <typename R = void> R RemoveCurrencyType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100190))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110019C))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100224))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100230))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100334))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100438))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100444))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11004CC))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11004D8))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11005DC))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11006E0))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11006EC))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100774))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100780))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1100884))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100988))(this);
	}
	template <typename R = DailyShopActionComponent*> R get_dailyShopAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100994))(this);
	}
	template <typename R = bool> R get_hasDailyShopAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100A1C))(this);
	}
	template <typename R = void> R AddDailyShopAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1100A28))(this, newName);
	}
	template <typename R = void> R ReplaceDailyShopAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1100B3C))(this, newName);
	}
	template <typename R = void> R RemoveDailyShopAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100C50))(this);
	}
	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F28D0))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F28C4))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1100C5C))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F2958))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100D60))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100D6C))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1100DF4))(this);
	}
	template <typename R = void> R AddDamageType(DamageType* newValue) {
		return ((R (*)(ItemEntity*, DamageType*))(Il2CppBase() + 0x1100E00))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType* newValue) {
		return ((R (*)(ItemEntity*, DamageType*))(Il2CppBase() + 0x1100F04))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101008))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101014))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110109C))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11010A8))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11011AC))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11012B0))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11012BC))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10EE790))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1101344))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110146C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101594))(this);
	}
	template <typename R = DestroyActionComponent*> R get_destroyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11015A0))(this);
	}
	template <typename R = bool> R get_hasDestroyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101628))(this);
	}
	template <typename R = void> R AddDestroyAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101634))(this, newName);
	}
	template <typename R = void> R ReplaceDestroyAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101748))(this, newName);
	}
	template <typename R = void> R RemoveDestroyAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110185C))(this);
	}
	template <typename R = DiplomacyManagementActionComponent*> R get_diplomacyManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101868))(this);
	}
	template <typename R = bool> R get_hasDiplomacyManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11018F0))(this);
	}
	template <typename R = void> R AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11018FC))(this, newName);
	}
	template <typename R = void> R ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1101A10))(this, newName);
	}
	template <typename R = void> R RemoveDiplomacyManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101B24))(this);
	}
	template <typename R = DismountCooldownComponent*> R get_dismountCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101B30))(this);
	}
	template <typename R = bool> R get_hasDismountCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101BB8))(this);
	}
	template <typename R = void> R AddDismountCooldown(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1101BC4))(this, newValue);
	}
	template <typename R = void> R ReplaceDismountCooldown(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1101CC8))(this, newValue);
	}
	template <typename R = void> R RemoveDismountCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101DCC))(this);
	}
	template <typename R = DistanceComponent*> R get_distance() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101DD8))(this);
	}
	template <typename R = bool> R get_hasDistance() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1101E60))(this);
	}
	template <typename R = void> R AddDistance(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1101E6C))(this, newValue);
	}
	template <typename R = void> R ReplaceDistance(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1101F70))(this, newValue);
	}
	template <typename R = void> R RemoveDistance() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102074))(this);
	}
	template <typename R = DualVariantComponent*> R get_dualVariant() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102080))(this);
	}
	template <typename R = bool> R get_hasDualVariant() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102108))(this);
	}
	template <typename R = void> R AddDualVariant(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102114))(this, newName);
	}
	template <typename R = void> R ReplaceDualVariant(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102228))(this, newName);
	}
	template <typename R = void> R RemoveDualVariant() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110233C))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102348))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11023D0))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11023DC))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11024E0))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11025E4))(this);
	}
	template <typename R = EmojiActionComponent*> R get_emojiAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11025F0))(this);
	}
	template <typename R = bool> R get_hasEmojiAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102678))(this);
	}
	template <typename R = void> R AddEmojiAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102684))(this, newName);
	}
	template <typename R = void> R ReplaceEmojiAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1102798))(this, newName);
	}
	template <typename R = void> R RemoveEmojiAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11028AC))(this);
	}
	template <typename R = EnemyInteractComponent*> R get_enemyInteract() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11028B8))(this);
	}
	template <typename R = bool> R get_hasEnemyInteract() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102940))(this);
	}
	template <typename R = void> R AddEnemyInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(ItemEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110294C))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceEnemyInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(ItemEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1102AF8))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveEnemyInteract() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102CA4))(this);
	}
	template <typename R = EquipMagicByGradeComponent*> R get_equipMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4B2C))(this);
	}
	template <typename R = bool> R get_hasEquipMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4B20))(this);
	}
	template <typename R = void> R AddEquipMagicByGrade(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1102CB0))(this, newNames);
	}
	template <typename R = void> R ReplaceEquipMagicByGrade(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1102DC4))(this, newNames);
	}
	template <typename R = void> R RemoveEquipMagicByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102ED8))(this);
	}
	template <typename R = EquipMagicComponent*> R get_equipMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2DAC))(this);
	}
	template <typename R = bool> R get_hasEquipMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2DA0))(this);
	}
	template <typename R = void> R AddEquipMagic(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1102EE4))(this, newNames);
	}
	template <typename R = void> R ReplaceEquipMagic(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F2E34))(this, newNames);
	}
	template <typename R = void> R RemoveEquipMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1102FF8))(this);
	}
	template <typename R = EquipQuestComponent*> R get_equipQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103004))(this);
	}
	template <typename R = bool> R get_hasEquipQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110308C))(this);
	}
	template <typename R = void> R AddEquipQuest(Il2CppString* newName, Nullable1int32_t>* newActiveSlotIndex) {
		return ((R (*)(ItemEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x1103098))(this, newName, newActiveSlotIndex);
	}
	template <typename R = void> R ReplaceEquipQuest(Il2CppString* newName, Nullable1int32_t>* newActiveSlotIndex) {
		return ((R (*)(ItemEntity*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x11031B4))(this, newName, newActiveSlotIndex);
	}
	template <typename R = void> R RemoveEquipQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11032D0))(this);
	}
	template <typename R = EquipSetComponent*> R get_equipSet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2F54))(this);
	}
	template <typename R = bool> R get_hasEquipSet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2F48))(this);
	}
	template <typename R = void> R AddEquipSet(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11032DC))(this, newName);
	}
	template <typename R = void> R ReplaceEquipSet(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x10F2FDC))(this, newName);
	}
	template <typename R = void> R RemoveEquipSet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11033F0))(this);
	}
	template <typename R = EquipmentComponent*> R get_equipment() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10EFCF8))(this);
	}
	template <typename R = bool> R get_hasEquipment() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10EFCEC))(this);
	}
	template <typename R = void> R AddEquipment(EquipmentType* newType, bool newNoArming, int32_t newArmed) {
		return ((R (*)(ItemEntity*, EquipmentType*, bool, int32_t))(Il2CppBase() + 0x11033FC))(this, newType, newNoArming, newArmed);
	}
	template <typename R = void> R ReplaceEquipment(EquipmentType* newType, bool newNoArming, int32_t newArmed) {
		return ((R (*)(ItemEntity*, EquipmentType*, bool, int32_t))(Il2CppBase() + 0x10F23C8))(this, newType, newNoArming, newArmed);
	}
	template <typename R = void> R RemoveEquipment() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110351C))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103528))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11035B0))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11035BC))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11036C0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11037C4))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11037D0))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103858))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103864))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103968))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103A6C))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103A78))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103B00))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103B0C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103C10))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103D14))(this);
	}
	template <typename R = ExplodeComponent*> R get_explode() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103D20))(this);
	}
	template <typename R = bool> R get_hasExplode() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103DA8))(this);
	}
	template <typename R = void> R AddExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(ItemEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x1103DB4))(this, newItem, newType);
	}
	template <typename R = void> R ReplaceExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(ItemEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x1103ED0))(this, newItem, newType);
	}
	template <typename R = void> R RemoveExplode() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1103FEC))(this);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F5C80))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F5C74))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1103FF8))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11040FC))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104200))(this);
	}
	template <typename R = FinalizeActionComponent*> R get_finalizeAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110420C))(this);
	}
	template <typename R = bool> R get_hasFinalizeAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104294))(this);
	}
	template <typename R = void> R AddFinalizeAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11042A0))(this, newName);
	}
	template <typename R = void> R ReplaceFinalizeAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11043B4))(this, newName);
	}
	template <typename R = void> R RemoveFinalizeAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11044C8))(this);
	}
	template <typename R = FinishQuestComponent*> R get_finishQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11044D4))(this);
	}
	template <typename R = bool> R get_hasFinishQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110455C))(this);
	}
	template <typename R = void> R AddFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1104568))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R ReplaceFinishQuest(Il2CppString* newName, Il2CppString* newTag, bool newCheckMaxProgress, bool newIgnoreStart) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x11046B0))(this, newName, newTag, newCheckMaxProgress, newIgnoreStart);
	}
	template <typename R = void> R RemoveFinishQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11047F8))(this);
	}
	template <typename R = FreeAttackActionComponent*> R get_freeAttackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104804))(this);
	}
	template <typename R = bool> R get_hasFreeAttackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110488C))(this);
	}
	template <typename R = void> R AddFreeAttackAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104898))(this, newName);
	}
	template <typename R = void> R ReplaceFreeAttackAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11049AC))(this, newName);
	}
	template <typename R = void> R RemoveFreeAttackAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104AC0))(this);
	}
	template <typename R = FreeCastActionComponent*> R get_freeCastAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104ACC))(this);
	}
	template <typename R = bool> R get_hasFreeCastAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104B54))(this);
	}
	template <typename R = void> R AddFreeCastAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104B60))(this, newName);
	}
	template <typename R = void> R ReplaceFreeCastAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1104C74))(this, newName);
	}
	template <typename R = void> R RemoveFreeCastAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104D88))(this);
	}
	template <typename R = FuelComponent*> R get_fuel() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104D94))(this);
	}
	template <typename R = bool> R get_hasFuel() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1104E1C))(this);
	}
	template <typename R = void> R AddFuel(Il2CppString* newType, float newTime) {
		return ((R (*)(ItemEntity*, Il2CppString*, float))(Il2CppBase() + 0x1104E28))(this, newType, newTime);
	}
	template <typename R = void> R ReplaceFuel(Il2CppString* newType, float newTime) {
		return ((R (*)(ItemEntity*, Il2CppString*, float))(Il2CppBase() + 0x1104F4C))(this, newType, newTime);
	}
	template <typename R = void> R RemoveFuel() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105070))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110507C))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105104))(this);
	}
	template <typename R = void> R AddGender(Gender* newType) {
		return ((R (*)(ItemEntity*, Gender*))(Il2CppBase() + 0x1105110))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender* newType) {
		return ((R (*)(ItemEntity*, Gender*))(Il2CppBase() + 0x1105214))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105318))(this);
	}
	template <typename R = GhostyRuneDescriptionComponent*> R get_ghostyRuneDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105324))(this);
	}
	template <typename R = bool> R get_hasGhostyRuneDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11053AC))(this);
	}
	template <typename R = void> R AddGhostyRuneDescription(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newDisabledText, Nullable1Icon*>* newIcon, float newLifeTime) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1Icon*>*, float))(Il2CppBase() + 0x11053B8))(this, newCaption, newText, newDisabledText, newIcon, newLifeTime);
	}
	template <typename R = void> R ReplaceGhostyRuneDescription(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newDisabledText, Nullable1Icon*>* newIcon, float newLifeTime) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Nullable1Icon*>*, float))(Il2CppBase() + 0x1105530))(this, newCaption, newText, newDisabledText, newIcon, newLifeTime);
	}
	template <typename R = void> R RemoveGhostyRuneDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11056A8))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11056B4))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110573C))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1105748))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110584C))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105950))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110595C))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11059E4))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11059F0))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x10F47D4))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105AF4))(this);
	}
	template <typename R = GradeUpComponent*> R get_gradeUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105B00))(this);
	}
	template <typename R = bool> R get_hasGradeUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105B88))(this);
	}
	template <typename R = void> R AddGradeUp(Il2CppString* newCaption, Il2CppString* newDescription, Il2CppArray<ConditionText*>* newConditions, Il2CppArray<Resource*>* newResources, Il2CppString* newToItemName, int32_t newSilverPrice, float newChance) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<ConditionText*>*, Il2CppArray<Resource*>*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1105B94))(this, newCaption, newDescription, newConditions, newResources, newToItemName, newSilverPrice, newChance);
	}
	template <typename R = void> R ReplaceGradeUp(Il2CppString* newCaption, Il2CppString* newDescription, Il2CppArray<ConditionText*>* newConditions, Il2CppArray<Resource*>* newResources, Il2CppString* newToItemName, int32_t newSilverPrice, float newChance) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<ConditionText*>*, Il2CppArray<Resource*>*, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1105D20))(this, newCaption, newDescription, newConditions, newResources, newToItemName, newSilverPrice, newChance);
	}
	template <typename R = void> R RemoveGradeUp() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105EAC))(this);
	}
	template <typename R = GroupCooldownComponent*> R get_groupCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105EB8))(this);
	}
	template <typename R = bool> R get_hasGroupCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1105F40))(this);
	}
	template <typename R = void> R AddGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x1105F4C))(this, newValues);
	}
	template <typename R = void> R ReplaceGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x1106060))(this, newValues);
	}
	template <typename R = void> R RemoveGroupCooldown() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106174))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106180))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106208))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106214))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106318))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110641C))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106428))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11064B0))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11064BC))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11065C0))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11066C4))(this);
	}
	template <typename R = HealComponent*> R get_heal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11066D0))(this);
	}
	template <typename R = bool> R get_hasHeal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106758))(this);
	}
	template <typename R = void> R AddHeal(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1106764))(this, newValue);
	}
	template <typename R = void> R ReplaceHeal(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x1106868))(this, newValue);
	}
	template <typename R = void> R RemoveHeal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110696C))(this);
	}
	template <typename R = HealPredictionComponent*> R get_healPrediction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106978))(this);
	}
	template <typename R = bool> R get_hasHealPrediction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106A00))(this);
	}
	template <typename R = void> R AddHealPrediction(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106A0C))(this, newValue);
	}
	template <typename R = void> R ReplaceHealPrediction(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1106B10))(this, newValue);
	}
	template <typename R = void> R RemoveHealPrediction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106C14))(this);
	}
	template <typename R = HitActorMagicComponent*> R get_hitActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3E5C))(this);
	}
	template <typename R = bool> R get_hasHitActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3E50))(this);
	}
	template <typename R = void> R AddHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1106C20))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F3EE4))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitActorMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106D88))(this);
	}
	template <typename R = HitTargetMagicComponent*> R get_hitTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3A64))(this);
	}
	template <typename R = bool> R get_hasHitTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3A58))(this);
	}
	template <typename R = void> R AddHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1106D94))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ItemEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x10F3AEC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitTargetMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106EFC))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1106F08))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10EE4E8))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1106F90))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11070E8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107240))(this);
	}
	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4510))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4368))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x110724C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x10F4374))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107360))(this);
	}
	template <typename R = bool> R get_isIndestructible() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3704))(this);
	}
	template <typename R = void> R set_isIndestructible(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x10F3710))(this, value);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110736C))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11073F4))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1107400))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1107504))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107608))(this);
	}
	template <typename R = InstantActionComponent*> R get_instantAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107614))(this);
	}
	template <typename R = bool> R get_hasInstantAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110769C))(this);
	}
	template <typename R = void> R AddInstantAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11076A8))(this, newName);
	}
	template <typename R = void> R ReplaceInstantAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11077BC))(this, newName);
	}
	template <typename R = void> R RemoveInstantAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11078D0))(this);
	}
	template <typename R = bool> R get_isInstant() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11078DC))(this);
	}
	template <typename R = void> R set_isInstant(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x11078E8))(this, value);
	}
	template <typename R = InstantEffectComponent*> R get_instantEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107A00))(this);
	}
	template <typename R = bool> R get_hasInstantEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107A88))(this);
	}
	template <typename R = void> R AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1107A94))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x1107BEC))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R RemoveInstantEffect() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107D44))(this);
	}
	template <typename R = InteractActionComponent*> R get_interactAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107D50))(this);
	}
	template <typename R = bool> R get_hasInteractAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1107DD8))(this);
	}
	template <typename R = void> R AddInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1107DE4))(this, newName, newList);
	}
	template <typename R = void> R ReplaceInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1107F0C))(this, newName, newList);
	}
	template <typename R = void> R RemoveInteractAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108034))(this);
	}
	template <typename R = InteractComponent*> R get_interact() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108040))(this);
	}
	template <typename R = bool> R get_hasInteract() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11080C8))(this);
	}
	template <typename R = void> R AddInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(ItemEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x11080D4))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(ItemEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1108280))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveInteract() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110842C))(this);
	}
	template <typename R = InteractRadiusComponent*> R get_interactRadius() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F367C))(this);
	}
	template <typename R = bool> R get_hasInteractRadius() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3670))(this);
	}
	template <typename R = void> R AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(ItemEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x1108438))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(ItemEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x1108578))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R RemoveInteractRadius() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11086B8))(this);
	}
	template <typename R = InventoryContainerComponent*> R get_inventoryContainer() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11086C4))(this);
	}
	template <typename R = bool> R get_hasInventoryContainer() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110874C))(this);
	}
	template <typename R = void> R AddInventoryContainer(Il2CppArray<RequiredItem*>* newRequiredItems, Il2CppString* newAnalyticName, Il2CppString* newDescription, Il2CppString* newButtonText, Il2CppString* newNoFreeSlotsText) {
		return ((R (*)(ItemEntity*, Il2CppArray<RequiredItem*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1108758))(this, newRequiredItems, newAnalyticName, newDescription, newButtonText, newNoFreeSlotsText);
	}
	template <typename R = void> R ReplaceInventoryContainer(Il2CppArray<RequiredItem*>* newRequiredItems, Il2CppString* newAnalyticName, Il2CppString* newDescription, Il2CppString* newButtonText, Il2CppString* newNoFreeSlotsText) {
		return ((R (*)(ItemEntity*, Il2CppArray<RequiredItem*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x11088CC))(this, newRequiredItems, newAnalyticName, newDescription, newButtonText, newNoFreeSlotsText);
	}
	template <typename R = void> R RemoveInventoryContainer() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108A40))(this);
	}
	template <typename R = InventoryMagicComponent*> R get_inventoryMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F30FC))(this);
	}
	template <typename R = bool> R get_hasInventoryMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F30F0))(this);
	}
	template <typename R = void> R AddInventoryMagic(Il2CppString* newContainerCondition, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1108A4C))(this, newContainerCondition, newNames);
	}
	template <typename R = void> R ReplaceInventoryMagic(Il2CppString* newContainerCondition, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F3184))(this, newContainerCondition, newNames);
	}
	template <typename R = void> R RemoveInventoryMagic() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108B74))(this);
	}
	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4488))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4248))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1108B80))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(ItemEntity*, float, ModifierGroup*))(Il2CppBase() + 0x10F4254))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108C94))(this);
	}
	template <typename R = bool> R get_isLoadCart() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108CA0))(this);
	}
	template <typename R = void> R set_isLoadCart(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x1108CAC))(this, value);
	}
	template <typename R = LockActionComponent*> R get_lockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108DC4))(this);
	}
	template <typename R = bool> R get_hasLockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1108E4C))(this);
	}
	template <typename R = void> R AddLockAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1108E58))(this, newName);
	}
	template <typename R = void> R ReplaceLockAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1108F6C))(this, newName);
	}
	template <typename R = void> R RemoveLockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109080))(this);
	}
	template <typename R = LoopSoundComponent*> R get_loopSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110908C))(this);
	}
	template <typename R = bool> R get_hasLoopSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109114))(this);
	}
	template <typename R = void> R AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109120))(this, newWork, newLoop);
	}
	template <typename R = void> R ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109248))(this, newWork, newLoop);
	}
	template <typename R = void> R RemoveLoopSound() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109370))(this);
	}
	template <typename R = MailStackComponent*> R get_mailStack() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110937C))(this);
	}
	template <typename R = bool> R get_hasMailStack() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109404))(this);
	}
	template <typename R = void> R AddMailStack(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109410))(this, newValue);
	}
	template <typename R = void> R ReplaceMailStack(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109514))(this, newValue);
	}
	template <typename R = void> R RemoveMailStack() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109618))(this);
	}
	template <typename R = MaxDurabilityByGradeComponent*> R get_maxDurabilityByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4F00))(this);
	}
	template <typename R = bool> R get_hasMaxDurabilityByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4EF4))(this);
	}
	template <typename R = void> R AddMaxDurabilityByGrade(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1109624))(this, newValues);
	}
	template <typename R = void> R ReplaceMaxDurabilityByGrade(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1109738))(this, newValues);
	}
	template <typename R = void> R RemoveMaxDurabilityByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110984C))(this);
	}
	template <typename R = MaxDurabilityComponent*> R get_maxDurability() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3834))(this);
	}
	template <typename R = bool> R get_hasMaxDurability() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3828))(this);
	}
	template <typename R = void> R AddMaxDurability(float newValue, float newRecoverySpeed) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x1109858))(this, newValue, newRecoverySpeed);
	}
	template <typename R = void> R ReplaceMaxDurability(float newValue, float newRecoverySpeed) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10F38BC))(this, newValue, newRecoverySpeed);
	}
	template <typename R = void> R RemoveMaxDurability() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4F88))(this);
	}
	template <typename R = MaxGradeComponent*> R get_maxGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109960))(this);
	}
	template <typename R = bool> R get_hasMaxGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11099E8))(this);
	}
	template <typename R = void> R AddMaxGrade(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11099F4))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxGrade(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1109AF8))(this, newValue);
	}
	template <typename R = void> R RemoveMaxGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109BFC))(this);
	}
	template <typename R = MiningActionComponent*> R get_miningAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109C08))(this);
	}
	template <typename R = bool> R get_hasMiningAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109C90))(this);
	}
	template <typename R = void> R AddMiningAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1109C9C))(this, newName);
	}
	template <typename R = void> R ReplaceMiningAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1109DB0))(this, newName);
	}
	template <typename R = void> R RemoveMiningAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109EC4))(this);
	}
	template <typename R = MorphComponent*> R get_morph() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109ED0))(this);
	}
	template <typename R = bool> R get_hasMorph() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1109F58))(this);
	}
	template <typename R = void> R AddMorph(Il2CppString* newBase, Il2CppString* newSource) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1109F64))(this, newBase, newSource);
	}
	template <typename R = void> R ReplaceMorph(Il2CppString* newBase, Il2CppString* newSource) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F4598))(this, newBase, newSource);
	}
	template <typename R = void> R RemoveMorph() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A08C))(this);
	}
	template <typename R = MountComponent*> R get_mount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A098))(this);
	}
	template <typename R = bool> R get_hasMount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A120))(this);
	}
	template <typename R = void> R AddMount(int32_t newOrder, Il2CppString* newType, Il2CppArray<Il2CppString*>* newSkillsRG, Il2CppArray<Il2CppString*>* newFeatures) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x110A12C))(this, newOrder, newType, newSkillsRG, newFeatures);
	}
	template <typename R = void> R ReplaceMount(int32_t newOrder, Il2CppString* newType, Il2CppArray<Il2CppString*>* newSkillsRG, Il2CppArray<Il2CppString*>* newFeatures) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x110A278))(this, newOrder, newType, newSkillsRG, newFeatures);
	}
	template <typename R = void> R RemoveMount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A3C4))(this);
	}
	template <typename R = MountInfoComponent*> R get_mountInfo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A3D0))(this);
	}
	template <typename R = bool> R get_hasMountInfo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A458))(this);
	}
	template <typename R = void> R AddMountInfo(int32_t newStartGrade, Il2CppString* newSkillsTag) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x110A464))(this, newStartGrade, newSkillsTag);
	}
	template <typename R = void> R ReplaceMountInfo(int32_t newStartGrade, Il2CppString* newSkillsTag) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x110A580))(this, newStartGrade, newSkillsTag);
	}
	template <typename R = void> R RemoveMountInfo() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A69C))(this);
	}
	template <typename R = NextSkillComponent*> R get_nextSkill() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A6A8))(this);
	}
	template <typename R = bool> R get_hasNextSkill() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A730))(this);
	}
	template <typename R = void> R AddNextSkill(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110A73C))(this, newName);
	}
	template <typename R = void> R ReplaceNextSkill(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110A850))(this, newName);
	}
	template <typename R = void> R RemoveNextSkill() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A964))(this);
	}
	template <typename R = NoteComponent*> R get_note() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A970))(this);
	}
	template <typename R = bool> R get_hasNote() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110A9F8))(this);
	}
	template <typename R = void> R AddNote(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newBackground) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AA04))(this, newCaption, newText, newBackground);
	}
	template <typename R = void> R ReplaceNote(Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newBackground) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AB48))(this, newCaption, newText, newBackground);
	}
	template <typename R = void> R RemoveNote() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110AC8C))(this);
	}
	template <typename R = NotificationComponent*> R get_notification() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110AC98))(this);
	}
	template <typename R = bool> R get_hasNotification() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110AD20))(this);
	}
	template <typename R = void> R AddNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(ItemEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AD2C))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R ReplaceNotification(bool newFromSourceItem, Il2CppString* newValue, Il2CppString* newValueFormat, Il2CppString* newColor, Il2CppString* newIcon) {
		return ((R (*)(ItemEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110AE98))(this, newFromSourceItem, newValue, newValueFormat, newColor, newIcon);
	}
	template <typename R = void> R RemoveNotification() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B004))(this);
	}
	template <typename R = OdinsCupActionComponent*> R get_odinsCupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B010))(this);
	}
	template <typename R = bool> R get_hasOdinsCupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B098))(this);
	}
	template <typename R = void> R AddOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B0A4))(this, newName);
	}
	template <typename R = void> R ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B1B8))(this, newName);
	}
	template <typename R = void> R RemoveOdinsCupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B2CC))(this);
	}
	template <typename R = OfferActionComponent*> R get_offerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B2D8))(this);
	}
	template <typename R = bool> R get_hasOfferAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B360))(this);
	}
	template <typename R = void> R AddOfferAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B36C))(this, newName);
	}
	template <typename R = void> R ReplaceOfferAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110B480))(this, newName);
	}
	template <typename R = void> R RemoveOfferAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B594))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B5A0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B628))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x110B634))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F4C48))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B748))(this);
	}
	template <typename R = OrderComponent*> R get_order() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B754))(this);
	}
	template <typename R = bool> R get_hasOrder() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B7DC))(this);
	}
	template <typename R = void> R AddOrder(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110B7E8))(this, newValue);
	}
	template <typename R = void> R ReplaceOrder(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110B8EC))(this, newValue);
	}
	template <typename R = void> R RemoveOrder() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B9F0))(this);
	}
	template <typename R = PageComponent*> R get_page() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110B9FC))(this);
	}
	template <typename R = bool> R get_hasPage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110BA84))(this);
	}
	template <typename R = void> R AddPage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110BA90))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R ReplacePage(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110BBD4))(this, newCaption, newCaptionImage, newText);
	}
	template <typename R = void> R RemovePage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110BD18))(this);
	}
	template <typename R = PetComponent*> R get_pet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4E6C))(this);
	}
	template <typename R = bool> R get_hasPet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4E60))(this);
	}
	template <typename R = void> R AddPet(int32_t newOrder, Il2CppString* newType, Il2CppArray<Il2CppString*>* newSkill1, Il2CppArray<Il2CppString*>* newSkill2, Il2CppArray<Il2CppString*>* newSkill3) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x110BD24))(this, newOrder, newType, newSkill1, newSkill2, newSkill3);
	}
	template <typename R = void> R ReplacePet(int32_t newOrder, Il2CppString* newType, Il2CppArray<Il2CppString*>* newSkill1, Il2CppArray<Il2CppString*>* newSkill2, Il2CppArray<Il2CppString*>* newSkill3) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x110BE8C))(this, newOrder, newType, newSkill1, newSkill2, newSkill3);
	}
	template <typename R = void> R RemovePet() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110BFF4))(this);
	}
	template <typename R = PickupActionComponent*> R get_pickupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C000))(this);
	}
	template <typename R = bool> R get_hasPickupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C088))(this);
	}
	template <typename R = void> R AddPickupAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x110C094))(this, newName, newList);
	}
	template <typename R = void> R ReplacePickupAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x110C1BC))(this, newName, newList);
	}
	template <typename R = void> R RemovePickupAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C2E4))(this);
	}
	template <typename R = PlayerClassComponent*> R get_playerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C2F0))(this);
	}
	template <typename R = bool> R get_hasPlayerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C378))(this);
	}
	template <typename R = void> R AddPlayerClass(PlayerClassType* newType) {
		return ((R (*)(ItemEntity*, PlayerClassType*))(Il2CppBase() + 0x110C384))(this, newType);
	}
	template <typename R = void> R ReplacePlayerClass(PlayerClassType* newType) {
		return ((R (*)(ItemEntity*, PlayerClassType*))(Il2CppBase() + 0x10F4D5C))(this, newType);
	}
	template <typename R = void> R RemovePlayerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C488))(this);
	}
	template <typename R = PlayerClassDescriptionComponent*> R get_playerClassDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C494))(this);
	}
	template <typename R = bool> R get_hasPlayerClassDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C51C))(this);
	}
	template <typename R = void> R AddPlayerClassDescription(Il2CppString* newMainQuest, Il2CppString* newMasteryQuest, Il2CppString* newExpertiseQuest, Il2CppString* newBlockerQuest, Il2CppArray<Il2CppString*>* newOtherQuests, Il2CppArray<Il2CppString*>* newRelated, Il2CppString* newNext, int32_t newLevel, int32_t newRow, int32_t newGrade, Il2CppArray<Il2CppString*>* newRole, bool newIsNew, Il2CppString* newAvailableCondition, Il2CppString* newWeaponTag, Il2CppString* newArmorTag) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppArray<Il2CppString*>*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110C528))(this, newMainQuest, newMasteryQuest, newExpertiseQuest, newBlockerQuest, newOtherQuests, newRelated, newNext, newLevel, newRow, newGrade, newRole, newIsNew, newAvailableCondition, newWeaponTag, newArmorTag);
	}
	template <typename R = void> R ReplacePlayerClassDescription(Il2CppString* newMainQuest, Il2CppString* newMasteryQuest, Il2CppString* newExpertiseQuest, Il2CppString* newBlockerQuest, Il2CppArray<Il2CppString*>* newOtherQuests, Il2CppArray<Il2CppString*>* newRelated, Il2CppString* newNext, int32_t newLevel, int32_t newRow, int32_t newGrade, Il2CppArray<Il2CppString*>* newRole, bool newIsNew, Il2CppString* newAvailableCondition, Il2CppString* newWeaponTag, Il2CppString* newArmorTag) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, int32_t, int32_t, int32_t, Il2CppArray<Il2CppString*>*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110C770))(this, newMainQuest, newMasteryQuest, newExpertiseQuest, newBlockerQuest, newOtherQuests, newRelated, newNext, newLevel, newRow, newGrade, newRole, newIsNew, newAvailableCondition, newWeaponTag, newArmorTag);
	}
	template <typename R = void> R RemovePlayerClassDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C9B8))(this);
	}
	template <typename R = PlayerKillActionComponent*> R get_playerKillAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110C9C4))(this);
	}
	template <typename R = bool> R get_hasPlayerKillAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CA4C))(this);
	}
	template <typename R = void> R AddPlayerKillAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CA58))(this, newName);
	}
	template <typename R = void> R ReplacePlayerKillAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CB6C))(this, newName);
	}
	template <typename R = void> R RemovePlayerKillAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CC80))(this);
	}
	template <typename R = PortalActionComponent*> R get_portalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CC8C))(this);
	}
	template <typename R = bool> R get_hasPortalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CD14))(this);
	}
	template <typename R = void> R AddPortalAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CD20))(this, newName);
	}
	template <typename R = void> R ReplacePortalAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110CE34))(this, newName);
	}
	template <typename R = void> R RemovePortalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CF48))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CF54))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110CFDC))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110CFE8))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110D0EC))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D1F0))(this);
	}
	template <typename R = PowerByGradeComponent*> R get_powerByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F48E4))(this);
	}
	template <typename R = bool> R get_hasPowerByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F48D8))(this);
	}
	template <typename R = void> R AddPowerByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x110D1FC))(this, newValues);
	}
	template <typename R = void> R ReplacePowerByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x110D310))(this, newValues);
	}
	template <typename R = void> R RemovePowerByGrade() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D424))(this);
	}
	template <typename R = PowerComponent*> R get_power() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F32B8))(this);
	}
	template <typename R = bool> R get_hasPower() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F32AC))(this);
	}
	template <typename R = void> R AddPower(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x110D430))(this, newValue);
	}
	template <typename R = void> R ReplacePower(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x10F3340))(this, newValue);
	}
	template <typename R = void> R RemovePower() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D534))(this);
	}
	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F21FC))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F21F0))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x110D540))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x10F2284))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D684))(this);
	}
	template <typename R = PreviewPrefabComponent*> R get_previewPrefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D690))(this);
	}
	template <typename R = bool> R get_hasPreviewPrefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D718))(this);
	}
	template <typename R = void> R AddPreviewPrefab(Il2CppString* newPreviewName, Il2CppString* newPrefabName, Il2CppString* newBlueprint, ProtoModels::WorldResourcesType* newResourceType, Nullable1float>* newAngle) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ProtoModels::WorldResourcesType*, Nullable1float>*))(Il2CppBase() + 0x110D724))(this, newPreviewName, newPrefabName, newBlueprint, newResourceType, newAngle);
	}
	template <typename R = void> R ReplacePreviewPrefab(Il2CppString* newPreviewName, Il2CppString* newPrefabName, Il2CppString* newBlueprint, ProtoModels::WorldResourcesType* newResourceType, Nullable1float>* newAngle) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ProtoModels::WorldResourcesType*, Nullable1float>*))(Il2CppBase() + 0x110D880))(this, newPreviewName, newPrefabName, newBlueprint, newResourceType, newAngle);
	}
	template <typename R = void> R RemovePreviewPrefab() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D9DC))(this);
	}
	template <typename R = ProgressQuestComponent*> R get_progressQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110D9E8))(this);
	}
	template <typename R = bool> R get_hasProgressQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110DA70))(this);
	}
	template <typename R = void> R AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x110DA7C))(this, newName, newTag, newValue);
	}
	template <typename R = void> R ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x110DBB4))(this, newName, newTag, newValue);
	}
	template <typename R = void> R RemoveProgressQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110DCEC))(this);
	}
	template <typename R = RarityComponent*> R get_rarity() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3450))(this);
	}
	template <typename R = bool> R get_hasRarity() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F3444))(this);
	}
	template <typename R = void> R AddRarity(Rarity* newValue) {
		return ((R (*)(ItemEntity*, Rarity*))(Il2CppBase() + 0x110DCF8))(this, newValue);
	}
	template <typename R = void> R ReplaceRarity(Rarity* newValue) {
		return ((R (*)(ItemEntity*, Rarity*))(Il2CppBase() + 0x10F34D8))(this, newValue);
	}
	template <typename R = void> R RemoveRarity() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110DDFC))(this);
	}
	template <typename R = RavenNestManagementActionComponent*> R get_ravenNestManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110DE08))(this);
	}
	template <typename R = bool> R get_hasRavenNestManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110DE90))(this);
	}
	template <typename R = void> R AddRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110DE9C))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110DFB0))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E0C4))(this);
	}
	template <typename R = RavenNestStatsActionComponent*> R get_ravenNestStatsAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E0D0))(this);
	}
	template <typename R = bool> R get_hasRavenNestStatsAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E158))(this);
	}
	template <typename R = void> R AddRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E164))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E278))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestStatsAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E38C))(this);
	}
	template <typename R = RepairActionComponent*> R get_repairAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E398))(this);
	}
	template <typename R = bool> R get_hasRepairAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E420))(this);
	}
	template <typename R = void> R AddRepairAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E42C))(this, newName);
	}
	template <typename R = void> R ReplaceRepairAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x110E540))(this, newName);
	}
	template <typename R = void> R RemoveRepairAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E654))(this);
	}
	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E660))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E6E8))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110E6F4))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110E7F8))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E8FC))(this);
	}
	template <typename R = RestoreMetabolismComponent*> R get_restoreMetabolism() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E908))(this);
	}
	template <typename R = bool> R get_hasRestoreMetabolism() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110E990))(this);
	}
	template <typename R = void> R AddRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x110E99C))(this, newThirst, newHunger);
	}
	template <typename R = void> R ReplaceRestoreMetabolism(float newThirst, float newHunger) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x110EAA4))(this, newThirst, newHunger);
	}
	template <typename R = void> R RemoveRestoreMetabolism() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EBAC))(this);
	}
	template <typename R = ResurrectActionComponent*> R get_resurrectAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EBB8))(this);
	}
	template <typename R = bool> R get_hasResurrectAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EC40))(this);
	}
	template <typename R = void> R AddResurrectAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x110EC4C))(this, newName, newList);
	}
	template <typename R = void> R ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x110ED74))(this, newName, newList);
	}
	template <typename R = void> R RemoveResurrectAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EE9C))(this);
	}
	template <typename R = RuneComponent*> R get_rune() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EEA8))(this);
	}
	template <typename R = bool> R get_hasRune() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110EF30))(this);
	}
	template <typename R = void> R AddRune(RuneType* newType) {
		return ((R (*)(ItemEntity*, RuneType*))(Il2CppBase() + 0x110EF3C))(this, newType);
	}
	template <typename R = void> R ReplaceRune(RuneType* newType) {
		return ((R (*)(ItemEntity*, RuneType*))(Il2CppBase() + 0x110F040))(this, newType);
	}
	template <typename R = void> R RemoveRune() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F144))(this);
	}
	template <typename R = RuneDescriptionComponent*> R get_runeDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4BC0))(this);
	}
	template <typename R = bool> R get_hasRuneDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F4BB4))(this);
	}
	template <typename R = void> R AddRuneDescription(Il2CppString* newMagicName, Il2CppString* newParamsDescription, Il2CppArray<Params*>* newParamsByGrade) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Params*>*))(Il2CppBase() + 0x110F150))(this, newMagicName, newParamsDescription, newParamsByGrade);
	}
	template <typename R = void> R ReplaceRuneDescription(Il2CppString* newMagicName, Il2CppString* newParamsDescription, Il2CppArray<Params*>* newParamsByGrade) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Params*>*))(Il2CppBase() + 0x110F294))(this, newMagicName, newParamsDescription, newParamsByGrade);
	}
	template <typename R = void> R RemoveRuneDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F3D8))(this);
	}
	template <typename R = SagaComponent*> R get_saga() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F3E4))(this);
	}
	template <typename R = bool> R get_hasSaga() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F46C))(this);
	}
	template <typename R = void> R AddSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110F478))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R ReplaceSaga(Il2CppString* newCaption, Il2CppString* newCaptionImage, Il2CppString* newImage, Il2CppString* newText) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x110F5D0))(this, newCaption, newCaptionImage, newImage, newText);
	}
	template <typename R = void> R RemoveSaga() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F728))(this);
	}
	template <typename R = SaveActionComponent*> R get_saveAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F734))(this);
	}
	template <typename R = bool> R get_hasSaveAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110F7BC))(this);
	}
	template <typename R = void> R AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110F7C8))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x110F918))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R RemoveSaveAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FA68))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FA74))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FAFC))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FB08))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FC0C))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FD10))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FD1C))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FDA4))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FDB0))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x110FEB4))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FFB8))(this);
	}
	template <typename R = SelectClassActionComponent*> R get_selectClassAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x110FFC4))(this);
	}
	template <typename R = bool> R get_hasSelectClassAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111004C))(this);
	}
	template <typename R = void> R AddSelectClassAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110058))(this, newName);
	}
	template <typename R = void> R ReplaceSelectClassAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x111016C))(this, newName);
	}
	template <typename R = void> R RemoveSelectClassAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110280))(this);
	}
	template <typename R = SelectMountActionComponent*> R get_selectMountAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111028C))(this);
	}
	template <typename R = bool> R get_hasSelectMountAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110314))(this);
	}
	template <typename R = void> R AddSelectMountAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110320))(this, newName);
	}
	template <typename R = void> R ReplaceSelectMountAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110434))(this, newName);
	}
	template <typename R = void> R RemoveSelectMountAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110548))(this);
	}
	template <typename R = SelectPetActionComponent*> R get_selectPetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110554))(this);
	}
	template <typename R = bool> R get_hasSelectPetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11105DC))(this);
	}
	template <typename R = void> R AddSelectPetAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11105E8))(this, newName);
	}
	template <typename R = void> R ReplaceSelectPetAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11106FC))(this, newName);
	}
	template <typename R = void> R RemoveSelectPetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110810))(this);
	}
	template <typename R = ShieldManagementActionComponent*> R get_shieldManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111081C))(this);
	}
	template <typename R = bool> R get_hasShieldManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11108A4))(this);
	}
	template <typename R = void> R AddShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11108B0))(this, newName);
	}
	template <typename R = void> R ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11109C4))(this, newName);
	}
	template <typename R = void> R RemoveShieldManagementAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110AD8))(this);
	}
	template <typename R = ShortNameComponent*> R get_shortName() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110AE4))(this);
	}
	template <typename R = bool> R get_hasShortName() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110B6C))(this);
	}
	template <typename R = void> R AddShortName(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110B78))(this, newName);
	}
	template <typename R = void> R ReplaceShortName(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1110C8C))(this, newName);
	}
	template <typename R = void> R RemoveShortName() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110DA0))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110DAC))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1110E34))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1110E40))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1110F44))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111048))(this);
	}
	template <typename R = SilverPriceComponent*> R get_silverPrice() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111054))(this);
	}
	template <typename R = bool> R get_hasSilverPrice() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11110C0))(this);
	}
	template <typename R = void> R AddSilverPrice(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11110CC))(this, newValue);
	}
	template <typename R = void> R ReplaceSilverPrice(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11111B4))(this, newValue);
	}
	template <typename R = void> R RemoveSilverPrice() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111129C))(this);
	}
	template <typename R = SingleGroupsComponent*> R get_singleGroups() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11112A8))(this);
	}
	template <typename R = bool> R get_hasSingleGroups() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111330))(this);
	}
	template <typename R = void> R AddSingleGroups(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x111133C))(this, newNames);
	}
	template <typename R = void> R ReplaceSingleGroups(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1111450))(this, newNames);
	}
	template <typename R = void> R RemoveSingleGroups() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111564))(this);
	}
	template <typename R = SkillDescriptionComponent*> R get_skillDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111570))(this);
	}
	template <typename R = bool> R get_hasSkillDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11115F8))(this);
	}
	template <typename R = void> R AddSkillDescription(int32_t newTier, Il2CppString* newCondition, Il2CppString* newChargedCondition, bool newDontShowInUI, Il2CppArray<AltSkill*>* newAltSkills) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppString*, bool, Il2CppArray<AltSkill*>*))(Il2CppBase() + 0x1111604))(this, newTier, newCondition, newChargedCondition, newDontShowInUI, newAltSkills);
	}
	template <typename R = void> R ReplaceSkillDescription(int32_t newTier, Il2CppString* newCondition, Il2CppString* newChargedCondition, bool newDontShowInUI, Il2CppArray<AltSkill*>* newAltSkills) {
		return ((R (*)(ItemEntity*, int32_t, Il2CppString*, Il2CppString*, bool, Il2CppArray<AltSkill*>*))(Il2CppBase() + 0x1111764))(this, newTier, newCondition, newChargedCondition, newDontShowInUI, newAltSkills);
	}
	template <typename R = void> R RemoveSkillDescription() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11118C4))(this);
	}
	template <typename R = SkillShotActionComponent*> R get_skillShotAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11118D0))(this);
	}
	template <typename R = bool> R get_hasSkillShotAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111958))(this);
	}
	template <typename R = void> R AddSkillShotAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111964))(this, newArrow, newName);
	}
	template <typename R = void> R ReplaceSkillShotAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111A8C))(this, newArrow, newName);
	}
	template <typename R = void> R RemoveSkillShotAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111BB4))(this);
	}
	template <typename R = SkillShotTargetActionComponent*> R get_skillShotTargetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111BC0))(this);
	}
	template <typename R = bool> R get_hasSkillShotTargetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111C48))(this);
	}
	template <typename R = void> R AddSkillShotTargetAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111C54))(this, newArrow, newName);
	}
	template <typename R = void> R ReplaceSkillShotTargetAction(Il2CppString* newArrow, Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1111D7C))(this, newArrow, newName);
	}
	template <typename R = void> R RemoveSkillShotTargetAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111EA4))(this);
	}
	template <typename R = SkillsComponent*> R get_skills() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111EB0))(this);
	}
	template <typename R = bool> R get_hasSkills() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1111F38))(this);
	}
	template <typename R = void> R AddSkills(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1111F44))(this, newValues);
	}
	template <typename R = void> R ReplaceSkills(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F46C0))(this, newValues);
	}
	template <typename R = void> R RemoveSkills() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112058))(this);
	}
	template <typename R = SlotCountComponent*> R get_slotCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112064))(this);
	}
	template <typename R = bool> R get_hasSlotCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11120EC))(this);
	}
	template <typename R = void> R AddSlotCount(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11120F8))(this, newValue);
	}
	template <typename R = void> R ReplaceSlotCount(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x11121FC))(this, newValue);
	}
	template <typename R = void> R RemoveSlotCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112300))(this);
	}
	template <typename R = SneakDamageComponent*> R get_sneakDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2A68))(this);
	}
	template <typename R = bool> R get_hasSneakDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2A5C))(this);
	}
	template <typename R = void> R AddSneakDamage(float newPvP, float newPvE) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x111230C))(this, newPvP, newPvE);
	}
	template <typename R = void> R ReplaceSneakDamage(float newPvP, float newPvE) {
		return ((R (*)(ItemEntity*, float, float))(Il2CppBase() + 0x10F2AF0))(this, newPvP, newPvE);
	}
	template <typename R = void> R RemoveSneakDamage() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112414))(this);
	}
	template <typename R = SocketComponent*> R get_socket() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F24F4))(this);
	}
	template <typename R = bool> R get_hasSocket() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F24E8))(this);
	}
	template <typename R = void> R AddSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(ItemEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1112420))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R ReplaceSocket(Il2CppString* newName, bool newIgnoreRotation) {
		return ((R (*)(ItemEntity*, Il2CppString*, bool))(Il2CppBase() + 0x10F257C))(this, newName, newIgnoreRotation);
	}
	template <typename R = void> R RemoveSocket() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F269C))(this);
	}
	template <typename R = SpeedComponent*> R get_speed() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112540))(this);
	}
	template <typename R = bool> R get_hasSpeed() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11125C8))(this);
	}
	template <typename R = void> R AddSpeed(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11125D4))(this, newValue);
	}
	template <typename R = void> R ReplaceSpeed(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11126D8))(this, newValue);
	}
	template <typename R = void> R RemoveSpeed() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11127DC))(this);
	}
	template <typename R = StackCountComponent*> R get_stackCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11127E8))(this);
	}
	template <typename R = bool> R get_hasStackCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112870))(this);
	}
	template <typename R = void> R AddStackCount(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x111287C))(this, newValue);
	}
	template <typename R = void> R ReplaceStackCount(int32_t newValue) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1112980))(this, newValue);
	}
	template <typename R = void> R RemoveStackCount() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112A84))(this);
	}
	template <typename R = StartQuestComponent*> R get_startQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112A90))(this);
	}
	template <typename R = bool> R get_hasStartQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112B18))(this);
	}
	template <typename R = void> R AddStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1112B24))(this, newName, newTag);
	}
	template <typename R = void> R ReplaceStartQuest(Il2CppString* newName, Il2CppString* newTag) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1112C4C))(this, newName, newTag);
	}
	template <typename R = void> R RemoveStartQuest() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112D74))(this);
	}
	template <typename R = StartTournamentActionComponent*> R get_startTournamentAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112D80))(this);
	}
	template <typename R = bool> R get_hasStartTournamentAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1112E08))(this);
	}
	template <typename R = void> R AddStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1112E14))(this, newName);
	}
	template <typename R = void> R ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1112F28))(this, newName);
	}
	template <typename R = void> R RemoveStartTournamentAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111303C))(this);
	}
	template <typename R = StoreProductComponent*> R get_storeProduct() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113048))(this);
	}
	template <typename R = bool> R get_hasStoreProduct() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11130D0))(this);
	}
	template <typename R = void> R AddStoreProduct(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11130DC))(this, newName);
	}
	template <typename R = void> R ReplaceStoreProduct(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11131F0))(this, newName);
	}
	template <typename R = void> R RemoveStoreProduct() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113304))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2C04))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F2BF8))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1113310))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10F2C8C))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113424))(this);
	}
	template <typename R = TenacityBlockTimeComponent*> R get_tenacityBlockTime() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113430))(this);
	}
	template <typename R = bool> R get_hasTenacityBlockTime() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11134B8))(this);
	}
	template <typename R = void> R AddTenacityBlockTime(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11134C4))(this, newValue);
	}
	template <typename R = void> R ReplaceTenacityBlockTime(float newValue) {
		return ((R (*)(ItemEntity*, float))(Il2CppBase() + 0x11135C8))(this, newValue);
	}
	template <typename R = void> R RemoveTenacityBlockTime() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11136CC))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11136D8))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113760))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x111376C))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113870))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113974))(this);
	}
	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113980))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113A08))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(ItemEntity*, ToolTipValue*))(Il2CppBase() + 0x1113A14))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(ItemEntity*, ToolTipValue*))(Il2CppBase() + 0x1113B28))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113C3C))(this);
	}
	template <typename R = TournamentPointsComponent*> R get_tournamentPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113C48))(this);
	}
	template <typename R = bool> R get_hasTournamentPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113CD0))(this);
	}
	template <typename R = void> R AddTournamentPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113CDC))(this, newCount);
	}
	template <typename R = void> R ReplaceTournamentPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1113DE0))(this, newCount);
	}
	template <typename R = void> R RemoveTournamentPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113EE4))(this);
	}
	template <typename R = bool> R get_isUndeletable() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1113EF0))(this);
	}
	template <typename R = void> R set_isUndeletable(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x1113EFC))(this, value);
	}
	template <typename R = bool> R get_isUndropable() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114014))(this);
	}
	template <typename R = void> R set_isUndropable(bool value) {
		return ((R (*)(ItemEntity*, bool))(Il2CppBase() + 0x1114020))(this, value);
	}
	template <typename R = UnlockActionComponent*> R get_unlockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114138))(this);
	}
	template <typename R = bool> R get_hasUnlockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11141C0))(this);
	}
	template <typename R = void> R AddUnlockAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11141CC))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11142E0))(this, newName);
	}
	template <typename R = void> R RemoveUnlockAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11143F4))(this);
	}
	template <typename R = UnlockContainerActionComponent*> R get_unlockContainerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114400))(this);
	}
	template <typename R = bool> R get_hasUnlockContainerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114488))(this);
	}
	template <typename R = void> R AddUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114494))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x11145A8))(this, newName);
	}
	template <typename R = void> R RemoveUnlockContainerAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11146BC))(this);
	}
	template <typename R = UnlockPlayerClassComponent*> R get_unlockPlayerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11146C8))(this);
	}
	template <typename R = bool> R get_hasUnlockPlayerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114750))(this);
	}
	template <typename R = void> R AddUnlockPlayerClass(Il2CppString* newName, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x111475C))(this, newName, newResourceRG);
	}
	template <typename R = void> R ReplaceUnlockPlayerClass(Il2CppString* newName, Il2CppString* newResourceRG) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1114884))(this, newName, newResourceRG);
	}
	template <typename R = void> R RemoveUnlockPlayerClass() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11149AC))(this);
	}
	template <typename R = UnlockPortalActionComponent*> R get_unlockPortalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11149B8))(this);
	}
	template <typename R = bool> R get_hasUnlockPortalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114A40))(this);
	}
	template <typename R = void> R AddUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114A4C))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(ItemEntity*, Il2CppString*))(Il2CppBase() + 0x1114B60))(this, newName);
	}
	template <typename R = void> R RemoveUnlockPortalAction() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114C74))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114C80))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114D08))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1114D14))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(ItemEntity*, int32_t))(Il2CppBase() + 0x1114E18))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114F1C))(this);
	}
	template <typename R = WalletSettingComponent*> R get_walletSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114F28))(this);
	}
	template <typename R = bool> R get_hasWalletSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x1114FB0))(this);
	}
	template <typename R = void> R AddWalletSetting(bool newShowEmpty, Il2CppString* newShowCondition, WalletType* newType) {
		return ((R (*)(ItemEntity*, bool, Il2CppString*, WalletType*))(Il2CppBase() + 0x1114FBC))(this, newShowEmpty, newShowCondition, newType);
	}
	template <typename R = void> R ReplaceWalletSetting(bool newShowEmpty, Il2CppString* newShowCondition, WalletType* newType) {
		return ((R (*)(ItemEntity*, bool, Il2CppString*, WalletType*))(Il2CppBase() + 0x11150EC))(this, newShowEmpty, newShowCondition, newType);
	}
	template <typename R = void> R RemoveWalletSetting() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x111521C))(this);
	}
	template <typename R = WeaponPrefabsComponent*> R get_weaponPrefabs() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F26B4))(this);
	}
	template <typename R = bool> R get_hasWeaponPrefabs() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x10F26A8))(this);
	}
	template <typename R = void> R AddWeaponPrefabs(Il2CppString* newSecondPrefab, Il2CppString* newSecondSocket, Il2CppString* newBulletPrefab, Il2CppString* newBulletSocket, Il2CppString* newToolPrefab, Il2CppString* newToolSocket) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1115228))(this, newSecondPrefab, newSecondSocket, newBulletPrefab, newBulletSocket, newToolPrefab, newToolSocket);
	}
	template <typename R = void> R ReplaceWeaponPrefabs(Il2CppString* newSecondPrefab, Il2CppString* newSecondSocket, Il2CppString* newBulletPrefab, Il2CppString* newBulletSocket, Il2CppString* newToolPrefab, Il2CppString* newToolSocket) {
		return ((R (*)(ItemEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10F273C))(this, newSecondPrefab, newSecondSocket, newBulletPrefab, newBulletSocket, newToolPrefab, newToolSocket);
	}
	template <typename R = void> R RemoveWeaponPrefabs() {
		return ((R (*)(ItemEntity*))(Il2CppBase() + 0x11153B0))(this);
	}

};

