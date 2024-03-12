#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicTriggerDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicTriggerDataEntity"));
	}

	template <typename T = uintptr_t> static T& destroyParentOnEndComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& needFilterTargetsComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& useSourceItemComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3688C))(this);
	}
	template <typename T = uintptr_t> T get_actionCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A369C4))(this);
	}
	template <typename T = bool> T get_hasActionCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36A4C))(this);
	}
	template <typename T = void> T AddActionCondition(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, uintptr_t newType, uintptr_t newNoType, void* newInstant) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1A36A58))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T ReplaceActionCondition(Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, uintptr_t newType, uintptr_t newNoType, void* newInstant) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x1A36BBC))(this, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T RemoveActionCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36D20))(this);
	}
	template <typename T = uintptr_t> T get_activeCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36D2C))(this);
	}
	template <typename T = bool> T get_hasActiveCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36DB4))(this);
	}
	template <typename T = void> T AddActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1A36DC0))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceActiveCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x1A36F10))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveActiveCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37060))(this);
	}
	template <typename T = uintptr_t> T get_activeEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3706C))(this);
	}
	template <typename T = bool> T get_hasActiveEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A370F4))(this);
	}
	template <typename T = void> T AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A37100))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A3729C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveActiveEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37438))(this);
	}
	template <typename T = uintptr_t> T get_actorTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A363C8))(this);
	}
	template <typename T = bool> T get_hasActorTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36280))(this);
	}
	template <typename T = void> T AddActorTriggerConditions(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, void* newHpCoefLess, void* newHpCoefMore) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, void*))(Il2CppBase() + 0x1A3628C))(this, newName, newNames, newHpCoefLess, newHpCoefMore);
	}
	template <typename T = void> T ReplaceActorTriggerConditions(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, void* newHpCoefLess, void* newHpCoefMore) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, void*, void*))(Il2CppBase() + 0x1A37444))(this, newName, newNames, newHpCoefLess, newHpCoefMore);
	}
	template <typename T = void> T RemoveActorTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37580))(this);
	}
	template <typename T = uintptr_t> T get_applyActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3758C))(this);
	}
	template <typename T = bool> T get_hasApplyActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37614))(this);
	}
	template <typename T = void> T AddApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A37620))(this, newValues, newTags);
	}
	template <typename T = void> T ReplaceApplyActorCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A37748))(this, newValues, newTags);
	}
	template <typename T = void> T RemoveApplyActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37870))(this);
	}
	template <typename T = uintptr_t> T get_applyActorMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3787C))(this);
	}
	template <typename T = bool> T get_hasApplyActorMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37904))(this);
	}
	template <typename T = void> T AddApplyActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A37910))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A37A78))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyActorMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37BE0))(this);
	}
	template <typename T = uintptr_t> T get_applyDurabilityDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37BEC))(this);
	}
	template <typename T = bool> T get_hasApplyDurabilityDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37C74))(this);
	}
	template <typename T = void> T AddApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1A37C80))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T ReplaceApplyDurabilityDamage(bool newUseWeapon, float newValue, bool newDestroyOnEnd, int32_t newId) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, bool, int32_t))(Il2CppBase() + 0x1A37DB4))(this, newUseWeapon, newValue, newDestroyOnEnd, newId);
	}
	template <typename T = void> T RemoveApplyDurabilityDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37EE8))(this);
	}
	template <typename T = uintptr_t> T get_applyLocationMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37EF4))(this);
	}
	template <typename T = bool> T get_hasApplyLocationMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A37F7C))(this);
	}
	template <typename T = void> T AddApplyLocationMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A37F88))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyLocationMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A380F0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyLocationMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38258))(this);
	}
	template <typename T = uintptr_t> T get_applyOnActorEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38264))(this);
	}
	template <typename T = bool> T get_hasApplyOnActorEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A382EC))(this);
	}
	template <typename T = void> T AddApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A382F8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnActorEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A38494))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnActorEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38630))(this);
	}
	template <typename T = uintptr_t> T get_applyOnTargetEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3863C))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3675C))(this);
	}
	template <typename T = void> T AddApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A386C4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A38860))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetEffect() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A389FC))(this);
	}
	template <typename T = uintptr_t> T get_applyOwnerMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38A08))(this);
	}
	template <typename T = bool> T get_hasApplyOwnerMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38A90))(this);
	}
	template <typename T = void> T AddApplyOwnerMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A38A9C))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyOwnerMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A38C04))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyOwnerMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38D6C))(this);
	}
	template <typename T = uintptr_t> T get_applyPlace() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38D78))(this);
	}
	template <typename T = bool> T get_hasApplyPlace() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A38E00))(this);
	}
	template <typename T = void> T AddApplyPlace(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A38E0C))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyPlace(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A38F44))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyPlace() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3907C))(this);
	}
	template <typename T = uintptr_t> T get_applyResources() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39088))(this);
	}
	template <typename T = bool> T get_hasApplyResources() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39110))(this);
	}
	template <typename T = void> T AddApplyResources(uintptr_t newRecipient, Il2CppString* newRandomGroup, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3911C))(this, newRecipient, newRandomGroup, newValues);
	}
	template <typename T = void> T ReplaceApplyResources(uintptr_t newRecipient, Il2CppString* newRandomGroup, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A39254))(this, newRecipient, newRandomGroup, newValues);
	}
	template <typename T = void> T RemoveApplyResources() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3938C))(this);
	}
	template <typename T = uintptr_t> T get_applyTargetMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39398))(this);
	}
	template <typename T = bool> T get_hasApplyTargetMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36750))(this);
	}
	template <typename T = void> T AddApplyTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A39420))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceApplyTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(MagicTriggerDataEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1A39588))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveApplyTargetMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A396F0))(this);
	}
	template <typename T = uintptr_t> T get_applyTrigger() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A396FC))(this);
	}
	template <typename T = bool> T get_hasApplyTrigger() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39784))(this);
	}
	template <typename T = void> T AddApplyTrigger(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A39790))(this, newValues);
	}
	template <typename T = void> T ReplaceApplyTrigger(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A398A4))(this, newValues);
	}
	template <typename T = void> T RemoveApplyTrigger() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A399B8))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3693C))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36930))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A399C4))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A39AD8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39BEC))(this);
	}
	template <typename T = uintptr_t> T get_chance() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39BF8))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36268))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A39C80))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A39DB8))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36274))(this);
	}
	template <typename T = uintptr_t> T get_changeActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39EF0))(this);
	}
	template <typename T = bool> T get_hasChangeActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A39F78))(this);
	}
	template <typename T = void> T AddChangeActorCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A39F84))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T ReplaceChangeActorCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3A0B4))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T RemoveChangeActorCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A1E4))(this);
	}
	template <typename T = uintptr_t> T get_changeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36574))(this);
	}
	template <typename T = bool> T get_hasChangeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36450))(this);
	}
	template <typename T = void> T AddChangeDamage(void* newCoef, void* newLifeSteal, uintptr_t newAddDamageType) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, uintptr_t))(Il2CppBase() + 0x1A3645C))(this, newCoef, newLifeSteal, newAddDamageType);
	}
	template <typename T = void> T ReplaceChangeDamage(void* newCoef, void* newLifeSteal, uintptr_t newAddDamageType) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, uintptr_t))(Il2CppBase() + 0x1A3A1F0))(this, newCoef, newLifeSteal, newAddDamageType);
	}
	template <typename T = void> T RemoveChangeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A308))(this);
	}
	template <typename T = uintptr_t> T get_changeDurationByLostHp() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A314))(this);
	}
	template <typename T = bool> T get_hasChangeDurationByLostHp() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A39C))(this);
	}
	template <typename T = void> T AddChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, float))(Il2CppBase() + 0x1A3A3A8))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T ReplaceChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, float))(Il2CppBase() + 0x1A3A4CC))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T RemoveChangeDurationByLostHp() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A5F0))(this);
	}
	template <typename T = uintptr_t> T get_changeHeal() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A5FC))(this);
	}
	template <typename T = bool> T get_hasChangeHeal() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A684))(this);
	}
	template <typename T = void> T AddChangeHeal(void* newCoef) {
		return ((T (*)(MagicTriggerDataEntity*, void*))(Il2CppBase() + 0x1A3A690))(this, newCoef);
	}
	template <typename T = void> T ReplaceChangeHeal(void* newCoef) {
		return ((T (*)(MagicTriggerDataEntity*, void*))(Il2CppBase() + 0x1A3A794))(this, newCoef);
	}
	template <typename T = void> T RemoveChangeHeal() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A898))(this);
	}
	template <typename T = uintptr_t> T get_changeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A8A4))(this);
	}
	template <typename T = bool> T get_hasChangeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3A92C))(this);
	}
	template <typename T = void> T AddChangeMagic(float newAddDuration, void* newDurationCoef, void* newDamageCoef, Il2CppArray<uintptr_t>* newAddChildren, bool newDispel) {
		return ((T (*)(MagicTriggerDataEntity*, float, void*, void*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A3A938))(this, newAddDuration, newDurationCoef, newDamageCoef, newAddChildren, newDispel);
	}
	template <typename T = void> T ReplaceChangeMagic(float newAddDuration, void* newDurationCoef, void* newDamageCoef, Il2CppArray<uintptr_t>* newAddChildren, bool newDispel) {
		return ((T (*)(MagicTriggerDataEntity*, float, void*, void*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1A3AA80))(this, newAddDuration, newDurationCoef, newDamageCoef, newAddChildren, newDispel);
	}
	template <typename T = void> T RemoveChangeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ABC8))(this);
	}
	template <typename T = uintptr_t> T get_changeTargetCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ABD4))(this);
	}
	template <typename T = bool> T get_hasChangeTargetCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36768))(this);
	}
	template <typename T = void> T AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3AC5C))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(MagicTriggerDataEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x1A3AD8C))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T RemoveChangeTargetCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AEBC))(this);
	}
	template <typename T = uintptr_t> T get_cooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AEC8))(this);
	}
	template <typename T = bool> T get_hasCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3AF50))(this);
	}
	template <typename T = void> T AddCooldown(float newValue, float newInitial) {
		return ((T (*)(MagicTriggerDataEntity*, float, float))(Il2CppBase() + 0x1A3AF5C))(this, newValue, newInitial);
	}
	template <typename T = void> T ReplaceCooldown(float newValue, float newInitial) {
		return ((T (*)(MagicTriggerDataEntity*, float, float))(Il2CppBase() + 0x1A3B064))(this, newValue, newInitial);
	}
	template <typename T = void> T RemoveCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B16C))(this);
	}
	template <typename T = uintptr_t> T get_damage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B178))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B200))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3B20C))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3B310))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B414))(this);
	}
	template <typename T = uintptr_t> T get_damageCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B420))(this);
	}
	template <typename T = bool> T get_hasDamageCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B4A8))(this);
	}
	template <typename T = void> T AddDamageCondition(uintptr_t newIngoreDamageType, uintptr_t newDamageType, float newMinBlocked, float newMinHpCoef, bool newUseActorBonusVsTarget, float newMinHpValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, uintptr_t, float, float, bool, float))(Il2CppBase() + 0x1A3B4B4))(this, newIngoreDamageType, newDamageType, newMinBlocked, newMinHpCoef, newUseActorBonusVsTarget, newMinHpValue);
	}
	template <typename T = void> T ReplaceDamageCondition(uintptr_t newIngoreDamageType, uintptr_t newDamageType, float newMinBlocked, float newMinHpCoef, bool newUseActorBonusVsTarget, float newMinHpValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, uintptr_t, float, float, bool, float))(Il2CppBase() + 0x1A3B5F4))(this, newIngoreDamageType, newDamageType, newMinBlocked, newMinHpCoef, newUseActorBonusVsTarget, newMinHpValue);
	}
	template <typename T = void> T RemoveDamageCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B734))(this);
	}
	template <typename T = bool> T get_isDestroyParentOnEnd() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B740))(this);
	}
	template <typename T = void> T set_isDestroyParentOnEnd(bool value) {
		return ((T (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A3B74C))(this, value);
	}
	template <typename T = uintptr_t> T get_dispelFromActor() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B864))(this);
	}
	template <typename T = bool> T get_hasDispelFromActor() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3B8EC))(this);
	}
	template <typename T = void> T AddDispelFromActor(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3B8F8))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T ReplaceDispelFromActor(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BAAC))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T RemoveDispelFromActor() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BC60))(this);
	}
	template <typename T = uintptr_t> T get_dispelFromTarget() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BC6C))(this);
	}
	template <typename T = bool> T get_hasDispelFromTarget() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3BCF4))(this);
	}
	template <typename T = void> T AddDispelFromTarget(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BD00))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T ReplaceDispelFromTarget(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, bool newBuffs, bool newByActor, bool newControls, int32_t newMaxCount, Il2CppString* newSuccessEffect) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, bool, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1A3BEB4))(this, newName, newNames, newTag, newAnyTags, newBuffs, newByActor, newControls, newMaxCount, newSuccessEffect);
	}
	template <typename T = void> T RemoveDispelFromTarget() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C068))(this);
	}
	template <typename T = uintptr_t> T get_distributeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C074))(this);
	}
	template <typename T = bool> T get_hasDistributeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C0FC))(this);
	}
	template <typename T = void> T AddDistributeDamage(void* newCoef, uintptr_t newSelector, Il2CppArray<uintptr_t>* newHitEffects) {
		return ((T (*)(MagicTriggerDataEntity*, void*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3C108))(this, newCoef, newSelector, newHitEffects);
	}
	template <typename T = void> T ReplaceDistributeDamage(void* newCoef, uintptr_t newSelector, Il2CppArray<uintptr_t>* newHitEffects) {
		return ((T (*)(MagicTriggerDataEntity*, void*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3C240))(this, newCoef, newSelector, newHitEffects);
	}
	template <typename T = void> T RemoveDistributeDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C378))(this);
	}
	template <typename T = uintptr_t> T get_distributeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C384))(this);
	}
	template <typename T = bool> T get_hasDistributeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C40C))(this);
	}
	template <typename T = void> T AddDistributeMagic(void* newDurationCoef, void* newDamageCoef, uintptr_t newSelector) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, uintptr_t))(Il2CppBase() + 0x1A3C418))(this, newDurationCoef, newDamageCoef, newSelector);
	}
	template <typename T = void> T ReplaceDistributeMagic(void* newDurationCoef, void* newDamageCoef, uintptr_t newSelector) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, uintptr_t))(Il2CppBase() + 0x1A3C540))(this, newDurationCoef, newDamageCoef, newSelector);
	}
	template <typename T = void> T RemoveDistributeMagic() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C668))(this);
	}
	template <typename T = uintptr_t> T get_executeGroup() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C674))(this);
	}
	template <typename T = bool> T get_hasExecuteGroup() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C6FC))(this);
	}
	template <typename T = void> T AddExecuteGroup(Il2CppString* newName) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A3C708))(this, newName);
	}
	template <typename T = void> T ReplaceExecuteGroup(Il2CppString* newName) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*))(Il2CppBase() + 0x1A3C81C))(this, newName);
	}
	template <typename T = void> T RemoveExecuteGroup() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C930))(this);
	}
	template <typename T = uintptr_t> T get_groupCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C93C))(this);
	}
	template <typename T = bool> T get_hasGroupCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3C9C4))(this);
	}
	template <typename T = void> T AddGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3C9D0))(this, newValues);
	}
	template <typename T = void> T ReplaceGroupCooldown(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3CAE4))(this, newValues);
	}
	template <typename T = void> T RemoveGroupCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CBF8))(this);
	}
	template <typename T = uintptr_t> T get_itemCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CC04))(this);
	}
	template <typename T = bool> T get_hasItemCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CC8C))(this);
	}
	template <typename T = void> T AddItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(MagicTriggerDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A3CC98))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T ReplaceItemCondition(bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, uintptr_t newEquipmentType) {
		return ((T (*)(MagicTriggerDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1A3CE0C))(this, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T RemoveItemCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CF80))(this);
	}
	template <typename T = uintptr_t> T get_magicCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3CF8C))(this);
	}
	template <typename T = bool> T get_hasMagicCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D014))(this);
	}
	template <typename T = void> T AddMagicCondition(void* newMaxCount, void* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1A3D020))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T ReplaceMagicCondition(void* newMaxCount, void* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(MagicTriggerDataEntity*, void*, void*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1A3D188))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T RemoveMagicCondition() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D2F0))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D2FC))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D384))(this);
	}
	template <typename T = void> T AddMagicTriggerType(uintptr_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t))(Il2CppBase() + 0x1A3D390))(this, newValue);
	}
	template <typename T = void> T ReplaceMagicTriggerType(uintptr_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t))(Il2CppBase() + 0x1A3D494))(this, newValue);
	}
	template <typename T = void> T RemoveMagicTriggerType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D598))(this);
	}
	template <typename T = bool> T get_isNeedFilterTargets() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D5A4))(this);
	}
	template <typename T = void> T set_isNeedFilterTargets(bool value) {
		return ((T (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A36774))(this, value);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D5B0))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D638))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3D644))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3D758))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D86C))(this);
	}
	template <typename T = uintptr_t> T get_playerStatType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D878))(this);
	}
	template <typename T = bool> T get_hasPlayerStatType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3D900))(this);
	}
	template <typename T = void> T AddPlayerStatType(uintptr_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t))(Il2CppBase() + 0x1A3D90C))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerStatType(uintptr_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t))(Il2CppBase() + 0x1A3DA10))(this, newValue);
	}
	template <typename T = void> T RemovePlayerStatType() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DB14))(this);
	}
	template <typename T = uintptr_t> T get_resetSkipCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DB20))(this);
	}
	template <typename T = bool> T get_hasResetSkipCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DBA8))(this);
	}
	template <typename T = void> T AddResetSkipCooldown(float newValue) {
		return ((T (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3DBB4))(this, newValue);
	}
	template <typename T = void> T ReplaceResetSkipCooldown(float newValue) {
		return ((T (*)(MagicTriggerDataEntity*, float))(Il2CppBase() + 0x1A3DCB8))(this, newValue);
	}
	template <typename T = void> T RemoveResetSkipCooldown() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DDBC))(this);
	}
	template <typename T = uintptr_t> T get_skipCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DDC8))(this);
	}
	template <typename T = bool> T get_hasSkipCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3DE50))(this);
	}
	template <typename T = void> T AddSkipCount(int32_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3DE5C))(this, newValue);
	}
	template <typename T = void> T ReplaceSkipCount(int32_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3DF60))(this, newValue);
	}
	template <typename T = void> T RemoveSkipCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E064))(this);
	}
	template <typename T = uintptr_t> T get_splash() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E070))(this);
	}
	template <typename T = bool> T get_hasSplash() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E0F8))(this);
	}
	template <typename T = void> T AddSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, uintptr_t newSelector) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1A3E104))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceSplash(Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newSequence, Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, uintptr_t newSelector) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1A3E28C))(this, newNames, newSequence, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveSplash() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E414))(this);
	}
	template <typename T = uintptr_t> T get_splashDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E420))(this);
	}
	template <typename T = bool> T get_hasSplashDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E4A8))(this);
	}
	template <typename T = void> T AddSplashDamage(uintptr_t newSelector, Il2CppArray<uintptr_t>* newHitEffects, Il2CppArray<uintptr_t>* newHitMagics, float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, uintptr_t newDepend, float newMaxValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, Il2CppString*, float, bool, uintptr_t, float))(Il2CppBase() + 0x1A3E4B4))(this, newSelector, newHitEffects, newHitMagics, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T ReplaceSplashDamage(uintptr_t newSelector, Il2CppArray<uintptr_t>* newHitEffects, Il2CppArray<uintptr_t>* newHitMagics, float newDelay, Il2CppString* newName, float newMaxTargetPlayerHealthCoef, bool newIgnoreDamageCoef, uintptr_t newDepend, float newMaxValue) {
		return ((T (*)(MagicTriggerDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, Il2CppString*, float, bool, uintptr_t, float))(Il2CppBase() + 0x1A3E650))(this, newSelector, newHitEffects, newHitMagics, newDelay, newName, newMaxTargetPlayerHealthCoef, newIgnoreDamageCoef, newDepend, newMaxValue);
	}
	template <typename T = void> T RemoveSplashDamage() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E7EC))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E7F8))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3E880))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3E88C))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3E9A0))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3EAB4))(this);
	}
	template <typename T = uintptr_t> T get_targetTags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3EAC0))(this);
	}
	template <typename T = bool> T get_hasTargetTags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36738))(this);
	}
	template <typename T = void> T AddTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3EB48))(this, newValues);
	}
	template <typename T = void> T ReplaceTargetTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1A3EC5C))(this, newValues);
	}
	template <typename T = void> T RemoveTargetTags() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ED70))(this);
	}
	template <typename T = uintptr_t> T get_targetTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3ED7C))(this);
	}
	template <typename T = bool> T get_hasTargetTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A36744))(this);
	}
	template <typename T = void> T AddTargetTriggerConditions(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, uintptr_t newRelationship, bool newIsAggroTarget, void* newHpCoefLess, void* newHpCoefMore, float newMinDistance, float newMaxDistance, void* newIsTriggerOwner, void* newViewAngle) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, bool, void*, void*, float, float, void*, void*))(Il2CppBase() + 0x1A3EE04))(this, newName, newNames, newRelationship, newIsAggroTarget, newHpCoefLess, newHpCoefMore, newMinDistance, newMaxDistance, newIsTriggerOwner, newViewAngle);
	}
	template <typename T = void> T ReplaceTargetTriggerConditions(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, uintptr_t newRelationship, bool newIsAggroTarget, void* newHpCoefLess, void* newHpCoefMore, float newMinDistance, float newMaxDistance, void* newIsTriggerOwner, void* newViewAngle) {
		return ((T (*)(MagicTriggerDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, bool, void*, void*, float, float, void*, void*))(Il2CppBase() + 0x1A3EF88))(this, newName, newNames, newRelationship, newIsAggroTarget, newHpCoefLess, newHpCoefMore, newMinDistance, newMaxDistance, newIsTriggerOwner, newViewAngle);
	}
	template <typename T = void> T RemoveTargetTriggerConditions() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F10C))(this);
	}
	template <typename T = uintptr_t> T get_useCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F118))(this);
	}
	template <typename T = bool> T get_hasUseCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F1A0))(this);
	}
	template <typename T = void> T AddUseCount(int32_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3F1AC))(this, newValue);
	}
	template <typename T = void> T ReplaceUseCount(int32_t newValue) {
		return ((T (*)(MagicTriggerDataEntity*, int32_t))(Il2CppBase() + 0x1A3F2B0))(this, newValue);
	}
	template <typename T = void> T RemoveUseCount() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F3B4))(this);
	}
	template <typename T = bool> T get_isUseSourceItem() {
		return ((T (*)(MagicTriggerDataEntity*))(Il2CppBase() + 0x1A3F3C0))(this);
	}
	template <typename T = void> T set_isUseSourceItem(bool value) {
		return ((T (*)(MagicTriggerDataEntity*, bool))(Il2CppBase() + 0x1A3F3CC))(this, value);
	}

};

}
