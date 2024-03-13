#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionEntity"));
	}

	template <typename T = ApplyActivateStatueComponent*> static T& applyActivateStatueComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ApplyInPvPComponent*> static T& applyInPvPComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = ApplyResurrectComponent*> static T& applyResurrectComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = ApplySelectClassComponent*> static T& applySelectClassComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = ApplySelectMountComponent*> static T& applySelectMountComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = ApplySelectPetComponent*> static T& applySelectPetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = ApplySneakComponent*> static T& applySneakComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = ApplyTargetNeutralizeComponent*> static T& applyTargetNeutralizeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = BlockMoveInventoryComponent*> static T& blockMoveInventoryComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = CompletedComponent*> static T& completedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IgnoreItemParamsComponent*> static T& ignoreItemParamsComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = InfinityComponent*> static T& infinityComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = OnApplyComponent*> static T& onApplyComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = OnDeathComponent*> static T& onDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = OnStartComponent*> static T& onStartComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = StopMoveComponent*> static T& stopMoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = SuccessComponent*> static T& successComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC053C))(this);
	}
	template <typename T = AOEComponent*> T get_aOE() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC05B0))(this);
	}
	template <typename T = bool> T get_hasAOE() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0638))(this);
	}
	template <typename T = void> T AddAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<uintptr_t>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((T (*)(ActionEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<uintptr_t>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x1DC0644))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename T = void> T ReplaceAOE(TargetsSelectorType* newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<uintptr_t>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes* newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((T (*)(ActionEntity*, TargetsSelectorType*, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<uintptr_t>*, float, float, float, Il2CppString*, RelationshipTypes*, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x1DC08C0))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename T = void> T RemoveAOE() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0B3C))(this);
	}
	template <typename T = ActionTypeComponent*> T get_actionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF6A0))(this);
	}
	template <typename T = bool> T get_hasActionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0B48))(this);
	}
	template <typename T = void> T AddActionType(ActionType* newValue) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DC0B54))(this, newValue);
	}
	template <typename T = void> T ReplaceActionType(ActionType* newValue) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DC0C58))(this, newValue);
	}
	template <typename T = void> T RemoveActionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0D5C))(this);
	}
	template <typename T = ActiveConditionComponent*> T get_activeCondition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0D68))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC0DF0))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1DC0DFC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1DC0F4C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC109C))(this);
	}
	template <typename T = ActorComponent*> T get_actor() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF7BC))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC10A8))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC10B4))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC11B8))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC12BC))(this);
	}
	template <typename T = AnimatorComponent*> T get_animator() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC12C8))(this);
	}
	template <typename T = bool> T get_hasAnimator() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1350))(this);
	}
	template <typename T = void> T AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1DC135C))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1DC1504))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T RemoveAnimator() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC16AC))(this);
	}
	template <typename T = ApplyActionEffectComponent*> T get_applyActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC16B8))(this);
	}
	template <typename T = bool> T get_hasApplyActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1740))(this);
	}
	template <typename T = void> T AddApplyActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC174C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC18E8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1A84))(this);
	}
	template <typename T = bool> T get_isApplyActivateStatue() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1A90))(this);
	}
	template <typename T = void> T set_isApplyActivateStatue(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC1A9C))(this, value);
	}
	template <typename T = ApplyActorCooldownComponent*> T get_applyActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1BB4))(this);
	}
	template <typename T = bool> T get_hasApplyActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1C3C))(this);
	}
	template <typename T = void> T AddApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC1C48))(this, newValues, newTags);
	}
	template <typename T = void> T ReplaceApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC1D70))(this, newValues, newTags);
	}
	template <typename T = void> T RemoveApplyActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1E98))(this);
	}
	template <typename T = ApplyActorMagicComponent*> T get_applyActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1EA4))(this);
	}
	template <typename T = bool> T get_hasApplyActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC1F2C))(this);
	}
	template <typename T = void> T AddApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC1F38))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC20A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2208))(this);
	}
	template <typename T = ApplyChargeComponent*> T get_applyCharge() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2214))(this);
	}
	template <typename T = bool> T get_hasApplyCharge() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC229C))(this);
	}
	template <typename T = void> T AddApplyCharge(float newSpeed, float newInteractRadius, Nullable1float>* newMaxDuration) {
		return ((T (*)(ActionEntity*, float, float, Nullable1float>*))(Il2CppBase() + 0x1DC22A8))(this, newSpeed, newInteractRadius, newMaxDuration);
	}
	template <typename T = void> T ReplaceApplyCharge(float newSpeed, float newInteractRadius, Nullable1float>* newMaxDuration) {
		return ((T (*)(ActionEntity*, float, float, Nullable1float>*))(Il2CppBase() + 0x1DC23C0))(this, newSpeed, newInteractRadius, newMaxDuration);
	}
	template <typename T = void> T RemoveApplyCharge() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC24D8))(this);
	}
	template <typename T = ApplyChatComponent*> T get_applyChat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC24E4))(this);
	}
	template <typename T = bool> T get_hasApplyChat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC256C))(this);
	}
	template <typename T = void> T AddApplyChat(Il2CppString* newChannelName, Il2CppString* newMessageFormat, Il2CppArray<uintptr_t>* newParams) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC2578))(this, newChannelName, newMessageFormat, newParams);
	}
	template <typename T = void> T ReplaceApplyChat(Il2CppString* newChannelName, Il2CppString* newMessageFormat, Il2CppArray<uintptr_t>* newParams) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC26BC))(this, newChannelName, newMessageFormat, newParams);
	}
	template <typename T = void> T RemoveApplyChat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2800))(this);
	}
	template <typename T = ApplyConsumeComponent*> T get_applyConsume() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC280C))(this);
	}
	template <typename T = bool> T get_hasApplyConsume() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2894))(this);
	}
	template <typename T = void> T AddApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC28A0))(this, newValues);
	}
	template <typename T = void> T ReplaceApplyConsume(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DC29B4))(this, newValues);
	}
	template <typename T = void> T RemoveApplyConsume() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2AC8))(this);
	}
	template <typename T = ApplyDamageComponent*> T get_applyDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2AD4))(this);
	}
	template <typename T = bool> T get_hasApplyDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2B5C))(this);
	}
	template <typename T = void> T AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(ActionEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x1DC2B68))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((T (*)(ActionEntity*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x1DC2CC0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T RemoveApplyDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2E18))(this);
	}
	template <typename T = ApplyDestroyChildrenComponent*> T get_applyDestroyChildren() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2E24))(this);
	}
	template <typename T = bool> T get_hasApplyDestroyChildren() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC2EAC))(this);
	}
	template <typename T = void> T AddApplyDestroyChildren(Il2CppString* newTargetCondition, float newDelay) {
		return ((T (*)(ActionEntity*, Il2CppString*, float))(Il2CppBase() + 0x1DC2EB8))(this, newTargetCondition, newDelay);
	}
	template <typename T = void> T ReplaceApplyDestroyChildren(Il2CppString* newTargetCondition, float newDelay) {
		return ((T (*)(ActionEntity*, Il2CppString*, float))(Il2CppBase() + 0x1DC2FDC))(this, newTargetCondition, newDelay);
	}
	template <typename T = void> T RemoveApplyDestroyChildren() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3100))(this);
	}
	template <typename T = ApplyDestroyComponent*> T get_applyDestroy() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC310C))(this);
	}
	template <typename T = bool> T get_hasApplyDestroy() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3194))(this);
	}
	template <typename T = void> T AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC31A0))(this, newDelay, newInstantly);
	}
	template <typename T = void> T ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC32B8))(this, newDelay, newInstantly);
	}
	template <typename T = void> T RemoveApplyDestroy() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC33D0))(this);
	}
	template <typename T = ApplyDestroyTargetsComponent*> T get_applyDestroyTargets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC33DC))(this);
	}
	template <typename T = bool> T get_hasApplyDestroyTargets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3464))(this);
	}
	template <typename T = void> T AddApplyDestroyTargets(float newDelay, bool newSave) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC3470))(this, newDelay, newSave);
	}
	template <typename T = void> T ReplaceApplyDestroyTargets(float newDelay, bool newSave) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC3588))(this, newDelay, newSave);
	}
	template <typename T = void> T RemoveApplyDestroyTargets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC36A0))(this);
	}
	template <typename T = ApplyDurabilityDamageComponent*> T get_applyDurabilityDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC36AC))(this);
	}
	template <typename T = bool> T get_hasApplyDurabilityDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3734))(this);
	}
	template <typename T = void> T AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(ActionEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1DC3740))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(ActionEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1DC3874))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T RemoveApplyDurabilityDamage() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC39A8))(this);
	}
	template <typename T = ApplyFishingComponent*> T get_applyFishing() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC39B4))(this);
	}
	template <typename T = bool> T get_hasApplyFishing() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3A3C))(this);
	}
	template <typename T = void> T AddApplyFishing(Parameters* newParam, StateParameters* newState) {
		return ((T (*)(ActionEntity*, Parameters*, StateParameters*))(Il2CppBase() + 0x1DC3A48))(this, newParam, newState);
	}
	template <typename T = void> T ReplaceApplyFishing(Parameters* newParam, StateParameters* newState) {
		return ((T (*)(ActionEntity*, Parameters*, StateParameters*))(Il2CppBase() + 0x1DC3B6C))(this, newParam, newState);
	}
	template <typename T = void> T RemoveApplyFishing() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3C90))(this);
	}
	template <typename T = ApplyHealComponent*> T get_applyHeal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3C9C))(this);
	}
	template <typename T = bool> T get_hasApplyHeal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3D24))(this);
	}
	template <typename T = void> T AddApplyHeal(float newDelay, HealParams* newParams) {
		return ((T (*)(ActionEntity*, float, HealParams*))(Il2CppBase() + 0x1DC3D30))(this, newDelay, newParams);
	}
	template <typename T = void> T ReplaceApplyHeal(float newDelay, HealParams* newParams) {
		return ((T (*)(ActionEntity*, float, HealParams*))(Il2CppBase() + 0x1DC3E48))(this, newDelay, newParams);
	}
	template <typename T = void> T RemoveApplyHeal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3F60))(this);
	}
	template <typename T = ApplyHookComponent*> T get_applyHook() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3F6C))(this);
	}
	template <typename T = bool> T get_hasApplyHook() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC3FF4))(this);
	}
	template <typename T = void> T AddApplyHook(Parameters* newParam, StateParameters* newState) {
		return ((T (*)(ActionEntity*, Parameters*, StateParameters*))(Il2CppBase() + 0x1DC4000))(this, newParam, newState);
	}
	template <typename T = void> T ReplaceApplyHook(Parameters* newParam, StateParameters* newState) {
		return ((T (*)(ActionEntity*, Parameters*, StateParameters*))(Il2CppBase() + 0x1DC4128))(this, newParam, newState);
	}
	template <typename T = void> T RemoveApplyHook() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4250))(this);
	}
	template <typename T = bool> T get_isApplyInPvP() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC425C))(this);
	}
	template <typename T = void> T set_isApplyInPvP(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4268))(this, value);
	}
	template <typename T = ApplyLevelCapUpComponent*> T get_applyLevelCapUp() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4380))(this);
	}
	template <typename T = bool> T get_hasApplyLevelCapUp() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4408))(this);
	}
	template <typename T = void> T AddApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC4414))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC4518))(this, newValue);
	}
	template <typename T = void> T RemoveApplyLevelCapUp() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC461C))(this);
	}
	template <typename T = ApplyLocationMagicComponent*> T get_applyLocationMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4628))(this);
	}
	template <typename T = bool> T get_hasApplyLocationMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC46B0))(this);
	}
	template <typename T = void> T AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC46BC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC4824))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyLocationMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC498C))(this);
	}
	template <typename T = ApplyLockUnlockComponent*> T get_applyLockUnlock() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4998))(this);
	}
	template <typename T = bool> T get_hasApplyLockUnlock() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4A20))(this);
	}
	template <typename T = void> T AddApplyLockUnlock(bool newUnlock) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4A2C))(this, newUnlock);
	}
	template <typename T = void> T ReplaceApplyLockUnlock(bool newUnlock) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4B34))(this, newUnlock);
	}
	template <typename T = void> T RemoveApplyLockUnlock() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4C3C))(this);
	}
	template <typename T = ApplyMoveComponent*> T get_applyMove() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4C48))(this);
	}
	template <typename T = bool> T get_hasApplyMove() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4CD0))(this);
	}
	template <typename T = void> T AddApplyMove(float newMaxDistance, bool newToTargetPosition) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC4CDC))(this, newMaxDistance, newToTargetPosition);
	}
	template <typename T = void> T ReplaceApplyMove(float newMaxDistance, bool newToTargetPosition) {
		return ((T (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC4DF4))(this, newMaxDistance, newToTargetPosition);
	}
	template <typename T = void> T RemoveApplyMove() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4F0C))(this);
	}
	template <typename T = ApplyOnActorEffectComponent*> T get_applyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4F18))(this);
	}
	template <typename T = bool> T get_hasApplyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC4FA0))(this);
	}
	template <typename T = void> T AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC4FAC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC5148))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC52E4))(this);
	}
	template <typename T = ApplyOnAnotherTargetEffectComponent*> T get_applyOnAnotherTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC52F0))(this);
	}
	template <typename T = bool> T get_hasApplyOnAnotherTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5378))(this);
	}
	template <typename T = void> T AddApplyOnAnotherTargetEffect(Il2CppString* newTag, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC5384))(this, newTag, newActorCondition, newTargetCondition, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnAnotherTargetEffect(Il2CppString* newTag, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC5568))(this, newTag, newActorCondition, newTargetCondition, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnAnotherTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC574C))(this);
	}
	template <typename T = ApplyOnTargetEffectComponent*> T get_applyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5758))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC57E0))(this);
	}
	template <typename T = void> T AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC57EC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC5988))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5B24))(this);
	}
	template <typename T = ApplyOpenWindowComponent*> T get_applyOpenWindow() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5B30))(this);
	}
	template <typename T = bool> T get_hasApplyOpenWindow() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5BB8))(this);
	}
	template <typename T = void> T AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC5BC4))(this, newName, newArg);
	}
	template <typename T = void> T ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC5CEC))(this, newName, newArg);
	}
	template <typename T = void> T RemoveApplyOpenWindow() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5E14))(this);
	}
	template <typename T = ApplyPickupComponent*> T get_applyPickup() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5E20))(this);
	}
	template <typename T = bool> T get_hasApplyPickup() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC5EA8))(this);
	}
	template <typename T = void> T AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(ActionEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1DC5EB4))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(ActionEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1DC5FE4))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T RemoveApplyPickup() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6114))(this);
	}
	template <typename T = ApplyPlaceComponent*> T get_applyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6120))(this);
	}
	template <typename T = bool> T get_hasApplyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC61A8))(this);
	}
	template <typename T = void> T AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC61B4))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC62EC))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6424))(this);
	}
	template <typename T = ApplyPlayerKillComponent*> T get_applyPlayerKill() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6430))(this);
	}
	template <typename T = bool> T get_hasApplyPlayerKill() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC64B8))(this);
	}
	template <typename T = void> T AddApplyPlayerKill(bool newValue) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC64C4))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyPlayerKill(bool newValue) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC65CC))(this, newValue);
	}
	template <typename T = void> T RemoveApplyPlayerKill() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC66D4))(this);
	}
	template <typename T = ApplyPortalComponent*> T get_applyPortal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC66E0))(this);
	}
	template <typename T = bool> T get_hasApplyPortal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6768))(this);
	}
	template <typename T = void> T AddApplyPortal(Il2CppString* newName, Il2CppString* newExitTag, Il2CppString* newToLocationName, bool newWithoutParent, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1DC6774))(this, newName, newExitTag, newToLocationName, newWithoutParent, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplaceApplyPortal(Il2CppString* newName, Il2CppString* newExitTag, Il2CppString* newToLocationName, bool newWithoutParent, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1DC68E4))(this, newName, newExitTag, newToLocationName, newWithoutParent, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemoveApplyPortal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6A54))(this);
	}
	template <typename T = bool> T get_isApplyResurrect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6A60))(this);
	}
	template <typename T = void> T set_isApplyResurrect(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6A6C))(this, value);
	}
	template <typename T = bool> T get_isApplySelectClass() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6B84))(this);
	}
	template <typename T = void> T set_isApplySelectClass(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6B90))(this, value);
	}
	template <typename T = bool> T get_isApplySelectMount() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6CA8))(this);
	}
	template <typename T = void> T set_isApplySelectMount(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6CB4))(this, value);
	}
	template <typename T = bool> T get_isApplySelectPet() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6DCC))(this);
	}
	template <typename T = void> T set_isApplySelectPet(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6DD8))(this, value);
	}
	template <typename T = ApplySendInventoryComponent*> T get_applySendInventory() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6EF0))(this);
	}
	template <typename T = bool> T get_hasApplySendInventory() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC6F78))(this);
	}
	template <typename T = void> T AddApplySendInventory(ActionType* newActionType) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DC6F84))(this, newActionType);
	}
	template <typename T = void> T ReplaceApplySendInventory(ActionType* newActionType) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DC7088))(this, newActionType);
	}
	template <typename T = void> T RemoveApplySendInventory() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC718C))(this);
	}
	template <typename T = bool> T get_isApplySneak() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7198))(this);
	}
	template <typename T = void> T set_isApplySneak(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC71A4))(this, value);
	}
	template <typename T = ApplyStartDialogueComponent*> T get_applyStartDialogue() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC72BC))(this);
	}
	template <typename T = bool> T get_hasApplyStartDialogue() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7344))(this);
	}
	template <typename T = void> T AddApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC7350))(this, newName);
	}
	template <typename T = void> T ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC7464))(this, newName);
	}
	template <typename T = void> T RemoveApplyStartDialogue() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7578))(this);
	}
	template <typename T = ApplySwitchActiveComponent*> T get_applySwitchActive() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7584))(this);
	}
	template <typename T = bool> T get_hasApplySwitchActive() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC760C))(this);
	}
	template <typename T = void> T AddApplySwitchActive(Il2CppString* newTag, Nullable1bool>* newSetActive, Il2CppString* newOnEffectName, Il2CppString* newOffEffectName) {
		return ((T (*)(ActionEntity*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7618))(this, newTag, newSetActive, newOnEffectName, newOffEffectName);
	}
	template <typename T = void> T ReplaceApplySwitchActive(Il2CppString* newTag, Nullable1bool>* newSetActive, Il2CppString* newOnEffectName, Il2CppString* newOffEffectName) {
		return ((T (*)(ActionEntity*, Il2CppString*, Nullable1bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7764))(this, newTag, newSetActive, newOnEffectName, newOffEffectName);
	}
	template <typename T = void> T RemoveApplySwitchActive() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC78B0))(this);
	}
	template <typename T = ApplyTargetMagicComponent*> T get_applyTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC78BC))(this);
	}
	template <typename T = bool> T get_hasApplyTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7944))(this);
	}
	template <typename T = void> T AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC7950))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DC7AB8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7C20))(this);
	}
	template <typename T = bool> T get_isApplyTargetNeutralize() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7C2C))(this);
	}
	template <typename T = void> T set_isApplyTargetNeutralize(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC7C38))(this, value);
	}
	template <typename T = ApplyTaxComponent*> T get_applyTax() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7D50))(this);
	}
	template <typename T = bool> T get_hasApplyTax() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC7DD8))(this);
	}
	template <typename T = void> T AddApplyTax(Il2CppString* newSuccessEffect, Il2CppString* newFailedDialogue) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7DE4))(this, newSuccessEffect, newFailedDialogue);
	}
	template <typename T = void> T ReplaceApplyTax(Il2CppString* newSuccessEffect, Il2CppString* newFailedDialogue) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7F0C))(this, newSuccessEffect, newFailedDialogue);
	}
	template <typename T = void> T RemoveApplyTax() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8034))(this);
	}
	template <typename T = ApplyTeleportComponent*> T get_applyTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8040))(this);
	}
	template <typename T = bool> T get_hasApplyTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC80C8))(this);
	}
	template <typename T = void> T AddApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x1DC80D4))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T ReplaceApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x1DC8228))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T RemoveApplyTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC837C))(this);
	}
	template <typename T = bool> T get_isBlockMoveInventory() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF350))(this);
	}
	template <typename T = void> T set_isBlockMoveInventory(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8388))(this, value);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF734))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF728))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC84A0))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC85B4))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC86C8))(this);
	}
	template <typename T = BreakActionEffectComponent*> T get_breakActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC86D4))(this);
	}
	template <typename T = bool> T get_hasBreakActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC875C))(this);
	}
	template <typename T = void> T AddBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC8768))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DC8904))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveBreakActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8AA0))(this);
	}
	template <typename T = CompleteOnApplyComponent*> T get_completeOnApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8AAC))(this);
	}
	template <typename T = bool> T get_hasCompleteOnApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8B34))(this);
	}
	template <typename T = void> T AddCompleteOnApply(bool newStopAction) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8B40))(this, newStopAction);
	}
	template <typename T = void> T ReplaceCompleteOnApply(bool newStopAction) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8C48))(this, newStopAction);
	}
	template <typename T = void> T RemoveCompleteOnApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8D50))(this);
	}
	template <typename T = bool> T get_isCompleted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8D5C))(this);
	}
	template <typename T = void> T set_isCompleted(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8D68))(this, value);
	}
	template <typename T = DamageInterruptedComponent*> T get_damageInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8E80))(this);
	}
	template <typename T = bool> T get_hasDamageInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC8F08))(this);
	}
	template <typename T = void> T AddDamageInterrupted(bool newAllways, float newThreshold, Il2CppString* newMagic) {
		return ((T (*)(ActionEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1DC8F14))(this, newAllways, newThreshold, newMagic);
	}
	template <typename T = void> T ReplaceDamageInterrupted(bool newAllways, float newThreshold, Il2CppString* newMagic) {
		return ((T (*)(ActionEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1DC9044))(this, newAllways, newThreshold, newMagic);
	}
	template <typename T = void> T RemoveDamageInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9174))(this);
	}
	template <typename T = DamageStatComponent*> T get_damageStat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9180))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9208))(this);
	}
	template <typename T = void> T AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(ActionEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1DC9214))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(ActionEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1DC93D8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC959C))(this);
	}
	template <typename T = DelayComponent*> T get_delay() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC95A8))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9630))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC963C))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9740))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9844))(this);
	}
	template <typename T = DismountCooldownComponent*> T get_dismountCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9850))(this);
	}
	template <typename T = bool> T get_hasDismountCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC98D8))(this);
	}
	template <typename T = void> T AddDismountCooldown(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC98E4))(this, newValue);
	}
	template <typename T = void> T ReplaceDismountCooldown(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC99E8))(this, newValue);
	}
	template <typename T = void> T RemoveDismountCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9AEC))(this);
	}
	template <typename T = DurationCoefComponent*> T get_durationCoef() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFB1C))(this);
	}
	template <typename T = bool> T get_hasDurationCoef() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFB10))(this);
	}
	template <typename T = void> T AddDurationCoef(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9AF8))(this, newValue);
	}
	template <typename T = void> T ReplaceDurationCoef(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9BFC))(this, newValue);
	}
	template <typename T = void> T RemoveDurationCoef() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D00))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D0C))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D94))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9DA0))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9EA4))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9FA8))(this);
	}
	template <typename T = FailedApplyOnActorEffectComponent*> T get_failedApplyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DC9FB4))(this);
	}
	template <typename T = bool> T get_hasFailedApplyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA03C))(this);
	}
	template <typename T = void> T AddFailedApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCA048))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceFailedApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCA1E4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveFailedApplyOnActorEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA380))(this);
	}
	template <typename T = FailedApplyOnTargetEffectComponent*> T get_failedApplyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA38C))(this);
	}
	template <typename T = bool> T get_hasFailedApplyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA414))(this);
	}
	template <typename T = void> T AddFailedApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCA420))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceFailedApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCA5BC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveFailedApplyOnTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA758))(this);
	}
	template <typename T = HealPredictionComponent*> T get_healPrediction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA764))(this);
	}
	template <typename T = bool> T get_hasHealPrediction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCA7EC))(this);
	}
	template <typename T = void> T AddHealPrediction(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCA7F8))(this, newValue);
	}
	template <typename T = void> T ReplaceHealPrediction(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCA8FC))(this, newValue);
	}
	template <typename T = void> T RemoveHealPrediction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA00))(this);
	}
	template <typename T = HitActionEffectComponent*> T get_hitActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA0C))(this);
	}
	template <typename T = bool> T get_hasHitActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA94))(this);
	}
	template <typename T = void> T AddHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCAAA0))(this, newNames);
	}
	template <typename T = void> T ReplaceHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCABB4))(this, newNames);
	}
	template <typename T = void> T RemoveHitActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCACC8))(this);
	}
	template <typename T = HitActorCooldownComponent*> T get_hitActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCACD4))(this);
	}
	template <typename T = bool> T get_hasHitActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAD5C))(this);
	}
	template <typename T = void> T AddHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(ActionEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCAD68))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T ReplaceHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(ActionEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCAEA4))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T RemoveHitActorCooldown() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAFE0))(this);
	}
	template <typename T = HitActorMagicComponent*> T get_hitActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCAFEC))(this);
	}
	template <typename T = bool> T get_hasHitActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB074))(this);
	}
	template <typename T = void> T AddHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCB080))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCB1E8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB350))(this);
	}
	template <typename T = HitTargetMagicComponent*> T get_hitTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB35C))(this);
	}
	template <typename T = bool> T get_hasHitTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB3E4))(this);
	}
	template <typename T = void> T AddHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCB3F0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCB558))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB6C0))(this);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB6CC))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCB754))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DCB760))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DCB8B8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBA10))(this);
	}
	template <typename T = IdComponent*> T get_id() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF618))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBA1C))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCBA28))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCBB2C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBC30))(this);
	}
	template <typename T = IgnoreArmorPercentComponent*> T get_ignoreArmorPercent() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBC3C))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBCC4))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ActionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1DCBCD0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ActionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1DCBDE4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBEF8))(this);
	}
	template <typename T = IgnoreControlsComponent*> T get_ignoreControls() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBF04))(this);
	}
	template <typename T = bool> T get_hasIgnoreControls() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCBF8C))(this);
	}
	template <typename T = void> T AddIgnoreControls(Il2CppString* newActiveCondition, bool newStunned, bool newRooted, bool newSilence, bool newImpotent) {
		return ((T (*)(ActionEntity*, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x1DCBF98))(this, newActiveCondition, newStunned, newRooted, newSilence, newImpotent);
	}
	template <typename T = void> T ReplaceIgnoreControls(Il2CppString* newActiveCondition, bool newStunned, bool newRooted, bool newSilence, bool newImpotent) {
		return ((T (*)(ActionEntity*, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x1DCC0EC))(this, newActiveCondition, newStunned, newRooted, newSilence, newImpotent);
	}
	template <typename T = void> T RemoveIgnoreControls() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC240))(this);
	}
	template <typename T = bool> T get_isIgnoreItemParams() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC24C))(this);
	}
	template <typename T = void> T set_isIgnoreItemParams(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCC258))(this, value);
	}
	template <typename T = bool> T get_isInfinity() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC370))(this);
	}
	template <typename T = void> T set_isInfinity(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCC37C))(this, value);
	}
	template <typename T = InputInterruptedComponent*> T get_inputInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC494))(this);
	}
	template <typename T = bool> T get_hasInputInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC51C))(this);
	}
	template <typename T = void> T AddInputInterrupted(float newAfterDelay, bool newAfterApply, bool newOnlyByOtherAction) {
		return ((T (*)(ActionEntity*, float, bool, bool))(Il2CppBase() + 0x1DCC528))(this, newAfterDelay, newAfterApply, newOnlyByOtherAction);
	}
	template <typename T = void> T ReplaceInputInterrupted(float newAfterDelay, bool newAfterApply, bool newOnlyByOtherAction) {
		return ((T (*)(ActionEntity*, float, bool, bool))(Il2CppBase() + 0x1DCC64C))(this, newAfterDelay, newAfterApply, newOnlyByOtherAction);
	}
	template <typename T = void> T RemoveInputInterrupted() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC770))(this);
	}
	template <typename T = InventoryItemComponent*> T get_inventoryItem() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF96C))(this);
	}
	template <typename T = bool> T get_hasInventoryItem() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF960))(this);
	}
	template <typename T = void> T AddInventoryItem(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCC77C))(this, newId);
	}
	template <typename T = void> T ReplaceInventoryItem(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCC880))(this, newId);
	}
	template <typename T = void> T RemoveInventoryItem() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC984))(this);
	}
	template <typename T = ItemComponent*> T get_item() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF8D8))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCC990))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DCC99C))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DCCAB0))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCBC4))(this);
	}
	template <typename T = LifeStealComponent*> T get_lifeSteal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCBD0))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCC58))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ActionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1DCCC64))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, ModifierGroup* newGroup) {
		return ((T (*)(ActionEntity*, float, ModifierGroup*))(Il2CppBase() + 0x1DCCD78))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCE8C))(this);
	}
	template <typename T = LocalIdComponent*> T get_localId() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCE98))(this);
	}
	template <typename T = bool> T get_hasLocalId() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCCF20))(this);
	}
	template <typename T = void> T AddLocalId(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCCF2C))(this, newId);
	}
	template <typename T = void> T ReplaceLocalId(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCD030))(this, newId);
	}
	template <typename T = void> T RemoveLocalId() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD134))(this);
	}
	template <typename T = LocalRotationComponent*> T get_localRotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD140))(this);
	}
	template <typename T = bool> T get_hasLocalRotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD1C8))(this);
	}
	template <typename T = void> T AddLocalRotation(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCD1D4))(this, newValue);
	}
	template <typename T = void> T ReplaceLocalRotation(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCD2D8))(this, newValue);
	}
	template <typename T = void> T RemoveLocalRotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD3DC))(this);
	}
	template <typename T = MoveToTargetComponent*> T get_moveToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD3E8))(this);
	}
	template <typename T = bool> T get_hasMoveToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD470))(this);
	}
	template <typename T = void> T AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(ActionEntity*, int32_t, float))(Il2CppBase() + 0x1DCD47C))(this, newId, newMinDistance);
	}
	template <typename T = void> T ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(ActionEntity*, int32_t, float))(Il2CppBase() + 0x1DCD590))(this, newId, newMinDistance);
	}
	template <typename T = void> T RemoveMoveToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD6A4))(this);
	}
	template <typename T = NextMustAppliedActionComponent*> T get_nextMustAppliedAction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD6B0))(this);
	}
	template <typename T = bool> T get_hasNextMustAppliedAction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD738))(this);
	}
	template <typename T = void> T AddNextMustAppliedAction(int32_t newTargetActor, Il2CppString* newItemName, int32_t newInventoryItemId, float newAngle) {
		return ((T (*)(ActionEntity*, int32_t, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1DCD744))(this, newTargetActor, newItemName, newInventoryItemId, newAngle);
	}
	template <typename T = void> T ReplaceNextMustAppliedAction(int32_t newTargetActor, Il2CppString* newItemName, int32_t newInventoryItemId, float newAngle) {
		return ((T (*)(ActionEntity*, int32_t, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1DCD880))(this, newTargetActor, newItemName, newInventoryItemId, newAngle);
	}
	template <typename T = void> T RemoveNextMustAppliedAction() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD9BC))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCD9C8))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDA50))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCDA5C))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCDB70))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDC84))(this);
	}
	template <typename T = OnActionApplyComponent*> T get_onActionApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDC90))(this);
	}
	template <typename T = bool> T get_hasOnActionApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDD18))(this);
	}
	template <typename T = void> T AddOnActionApply(bool newBreakSneak) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCDD24))(this, newBreakSneak);
	}
	template <typename T = void> T ReplaceOnActionApply(bool newBreakSneak) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCDE2C))(this, newBreakSneak);
	}
	template <typename T = void> T RemoveOnActionApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDF34))(this);
	}
	template <typename T = OnActionStartComponent*> T get_onActionStart() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDF40))(this);
	}
	template <typename T = bool> T get_hasOnActionStart() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCDFC8))(this);
	}
	template <typename T = void> T AddOnActionStart(bool newBreakSneak, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(ActionEntity*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCDFD4))(this, newBreakSneak, newMagics);
	}
	template <typename T = void> T ReplaceOnActionStart(bool newBreakSneak, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(ActionEntity*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DCE0F4))(this, newBreakSneak, newMagics);
	}
	template <typename T = void> T RemoveOnActionStart() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE214))(this);
	}
	template <typename T = bool> T get_isOnApply() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBEC3C))(this);
	}
	template <typename T = void> T set_isOnApply(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCE220))(this, value);
	}
	template <typename T = OnCompletedActorMagicComponent*> T get_onCompletedActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE338))(this);
	}
	template <typename T = bool> T get_hasOnCompletedActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE3C0))(this);
	}
	template <typename T = void> T AddOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCE3CC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCE534))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveOnCompletedActorMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE69C))(this);
	}
	template <typename T = OnCompletedApplyPlaceComponent*> T get_onCompletedApplyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE6A8))(this);
	}
	template <typename T = bool> T get_hasOnCompletedApplyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE730))(this);
	}
	template <typename T = void> T AddOnCompletedApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCE73C))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceOnCompletedApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCE874))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveOnCompletedApplyPlace() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE9AC))(this);
	}
	template <typename T = OnCompletedTargetEffectComponent*> T get_onCompletedTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCE9B8))(this);
	}
	template <typename T = bool> T get_hasOnCompletedTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCEA40))(this);
	}
	template <typename T = void> T AddOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCEA4C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DCEBE8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveOnCompletedTargetEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCED84))(this);
	}
	template <typename T = OnCompletedTargetMagicComponent*> T get_onCompletedTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCED90))(this);
	}
	template <typename T = bool> T get_hasOnCompletedTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCEE18))(this);
	}
	template <typename T = void> T AddOnCompletedTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCEE24))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceOnCompletedTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(ActionEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1DCEF8C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveOnCompletedTargetMagic() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF0F4))(this);
	}
	template <typename T = OnCompletedUseComponent*> T get_onCompletedUse() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF100))(this);
	}
	template <typename T = bool> T get_hasOnCompletedUse() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF188))(this);
	}
	template <typename T = void> T AddOnCompletedUse(ActionType* newActionType, Il2CppString* newItemName, bool newUseWeapon, float newMaxTargetPlayerHealthCoef) {
		return ((T (*)(ActionEntity*, ActionType*, Il2CppString*, bool, float))(Il2CppBase() + 0x1DCF194))(this, newActionType, newItemName, newUseWeapon, newMaxTargetPlayerHealthCoef);
	}
	template <typename T = void> T ReplaceOnCompletedUse(ActionType* newActionType, Il2CppString* newItemName, bool newUseWeapon, float newMaxTargetPlayerHealthCoef) {
		return ((T (*)(ActionEntity*, ActionType*, Il2CppString*, bool, float))(Il2CppBase() + 0x1DCF2D4))(this, newActionType, newItemName, newUseWeapon, newMaxTargetPlayerHealthCoef);
	}
	template <typename T = void> T RemoveOnCompletedUse() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF414))(this);
	}
	template <typename T = bool> T get_isOnDeath() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBEC48))(this);
	}
	template <typename T = void> T set_isOnDeath(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DBF0E0))(this, value);
	}
	template <typename T = bool> T get_isOnStart() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF420))(this);
	}
	template <typename T = void> T set_isOnStart(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCF42C))(this, value);
	}
	template <typename T = PeriodComponent*> T get_period() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF544))(this);
	}
	template <typename T = bool> T get_hasPeriod() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF5CC))(this);
	}
	template <typename T = void> T AddPeriod(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCF5D8))(this, newValue);
	}
	template <typename T = void> T ReplacePeriod(float newValue) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCF6DC))(this, newValue);
	}
	template <typename T = void> T RemovePeriod() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF7E0))(this);
	}
	template <typename T = ProgressQuestComponent*> T get_progressQuest() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF7EC))(this);
	}
	template <typename T = bool> T get_hasProgressQuest() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCF874))(this);
	}
	template <typename T = void> T AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DCF880))(this, newName, newTag, newValue);
	}
	template <typename T = void> T ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DCF9B8))(this, newName, newTag, newValue);
	}
	template <typename T = void> T RemoveProgressQuest() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFAF0))(this);
	}
	template <typename T = RotateToComponent*> T get_rotateTo() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFAFC))(this);
	}
	template <typename T = bool> T get_hasRotateTo() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFB84))(this);
	}
	template <typename T = void> T AddRotateTo(float newAngle) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCFB90))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotateTo(float newAngle) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCFC94))(this, newAngle);
	}
	template <typename T = void> T RemoveRotateTo() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFD98))(this);
	}
	template <typename T = RotateToTargetComponent*> T get_rotateToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFDA4))(this);
	}
	template <typename T = bool> T get_hasRotateToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DCFE2C))(this);
	}
	template <typename T = void> T AddRotateToTarget(RotateToTargetType* newValue) {
		return ((T (*)(ActionEntity*, RotateToTargetType*))(Il2CppBase() + 0x1DCFE38))(this, newValue);
	}
	template <typename T = void> T ReplaceRotateToTarget(RotateToTargetType* newValue) {
		return ((T (*)(ActionEntity*, RotateToTargetType*))(Il2CppBase() + 0x1DCFF3C))(this, newValue);
	}
	template <typename T = void> T RemoveRotateToTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0040))(this);
	}
	template <typename T = RotationComponent*> T get_rotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFA00))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF9F4))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD004C))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD0150))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0254))(this);
	}
	template <typename T = SequenceIndexComponent*> T get_sequenceIndex() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFC44))(this);
	}
	template <typename T = bool> T get_hasSequenceIndex() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFC38))(this);
	}
	template <typename T = void> T AddSequenceIndex(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD0260))(this, newValue);
	}
	template <typename T = void> T ReplaceSequenceIndex(int32_t newValue) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD0364))(this, newValue);
	}
	template <typename T = void> T RemoveSequenceIndex() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0468))(this);
	}
	template <typename T = SequenceRandomComponent*> T get_sequenceRandom() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0474))(this);
	}
	template <typename T = bool> T get_hasSequenceRandom() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD04FC))(this);
	}
	template <typename T = void> T AddSequenceRandom(float newCooldown) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD0508))(this, newCooldown);
	}
	template <typename T = void> T ReplaceSequenceRandom(float newCooldown) {
		return ((T (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD060C))(this, newCooldown);
	}
	template <typename T = void> T RemoveSequenceRandom() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0710))(this);
	}
	template <typename T = StartActionEffectComponent*> T get_startActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD071C))(this);
	}
	template <typename T = bool> T get_hasStartActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD07A4))(this);
	}
	template <typename T = void> T AddStartActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DD07B0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceStartActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DD094C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveStartActionEffect() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0AE8))(this);
	}
	template <typename T = StartTeleportComponent*> T get_startTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0AF4))(this);
	}
	template <typename T = bool> T get_hasStartTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0B7C))(this);
	}
	template <typename T = void> T AddStartTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x1DD0B88))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T ReplaceStartTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource* newDirection, float newOffset, bool newIgnoreWall) {
		return ((T (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource*, float, bool))(Il2CppBase() + 0x1DD0CDC))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename T = void> T RemoveStartTeleport() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0E30))(this);
	}
	template <typename T = StartTimeComponent*> T get_startTime() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFA88))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD0E3C))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(ActionEntity*, int64_t))(Il2CppBase() + 0x1DD0E48))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(ActionEntity*, int64_t))(Il2CppBase() + 0x1DD0F4C))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1050))(this);
	}
	template <typename T = bool> T get_isStopMove() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD105C))(this);
	}
	template <typename T = void> T set_isStopMove(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DD1068))(this, value);
	}
	template <typename T = SuccessActionTypeComponent*> T get_successActionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1180))(this);
	}
	template <typename T = bool> T get_hasSuccessActionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1208))(this);
	}
	template <typename T = void> T AddSuccessActionType(ActionType* newValue) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DD1214))(this, newValue);
	}
	template <typename T = void> T ReplaceSuccessActionType(ActionType* newValue) {
		return ((T (*)(ActionEntity*, ActionType*))(Il2CppBase() + 0x1DD1318))(this, newValue);
	}
	template <typename T = void> T RemoveSuccessActionType() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD141C))(this);
	}
	template <typename T = bool> T get_isSuccess() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1428))(this);
	}
	template <typename T = void> T set_isSuccess(bool value) {
		return ((T (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DD1434))(this, value);
	}
	template <typename T = TagsComponent*> T get_tags() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD154C))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD15D4))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DD15E0))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(ActionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DD16F4))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1808))(this);
	}
	template <typename T = TargetComponent*> T get_target() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF850))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBF844))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD1814))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD1918))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1A1C))(this);
	}
	template <typename T = TargetPositionComponent*> T get_targetPosition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFBB0))(this);
	}
	template <typename T = bool> T get_hasTargetPosition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DBFBA4))(this);
	}
	template <typename T = void> T AddTargetPosition(float newX, float newY) {
		return ((T (*)(ActionEntity*, float, float))(Il2CppBase() + 0x1DD1A28))(this, newX, newY);
	}
	template <typename T = void> T ReplaceTargetPosition(float newX, float newY) {
		return ((T (*)(ActionEntity*, float, float))(Il2CppBase() + 0x1DD1B30))(this, newX, newY);
	}
	template <typename T = void> T RemoveTargetPosition() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1C38))(this);
	}
	template <typename T = TargetsComponent*> T get_targets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1C44))(this);
	}
	template <typename T = bool> T get_hasTargets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1CCC))(this);
	}
	template <typename T = void> T AddTargets(HashSet1int32_t>* newIds) {
		return ((T (*)(ActionEntity*, HashSet1int32_t>*))(Il2CppBase() + 0x1DD1CD8))(this, newIds);
	}
	template <typename T = void> T ReplaceTargets(HashSet1int32_t>* newIds) {
		return ((T (*)(ActionEntity*, HashSet1int32_t>*))(Il2CppBase() + 0x1DD1DEC))(this, newIds);
	}
	template <typename T = void> T RemoveTargets() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F00))(this);
	}
	template <typename T = ToolTipComponent*> T get_toolTip() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F0C))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F94))(this);
	}
	template <typename T = void> T AddToolTip(ToolTipValue* newValue) {
		return ((T (*)(ActionEntity*, ToolTipValue*))(Il2CppBase() + 0x1DD1FA0))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(ToolTipValue* newValue) {
		return ((T (*)(ActionEntity*, ToolTipValue*))(Il2CppBase() + 0x1DD20B4))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(ActionEntity*))(Il2CppBase() + 0x1DD21C8))(this);
	}

};

