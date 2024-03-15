#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventEntity"));
	}

	template <typename R = AliveComponent*> static R& aliveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ApplyMoveBuildComponent*> static R& applyMoveBuildComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = ApplyRemoveBuildComponent*> static R& applyRemoveBuildComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = ApplyResurrectComponent*> static R& applyResurrectComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ApplyUpgradeBuildComponent*> static R& applyUpgradeBuildComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = CurrencyChangedComponent*> static R& currencyChangedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = NewComponent*> static R& newComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = PlayerGuildChangedComponent*> static R& playerGuildChangedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = QuestTargetComponent*> static R& questTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = QuestsChangedComponent*> static R& questsChangedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename R = ActionIdComponent*> R get_actionId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177781C))(this);
	}
	template <typename R = bool> R get_hasActionId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17778A4))(this);
	}
	template <typename R = void> R AddActionId(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17778B0))(this, newId);
	}
	template <typename R = void> R ReplaceActionId(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17779B4))(this, newId);
	}
	template <typename R = void> R RemoveActionId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777AB8))(this);
	}
	template <typename R = ActionTypeComponent*> R get_actionType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777AC4))(this);
	}
	template <typename R = bool> R get_hasActionType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777B4C))(this);
	}
	template <typename R = void> R AddActionType(ActionType newValue) {
		return ((R (*)(EventEntity*, ActionType))(Il2CppBase() + 0x1777B58))(this, newValue);
	}
	template <typename R = void> R ReplaceActionType(ActionType newValue) {
		return ((R (*)(EventEntity*, ActionType))(Il2CppBase() + 0x1777C5C))(this, newValue);
	}
	template <typename R = void> R RemoveActionType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777D60))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777D6C))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1777DF4))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1777E00))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1777F04))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778008))(this);
	}
	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778014))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177809C))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x17780A8))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x17781AC))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17782B0))(this);
	}
	template <typename R = AddPetExperienceComponent*> R get_addPetExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17782BC))(this);
	}
	template <typename R = bool> R get_hasAddPetExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778344))(this);
	}
	template <typename R = void> R AddAddPetExperience(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1778350))(this, newValue);
	}
	template <typename R = void> R ReplaceAddPetExperience(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1778454))(this, newValue);
	}
	template <typename R = void> R RemoveAddPetExperience() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778558))(this);
	}
	template <typename R = AddedResourcesComponent*> R get_addedResources() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778564))(this);
	}
	template <typename R = bool> R get_hasAddedResources() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17785EC))(this);
	}
	template <typename R = void> R AddAddedResources(Il2CppArray<ValueTuple2<Il2CppString*, int32_t>*>* newResources) {
		return ((R (*)(EventEntity*, Il2CppArray<ValueTuple2<Il2CppString*, int32_t>*>*))(Il2CppBase() + 0x17785F8))(this, newResources);
	}
	template <typename R = void> R ReplaceAddedResources(Il2CppArray<ValueTuple2<Il2CppString*, int32_t>*>* newResources) {
		return ((R (*)(EventEntity*, Il2CppArray<ValueTuple2<Il2CppString*, int32_t>*>*))(Il2CppBase() + 0x177870C))(this, newResources);
	}
	template <typename R = void> R RemoveAddedResources() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778820))(this);
	}
	template <typename R = AggroTargetComponent*> R get_aggroTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177882C))(this);
	}
	template <typename R = bool> R get_hasAggroTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17788B4))(this);
	}
	template <typename R = void> R AddAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(EventEntity*, int32_t, bool))(Il2CppBase() + 0x17788C0))(this, newId, newMovable);
	}
	template <typename R = void> R ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(EventEntity*, int32_t, bool))(Il2CppBase() + 0x17789D0))(this, newId, newMovable);
	}
	template <typename R = void> R RemoveAggroTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778AE0))(this);
	}
	template <typename R = bool> R get_isAlive() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778AEC))(this);
	}
	template <typename R = void> R set_isAlive(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1778AF8))(this, value);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778C10))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778C98))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778CA4))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778DA8))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778EAC))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778EB8))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1778F40))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778F4C))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1779050))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779154))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779160))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17791E8))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17791F4))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17792F8))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17793FC))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779408))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779490))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177949C))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17795A0))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17796A4))(this);
	}
	template <typename R = ApplyBuildComponent*> R get_applyBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17796B0))(this);
	}
	template <typename R = bool> R get_hasApplyBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779738))(this);
	}
	template <typename R = void> R AddApplyBuild(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1779744))(this, newName);
	}
	template <typename R = void> R ReplaceApplyBuild(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1779858))(this, newName);
	}
	template <typename R = void> R RemoveApplyBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177996C))(this);
	}
	template <typename R = ApplyHealComponent*> R get_applyHeal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779978))(this);
	}
	template <typename R = bool> R get_hasApplyHeal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779A00))(this);
	}
	template <typename R = void> R AddApplyHeal(float newDelay, HealParams newParams) {
		return ((R (*)(EventEntity*, float, HealParams))(Il2CppBase() + 0x1779A0C))(this, newDelay, newParams);
	}
	template <typename R = void> R ReplaceApplyHeal(float newDelay, HealParams newParams) {
		return ((R (*)(EventEntity*, float, HealParams))(Il2CppBase() + 0x1779B24))(this, newDelay, newParams);
	}
	template <typename R = void> R RemoveApplyHeal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779C3C))(this);
	}
	template <typename R = ApplyLockUnlockComponent*> R get_applyLockUnlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779C48))(this);
	}
	template <typename R = bool> R get_hasApplyLockUnlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779CD0))(this);
	}
	template <typename R = void> R AddApplyLockUnlock(bool newUnlock) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1779CDC))(this, newUnlock);
	}
	template <typename R = void> R ReplaceApplyLockUnlock(bool newUnlock) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1779DE4))(this, newUnlock);
	}
	template <typename R = void> R RemoveApplyLockUnlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779EEC))(this);
	}
	template <typename R = bool> R get_isApplyMoveBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1779EF8))(this);
	}
	template <typename R = void> R set_isApplyMoveBuild(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1779F04))(this, value);
	}
	template <typename R = ApplyPickupComponent*> R get_applyPickup() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A01C))(this);
	}
	template <typename R = bool> R get_hasApplyPickup() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A0A4))(this);
	}
	template <typename R = void> R AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(EventEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x177A0B0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((R (*)(EventEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x177A1E0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename R = void> R RemoveApplyPickup() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A310))(this);
	}
	template <typename R = ApplyPlayerKillComponent*> R get_applyPlayerKill() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A31C))(this);
	}
	template <typename R = bool> R get_hasApplyPlayerKill() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A3A4))(this);
	}
	template <typename R = void> R AddApplyPlayerKill(bool newValue) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A3B0))(this, newValue);
	}
	template <typename R = void> R ReplaceApplyPlayerKill(bool newValue) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A4B8))(this, newValue);
	}
	template <typename R = void> R RemoveApplyPlayerKill() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A5C0))(this);
	}
	template <typename R = bool> R get_isApplyRemoveBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A5CC))(this);
	}
	template <typename R = void> R set_isApplyRemoveBuild(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A5D8))(this, value);
	}
	template <typename R = bool> R get_isApplyResurrect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A6F0))(this);
	}
	template <typename R = void> R set_isApplyResurrect(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A6FC))(this, value);
	}
	template <typename R = ApplyTakeBuildComponent*> R get_applyTakeBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A814))(this);
	}
	template <typename R = bool> R get_hasApplyTakeBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177A89C))(this);
	}
	template <typename R = void> R AddApplyTakeBuild(bool newDisassemble) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A8A8))(this, newDisassemble);
	}
	template <typename R = void> R ReplaceApplyTakeBuild(bool newDisassemble) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177A9B0))(this, newDisassemble);
	}
	template <typename R = void> R RemoveApplyTakeBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AAB8))(this);
	}
	template <typename R = ApplyTenacityRegenerationComponent*> R get_applyTenacityRegeneration() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AAC4))(this);
	}
	template <typename R = bool> R get_hasApplyTenacityRegeneration() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AB4C))(this);
	}
	template <typename R = void> R AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(EventEntity*, bool, float))(Il2CppBase() + 0x177AB58))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((R (*)(EventEntity*, bool, float))(Il2CppBase() + 0x177AC70))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename R = void> R RemoveApplyTenacityRegeneration() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AD88))(this);
	}
	template <typename R = bool> R get_isApplyUpgradeBuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AD94))(this);
	}
	template <typename R = void> R set_isApplyUpgradeBuild(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177ADA0))(this, value);
	}
	template <typename R = ArmingWeaponComponent*> R get_armingWeapon() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AEB8))(this);
	}
	template <typename R = bool> R get_hasArmingWeapon() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177AF40))(this);
	}
	template <typename R = void> R AddArmingWeapon(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177AF4C))(this, newName);
	}
	template <typename R = void> R ReplaceArmingWeapon(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177B060))(this, newName);
	}
	template <typename R = void> R RemoveArmingWeapon() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B174))(this);
	}
	template <typename R = AutoDestructionComponent*> R get_autoDestruction() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B180))(this);
	}
	template <typename R = bool> R get_hasAutoDestruction() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B208))(this);
	}
	template <typename R = void> R AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(EventEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x177B214))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(EventEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x177B35C))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R RemoveAutoDestruction() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B4A4))(this);
	}
	template <typename R = BindComponent*> R get_bind() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B4B0))(this);
	}
	template <typename R = bool> R get_hasBind() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B538))(this);
	}
	template <typename R = void> R AddBind(EntityId newTarget) {
		return ((R (*)(EventEntity*, EntityId))(Il2CppBase() + 0x177B544))(this, newTarget);
	}
	template <typename R = void> R ReplaceBind(EntityId newTarget) {
		return ((R (*)(EventEntity*, EntityId))(Il2CppBase() + 0x177B648))(this, newTarget);
	}
	template <typename R = void> R RemoveBind() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B74C))(this);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B758))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B7E0))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177B7EC))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177B8F0))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177B9F4))(this);
	}
	template <typename R = ChangeTargetCooldownComponent*> R get_changeTargetCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BA00))(this);
	}
	template <typename R = bool> R get_hasChangeTargetCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BA88))(this);
	}
	template <typename R = void> R AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(EventEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x177BA94))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((R (*)(EventEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x177BBC4))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename R = void> R RemoveChangeTargetCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BCF4))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BD00))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BD88))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177BD94))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177BE98))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BF9C))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177BFA8))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C030))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177C03C))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177C140))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C244))(this);
	}
	template <typename R = CraftBluenprintComponent*> R get_craftBluenprint() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C250))(this);
	}
	template <typename R = bool> R get_hasCraftBluenprint() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C2D8))(this);
	}
	template <typename R = void> R AddCraftBluenprint(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C2E4))(this, newName);
	}
	template <typename R = void> R ReplaceCraftBluenprint(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C3F8))(this, newName);
	}
	template <typename R = void> R RemoveCraftBluenprint() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C50C))(this);
	}
	template <typename R = CraftResultComponent*> R get_craftResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C518))(this);
	}
	template <typename R = bool> R get_hasCraftResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C5A0))(this);
	}
	template <typename R = void> R AddCraftResult(Il2CppString* newType) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C5AC))(this, newType);
	}
	template <typename R = void> R ReplaceCraftResult(Il2CppString* newType) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C6C0))(this, newType);
	}
	template <typename R = void> R RemoveCraftResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C7D4))(this);
	}
	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C7E0))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177C868))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177C874))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177C978))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CA7C))(this);
	}
	template <typename R = bool> R get_isCurrencyChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CA88))(this);
	}
	template <typename R = void> R set_isCurrencyChanged(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x177CA94))(this, value);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CBAC))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CC34))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CC40))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CD44))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CE48))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CE54))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177CEDC))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CEE8))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CFEC))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D0F0))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D0FC))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D184))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177D190))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177D294))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D398))(this);
	}
	template <typename R = DamageBlockComponent*> R get_damageBlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D3A4))(this);
	}
	template <typename R = bool> R get_hasDamageBlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D42C))(this);
	}
	template <typename R = void> R AddDamageBlock(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x177D438))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageBlock(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x177D54C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageBlock() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D660))(this);
	}
	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D66C))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D6F4))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177D700))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177D804))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D908))(this);
	}
	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D914))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177D99C))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177D9A8))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177DAAC))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DBB0))(this);
	}
	template <typename R = DamageConfigComponent*> R get_damageConfig() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DBBC))(this);
	}
	template <typename R = bool> R get_hasDamageConfig() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DC44))(this);
	}
	template <typename R = void> R AddDamageConfig(ConfigEntity* newValue, float newMaxTargetHealthCoef) {
		return ((R (*)(EventEntity*, ConfigEntity*, float))(Il2CppBase() + 0x177DC50))(this, newValue, newMaxTargetHealthCoef);
	}
	template <typename R = void> R ReplaceDamageConfig(ConfigEntity* newValue, float newMaxTargetHealthCoef) {
		return ((R (*)(EventEntity*, ConfigEntity*, float))(Il2CppBase() + 0x177DD74))(this, newValue, newMaxTargetHealthCoef);
	}
	template <typename R = void> R RemoveDamageConfig() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DE98))(this);
	}
	template <typename R = DamageReflectComponent*> R get_damageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DEA4))(this);
	}
	template <typename R = bool> R get_hasDamageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177DF2C))(this);
	}
	template <typename R = void> R AddDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x177DF38))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x177E04C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDamageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E160))(this);
	}
	template <typename R = DamageResultComponent*> R get_damageResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E16C))(this);
	}
	template <typename R = bool> R get_hasDamageResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E1F4))(this);
	}
	template <typename R = void> R AddDamageResult(DamageResultParams newParams) {
		return ((R (*)(EventEntity*, DamageResultParams))(Il2CppBase() + 0x177E200))(this, newParams);
	}
	template <typename R = void> R ReplaceDamageResult(DamageResultParams newParams) {
		return ((R (*)(EventEntity*, DamageResultParams))(Il2CppBase() + 0x177E32C))(this, newParams);
	}
	template <typename R = void> R RemoveDamageResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E458))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E464))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E4EC))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(EventEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x177E4F8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(EventEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x177E6BC))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E880))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E88C))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177E914))(this);
	}
	template <typename R = void> R AddDamageType(DamageType newValue) {
		return ((R (*)(EventEntity*, DamageType))(Il2CppBase() + 0x177E920))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType newValue) {
		return ((R (*)(EventEntity*, DamageType))(Il2CppBase() + 0x177EA24))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EB28))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EB34))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EBBC))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177EBC8))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x177ECCC))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EDD0))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EDDC))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177EE64))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177EE70))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177EF74))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F078))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F084))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F10C))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F118))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F21C))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F320))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F32C))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F3B4))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F3C0))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F4C4))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F5C8))(this);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F5D4))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F65C))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F668))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F76C))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F870))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F87C))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177F904))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F910))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FA14))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FB18))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FB24))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FBAC))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FBB8))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FCBC))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FDC0))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FDCC))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x177FE54))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FE60))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FF64))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780068))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780074))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17800FC))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1780108))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x178020C))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780310))(this);
	}
	template <typename R = GuildQuestComponent*> R get_guildQuest() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178031C))(this);
	}
	template <typename R = bool> R get_hasGuildQuest() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17803A4))(this);
	}
	template <typename R = void> R AddGuildQuest(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x17803B0))(this, newId);
	}
	template <typename R = void> R ReplaceGuildQuest(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x17804B4))(this, newId);
	}
	template <typename R = void> R RemoveGuildQuest() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17805B8))(this);
	}
	template <typename R = HealComponent*> R get_heal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17805C4))(this);
	}
	template <typename R = bool> R get_hasHeal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178064C))(this);
	}
	template <typename R = void> R AddHeal(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1780658))(this, newValue);
	}
	template <typename R = void> R ReplaceHeal(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x178075C))(this, newValue);
	}
	template <typename R = void> R RemoveHeal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780860))(this);
	}
	template <typename R = HealResultComponent*> R get_healResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178086C))(this);
	}
	template <typename R = bool> R get_hasHealResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17808F4))(this);
	}
	template <typename R = void> R AddHealResult(HealResultParams newParams) {
		return ((R (*)(EventEntity*, HealResultParams))(Il2CppBase() + 0x1780900))(this, newParams);
	}
	template <typename R = void> R ReplaceHealResult(HealResultParams newParams) {
		return ((R (*)(EventEntity*, HealResultParams))(Il2CppBase() + 0x1780A08))(this, newParams);
	}
	template <typename R = void> R RemoveHealResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780B10))(this);
	}
	template <typename R = HealthCoefComponent*> R get_healthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780B1C))(this);
	}
	template <typename R = bool> R get_hasHealthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780BA4))(this);
	}
	template <typename R = void> R AddHealthCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1780BB0))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1780CB4))(this, newValue);
	}
	template <typename R = void> R RemoveHealthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780DB8))(this);
	}
	template <typename R = HitActionEffectComponent*> R get_hitActionEffect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780DC4))(this);
	}
	template <typename R = bool> R get_hasHitActionEffect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1780E4C))(this);
	}
	template <typename R = void> R AddHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EventEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1780E58))(this, newNames);
	}
	template <typename R = void> R ReplaceHitActionEffect(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(EventEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1780F6C))(this, newNames);
	}
	template <typename R = void> R RemoveHitActionEffect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781080))(this);
	}
	template <typename R = HitActorCooldownComponent*> R get_hitActorCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178108C))(this);
	}
	template <typename R = bool> R get_hasHitActorCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781114))(this);
	}
	template <typename R = void> R AddHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(EventEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1781120))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R ReplaceHitActorCooldown(bool newKilled, Il2CppArray<NameFloat>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(EventEntity*, bool, Il2CppArray<NameFloat>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x178125C))(this, newKilled, newValues, newTags);
	}
	template <typename R = void> R RemoveHitActorCooldown() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781398))(this);
	}
	template <typename R = HitActorMagicComponent*> R get_hitActorMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17813A4))(this);
	}
	template <typename R = bool> R get_hasHitActorMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178142C))(this);
	}
	template <typename R = void> R AddHitActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(EventEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1781438))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitActorMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(EventEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x17815A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitActorMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781708))(this);
	}
	template <typename R = HitTargetMagicComponent*> R get_hitTargetMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781714))(this);
	}
	template <typename R = bool> R get_hasHitTargetMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178179C))(this);
	}
	template <typename R = void> R AddHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(EventEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x17817A8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceHitTargetMagic(bool newIgnoreActorParent, MagicSource newMagicSource, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Item*>* newItems, int32_t newRandomCount) {
		return ((R (*)(EventEntity*, bool, MagicSource, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Item*>*, int32_t))(Il2CppBase() + 0x1781910))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveHitTargetMagic() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781A78))(this);
	}
	template <typename R = IgnoreArmorPercentComponent*> R get_ignoreArmorPercent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781A84))(this);
	}
	template <typename R = bool> R get_hasIgnoreArmorPercent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781B0C))(this);
	}
	template <typename R = void> R AddIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x1781B18))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceIgnoreArmorPercent(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x1781C2C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveIgnoreArmorPercent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781D40))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781D4C))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781DD4))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1781DE0))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1781EE4))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781FE8))(this);
	}
	template <typename R = InventoryChangedComponent*> R get_inventoryChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1781FF4))(this);
	}
	template <typename R = bool> R get_hasInventoryChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178207C))(this);
	}
	template <typename R = void> R AddInventoryChanged(PlayerInventoryType newType) {
		return ((R (*)(EventEntity*, PlayerInventoryType))(Il2CppBase() + 0x1782088))(this, newType);
	}
	template <typename R = void> R ReplaceInventoryChanged(PlayerInventoryType newType) {
		return ((R (*)(EventEntity*, PlayerInventoryType))(Il2CppBase() + 0x178218C))(this, newType);
	}
	template <typename R = void> R RemoveInventoryChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782290))(this);
	}
	template <typename R = InventoryIndexComponent*> R get_inventoryIndex() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178229C))(this);
	}
	template <typename R = bool> R get_hasInventoryIndex() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782324))(this);
	}
	template <typename R = void> R AddInventoryIndex(int32_t newValue) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782330))(this, newValue);
	}
	template <typename R = void> R ReplaceInventoryIndex(int32_t newValue) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782434))(this, newValue);
	}
	template <typename R = void> R RemoveInventoryIndex() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782538))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782544))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17825CC))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x17825D8))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x17826EC))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782800))(this);
	}
	template <typename R = LifeStealComponent*> R get_lifeSteal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178280C))(this);
	}
	template <typename R = bool> R get_hasLifeSteal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782894))(this);
	}
	template <typename R = void> R AddLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x17828A0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceLifeSteal(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x17829B4))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveLifeSteal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782AC8))(this);
	}
	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782AD4))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782B5C))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782B68))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782C6C))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782D70))(this);
	}
	template <typename R = MaxDamageReflectComponent*> R get_maxDamageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782D7C))(this);
	}
	template <typename R = bool> R get_hasMaxDamageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1782E04))(this);
	}
	template <typename R = void> R AddMaxDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x1782E10))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMaxDamageReflect(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x1782F24))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMaxDamageReflect() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783038))(this);
	}
	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783044))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17830CC))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x17830D8))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x17831DC))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17832E0))(this);
	}
	template <typename R = bool> R get_isNew() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17832EC))(this);
	}
	template <typename R = void> R set_isNew(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x17832F8))(this, value);
	}
	template <typename R = OrientationComponent*> R get_orientation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783410))(this);
	}
	template <typename R = bool> R get_hasOrientation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783498))(this);
	}
	template <typename R = void> R AddOrientation(uint8_t newValue) {
		return ((R (*)(EventEntity*, uint8_t))(Il2CppBase() + 0x17834A4))(this, newValue);
	}
	template <typename R = void> R ReplaceOrientation(uint8_t newValue) {
		return ((R (*)(EventEntity*, uint8_t))(Il2CppBase() + 0x17835A8))(this, newValue);
	}
	template <typename R = void> R RemoveOrientation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17836AC))(this);
	}
	template <typename R = OutcomingHealBonusComponent*> R get_outcomingHealBonus() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17836B8))(this);
	}
	template <typename R = bool> R get_hasOutcomingHealBonus() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783740))(this);
	}
	template <typename R = void> R AddOutcomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x178374C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceOutcomingHealBonus(float newValue, ModifierGroup newGroup) {
		return ((R (*)(EventEntity*, float, ModifierGroup))(Il2CppBase() + 0x1783860))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveOutcomingHealBonus() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783974))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783980))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783A08))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783A14))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783B18))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783C1C))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783C28))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783CB0))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1783CBC))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1783DC0))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783EC4))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783ED0))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1783F58))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783F64))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1784068))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178416C))(this);
	}
	template <typename R = PlaceComponent*> R get_place() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784178))(this);
	}
	template <typename R = bool> R get_hasPlace() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784200))(this);
	}
	template <typename R = void> R AddPlace(Il2CppString* newName, Il2CppString* newMagic, bool newSaveable, float newPushOutRadius, Il2CppString* newSaveData) {
		return ((R (*)(EventEntity*, Il2CppString*, Il2CppString*, bool, float, Il2CppString*))(Il2CppBase() + 0x178420C))(this, newName, newMagic, newSaveable, newPushOutRadius, newSaveData);
	}
	template <typename R = void> R ReplacePlace(Il2CppString* newName, Il2CppString* newMagic, bool newSaveable, float newPushOutRadius, Il2CppString* newSaveData) {
		return ((R (*)(EventEntity*, Il2CppString*, Il2CppString*, bool, float, Il2CppString*))(Il2CppBase() + 0x178436C))(this, newName, newMagic, newSaveable, newPushOutRadius, newSaveData);
	}
	template <typename R = void> R RemovePlace() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17844CC))(this);
	}
	template <typename R = PlayerEnterComponent*> R get_playerEnter() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17844D8))(this);
	}
	template <typename R = bool> R get_hasPlayerEnter() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784560))(this);
	}
	template <typename R = void> R AddPlayerEnter(bool newCreation) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x178456C))(this, newCreation);
	}
	template <typename R = void> R ReplacePlayerEnter(bool newCreation) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1784674))(this, newCreation);
	}
	template <typename R = void> R RemovePlayerEnter() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178477C))(this);
	}
	template <typename R = bool> R get_isPlayerGuildChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784788))(this);
	}
	template <typename R = void> R set_isPlayerGuildChanged(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x1784794))(this, value);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17848AC))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784934))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784940))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784A44))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784B48))(this);
	}
	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784B54))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784BDC))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(EventEntity*, float, float))(Il2CppBase() + 0x1784BE8))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(EventEntity*, float, float))(Il2CppBase() + 0x1784CF0))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784DF8))(this);
	}
	template <typename R = ProgressComponent*> R get_progress() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784E04))(this);
	}
	template <typename R = bool> R get_hasProgress() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1784E8C))(this);
	}
	template <typename R = void> R AddProgress(int32_t newValue) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784E98))(this, newValue);
	}
	template <typename R = void> R ReplaceProgress(int32_t newValue) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784F9C))(this, newValue);
	}
	template <typename R = void> R RemoveProgress() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17850A0))(this);
	}
	template <typename R = bool> R get_isQuestTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17850AC))(this);
	}
	template <typename R = void> R set_isQuestTarget(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x17850B8))(this, value);
	}
	template <typename R = bool> R get_isQuestsChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17851D0))(this);
	}
	template <typename R = void> R set_isQuestsChanged(bool value) {
		return ((R (*)(EventEntity*, bool))(Il2CppBase() + 0x17851DC))(this, value);
	}
	template <typename R = RoomComponent*> R get_room() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17852F4))(this);
	}
	template <typename R = bool> R get_hasRoom() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178537C))(this);
	}
	template <typename R = void> R AddRoom(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1785388))(this, newName);
	}
	template <typename R = void> R ReplaceRoom(Il2CppString* newName) {
		return ((R (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x178549C))(this, newName);
	}
	template <typename R = void> R RemoveRoom() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17855B0))(this);
	}
	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17855BC))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785644))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1785650))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(EventEntity*, float))(Il2CppBase() + 0x1785754))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785858))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785864))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17858EC))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17858F8))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17859FC))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785B00))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785B0C))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785B94))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785BA0))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785CA4))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785DA8))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785DB4))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1785E3C))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785E48))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785F4C))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786050))(this);
	}
	template <typename R = SourceComponent*> R get_source() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178605C))(this);
	}
	template <typename R = bool> R get_hasSource() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17860E4))(this);
	}
	template <typename R = void> R AddSource(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17860F0))(this, newId);
	}
	template <typename R = void> R ReplaceSource(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17861F4))(this, newId);
	}
	template <typename R = void> R RemoveSource() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17862F8))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786304))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178638C))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(EventEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1786398))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(EventEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x17864AC))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17865C0))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17865CC))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786654))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786660))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786764))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786868))(this);
	}
	template <typename R = TargetResultComponent*> R get_targetResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786874))(this);
	}
	template <typename R = bool> R get_hasTargetResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17868FC))(this);
	}
	template <typename R = void> R AddTargetResult(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786908))(this, newId);
	}
	template <typename R = void> R ReplaceTargetResult(int32_t newId) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786A0C))(this, newId);
	}
	template <typename R = void> R RemoveTargetResult() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786B10))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786B1C))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786BA4))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786BB0))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786CB4))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786DB8))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786DC4))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1786E4C))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786E58))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786F5C))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1787060))(this);
	}
	template <typename R = VipChangedComponent*> R get_vipChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178706C))(this);
	}
	template <typename R = bool> R get_hasVipChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17870F4))(this);
	}
	template <typename R = void> R AddVipChanged(VipBonusType newType) {
		return ((R (*)(EventEntity*, VipBonusType))(Il2CppBase() + 0x1787100))(this, newType);
	}
	template <typename R = void> R ReplaceVipChanged(VipBonusType newType) {
		return ((R (*)(EventEntity*, VipBonusType))(Il2CppBase() + 0x1787204))(this, newType);
	}
	template <typename R = void> R RemoveVipChanged() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1787308))(this);
	}
	template <typename R = WaveItemComponent*> R get_waveItem() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x1787314))(this);
	}
	template <typename R = bool> R get_hasWaveItem() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x178739C))(this);
	}
	template <typename R = void> R AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(EventEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x17873A8))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(EventEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x17874C4))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R RemoveWaveItem() {
		return ((R (*)(EventEntity*))(Il2CppBase() + 0x17875E0))(this);
	}

};

