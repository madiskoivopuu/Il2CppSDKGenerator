#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionEntity"));
	}

	template <typename R = ApplyActivateStatueComponent*> static R& applyActivateStatueComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ApplyInPvPComponent*> static R& applyInPvPComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ApplyResurrectComponent*> static R& applyResurrectComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = ApplySelectClassComponent*> static R& applySelectClassComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ApplySelectMountComponent*> static R& applySelectMountComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = ApplySelectPetComponent*> static R& applySelectPetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = ApplySneakComponent*> static R& applySneakComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = ApplyTargetNeutralizeComponent*> static R& applyTargetNeutralizeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = BlockMoveInventoryComponent*> static R& blockMoveInventoryComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = CompletedComponent*> static R& completedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = IgnoreItemParamsComponent*> static R& ignoreItemParamsComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = InfinityComponent*> static R& infinityComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = OnApplyComponent*> static R& onApplyComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = OnDeathComponent*> static R& onDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = OnStartComponent*> static R& onStartComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = StopMoveComponent*> static R& stopMoveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = SuccessComponent*> static R& successComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC053C))(this);
	}
	template <typename R = AOEComponent*> R get_aOE() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC05B0))(this);
	}
	template <typename R = bool> R get_hasAOE() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0638))(this);
	}
	template <typename R = void> R AddAOE(TargetsSelectorType newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(ActionEntity*, TargetsSelectorType, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x1DC0644))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R ReplaceAOE(TargetsSelectorType newType, Il2CppString* newUniqueName, Il2CppString* newBlueprint, Il2CppString* newTag, float newAngle, Il2CppArray<TargetsSelectorCone*>* newCones, float newLocalRotation, float newDistance, float newMinDistance, Il2CppString* newTargetCondition, RelationshipTypes newRelationship, bool newOnlyPlayers, bool newIgnoreActor, bool newIgnoreCenter, bool newLookAtCenter, bool newWallTrace, int32_t newMaxCount, bool newRandom, float newWidth, float newHeight, float newOffset, bool newMovable, bool newNearest) {
		return ((R (*)(ActionEntity*, TargetsSelectorType, Il2CppString*, Il2CppString*, Il2CppString*, float, Il2CppArray<TargetsSelectorCone*>*, float, float, float, Il2CppString*, RelationshipTypes, bool, bool, bool, bool, bool, int32_t, bool, float, float, float, bool, bool))(Il2CppBase() + 0x1DC08C0))(this, newType, newUniqueName, newBlueprint, newTag, newAngle, newCones, newLocalRotation, newDistance, newMinDistance, newTargetCondition, newRelationship, newOnlyPlayers, newIgnoreActor, newIgnoreCenter, newLookAtCenter, newWallTrace, newMaxCount, newRandom, newWidth, newHeight, newOffset, newMovable, newNearest);
	}
	template <typename R = void> R RemoveAOE() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0B3C))(this);
	}
	template <typename R = ActionTypeComponent*> R get_actionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF6A0))(this);
	}
	template <typename R = bool> R get_hasActionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0B48))(this);
	}
	template <typename R = void> R AddActionType(ActionType newValue) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DC0B54))(this, newValue);
	}
	template <typename R = void> R ReplaceActionType(ActionType newValue) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DC0C58))(this, newValue);
	}
	template <typename R = void> R RemoveActionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0D5C))(this);
	}
	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0D68))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC0DF0))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1DC0DFC))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1DC0F4C))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC109C))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF7BC))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC10A8))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC10B4))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC11B8))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC12BC))(this);
	}
	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC12C8))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1350))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1DC135C))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1DC1504))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC16AC))(this);
	}
	template <typename R = ApplyActionEffectComponent*> R get_applyActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC16B8))(this);
	}
	template <typename R = bool> R get_hasApplyActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1740))(this);
	}
	template <typename R = void> R AddApplyActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC174C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC18E8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1A84))(this);
	}
	template <typename R = bool> R get_isApplyActivateStatue() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1A90))(this);
	}
	template <typename R = void> R set_isApplyActivateStatue(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC1A9C))(this, value);
	}
	template <typename R = ApplyActorCooldownComponent*> R get_applyActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1BB4))(this);
	}
	template <typename R = bool> R get_hasApplyActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1C3C))(this);
	}
	template <typename R = void> R AddApplyActorCooldown(Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(ActionEntity*, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DC1C48))(this, newValues, newTags);
	}
	template <typename R = void> R ReplaceApplyActorCooldown(Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(ActionEntity*, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DC1D70))(this, newValues, newTags);
	}
	template <typename R = void> R RemoveApplyActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1E98))(this);
	}
	template <typename R = ApplyActorMagicComponent*> R get_applyActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1EA4))(this);
	}
	template <typename R = bool> R get_hasApplyActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC1F2C))(this);
	}
	template <typename R = void> R AddApplyActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC1F38))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC20A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2208))(this);
	}
	template <typename R = ApplyChargeComponent*> R get_applyCharge() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2214))(this);
	}
	template <typename R = bool> R get_hasApplyCharge() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC229C))(this);
	}
	template <typename R = void> R AddApplyCharge(float newSpeed, float newInteractRadius, Nullable1<float>* newMaxDuration) {
		return ((R (*)(ActionEntity*, float, float, Nullable1<float>*))(Il2CppBase() + 0x1DC22A8))(this, newSpeed, newInteractRadius, newMaxDuration);
	}
	template <typename R = void> R ReplaceApplyCharge(float newSpeed, float newInteractRadius, Nullable1<float>* newMaxDuration) {
		return ((R (*)(ActionEntity*, float, float, Nullable1<float>*))(Il2CppBase() + 0x1DC23C0))(this, newSpeed, newInteractRadius, newMaxDuration);
	}
	template <typename R = void> R RemoveApplyCharge() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC24D8))(this);
	}
	template <typename R = ApplyChatComponent*> R get_applyChat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC24E4))(this);
	}
	template <typename R = bool> R get_hasApplyChat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC256C))(this);
	}
	template <typename R = void> R AddApplyChat(Il2CppString* newChannelName, Il2CppString* newMessageFormat, Il2CppArray<Il2CppString*>* newParams) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DC2578))(this, newChannelName, newMessageFormat, newParams);
	}
	template <typename R = void> R ReplaceApplyChat(Il2CppString* newChannelName, Il2CppString* newMessageFormat, Il2CppArray<Il2CppString*>* newParams) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DC26BC))(this, newChannelName, newMessageFormat, newParams);
	}
	template <typename R = void> R RemoveApplyChat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2800))(this);
	}
	template <typename R = ApplyConsumeComponent*> R get_applyConsume() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC280C))(this);
	}
	template <typename R = bool> R get_hasApplyConsume() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2894))(this);
	}
	template <typename R = void> R AddApplyConsume(Il2CppArray<Resource>* newValues) {
		return ((R (*)(ActionEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1DC28A0))(this, newValues);
	}
	template <typename R = void> R ReplaceApplyConsume(Il2CppArray<Resource>* newValues) {
		return ((R (*)(ActionEntity*, Il2CppArray<Resource>*))(Il2CppBase() + 0x1DC29B4))(this, newValues);
	}
	template <typename R = void> R RemoveApplyConsume() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2AC8))(this);
	}
	template <typename R = ApplyDamageComponent*> R get_applyDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2AD4))(this);
	}
	template <typename R = bool> R get_hasApplyDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2B5C))(this);
	}
	template <typename R = void> R AddApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType newDepend, float newMaxValue) {
		return ((R (*)(ActionEntity*, float, Il2CppString*, float, bool, DamageDependType, float))(Il2CppBase() + 0x1DC2B68))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R ReplaceApplyDamage(float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType newDepend, float newMaxValue) {
		return ((R (*)(ActionEntity*, float, Il2CppString*, float, bool, DamageDependType, float))(Il2CppBase() + 0x1DC2CC0))(this, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R RemoveApplyDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2E18))(this);
	}
	template <typename R = ApplyDestroyChildrenComponent*> R get_applyDestroyChildren() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2E24))(this);
	}
	template <typename R = bool> R get_hasApplyDestroyChildren() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC2EAC))(this);
	}
	template <typename R = void> R AddApplyDestroyChildren(Il2CppString* newTargetCondition, float newDelay) {
		return ((R (*)(ActionEntity*, Il2CppString*, float))(Il2CppBase() + 0x1DC2EB8))(this, newTargetCondition, newDelay);
	}
	template <typename R = void> R ReplaceApplyDestroyChildren(Il2CppString* newTargetCondition, float newDelay) {
		return ((R (*)(ActionEntity*, Il2CppString*, float))(Il2CppBase() + 0x1DC2FDC))(this, newTargetCondition, newDelay);
	}
	template <typename R = void> R RemoveApplyDestroyChildren() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3100))(this);
	}
	template <typename R = ApplyDestroyComponent*> R get_applyDestroy() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC310C))(this);
	}
	template <typename R = bool> R get_hasApplyDestroy() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3194))(this);
	}
	template <typename R = void> R AddApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC31A0))(this, newDelay, newInstantly);
	}
	template <typename R = void> R ReplaceApplyDestroy(float newDelay, bool newInstantly) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC32B8))(this, newDelay, newInstantly);
	}
	template <typename R = void> R RemoveApplyDestroy() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC33D0))(this);
	}
	template <typename R = ApplyDestroyTargetsComponent*> R get_applyDestroyTargets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC33DC))(this);
	}
	template <typename R = bool> R get_hasApplyDestroyTargets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3464))(this);
	}
	template <typename R = void> R AddApplyDestroyTargets(float newDelay, bool newSave) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC3470))(this, newDelay, newSave);
	}
	template <typename R = void> R ReplaceApplyDestroyTargets(float newDelay, bool newSave) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC3588))(this, newDelay, newSave);
	}
	template <typename R = void> R RemoveApplyDestroyTargets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC36A0))(this);
	}
	template <typename R = ApplyDurabilityDamageComponent*> R get_applyDurabilityDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC36AC))(this);
	}
	template <typename R = bool> R get_hasApplyDurabilityDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3734))(this);
	}
	template <typename R = void> R AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(ActionEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1DC3740))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(ActionEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1DC3874))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R RemoveApplyDurabilityDamage() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC39A8))(this);
	}
	template <typename R = ApplyFishingComponent*> R get_applyFishing() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC39B4))(this);
	}
	template <typename R = bool> R get_hasApplyFishing() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3A3C))(this);
	}
	template <typename R = void> R AddApplyFishing(Parameters* newParam, StateParameters newState) {
		return ((R (*)(ActionEntity*, Parameters*, StateParameters))(Il2CppBase() + 0x1DC3A48))(this, newParam, newState);
	}
	template <typename R = void> R ReplaceApplyFishing(Parameters* newParam, StateParameters newState) {
		return ((R (*)(ActionEntity*, Parameters*, StateParameters))(Il2CppBase() + 0x1DC3B6C))(this, newParam, newState);
	}
	template <typename R = void> R RemoveApplyFishing() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3C90))(this);
	}
	template <typename R = ApplyHealComponent*> R get_applyHeal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3C9C))(this);
	}
	template <typename R = bool> R get_hasApplyHeal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3D24))(this);
	}
	template <typename R = void> R AddApplyHeal(float newDelay, HealParams newParams) {
		return ((R (*)(ActionEntity*, float, HealParams))(Il2CppBase() + 0x1DC3D30))(this, newDelay, newParams);
	}
	template <typename R = void> R ReplaceApplyHeal(float newDelay, HealParams newParams) {
		return ((R (*)(ActionEntity*, float, HealParams))(Il2CppBase() + 0x1DC3E48))(this, newDelay, newParams);
	}
	template <typename R = void> R RemoveApplyHeal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3F60))(this);
	}
	template <typename R = ApplyHookComponent*> R get_applyHook() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3F6C))(this);
	}
	template <typename R = bool> R get_hasApplyHook() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC3FF4))(this);
	}
	template <typename R = void> R AddApplyHook(Parameters* newParam, StateParameters newState) {
		return ((R (*)(ActionEntity*, Parameters*, StateParameters))(Il2CppBase() + 0x1DC4000))(this, newParam, newState);
	}
	template <typename R = void> R ReplaceApplyHook(Parameters* newParam, StateParameters newState) {
		return ((R (*)(ActionEntity*, Parameters*, StateParameters))(Il2CppBase() + 0x1DC4128))(this, newParam, newState);
	}
	template <typename R = void> R RemoveApplyHook() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4250))(this);
	}
	template <typename R = bool> R get_isApplyInPvP() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC425C))(this);
	}
	template <typename R = void> R set_isApplyInPvP(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4268))(this, value);
	}
	template <typename R = ApplyLevelCapUpComponent*> R get_applyLevelCapUp() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4380))(this);
	}
	template <typename R = bool> R get_hasApplyLevelCapUp() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4408))(this);
	}
	template <typename R = void> R AddApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC4414))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyLevelCapUp(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DC4518))(this, newValue);
	}
	template <typename R = void> R RemoveApplyLevelCapUp() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC461C))(this);
	}
	template <typename R = ApplyLocationMagicComponent*> R get_applyLocationMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4628))(this);
	}
	template <typename R = bool> R get_hasApplyLocationMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC46B0))(this);
	}
	template <typename R = void> R AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC46BC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC4824))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyLocationMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC498C))(this);
	}
	template <typename R = ApplyLockUnlockComponent*> R get_applyLockUnlock() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4998))(this);
	}
	template <typename R = bool> R get_hasApplyLockUnlock() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4A20))(this);
	}
	template <typename R = void> R AddApplyLockUnlock(bool newUnlock) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4A2C))(this, newUnlock);
	}
	template <typename R = void> R ReplaceApplyLockUnlock(bool newUnlock) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC4B34))(this, newUnlock);
	}
	template <typename R = void> R RemoveApplyLockUnlock() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4C3C))(this);
	}
	template <typename R = ApplyMoveComponent*> R get_applyMove() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4C48))(this);
	}
	template <typename R = bool> R get_hasApplyMove() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4CD0))(this);
	}
	template <typename R = void> R AddApplyMove(float newMaxDistance, bool newToTargetPosition) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC4CDC))(this, newMaxDistance, newToTargetPosition);
	}
	template <typename R = void> R ReplaceApplyMove(float newMaxDistance, bool newToTargetPosition) {
		return ((R (*)(ActionEntity*, float, bool))(Il2CppBase() + 0x1DC4DF4))(this, newMaxDistance, newToTargetPosition);
	}
	template <typename R = void> R RemoveApplyMove() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4F0C))(this);
	}
	template <typename R = ApplyOnActorEffectComponent*> R get_applyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4F18))(this);
	}
	template <typename R = bool> R get_hasApplyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC4FA0))(this);
	}
	template <typename R = void> R AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC4FAC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC5148))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC52E4))(this);
	}
	template <typename R = ApplyOnAnotherTargetEffectComponent*> R get_applyOnAnotherTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC52F0))(this);
	}
	template <typename R = bool> R get_hasApplyOnAnotherTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5378))(this);
	}
	template <typename R = void> R AddApplyOnAnotherTargetEffect(Il2CppString* newTag, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC5384))(this, newTag, newActorCondition, newTargetCondition, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnAnotherTargetEffect(Il2CppString* newTag, Il2CppString* newActorCondition, Il2CppString* newTargetCondition, Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC5568))(this, newTag, newActorCondition, newTargetCondition, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnAnotherTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC574C))(this);
	}
	template <typename R = ApplyOnTargetEffectComponent*> R get_applyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5758))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC57E0))(this);
	}
	template <typename R = void> R AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC57EC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC5988))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5B24))(this);
	}
	template <typename R = ApplyOpenWindowComponent*> R get_applyOpenWindow() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5B30))(this);
	}
	template <typename R = bool> R get_hasApplyOpenWindow() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5BB8))(this);
	}
	template <typename R = void> R AddApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC5BC4))(this, newName, newArg);
	}
	template <typename R = void> R ReplaceApplyOpenWindow(Il2CppString* newName, Il2CppString* newArg) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC5CEC))(this, newName, newArg);
	}
	template <typename R = void> R RemoveApplyOpenWindow() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5E14))(this);
	}
	template <typename R = ApplyPickupComponent*> R get_applyPickup() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5E20))(this);
	}
	template <typename R = bool> R get_hasApplyPickup() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC5EA8))(this);
	}
	template <typename R = void> R AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(ActionEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1DC5EB4))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(ActionEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1DC5FE4))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R RemoveApplyPickup() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6114))(this);
	}
	template <typename R = ApplyPlaceComponent*> R get_applyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6120))(this);
	}
	template <typename R = bool> R get_hasApplyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC61A8))(this);
	}
	template <typename R = void> R AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1DC61B4))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1DC62EC))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6424))(this);
	}
	template <typename R = ApplyPlayerKillComponent*> R get_applyPlayerKill() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6430))(this);
	}
	template <typename R = bool> R get_hasApplyPlayerKill() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC64B8))(this);
	}
	template <typename R = void> R AddApplyPlayerKill(bool newValue) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC64C4))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyPlayerKill(bool newValue) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC65CC))(this, newValue);
	}
	template <typename R = void> R RemoveApplyPlayerKill() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC66D4))(this);
	}
	template <typename R = ApplyPortalComponent*> R get_applyPortal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC66E0))(this);
	}
	template <typename R = bool> R get_hasApplyPortal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6768))(this);
	}
	template <typename R = void> R AddApplyPortal(Il2CppString* newName, Il2CppString* newExitTag, Il2CppString* newToLocationName, bool newWithoutParent, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1DC6774))(this, newName, newExitTag, newToLocationName, newWithoutParent, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplaceApplyPortal(Il2CppString* newName, Il2CppString* newExitTag, Il2CppString* newToLocationName, bool newWithoutParent, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1DC68E4))(this, newName, newExitTag, newToLocationName, newWithoutParent, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemoveApplyPortal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6A54))(this);
	}
	template <typename R = bool> R get_isApplyResurrect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6A60))(this);
	}
	template <typename R = void> R set_isApplyResurrect(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6A6C))(this, value);
	}
	template <typename R = bool> R get_isApplySelectClass() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6B84))(this);
	}
	template <typename R = void> R set_isApplySelectClass(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6B90))(this, value);
	}
	template <typename R = bool> R get_isApplySelectMount() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6CA8))(this);
	}
	template <typename R = void> R set_isApplySelectMount(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6CB4))(this, value);
	}
	template <typename R = bool> R get_isApplySelectPet() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6DCC))(this);
	}
	template <typename R = void> R set_isApplySelectPet(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC6DD8))(this, value);
	}
	template <typename R = ApplySendInventoryComponent*> R get_applySendInventory() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6EF0))(this);
	}
	template <typename R = bool> R get_hasApplySendInventory() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC6F78))(this);
	}
	template <typename R = void> R AddApplySendInventory(ActionType newActionType) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DC6F84))(this, newActionType);
	}
	template <typename R = void> R ReplaceApplySendInventory(ActionType newActionType) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DC7088))(this, newActionType);
	}
	template <typename R = void> R RemoveApplySendInventory() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC718C))(this);
	}
	template <typename R = bool> R get_isApplySneak() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7198))(this);
	}
	template <typename R = void> R set_isApplySneak(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC71A4))(this, value);
	}
	template <typename R = ApplyStartDialogueComponent*> R get_applyStartDialogue() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC72BC))(this);
	}
	template <typename R = bool> R get_hasApplyStartDialogue() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7344))(this);
	}
	template <typename R = void> R AddApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC7350))(this, newName);
	}
	template <typename R = void> R ReplaceApplyStartDialogue(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC7464))(this, newName);
	}
	template <typename R = void> R RemoveApplyStartDialogue() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7578))(this);
	}
	template <typename R = ApplySwitchActiveComponent*> R get_applySwitchActive() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7584))(this);
	}
	template <typename R = bool> R get_hasApplySwitchActive() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC760C))(this);
	}
	template <typename R = void> R AddApplySwitchActive(Il2CppString* newTag, Nullable1<bool>* newSetActive, Il2CppString* newOnEffectName, Il2CppString* newOffEffectName) {
		return ((R (*)(ActionEntity*, Il2CppString*, Nullable1<bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7618))(this, newTag, newSetActive, newOnEffectName, newOffEffectName);
	}
	template <typename R = void> R ReplaceApplySwitchActive(Il2CppString* newTag, Nullable1<bool>* newSetActive, Il2CppString* newOnEffectName, Il2CppString* newOffEffectName) {
		return ((R (*)(ActionEntity*, Il2CppString*, Nullable1<bool>*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7764))(this, newTag, newSetActive, newOnEffectName, newOffEffectName);
	}
	template <typename R = void> R RemoveApplySwitchActive() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC78B0))(this);
	}
	template <typename R = ApplyTargetMagicComponent*> R get_applyTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC78BC))(this);
	}
	template <typename R = bool> R get_hasApplyTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7944))(this);
	}
	template <typename R = void> R AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC7950))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DC7AB8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7C20))(this);
	}
	template <typename R = bool> R get_isApplyTargetNeutralize() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7C2C))(this);
	}
	template <typename R = void> R set_isApplyTargetNeutralize(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC7C38))(this, value);
	}
	template <typename R = ApplyTaxComponent*> R get_applyTax() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7D50))(this);
	}
	template <typename R = bool> R get_hasApplyTax() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC7DD8))(this);
	}
	template <typename R = void> R AddApplyTax(Il2CppString* newSuccessEffect, Il2CppString* newFailedDialogue) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7DE4))(this, newSuccessEffect, newFailedDialogue);
	}
	template <typename R = void> R ReplaceApplyTax(Il2CppString* newSuccessEffect, Il2CppString* newFailedDialogue) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DC7F0C))(this, newSuccessEffect, newFailedDialogue);
	}
	template <typename R = void> R RemoveApplyTax() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8034))(this);
	}
	template <typename R = ApplyTeleportComponent*> R get_applyTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8040))(this);
	}
	template <typename R = bool> R get_hasApplyTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC80C8))(this);
	}
	template <typename R = void> R AddApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x1DC80D4))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R ReplaceApplyTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x1DC8228))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R RemoveApplyTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC837C))(this);
	}
	template <typename R = bool> R get_isBlockMoveInventory() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF350))(this);
	}
	template <typename R = void> R set_isBlockMoveInventory(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8388))(this, value);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF734))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF728))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC84A0))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DC85B4))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC86C8))(this);
	}
	template <typename R = BreakActionEffectComponent*> R get_breakActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC86D4))(this);
	}
	template <typename R = bool> R get_hasBreakActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC875C))(this);
	}
	template <typename R = void> R AddBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC8768))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceBreakActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DC8904))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveBreakActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8AA0))(this);
	}
	template <typename R = CompleteOnApplyComponent*> R get_completeOnApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8AAC))(this);
	}
	template <typename R = bool> R get_hasCompleteOnApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8B34))(this);
	}
	template <typename R = void> R AddCompleteOnApply(bool newStopAction) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8B40))(this, newStopAction);
	}
	template <typename R = void> R ReplaceCompleteOnApply(bool newStopAction) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8C48))(this, newStopAction);
	}
	template <typename R = void> R RemoveCompleteOnApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8D50))(this);
	}
	template <typename R = bool> R get_isCompleted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8D5C))(this);
	}
	template <typename R = void> R set_isCompleted(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DC8D68))(this, value);
	}
	template <typename R = DamageInterruptedComponent*> R get_damageInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8E80))(this);
	}
	template <typename R = bool> R get_hasDamageInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC8F08))(this);
	}
	template <typename R = void> R AddDamageInterrupted(bool newAllways, float newThreshold, Il2CppString* newMagic) {
		return ((R (*)(ActionEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1DC8F14))(this, newAllways, newThreshold, newMagic);
	}
	template <typename R = void> R ReplaceDamageInterrupted(bool newAllways, float newThreshold, Il2CppString* newMagic) {
		return ((R (*)(ActionEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1DC9044))(this, newAllways, newThreshold, newMagic);
	}
	template <typename R = void> R RemoveDamageInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9174))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9180))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9208))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(ActionEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1DC9214))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(ActionEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1DC93D8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC959C))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC95A8))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9630))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC963C))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9740))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9844))(this);
	}
	template <typename R = DismountCooldownComponent*> R get_dismountCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9850))(this);
	}
	template <typename R = bool> R get_hasDismountCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC98D8))(this);
	}
	template <typename R = void> R AddDismountCooldown(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC98E4))(this, newValue);
	}
	template <typename R = void> R ReplaceDismountCooldown(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC99E8))(this, newValue);
	}
	template <typename R = void> R RemoveDismountCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9AEC))(this);
	}
	template <typename R = DurationCoefComponent*> R get_durationCoef() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFB1C))(this);
	}
	template <typename R = bool> R get_hasDurationCoef() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFB10))(this);
	}
	template <typename R = void> R AddDurationCoef(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9AF8))(this, newValue);
	}
	template <typename R = void> R ReplaceDurationCoef(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9BFC))(this, newValue);
	}
	template <typename R = void> R RemoveDurationCoef() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D00))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D0C))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9D94))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9DA0))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DC9EA4))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9FA8))(this);
	}
	template <typename R = FailedApplyOnActorEffectComponent*> R get_failedApplyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DC9FB4))(this);
	}
	template <typename R = bool> R get_hasFailedApplyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA03C))(this);
	}
	template <typename R = void> R AddFailedApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCA048))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceFailedApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCA1E4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveFailedApplyOnActorEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA380))(this);
	}
	template <typename R = FailedApplyOnTargetEffectComponent*> R get_failedApplyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA38C))(this);
	}
	template <typename R = bool> R get_hasFailedApplyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA414))(this);
	}
	template <typename R = void> R AddFailedApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCA420))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceFailedApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCA5BC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveFailedApplyOnTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA758))(this);
	}
	template <typename R = HealPredictionComponent*> R get_healPrediction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA764))(this);
	}
	template <typename R = bool> R get_hasHealPrediction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCA7EC))(this);
	}
	template <typename R = void> R AddHealPrediction(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCA7F8))(this, newValue);
	}
	template <typename R = void> R ReplaceHealPrediction(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCA8FC))(this, newValue);
	}
	template <typename R = void> R RemoveHealPrediction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA00))(this);
	}
	template <typename R = HitActionEffectComponent*> R get_hitActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA0C))(this);
	}
	template <typename R = bool> R get_hasHitActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAA94))(this);
	}
	template <typename R = void> R AddHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCAAA0))(this, newNames);
	}
	template <typename R = void> R ReplaceHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCABB4))(this, newNames);
	}
	template <typename R = void> R RemoveHitActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCACC8))(this);
	}
	template <typename R = HitActorCooldownComponent*> R get_hitActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCACD4))(this);
	}
	template <typename R = bool> R get_hasHitActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAD5C))(this);
	}
	template <typename R = void> R AddHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(ActionEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCAD68))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R ReplaceHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(ActionEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCAEA4))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R RemoveHitActorCooldown() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAFE0))(this);
	}
	template <typename R = HitActorMagicComponent*> R get_hitActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCAFEC))(this);
	}
	template <typename R = bool> R get_hasHitActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB074))(this);
	}
	template <typename R = void> R AddHitActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCB080))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCB1E8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB350))(this);
	}
	template <typename R = HitTargetMagicComponent*> R get_hitTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB35C))(this);
	}
	template <typename R = bool> R get_hasHitTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB3E4))(this);
	}
	template <typename R = void> R AddHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCB3F0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCB558))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB6C0))(this);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB6CC))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCB754))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DCB760))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DCB8B8))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBA10))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF618))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBA1C))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCBA28))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCBB2C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBC30))(this);
	}
	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBC3C))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBCC4))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ActionEntity*, float, ModifierGroup))(Il2CppBase() + 0x1DCBCD0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ActionEntity*, float, ModifierGroup))(Il2CppBase() + 0x1DCBDE4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBEF8))(this);
	}
	template <typename R = IgnoreControlsComponent*> R get_ignoreControls() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBF04))(this);
	}
	template <typename R = bool> R get_hasIgnoreControls() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCBF8C))(this);
	}
	template <typename R = void> R AddIgnoreControls(Il2CppString* newActiveCondition, bool newStunned, bool newRooted, bool newSilence, bool newImpotent) {
		return ((R (*)(ActionEntity*, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x1DCBF98))(this, newActiveCondition, newStunned, newRooted, newSilence, newImpotent);
	}
	template <typename R = void> R ReplaceIgnoreControls(Il2CppString* newActiveCondition, bool newStunned, bool newRooted, bool newSilence, bool newImpotent) {
		return ((R (*)(ActionEntity*, Il2CppString*, bool, bool, bool, bool))(Il2CppBase() + 0x1DCC0EC))(this, newActiveCondition, newStunned, newRooted, newSilence, newImpotent);
	}
	template <typename R = void> R RemoveIgnoreControls() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC240))(this);
	}
	template <typename R = bool> R get_isIgnoreItemParams() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC24C))(this);
	}
	template <typename R = void> R set_isIgnoreItemParams(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCC258))(this, value);
	}
	template <typename R = bool> R get_isInfinity() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC370))(this);
	}
	template <typename R = void> R set_isInfinity(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCC37C))(this, value);
	}
	template <typename R = InputInterruptedComponent*> R get_inputInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC494))(this);
	}
	template <typename R = bool> R get_hasInputInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC51C))(this);
	}
	template <typename R = void> R AddInputInterrupted(float newAfterDelay, bool newAfterApply, bool newOnlyByOtherAction) {
		return ((R (*)(ActionEntity*, float, bool, bool))(Il2CppBase() + 0x1DCC528))(this, newAfterDelay, newAfterApply, newOnlyByOtherAction);
	}
	template <typename R = void> R ReplaceInputInterrupted(float newAfterDelay, bool newAfterApply, bool newOnlyByOtherAction) {
		return ((R (*)(ActionEntity*, float, bool, bool))(Il2CppBase() + 0x1DCC64C))(this, newAfterDelay, newAfterApply, newOnlyByOtherAction);
	}
	template <typename R = void> R RemoveInputInterrupted() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC770))(this);
	}
	template <typename R = InventoryItemComponent*> R get_inventoryItem() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF96C))(this);
	}
	template <typename R = bool> R get_hasInventoryItem() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF960))(this);
	}
	template <typename R = void> R AddInventoryItem(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCC77C))(this, newId);
	}
	template <typename R = void> R ReplaceInventoryItem(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCC880))(this, newId);
	}
	template <typename R = void> R RemoveInventoryItem() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC984))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF8D8))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCC990))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DCC99C))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(ActionEntity*, Il2CppString*))(Il2CppBase() + 0x1DCCAB0))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCBC4))(this);
	}
	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCBD0))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCC58))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ActionEntity*, float, ModifierGroup))(Il2CppBase() + 0x1DCCC64))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(ActionEntity*, float, ModifierGroup))(Il2CppBase() + 0x1DCCD78))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCE8C))(this);
	}
	template <typename R = LocalIdComponent*> R get_localId() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCE98))(this);
	}
	template <typename R = bool> R get_hasLocalId() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCCF20))(this);
	}
	template <typename R = void> R AddLocalId(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCCF2C))(this, newId);
	}
	template <typename R = void> R ReplaceLocalId(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DCD030))(this, newId);
	}
	template <typename R = void> R RemoveLocalId() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD134))(this);
	}
	template <typename R = LocalRotationComponent*> R get_localRotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD140))(this);
	}
	template <typename R = bool> R get_hasLocalRotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD1C8))(this);
	}
	template <typename R = void> R AddLocalRotation(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCD1D4))(this, newValue);
	}
	template <typename R = void> R ReplaceLocalRotation(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCD2D8))(this, newValue);
	}
	template <typename R = void> R RemoveLocalRotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD3DC))(this);
	}
	template <typename R = MoveToTargetComponent*> R get_moveToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD3E8))(this);
	}
	template <typename R = bool> R get_hasMoveToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD470))(this);
	}
	template <typename R = void> R AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(ActionEntity*, int32_t, float))(Il2CppBase() + 0x1DCD47C))(this, newId, newMinDistance);
	}
	template <typename R = void> R ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(ActionEntity*, int32_t, float))(Il2CppBase() + 0x1DCD590))(this, newId, newMinDistance);
	}
	template <typename R = void> R RemoveMoveToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD6A4))(this);
	}
	template <typename R = NextMustAppliedActionComponent*> R get_nextMustAppliedAction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD6B0))(this);
	}
	template <typename R = bool> R get_hasNextMustAppliedAction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD738))(this);
	}
	template <typename R = void> R AddNextMustAppliedAction(int32_t newTargetActor, Il2CppString* newItemName, int32_t newInventoryItemId, float newAngle) {
		return ((R (*)(ActionEntity*, int32_t, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1DCD744))(this, newTargetActor, newItemName, newInventoryItemId, newAngle);
	}
	template <typename R = void> R ReplaceNextMustAppliedAction(int32_t newTargetActor, Il2CppString* newItemName, int32_t newInventoryItemId, float newAngle) {
		return ((R (*)(ActionEntity*, int32_t, Il2CppString*, int32_t, float))(Il2CppBase() + 0x1DCD880))(this, newTargetActor, newItemName, newInventoryItemId, newAngle);
	}
	template <typename R = void> R RemoveNextMustAppliedAction() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD9BC))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCD9C8))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDA50))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCDA5C))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCDB70))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDC84))(this);
	}
	template <typename R = OnActionApplyComponent*> R get_onActionApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDC90))(this);
	}
	template <typename R = bool> R get_hasOnActionApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDD18))(this);
	}
	template <typename R = void> R AddOnActionApply(bool newBreakSneak) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCDD24))(this, newBreakSneak);
	}
	template <typename R = void> R ReplaceOnActionApply(bool newBreakSneak) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCDE2C))(this, newBreakSneak);
	}
	template <typename R = void> R RemoveOnActionApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDF34))(this);
	}
	template <typename R = OnActionStartComponent*> R get_onActionStart() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDF40))(this);
	}
	template <typename R = bool> R get_hasOnActionStart() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCDFC8))(this);
	}
	template <typename R = void> R AddOnActionStart(bool newBreakSneak, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(ActionEntity*, bool, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCDFD4))(this, newBreakSneak, newMagics);
	}
	template <typename R = void> R ReplaceOnActionStart(bool newBreakSneak, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(ActionEntity*, bool, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DCE0F4))(this, newBreakSneak, newMagics);
	}
	template <typename R = void> R RemoveOnActionStart() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE214))(this);
	}
	template <typename R = bool> R get_isOnApply() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBEC3C))(this);
	}
	template <typename R = void> R set_isOnApply(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCE220))(this, value);
	}
	template <typename R = OnCompletedActorMagicComponent*> R get_onCompletedActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE338))(this);
	}
	template <typename R = bool> R get_hasOnCompletedActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE3C0))(this);
	}
	template <typename R = void> R AddOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCE3CC))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceOnCompletedActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCE534))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveOnCompletedActorMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE69C))(this);
	}
	template <typename R = OnCompletedApplyPlaceComponent*> R get_onCompletedApplyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE6A8))(this);
	}
	template <typename R = bool> R get_hasOnCompletedApplyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE730))(this);
	}
	template <typename R = void> R AddOnCompletedApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1DCE73C))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceOnCompletedApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1DCE874))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveOnCompletedApplyPlace() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE9AC))(this);
	}
	template <typename R = OnCompletedTargetEffectComponent*> R get_onCompletedTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCE9B8))(this);
	}
	template <typename R = bool> R get_hasOnCompletedTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCEA40))(this);
	}
	template <typename R = void> R AddOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCEA4C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceOnCompletedTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DCEBE8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveOnCompletedTargetEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCED84))(this);
	}
	template <typename R = OnCompletedTargetMagicComponent*> R get_onCompletedTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCED90))(this);
	}
	template <typename R = bool> R get_hasOnCompletedTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCEE18))(this);
	}
	template <typename R = void> R AddOnCompletedTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCEE24))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceOnCompletedTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(ActionEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1DCEF8C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveOnCompletedTargetMagic() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF0F4))(this);
	}
	template <typename R = OnCompletedUseComponent*> R get_onCompletedUse() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF100))(this);
	}
	template <typename R = bool> R get_hasOnCompletedUse() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF188))(this);
	}
	template <typename R = void> R AddOnCompletedUse(ActionType newActionType, Il2CppString* newItemName, bool newUseWeapon, float newMaxTargetPlayerHealthCoef) {
		return ((R (*)(ActionEntity*, ActionType, Il2CppString*, bool, float))(Il2CppBase() + 0x1DCF194))(this, newActionType, newItemName, newUseWeapon, newMaxTargetPlayerHealthCoef);
	}
	template <typename R = void> R ReplaceOnCompletedUse(ActionType newActionType, Il2CppString* newItemName, bool newUseWeapon, float newMaxTargetPlayerHealthCoef) {
		return ((R (*)(ActionEntity*, ActionType, Il2CppString*, bool, float))(Il2CppBase() + 0x1DCF2D4))(this, newActionType, newItemName, newUseWeapon, newMaxTargetPlayerHealthCoef);
	}
	template <typename R = void> R RemoveOnCompletedUse() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF414))(this);
	}
	template <typename R = bool> R get_isOnDeath() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBEC48))(this);
	}
	template <typename R = void> R set_isOnDeath(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DBF0E0))(this, value);
	}
	template <typename R = bool> R get_isOnStart() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF420))(this);
	}
	template <typename R = void> R set_isOnStart(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DCF42C))(this, value);
	}
	template <typename R = PeriodComponent*> R get_period() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF544))(this);
	}
	template <typename R = bool> R get_hasPeriod() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF5CC))(this);
	}
	template <typename R = void> R AddPeriod(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCF5D8))(this, newValue);
	}
	template <typename R = void> R ReplacePeriod(float newValue) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCF6DC))(this, newValue);
	}
	template <typename R = void> R RemovePeriod() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF7E0))(this);
	}
	template <typename R = ProgressQuestComponent*> R get_progressQuest() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF7EC))(this);
	}
	template <typename R = bool> R get_hasProgressQuest() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCF874))(this);
	}
	template <typename R = void> R AddProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DCF880))(this, newName, newTag, newValue);
	}
	template <typename R = void> R ReplaceProgressQuest(Il2CppString* newName, Il2CppString* newTag, int32_t newValue) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DCF9B8))(this, newName, newTag, newValue);
	}
	template <typename R = void> R RemoveProgressQuest() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFAF0))(this);
	}
	template <typename R = RotateToComponent*> R get_rotateTo() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFAFC))(this);
	}
	template <typename R = bool> R get_hasRotateTo() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFB84))(this);
	}
	template <typename R = void> R AddRotateTo(float newAngle) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCFB90))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotateTo(float newAngle) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DCFC94))(this, newAngle);
	}
	template <typename R = void> R RemoveRotateTo() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFD98))(this);
	}
	template <typename R = RotateToTargetComponent*> R get_rotateToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFDA4))(this);
	}
	template <typename R = bool> R get_hasRotateToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DCFE2C))(this);
	}
	template <typename R = void> R AddRotateToTarget(RotateToTargetType newValue) {
		return ((R (*)(ActionEntity*, RotateToTargetType))(Il2CppBase() + 0x1DCFE38))(this, newValue);
	}
	template <typename R = void> R ReplaceRotateToTarget(RotateToTargetType newValue) {
		return ((R (*)(ActionEntity*, RotateToTargetType))(Il2CppBase() + 0x1DCFF3C))(this, newValue);
	}
	template <typename R = void> R RemoveRotateToTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0040))(this);
	}
	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFA00))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF9F4))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD004C))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD0150))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0254))(this);
	}
	template <typename R = SequenceIndexComponent*> R get_sequenceIndex() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFC44))(this);
	}
	template <typename R = bool> R get_hasSequenceIndex() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFC38))(this);
	}
	template <typename R = void> R AddSequenceIndex(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD0260))(this, newValue);
	}
	template <typename R = void> R ReplaceSequenceIndex(int32_t newValue) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD0364))(this, newValue);
	}
	template <typename R = void> R RemoveSequenceIndex() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0468))(this);
	}
	template <typename R = SequenceRandomComponent*> R get_sequenceRandom() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0474))(this);
	}
	template <typename R = bool> R get_hasSequenceRandom() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD04FC))(this);
	}
	template <typename R = void> R AddSequenceRandom(float newCooldown) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD0508))(this, newCooldown);
	}
	template <typename R = void> R ReplaceSequenceRandom(float newCooldown) {
		return ((R (*)(ActionEntity*, float))(Il2CppBase() + 0x1DD060C))(this, newCooldown);
	}
	template <typename R = void> R RemoveSequenceRandom() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0710))(this);
	}
	template <typename R = StartActionEffectComponent*> R get_startActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD071C))(this);
	}
	template <typename R = bool> R get_hasStartActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD07A4))(this);
	}
	template <typename R = void> R AddStartActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DD07B0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceStartActionEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(ActionEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1DD094C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveStartActionEffect() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0AE8))(this);
	}
	template <typename R = StartTeleportComponent*> R get_startTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0AF4))(this);
	}
	template <typename R = bool> R get_hasStartTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0B7C))(this);
	}
	template <typename R = void> R AddStartTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x1DD0B88))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R ReplaceStartTeleport(Il2CppString* newTargetName, TargetsSelector* newSelector, DirectionSource newDirection, float newOffset, bool newIgnoreWall) {
		return ((R (*)(ActionEntity*, Il2CppString*, TargetsSelector*, DirectionSource, float, bool))(Il2CppBase() + 0x1DD0CDC))(this, newTargetName, newSelector, newDirection, newOffset, newIgnoreWall);
	}
	template <typename R = void> R RemoveStartTeleport() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0E30))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFA88))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD0E3C))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(ActionEntity*, int64_t))(Il2CppBase() + 0x1DD0E48))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(ActionEntity*, int64_t))(Il2CppBase() + 0x1DD0F4C))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1050))(this);
	}
	template <typename R = bool> R get_isStopMove() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD105C))(this);
	}
	template <typename R = void> R set_isStopMove(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DD1068))(this, value);
	}
	template <typename R = SuccessActionTypeComponent*> R get_successActionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1180))(this);
	}
	template <typename R = bool> R get_hasSuccessActionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1208))(this);
	}
	template <typename R = void> R AddSuccessActionType(ActionType newValue) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DD1214))(this, newValue);
	}
	template <typename R = void> R ReplaceSuccessActionType(ActionType newValue) {
		return ((R (*)(ActionEntity*, ActionType))(Il2CppBase() + 0x1DD1318))(this, newValue);
	}
	template <typename R = void> R RemoveSuccessActionType() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD141C))(this);
	}
	template <typename R = bool> R get_isSuccess() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1428))(this);
	}
	template <typename R = void> R set_isSuccess(bool value) {
		return ((R (*)(ActionEntity*, bool))(Il2CppBase() + 0x1DD1434))(this, value);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD154C))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD15D4))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DD15E0))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(ActionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DD16F4))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1808))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF850))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBF844))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD1814))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(ActionEntity*, int32_t))(Il2CppBase() + 0x1DD1918))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1A1C))(this);
	}
	template <typename R = TargetPositionComponent*> R get_targetPosition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFBB0))(this);
	}
	template <typename R = bool> R get_hasTargetPosition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DBFBA4))(this);
	}
	template <typename R = void> R AddTargetPosition(float newX, float newY) {
		return ((R (*)(ActionEntity*, float, float))(Il2CppBase() + 0x1DD1A28))(this, newX, newY);
	}
	template <typename R = void> R ReplaceTargetPosition(float newX, float newY) {
		return ((R (*)(ActionEntity*, float, float))(Il2CppBase() + 0x1DD1B30))(this, newX, newY);
	}
	template <typename R = void> R RemoveTargetPosition() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1C38))(this);
	}
	template <typename R = TargetsComponent*> R get_targets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1C44))(this);
	}
	template <typename R = bool> R get_hasTargets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1CCC))(this);
	}
	template <typename R = void> R AddTargets(HashSet1<int32_t>* newIds) {
		return ((R (*)(ActionEntity*, HashSet1<int32_t>*))(Il2CppBase() + 0x1DD1CD8))(this, newIds);
	}
	template <typename R = void> R ReplaceTargets(HashSet1<int32_t>* newIds) {
		return ((R (*)(ActionEntity*, HashSet1<int32_t>*))(Il2CppBase() + 0x1DD1DEC))(this, newIds);
	}
	template <typename R = void> R RemoveTargets() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F00))(this);
	}
	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F0C))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD1F94))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(ActionEntity*, ToolTipValue*))(Il2CppBase() + 0x1DD1FA0))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(ActionEntity*, ToolTipValue*))(Il2CppBase() + 0x1DD20B4))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(ActionEntity*))(Il2CppBase() + 0x1DD21C8))(this);
	}

};

