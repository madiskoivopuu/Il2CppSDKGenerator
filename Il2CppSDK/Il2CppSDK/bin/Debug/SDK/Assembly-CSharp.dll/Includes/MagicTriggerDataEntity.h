#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataEntity"));
	}

	template <typename R = DestroyParentOnEndComponent*> static R& destroyParentOnEndComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = NeedFilterTargetsComponent*> static R& needFilterTargetsComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = UseSourceItem*> static R& useSourceItemComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3688C))(this);
	}
	template <typename R = ActionConditionComponent*> R get_actionCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A369C4))(this);
	}
	template <typename R = bool> R get_hasActionCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36A4C))(this);
	}
	template <typename R = void> R AddActionCondition(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x1A36A58))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R ReplaceActionCondition(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x1A36BBC))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R RemoveActionCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36D20))(this);
	}
	template <typename R = ActiveConditionComponent*> R get_activeCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36D2C))(this);
	}
	template <typename R = bool> R get_hasActiveCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36DB4))(this);
	}
	template <typename R = void> R AddActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1A36DC0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x1A36F10))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveActiveCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37060))(this);
	}
	template <typename R = ActiveEffectComponent*> R get_activeEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3706C))(this);
	}
	template <typename R = bool> R get_hasActiveEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A370F4))(this);
	}
	template <typename R = void> R AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A37100))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A3729C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveActiveEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37438))(this);
	}
	template <typename R = ActorTriggerConditionsComponent*> R get_actorTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A363C8))(this);
	}
	template <typename R = bool> R get_hasActorTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36280))(this);
	}
	template <typename R = void> R AddActorTriggerConditions(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Nullable1float>* newHpCoefLess, Nullable1float>* newHpCoefMore) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x1A3628C))(this, newName, newNames, newHpCoefLess, newHpCoefMore);
	}
	template <typename R = void> R ReplaceActorTriggerConditions(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Nullable1float>* newHpCoefLess, Nullable1float>* newHpCoefMore) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x1A37444))(this, newName, newNames, newHpCoefLess, newHpCoefMore);
	}
	template <typename R = void> R RemoveActorTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37580))(this);
	}
	template <typename R = ApplyActorCooldownComponent*> R get_applyActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3758C))(this);
	}
	template <typename R = bool> R get_hasApplyActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37614))(this);
	}
	template <typename R = void> R AddApplyActorCooldown(Il2CppArray<NameFloat*>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<NameFloat*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A37620))(this, newValues, newTags);
	}
	template <typename R = void> R ReplaceApplyActorCooldown(Il2CppArray<NameFloat*>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<NameFloat*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A37748))(this, newValues, newTags);
	}
	template <typename R = void> R RemoveApplyActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37870))(this);
	}
	template <typename R = ApplyActorMagicComponent*> R get_applyActorMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3787C))(this);
	}
	template <typename R = bool> R get_hasApplyActorMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37904))(this);
	}
	template <typename R = void> R AddApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A37910))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyActorMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A37A78))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyActorMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37BE0))(this);
	}
	template <typename R = ApplyDurabilityDamageComponent*> R get_applyDurabilityDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37BEC))(this);
	}
	template <typename R = bool> R get_hasApplyDurabilityDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37C74))(this);
	}
	template <typename R = void> R AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1A37C80))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1A37DB4))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename R = void> R RemoveApplyDurabilityDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37EE8))(this);
	}
	template <typename R = ApplyLocationMagicComponent*> R get_applyLocationMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37EF4))(this);
	}
	template <typename R = bool> R get_hasApplyLocationMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37F7C))(this);
	}
	template <typename R = void> R AddApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A37F88))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyLocationMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A380F0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyLocationMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38258))(this);
	}
	template <typename R = ApplyOnActorEffectComponent*> R get_applyOnActorEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38264))(this);
	}
	template <typename R = bool> R get_hasApplyOnActorEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A382EC))(this);
	}
	template <typename R = void> R AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A382F8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A38494))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnActorEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38630))(this);
	}
	template <typename R = ApplyOnTargetEffectComponent*> R get_applyOnTargetEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3863C))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3675C))(this);
	}
	template <typename R = void> R AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A386C4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A38860))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetEffect() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A389FC))(this);
	}
	template <typename R = ApplyOwnerMagicComponent*> R get_applyOwnerMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38A08))(this);
	}
	template <typename R = bool> R get_hasApplyOwnerMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38A90))(this);
	}
	template <typename R = void> R AddApplyOwnerMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A38A9C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyOwnerMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A38C04))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyOwnerMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38D6C))(this);
	}
	template <typename R = ApplyPlaceComponent*> R get_applyPlace() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38D78))(this);
	}
	template <typename R = bool> R get_hasApplyPlace() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38E00))(this);
	}
	template <typename R = void> R AddApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1A38E0C))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyPlace(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x1A38F44))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyPlace() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3907C))(this);
	}
	template <typename R = ApplyResourcesComponent*> R get_applyResources() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39088))(this);
	}
	template <typename R = bool> R get_hasApplyResources() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39110))(this);
	}
	template <typename R = void> R AddApplyResources(RecipientType* newRecipient, Il2CppString* newRandomGroup, Il2CppArray<Resource*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, RecipientType*, Il2CppString*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1A3911C))(this, newRecipient, newRandomGroup, newValues);
	}
	template <typename R = void> R ReplaceApplyResources(RecipientType* newRecipient, Il2CppString* newRandomGroup, Il2CppArray<Resource*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, RecipientType*, Il2CppString*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1A39254))(this, newRecipient, newRandomGroup, newValues);
	}
	template <typename R = void> R RemoveApplyResources() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3938C))(this);
	}
	template <typename R = ApplyTargetMagicComponent*> R get_applyTargetMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39398))(this);
	}
	template <typename R = bool> R get_hasApplyTargetMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36750))(this);
	}
	template <typename R = void> R AddApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A39420))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceApplyTargetMagic(bool newIgnoreActorParent, MagicSource* newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(MagicTriggerDataEntity*, bool, MagicSource*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1A39588))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveApplyTargetMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A396F0))(this);
	}
	template <typename R = ApplyTriggerComponent*> R get_applyTrigger() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A396FC))(this);
	}
	template <typename R = bool> R get_hasApplyTrigger() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39784))(this);
	}
	template <typename R = void> R AddApplyTrigger(Il2CppArray<Item*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1A39790))(this, newValues);
	}
	template <typename R = void> R ReplaceApplyTrigger(Il2CppArray<Item*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1A398A4))(this, newValues);
	}
	template <typename R = void> R RemoveApplyTrigger() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A399B8))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3693C))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36930))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A399C4))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A39AD8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39BEC))(this);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39BF8))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36268))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A39C80))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A39DB8))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36274))(this);
	}
	template <typename R = ChangeActorCooldownComponent*> R get_changeActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39EF0))(this);
	}
	template <typename R = bool> R get_hasChangeActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39F78))(this);
	}
	template <typename R = void> R AddChangeActorCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A39F84))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R ReplaceChangeActorCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3A0B4))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R RemoveChangeActorCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A1E4))(this);
	}
	template <typename R = ChangeDamageComponent*> R get_changeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36574))(this);
	}
	template <typename R = bool> R get_hasChangeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36450))(this);
	}
	template <typename R = void> R AddChangeDamage(Nullable1float>* newCoef, Nullable1float>* newLifeSteal, DamageType* newAddDamageType) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, Nullable1float>*, DamageType*))(Il2CppBase() + 0x1A3645C))(this, newCoef, newLifeSteal, newAddDamageType);
	}
	template <typename R = void> R ReplaceChangeDamage(Nullable1float>* newCoef, Nullable1float>* newLifeSteal, DamageType* newAddDamageType) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, Nullable1float>*, DamageType*))(Il2CppBase() + 0x1A3A1F0))(this, newCoef, newLifeSteal, newAddDamageType);
	}
	template <typename R = void> R RemoveChangeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A308))(this);
	}
	template <typename R = ChangeDurationByLostHpComponent*> R get_changeDurationByLostHp() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A314))(this);
	}
	template <typename R = bool> R get_hasChangeDurationByLostHp() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A39C))(this);
	}
	template <typename R = void> R AddChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicTriggerDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x1A3A3A8))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R ReplaceChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicTriggerDataEntity*, DamageCondition*, float))(Il2CppBase() + 0x1A3A4CC))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R RemoveChangeDurationByLostHp() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A5F0))(this);
	}
	template <typename R = ChangeHealComponent*> R get_changeHeal() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A5FC))(this);
	}
	template <typename R = bool> R get_hasChangeHeal() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A684))(this);
	}
	template <typename R = void> R AddChangeHeal(Nullable1float>* newCoef) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*))(Il2CppBase() + 0x1A3A690))(this, newCoef);
	}
	template <typename R = void> R ReplaceChangeHeal(Nullable1float>* newCoef) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*))(Il2CppBase() + 0x1A3A794))(this, newCoef);
	}
	template <typename R = void> R RemoveChangeHeal() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A898))(this);
	}
	template <typename R = ChangeMagicComponent*> R get_changeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A8A4))(this);
	}
	template <typename R = bool> R get_hasChangeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A92C))(this);
	}
	template <typename R = void> R AddChangeMagic(float newAddDuration, Nullable1float>* newDurationCoef, Nullable1float>* newDamageCoef, Il2CppArray<Il2CppString*>* newAddChildren, bool newDispel) {
		return ((R (*)(MagicTriggerDataEntity*, float, Nullable1float>*, Nullable1float>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A3A938))(this, newAddDuration, newDurationCoef, newDamageCoef, newAddChildren, newDispel);
	}
	template <typename R = void> R ReplaceChangeMagic(float newAddDuration, Nullable1float>* newDurationCoef, Nullable1float>* newDamageCoef, Il2CppArray<Il2CppString*>* newAddChildren, bool newDispel) {
		return ((R (*)(MagicTriggerDataEntity*, float, Nullable1float>*, Nullable1float>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1A3AA80))(this, newAddDuration, newDurationCoef, newDamageCoef, newAddChildren, newDispel);
	}
	template <typename R = void> R RemoveChangeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ABC8))(this);
	}
	template <typename R = ChangeTargetCooldownComponent*> R get_changeTargetCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ABD4))(this);
	}
	template <typename R = bool> R get_hasChangeTargetCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36768))(this);
	}
	template <typename R = void> R AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3AC5C))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3AD8C))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R RemoveChangeTargetCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AEBC))(this);
	}
	template <typename R = CooldownComponent*> R get_cooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AEC8))(this);
	}
	template <typename R = bool> R get_hasCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AF50))(this);
	}
	template <typename R = void> R AddCooldown(float newValue, float newInitial) {
		return ((R (*)(MagicTriggerDataEntity*, float, float))(Il2CppBase() + 0x1A3AF5C))(this, newValue, newInitial);
	}
	template <typename R = void> R ReplaceCooldown(float newValue, float newInitial) {
		return ((R (*)(MagicTriggerDataEntity*, float, float))(Il2CppBase() + 0x1A3B064))(this, newValue, newInitial);
	}
	template <typename R = void> R RemoveCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B16C))(this);
	}
	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B178))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B200))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3B20C))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3B310))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B414))(this);
	}
	template <typename R = DamageConditionComponent*> R get_damageCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B420))(this);
	}
	template <typename R = bool> R get_hasDamageCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B4A8))(this);
	}
	template <typename R = void> R AddDamageCondition(DamageType* newIngoreDamageType, DamageType* newDamageType, float newMinBlocked, float newMinHpCoef, bool newUseActorBonusVsTarget, float newMinHpValue) {
		return ((R (*)(MagicTriggerDataEntity*, DamageType*, DamageType*, float, float, bool, float))(Il2CppBase() + 0x1A3B4B4))(this, newIngoreDamageType, newDamageType, newMinBlocked, newMinHpCoef, newUseActorBonusVsTarget, newMinHpValue);
	}
	template <typename R = void> R ReplaceDamageCondition(DamageType* newIngoreDamageType, DamageType* newDamageType, float newMinBlocked, float newMinHpCoef, bool newUseActorBonusVsTarget, float newMinHpValue) {
		return ((R (*)(MagicTriggerDataEntity*, DamageType*, DamageType*, float, float, bool, float))(Il2CppBase() + 0x1A3B5F4))(this, newIngoreDamageType, newDamageType, newMinBlocked, newMinHpCoef, newUseActorBonusVsTarget, newMinHpValue);
	}
	template <typename R = void> R RemoveDamageCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B734))(this);
	}
	template <typename R = bool> R get_isDestroyParentOnEnd() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B740))(this);
	}
	template <typename R = void> R set_isDestroyParentOnEnd(bool value) {
		return ((R (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A3B74C))(this, value);
	}
	template <typename R = DispelFromActorComponent*> R get_dispelFromActor() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B864))(this);
	}
	template <typename R = bool> R get_hasDispelFromActor() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B8EC))(this);
	}
	template <typename R = void> R AddDispelFromActor(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3B8F8))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R ReplaceDispelFromActor(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BAAC))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R RemoveDispelFromActor() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BC60))(this);
	}
	template <typename R = DispelFromTargetComponent*> R get_dispelFromTarget() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BC6C))(this);
	}
	template <typename R = bool> R get_hasDispelFromTarget() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BCF4))(this);
	}
	template <typename R = void> R AddDispelFromTarget(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BD00))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R ReplaceDispelFromTarget(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BEB4))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename R = void> R RemoveDispelFromTarget() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C068))(this);
	}
	template <typename R = DistributeDamageComponent*> R get_distributeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C074))(this);
	}
	template <typename R = bool> R get_hasDistributeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C0FC))(this);
	}
	template <typename R = void> R AddDistributeDamage(Nullable1float>* newCoef, TargetsSelector* newSelector, Il2CppArray<Il2CppString*>* newHitEffects) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, TargetsSelector*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3C108))(this, newCoef, newSelector, newHitEffects);
	}
	template <typename R = void> R ReplaceDistributeDamage(Nullable1float>* newCoef, TargetsSelector* newSelector, Il2CppArray<Il2CppString*>* newHitEffects) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, TargetsSelector*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3C240))(this, newCoef, newSelector, newHitEffects);
	}
	template <typename R = void> R RemoveDistributeDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C378))(this);
	}
	template <typename R = DistributeMagicComponent*> R get_distributeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C384))(this);
	}
	template <typename R = bool> R get_hasDistributeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C40C))(this);
	}
	template <typename R = void> R AddDistributeMagic(Nullable1float>* newDurationCoef, Nullable1float>* newDamageCoef, TargetsSelector* newSelector) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, Nullable1float>*, TargetsSelector*))(Il2CppBase() + 0x1A3C418))(this, newDurationCoef, newDamageCoef, newSelector);
	}
	template <typename R = void> R ReplaceDistributeMagic(Nullable1float>* newDurationCoef, Nullable1float>* newDamageCoef, TargetsSelector* newSelector) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1float>*, Nullable1float>*, TargetsSelector*))(Il2CppBase() + 0x1A3C540))(this, newDurationCoef, newDamageCoef, newSelector);
	}
	template <typename R = void> R RemoveDistributeMagic() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C668))(this);
	}
	template <typename R = ExecuteGroupComponent*> R get_executeGroup() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C674))(this);
	}
	template <typename R = bool> R get_hasExecuteGroup() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C6FC))(this);
	}
	template <typename R = void> R AddExecuteGroup(Il2CppString* newName) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A3C708))(this, newName);
	}
	template <typename R = void> R ReplaceExecuteGroup(Il2CppString* newName) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A3C81C))(this, newName);
	}
	template <typename R = void> R RemoveExecuteGroup() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C930))(this);
	}
	template <typename R = GroupCooldownComponent*> R get_groupCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C93C))(this);
	}
	template <typename R = bool> R get_hasGroupCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C9C4))(this);
	}
	template <typename R = void> R AddGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x1A3C9D0))(this, newValues);
	}
	template <typename R = void> R ReplaceGroupCooldown(Il2CppArray<NameFloat*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<NameFloat*>*))(Il2CppBase() + 0x1A3CAE4))(this, newValues);
	}
	template <typename R = void> R RemoveGroupCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CBF8))(this);
	}
	template <typename R = ItemConditionComponent*> R get_itemCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CC04))(this);
	}
	template <typename R = bool> R get_hasItemCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CC8C))(this);
	}
	template <typename R = void> R AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(MagicTriggerDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x1A3CC98))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(MagicTriggerDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x1A3CE0C))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R RemoveItemCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CF80))(this);
	}
	template <typename R = MagicConditionComponent*> R get_magicCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CF8C))(this);
	}
	template <typename R = bool> R get_hasMagicCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D014))(this);
	}
	template <typename R = void> R AddMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1A3D020))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R ReplaceMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(MagicTriggerDataEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1A3D188))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R RemoveMagicCondition() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D2F0))(this);
	}
	template <typename R = MagicTriggerTypeComponent*> R get_magicTriggerType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D2FC))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D384))(this);
	}
	template <typename R = void> R AddMagicTriggerType(MagicTriggerType* newValue) {
		return ((R (*)(MagicTriggerDataEntity*, MagicTriggerType*))(Il2CppBase() + 0x1A3D390))(this, newValue);
	}
	template <typename R = void> R ReplaceMagicTriggerType(MagicTriggerType* newValue) {
		return ((R (*)(MagicTriggerDataEntity*, MagicTriggerType*))(Il2CppBase() + 0x1A3D494))(this, newValue);
	}
	template <typename R = void> R RemoveMagicTriggerType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D598))(this);
	}
	template <typename R = bool> R get_isNeedFilterTargets() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D5A4))(this);
	}
	template <typename R = void> R set_isNeedFilterTargets(bool value) {
		return ((R (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A36774))(this, value);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D5B0))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D638))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3D644))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3D758))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D86C))(this);
	}
	template <typename R = PlayerStatTypeComponent*> R get_playerStatType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D878))(this);
	}
	template <typename R = bool> R get_hasPlayerStatType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D900))(this);
	}
	template <typename R = void> R AddPlayerStatType(PlayerStatType* newValue) {
		return ((R (*)(MagicTriggerDataEntity*, PlayerStatType*))(Il2CppBase() + 0x1A3D90C))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerStatType(PlayerStatType* newValue) {
		return ((R (*)(MagicTriggerDataEntity*, PlayerStatType*))(Il2CppBase() + 0x1A3DA10))(this, newValue);
	}
	template <typename R = void> R RemovePlayerStatType() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DB14))(this);
	}
	template <typename R = ResetSkipCooldownComponent*> R get_resetSkipCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DB20))(this);
	}
	template <typename R = bool> R get_hasResetSkipCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DBA8))(this);
	}
	template <typename R = void> R AddResetSkipCooldown(float newValue) {
		return ((R (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3DBB4))(this, newValue);
	}
	template <typename R = void> R ReplaceResetSkipCooldown(float newValue) {
		return ((R (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3DCB8))(this, newValue);
	}
	template <typename R = void> R RemoveResetSkipCooldown() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DDBC))(this);
	}
	template <typename R = SkipCountComponent*> R get_skipCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DDC8))(this);
	}
	template <typename R = bool> R get_hasSkipCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DE50))(this);
	}
	template <typename R = void> R AddSkipCount(int32_t newValue) {
		return ((R (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3DE5C))(this, newValue);
	}
	template <typename R = void> R ReplaceSkipCount(int32_t newValue) {
		return ((R (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3DF60))(this, newValue);
	}
	template <typename R = void> R RemoveSkipCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E064))(this);
	}
	template <typename R = SplashComponent*> R get_splash() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E070))(this);
	}
	template <typename R = bool> R get_hasSplash() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E0F8))(this);
	}
	template <typename R = void> R AddSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1A3E104))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceSplash(Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x1A3E28C))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveSplash() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E414))(this);
	}
	template <typename R = SplashDamageComponent*> R get_splashDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E420))(this);
	}
	template <typename R = bool> R get_hasSplashDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E4A8))(this);
	}
	template <typename R = void> R AddSplashDamage(TargetsSelector* newSelector, Il2CppArray<Il2CppString*>* newHitEffects, Il2CppArray<Il2CppString*>* newHitMagics, float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((R (*)(MagicTriggerDataEntity*, TargetsSelector*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x1A3E4B4))(this, newSelector, newHitEffects, newHitMagics, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R ReplaceSplashDamage(TargetsSelector* newSelector, Il2CppArray<Il2CppString*>* newHitEffects, Il2CppArray<Il2CppString*>* newHitMagics, float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, DamageDependType* newDepend, float newMaxValue) {
		return ((R (*)(MagicTriggerDataEntity*, TargetsSelector*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, float, Il2CppString*, float, bool, DamageDependType*, float))(Il2CppBase() + 0x1A3E650))(this, newSelector, newHitEffects, newHitMagics, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename R = void> R RemoveSplashDamage() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E7EC))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E7F8))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E880))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3E88C))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3E9A0))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3EAB4))(this);
	}
	template <typename R = TargetTagsComponent*> R get_targetTags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3EAC0))(this);
	}
	template <typename R = bool> R get_hasTargetTags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36738))(this);
	}
	template <typename R = void> R AddTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3EB48))(this, newValues);
	}
	template <typename R = void> R ReplaceTargetTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1A3EC5C))(this, newValues);
	}
	template <typename R = void> R RemoveTargetTags() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ED70))(this);
	}
	template <typename R = TargetTriggerConditionsComponent*> R get_targetTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ED7C))(this);
	}
	template <typename R = bool> R get_hasTargetTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36744))(this);
	}
	template <typename R = void> R AddTargetTriggerConditions(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, RelationshipTypes* newRelationship, bool newIsAggroTarget, Nullable1float>* newHpCoefLess, Nullable1float>* newHpCoefMore, float newMinDistance, float newMaxDistance, Nullable1bool>* newIsTriggerOwner, Nullable1float>* newViewAngle) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, RelationshipTypes*, bool, Nullable1float>*, Nullable1float>*, float, float, Nullable1bool>*, Nullable1float>*))(Il2CppBase() + 0x1A3EE04))(this, newName, newNames, newRelationship, newIsAggroTarget, newHpCoefLess, newHpCoefMore, newMinDistance, newMaxDistance, newIsTriggerOwner, newViewAngle);
	}
	template <typename R = void> R ReplaceTargetTriggerConditions(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, RelationshipTypes* newRelationship, bool newIsAggroTarget, Nullable1float>* newHpCoefLess, Nullable1float>* newHpCoefMore, float newMinDistance, float newMaxDistance, Nullable1bool>* newIsTriggerOwner, Nullable1float>* newViewAngle) {
		return ((R (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, RelationshipTypes*, bool, Nullable1float>*, Nullable1float>*, float, float, Nullable1bool>*, Nullable1float>*))(Il2CppBase() + 0x1A3EF88))(this, newName, newNames, newRelationship, newIsAggroTarget, newHpCoefLess, newHpCoefMore, newMinDistance, newMaxDistance, newIsTriggerOwner, newViewAngle);
	}
	template <typename R = void> R RemoveTargetTriggerConditions() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F10C))(this);
	}
	template <typename R = UseCountComponent*> R get_useCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F118))(this);
	}
	template <typename R = bool> R get_hasUseCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F1A0))(this);
	}
	template <typename R = void> R AddUseCount(int32_t newValue) {
		return ((R (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3F1AC))(this, newValue);
	}
	template <typename R = void> R ReplaceUseCount(int32_t newValue) {
		return ((R (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3F2B0))(this, newValue);
	}
	template <typename R = void> R RemoveUseCount() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F3B4))(this);
	}
	template <typename R = bool> R get_isUseSourceItem() {
		return ((R (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F3C0))(this);
	}
	template <typename R = void> R set_isUseSourceItem(bool value) {
		return ((R (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A3F3CC))(this, value);
	}

};

