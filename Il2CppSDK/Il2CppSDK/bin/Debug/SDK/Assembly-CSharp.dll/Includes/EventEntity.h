#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventEntity"));
	}

	template <typename T = uintptr_t> static T& aliveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& applyMoveBuildComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& applyRemoveBuildComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& applyResurrectComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& applyUpgradeBuildComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& currencyChangedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& newComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& playerGuildChangedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& questTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& questsChangedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T get_actionId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177781C))(this);
	}
	template <typename T = bool> T get_hasActionId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17778A4))(this);
	}
	template <typename T = void> T AddActionId(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17778B0))(this, newId);
	}
	template <typename T = void> T ReplaceActionId(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17779B4))(this, newId);
	}
	template <typename T = void> T RemoveActionId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777AB8))(this);
	}
	template <typename T = uintptr_t> T get_actionType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777AC4))(this);
	}
	template <typename T = bool> T get_hasActionType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777B4C))(this);
	}
	template <typename T = void> T AddActionType(uintptr_t newValue) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1777B58))(this, newValue);
	}
	template <typename T = void> T ReplaceActionType(uintptr_t newValue) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1777C5C))(this, newValue);
	}
	template <typename T = void> T RemoveActionType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777D60))(this);
	}
	template <typename T = uintptr_t> T get_actor() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777D6C))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1777DF4))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1777E00))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1777F04))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778008))(this);
	}
	template <typename T = uintptr_t> T get_addExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778014))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177809C))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x17780A8))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x17781AC))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17782B0))(this);
	}
	template <typename T = uintptr_t> T get_addPetExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17782BC))(this);
	}
	template <typename T = bool> T get_hasAddPetExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778344))(this);
	}
	template <typename T = void> T AddAddPetExperience(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1778350))(this, newValue);
	}
	template <typename T = void> T ReplaceAddPetExperience(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1778454))(this, newValue);
	}
	template <typename T = void> T RemoveAddPetExperience() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778558))(this);
	}
	template <typename T = uintptr_t> T get_addedResources() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778564))(this);
	}
	template <typename T = bool> T get_hasAddedResources() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17785EC))(this);
	}
	template <typename T = void> T AddAddedResources(Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17785F8))(this, newResources);
	}
	template <typename T = void> T ReplaceAddedResources(Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x177870C))(this, newResources);
	}
	template <typename T = void> T RemoveAddedResources() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778820))(this);
	}
	template <typename T = uintptr_t> T get_aggroTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177882C))(this);
	}
	template <typename T = bool> T get_hasAggroTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17788B4))(this);
	}
	template <typename T = void> T AddAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(EventEntity*, int32_t, bool))(Il2CppBase() + 0x17788C0))(this, newId, newMovable);
	}
	template <typename T = void> T ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(EventEntity*, int32_t, bool))(Il2CppBase() + 0x17789D0))(this, newId, newMovable);
	}
	template <typename T = void> T RemoveAggroTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778AE0))(this);
	}
	template <typename T = bool> T get_isAlive() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778AEC))(this);
	}
	template <typename T = void> T set_isAlive(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1778AF8))(this, value);
	}
	template <typename T = uintptr_t> T get_alvesBpPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778C10))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778C98))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778CA4))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778DA8))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778EAC))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT1() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778EB8))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1778F40))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1778F4C))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1779050))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779154))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT2() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779160))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17791E8))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17791F4))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17792F8))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17793FC))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT3() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779408))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779490))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177949C))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17795A0))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17796A4))(this);
	}
	template <typename T = uintptr_t> T get_applyBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17796B0))(this);
	}
	template <typename T = bool> T get_hasApplyBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779738))(this);
	}
	template <typename T = void> T AddApplyBuild(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1779744))(this, newName);
	}
	template <typename T = void> T ReplaceApplyBuild(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1779858))(this, newName);
	}
	template <typename T = void> T RemoveApplyBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177996C))(this);
	}
	template <typename T = uintptr_t> T get_applyHeal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779978))(this);
	}
	template <typename T = bool> T get_hasApplyHeal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779A00))(this);
	}
	template <typename T = void> T AddApplyHeal(float newDelay, uintptr_t newParams) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1779A0C))(this, newDelay, newParams);
	}
	template <typename T = void> T ReplaceApplyHeal(float newDelay, uintptr_t newParams) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1779B24))(this, newDelay, newParams);
	}
	template <typename T = void> T RemoveApplyHeal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779C3C))(this);
	}
	template <typename T = uintptr_t> T get_applyLockUnlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779C48))(this);
	}
	template <typename T = bool> T get_hasApplyLockUnlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779CD0))(this);
	}
	template <typename T = void> T AddApplyLockUnlock(bool newUnlock) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1779CDC))(this, newUnlock);
	}
	template <typename T = void> T ReplaceApplyLockUnlock(bool newUnlock) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1779DE4))(this, newUnlock);
	}
	template <typename T = void> T RemoveApplyLockUnlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779EEC))(this);
	}
	template <typename T = bool> T get_isApplyMoveBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1779EF8))(this);
	}
	template <typename T = void> T set_isApplyMoveBuild(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1779F04))(this, value);
	}
	template <typename T = uintptr_t> T get_applyPickup() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A01C))(this);
	}
	template <typename T = bool> T get_hasApplyPickup() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A0A4))(this);
	}
	template <typename T = void> T AddApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(EventEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x177A0B0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T ReplaceApplyPickup(Il2CppString* newRandomGroup, int32_t newCount, bool newDestroy) {
		return ((T (*)(EventEntity*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x177A1E0))(this, newRandomGroup, newCount, newDestroy);
	}
	template <typename T = void> T RemoveApplyPickup() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A310))(this);
	}
	template <typename T = uintptr_t> T get_applyPlayerKill() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A31C))(this);
	}
	template <typename T = bool> T get_hasApplyPlayerKill() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A3A4))(this);
	}
	template <typename T = void> T AddApplyPlayerKill(bool newValue) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A3B0))(this, newValue);
	}
	template <typename T = void> T ReplaceApplyPlayerKill(bool newValue) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A4B8))(this, newValue);
	}
	template <typename T = void> T RemoveApplyPlayerKill() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A5C0))(this);
	}
	template <typename T = bool> T get_isApplyRemoveBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A5CC))(this);
	}
	template <typename T = void> T set_isApplyRemoveBuild(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A5D8))(this, value);
	}
	template <typename T = bool> T get_isApplyResurrect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A6F0))(this);
	}
	template <typename T = void> T set_isApplyResurrect(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A6FC))(this, value);
	}
	template <typename T = uintptr_t> T get_applyTakeBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A814))(this);
	}
	template <typename T = bool> T get_hasApplyTakeBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177A89C))(this);
	}
	template <typename T = void> T AddApplyTakeBuild(bool newDisassemble) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A8A8))(this, newDisassemble);
	}
	template <typename T = void> T ReplaceApplyTakeBuild(bool newDisassemble) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177A9B0))(this, newDisassemble);
	}
	template <typename T = void> T RemoveApplyTakeBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AAB8))(this);
	}
	template <typename T = uintptr_t> T get_applyTenacityRegeneration() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AAC4))(this);
	}
	template <typename T = bool> T get_hasApplyTenacityRegeneration() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AB4C))(this);
	}
	template <typename T = void> T AddApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(EventEntity*, bool, float))(Il2CppBase() + 0x177AB58))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T ReplaceApplyTenacityRegeneration(bool newDependsOnMaxTenacity, float newValue) {
		return ((T (*)(EventEntity*, bool, float))(Il2CppBase() + 0x177AC70))(this, newDependsOnMaxTenacity, newValue);
	}
	template <typename T = void> T RemoveApplyTenacityRegeneration() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AD88))(this);
	}
	template <typename T = bool> T get_isApplyUpgradeBuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AD94))(this);
	}
	template <typename T = void> T set_isApplyUpgradeBuild(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177ADA0))(this, value);
	}
	template <typename T = uintptr_t> T get_armingWeapon() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AEB8))(this);
	}
	template <typename T = bool> T get_hasArmingWeapon() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177AF40))(this);
	}
	template <typename T = void> T AddArmingWeapon(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177AF4C))(this, newName);
	}
	template <typename T = void> T ReplaceArmingWeapon(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177B060))(this, newName);
	}
	template <typename T = void> T RemoveArmingWeapon() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B174))(this);
	}
	template <typename T = uintptr_t> T get_autoDestruction() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B180))(this);
	}
	template <typename T = bool> T get_hasAutoDestruction() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B208))(this);
	}
	template <typename T = void> T AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(EventEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x177B214))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(EventEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x177B35C))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T RemoveAutoDestruction() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B4A4))(this);
	}
	template <typename T = uintptr_t> T get_bind() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B4B0))(this);
	}
	template <typename T = bool> T get_hasBind() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B538))(this);
	}
	template <typename T = void> T AddBind(uintptr_t newTarget) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177B544))(this, newTarget);
	}
	template <typename T = void> T ReplaceBind(uintptr_t newTarget) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177B648))(this, newTarget);
	}
	template <typename T = void> T RemoveBind() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B74C))(this);
	}
	template <typename T = uintptr_t> T get_cashbackCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B758))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B7E0))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177B7EC))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177B8F0))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177B9F4))(this);
	}
	template <typename T = uintptr_t> T get_changeTargetCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BA00))(this);
	}
	template <typename T = bool> T get_hasChangeTargetCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BA88))(this);
	}
	template <typename T = void> T AddChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(EventEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x177BA94))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T ReplaceChangeTargetCooldown(bool newPerHpDmgPercent, float newValue, Il2CppString* newItemTag) {
		return ((T (*)(EventEntity*, bool, float, Il2CppString*))(Il2CppBase() + 0x177BBC4))(this, newPerHpDmgPercent, newValue, newItemTag);
	}
	template <typename T = void> T RemoveChangeTargetCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BCF4))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BD00))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BD88))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177BD94))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177BE98))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BF9C))(this);
	}
	template <typename T = uintptr_t> T get_coins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177BFA8))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C030))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177C03C))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177C140))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C244))(this);
	}
	template <typename T = uintptr_t> T get_craftBluenprint() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C250))(this);
	}
	template <typename T = bool> T get_hasCraftBluenprint() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C2D8))(this);
	}
	template <typename T = void> T AddCraftBluenprint(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C2E4))(this, newName);
	}
	template <typename T = void> T ReplaceCraftBluenprint(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C3F8))(this, newName);
	}
	template <typename T = void> T RemoveCraftBluenprint() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C50C))(this);
	}
	template <typename T = uintptr_t> T get_craftResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C518))(this);
	}
	template <typename T = bool> T get_hasCraftResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C5A0))(this);
	}
	template <typename T = void> T AddCraftResult(Il2CppString* newType) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C5AC))(this, newType);
	}
	template <typename T = void> T ReplaceCraftResult(Il2CppString* newType) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x177C6C0))(this, newType);
	}
	template <typename T = void> T RemoveCraftResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C7D4))(this);
	}
	template <typename T = uintptr_t> T get_creationTime() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C7E0))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177C868))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177C874))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x177C978))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CA7C))(this);
	}
	template <typename T = bool> T get_isCurrencyChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CA88))(this);
	}
	template <typename T = void> T set_isCurrencyChanged(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x177CA94))(this, value);
	}
	template <typename T = uintptr_t> T get_cyclicPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CBAC))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CC34))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CC40))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CD44))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CE48))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPremiumTokens() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CE54))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177CEDC))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CEE8))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177CFEC))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D0F0))(this);
	}
	template <typename T = uintptr_t> T get_cyclicYmirSoul() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D0FC))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D184))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177D190))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177D294))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D398))(this);
	}
	template <typename T = uintptr_t> T get_damageBlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D3A4))(this);
	}
	template <typename T = bool> T get_hasDamageBlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D42C))(this);
	}
	template <typename T = void> T AddDamageBlock(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x177D438))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageBlock(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x177D54C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageBlock() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D660))(this);
	}
	template <typename T = uintptr_t> T get_damageCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D66C))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D6F4))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177D700))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177D804))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D908))(this);
	}
	template <typename T = uintptr_t> T get_damage() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D914))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177D99C))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177D9A8))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177DAAC))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DBB0))(this);
	}
	template <typename T = uintptr_t> T get_damageConfig() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DBBC))(this);
	}
	template <typename T = bool> T get_hasDamageConfig() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DC44))(this);
	}
	template <typename T = void> T AddDamageConfig(uintptr_t newValue, float newMaxTargetHealthCoef) {
		return ((T (*)(EventEntity*, uintptr_t, float))(Il2CppBase() + 0x177DC50))(this, newValue, newMaxTargetHealthCoef);
	}
	template <typename T = void> T ReplaceDamageConfig(uintptr_t newValue, float newMaxTargetHealthCoef) {
		return ((T (*)(EventEntity*, uintptr_t, float))(Il2CppBase() + 0x177DD74))(this, newValue, newMaxTargetHealthCoef);
	}
	template <typename T = void> T RemoveDamageConfig() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DE98))(this);
	}
	template <typename T = uintptr_t> T get_damageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DEA4))(this);
	}
	template <typename T = bool> T get_hasDamageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177DF2C))(this);
	}
	template <typename T = void> T AddDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x177DF38))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x177E04C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDamageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E160))(this);
	}
	template <typename T = uintptr_t> T get_damageResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E16C))(this);
	}
	template <typename T = bool> T get_hasDamageResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E1F4))(this);
	}
	template <typename T = void> T AddDamageResult(uintptr_t newParams) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177E200))(this, newParams);
	}
	template <typename T = void> T ReplaceDamageResult(uintptr_t newParams) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177E32C))(this, newParams);
	}
	template <typename T = void> T RemoveDamageResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E458))(this);
	}
	template <typename T = uintptr_t> T get_damageStat() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E464))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E4EC))(this);
	}
	template <typename T = void> T AddDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(EventEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x177E4F8))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(EventEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x177E6BC))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E880))(this);
	}
	template <typename T = uintptr_t> T get_damageType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E88C))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177E914))(this);
	}
	template <typename T = void> T AddDamageType(uintptr_t newValue) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177E920))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(uintptr_t newValue) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x177EA24))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EB28))(this);
	}
	template <typename T = uintptr_t> T get_delay() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EB34))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EBBC))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177EBC8))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x177ECCC))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EDD0))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsA() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EDDC))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177EE64))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177EE70))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177EF74))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F078))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsB() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F084))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F10C))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F118))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F21C))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F320))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsC() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F32C))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F3B4))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F3C0))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F4C4))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F5C8))(this);
	}
	template <typename T = uintptr_t> T get_extraLevelCap() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F5D4))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F65C))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F668))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F76C))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F870))(this);
	}
	template <typename T = uintptr_t> T get_giantReputation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F87C))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177F904))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177F910))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FA14))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FB18))(this);
	}
	template <typename T = uintptr_t> T get_guildBossCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FB24))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FBAC))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FBB8))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FCBC))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FDC0))(this);
	}
	template <typename T = uintptr_t> T get_guildCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FDCC))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x177FE54))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FE60))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x177FF64))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780068))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780074))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17800FC))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1780108))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x178020C))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780310))(this);
	}
	template <typename T = uintptr_t> T get_guildQuest() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178031C))(this);
	}
	template <typename T = bool> T get_hasGuildQuest() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17803A4))(this);
	}
	template <typename T = void> T AddGuildQuest(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x17803B0))(this, newId);
	}
	template <typename T = void> T ReplaceGuildQuest(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x17804B4))(this, newId);
	}
	template <typename T = void> T RemoveGuildQuest() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17805B8))(this);
	}
	template <typename T = uintptr_t> T get_heal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17805C4))(this);
	}
	template <typename T = bool> T get_hasHeal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178064C))(this);
	}
	template <typename T = void> T AddHeal(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1780658))(this, newValue);
	}
	template <typename T = void> T ReplaceHeal(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x178075C))(this, newValue);
	}
	template <typename T = void> T RemoveHeal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780860))(this);
	}
	template <typename T = uintptr_t> T get_healResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178086C))(this);
	}
	template <typename T = bool> T get_hasHealResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17808F4))(this);
	}
	template <typename T = void> T AddHealResult(uintptr_t newParams) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1780900))(this, newParams);
	}
	template <typename T = void> T ReplaceHealResult(uintptr_t newParams) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1780A08))(this, newParams);
	}
	template <typename T = void> T RemoveHealResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780B10))(this);
	}
	template <typename T = uintptr_t> T get_healthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780B1C))(this);
	}
	template <typename T = bool> T get_hasHealthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780BA4))(this);
	}
	template <typename T = void> T AddHealthCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1780BB0))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1780CB4))(this, newValue);
	}
	template <typename T = void> T RemoveHealthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780DB8))(this);
	}
	template <typename T = uintptr_t> T get_hitActionEffect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780DC4))(this);
	}
	template <typename T = bool> T get_hasHitActionEffect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1780E4C))(this);
	}
	template <typename T = void> T AddHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1780E58))(this, newNames);
	}
	template <typename T = void> T ReplaceHitActionEffect(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1780F6C))(this, newNames);
	}
	template <typename T = void> T RemoveHitActionEffect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781080))(this);
	}
	template <typename T = uintptr_t> T get_hitActorCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178108C))(this);
	}
	template <typename T = bool> T get_hasHitActorCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781114))(this);
	}
	template <typename T = void> T AddHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(EventEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1781120))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T ReplaceHitActorCooldown(bool newKilled, Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(EventEntity*, bool, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x178125C))(this, newKilled, newValues, newTags);
	}
	template <typename T = void> T RemoveHitActorCooldown() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781398))(this);
	}
	template <typename T = uintptr_t> T get_hitActorMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17813A4))(this);
	}
	template <typename T = bool> T get_hasHitActorMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178142C))(this);
	}
	template <typename T = void> T AddHitActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(EventEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1781438))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitActorMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(EventEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x17815A0))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitActorMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781708))(this);
	}
	template <typename T = uintptr_t> T get_hitTargetMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781714))(this);
	}
	template <typename T = bool> T get_hasHitTargetMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178179C))(this);
	}
	template <typename T = void> T AddHitTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(EventEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x17817A8))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceHitTargetMagic(bool newIgnoreActorParent, uintptr_t newMagicSource, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(EventEntity*, bool, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x1781910))(this, newIgnoreActorParent, newMagicSource, newName, newNames, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveHitTargetMagic() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781A78))(this);
	}
	template <typename T = uintptr_t> T get_ignoreArmorPercent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781A84))(this);
	}
	template <typename T = bool> T get_hasIgnoreArmorPercent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781B0C))(this);
	}
	template <typename T = void> T AddIgnoreArmorPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1781B18))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceIgnoreArmorPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1781C2C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveIgnoreArmorPercent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781D40))(this);
	}
	template <typename T = uintptr_t> T get_influence() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781D4C))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781DD4))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1781DE0))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1781EE4))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781FE8))(this);
	}
	template <typename T = uintptr_t> T get_inventoryChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1781FF4))(this);
	}
	template <typename T = bool> T get_hasInventoryChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178207C))(this);
	}
	template <typename T = void> T AddInventoryChanged(uintptr_t newType) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1782088))(this, newType);
	}
	template <typename T = void> T ReplaceInventoryChanged(uintptr_t newType) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x178218C))(this, newType);
	}
	template <typename T = void> T RemoveInventoryChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782290))(this);
	}
	template <typename T = uintptr_t> T get_inventoryIndex() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178229C))(this);
	}
	template <typename T = bool> T get_hasInventoryIndex() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782324))(this);
	}
	template <typename T = void> T AddInventoryIndex(int32_t newValue) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782330))(this, newValue);
	}
	template <typename T = void> T ReplaceInventoryIndex(int32_t newValue) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782434))(this, newValue);
	}
	template <typename T = void> T RemoveInventoryIndex() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782538))(this);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782544))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17825CC))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x17825D8))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x17826EC))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782800))(this);
	}
	template <typename T = uintptr_t> T get_lifeSteal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178280C))(this);
	}
	template <typename T = bool> T get_hasLifeSteal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782894))(this);
	}
	template <typename T = void> T AddLifeSteal(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x17828A0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceLifeSteal(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x17829B4))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveLifeSteal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782AC8))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782AD4))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782B5C))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782B68))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1782C6C))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782D70))(this);
	}
	template <typename T = uintptr_t> T get_maxDamageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782D7C))(this);
	}
	template <typename T = bool> T get_hasMaxDamageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1782E04))(this);
	}
	template <typename T = void> T AddMaxDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1782E10))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMaxDamageReflect(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1782F24))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMaxDamageReflect() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783038))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783044))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17830CC))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x17830D8))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x17831DC))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17832E0))(this);
	}
	template <typename T = bool> T get_isNew() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17832EC))(this);
	}
	template <typename T = void> T set_isNew(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x17832F8))(this, value);
	}
	template <typename T = uintptr_t> T get_orientation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783410))(this);
	}
	template <typename T = bool> T get_hasOrientation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783498))(this);
	}
	template <typename T = void> T AddOrientation(unsigned char newValue) {
		return ((T (*)(EventEntity*, unsigned char))(Il2CppBase() + 0x17834A4))(this, newValue);
	}
	template <typename T = void> T ReplaceOrientation(unsigned char newValue) {
		return ((T (*)(EventEntity*, unsigned char))(Il2CppBase() + 0x17835A8))(this, newValue);
	}
	template <typename T = void> T RemoveOrientation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17836AC))(this);
	}
	template <typename T = uintptr_t> T get_outcomingHealBonus() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17836B8))(this);
	}
	template <typename T = bool> T get_hasOutcomingHealBonus() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783740))(this);
	}
	template <typename T = void> T AddOutcomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x178374C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceOutcomingHealBonus(float newValue, uintptr_t newGroup) {
		return ((T (*)(EventEntity*, float, uintptr_t))(Il2CppBase() + 0x1783860))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveOutcomingHealBonus() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783974))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783980))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783A08))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783A14))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783B18))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783C1C))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783C28))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783CB0))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1783CBC))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1783DC0))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783EC4))(this);
	}
	template <typename T = uintptr_t> T get_personal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783ED0))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1783F58))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1783F64))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(EventEntity*, int64_t))(Il2CppBase() + 0x1784068))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178416C))(this);
	}
	template <typename T = uintptr_t> T get_place() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784178))(this);
	}
	template <typename T = bool> T get_hasPlace() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784200))(this);
	}
	template <typename T = void> T AddPlace(Il2CppString* newName, Il2CppString* newMagic, bool newSaveable, float newPushOutRadius, Il2CppString* newSaveData) {
		return ((T (*)(EventEntity*, Il2CppString*, Il2CppString*, bool, float, Il2CppString*))(Il2CppBase() + 0x178420C))(this, newName, newMagic, newSaveable, newPushOutRadius, newSaveData);
	}
	template <typename T = void> T ReplacePlace(Il2CppString* newName, Il2CppString* newMagic, bool newSaveable, float newPushOutRadius, Il2CppString* newSaveData) {
		return ((T (*)(EventEntity*, Il2CppString*, Il2CppString*, bool, float, Il2CppString*))(Il2CppBase() + 0x178436C))(this, newName, newMagic, newSaveable, newPushOutRadius, newSaveData);
	}
	template <typename T = void> T RemovePlace() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17844CC))(this);
	}
	template <typename T = uintptr_t> T get_playerEnter() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17844D8))(this);
	}
	template <typename T = bool> T get_hasPlayerEnter() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784560))(this);
	}
	template <typename T = void> T AddPlayerEnter(bool newCreation) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x178456C))(this, newCreation);
	}
	template <typename T = void> T ReplacePlayerEnter(bool newCreation) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1784674))(this, newCreation);
	}
	template <typename T = void> T RemovePlayerEnter() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178477C))(this);
	}
	template <typename T = bool> T get_isPlayerGuildChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784788))(this);
	}
	template <typename T = void> T set_isPlayerGuildChanged(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x1784794))(this, value);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17848AC))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784934))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784940))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784A44))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784B48))(this);
	}
	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784B54))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784BDC))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(EventEntity*, float, float))(Il2CppBase() + 0x1784BE8))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(EventEntity*, float, float))(Il2CppBase() + 0x1784CF0))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784DF8))(this);
	}
	template <typename T = uintptr_t> T get_progress() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784E04))(this);
	}
	template <typename T = bool> T get_hasProgress() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1784E8C))(this);
	}
	template <typename T = void> T AddProgress(int32_t newValue) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784E98))(this, newValue);
	}
	template <typename T = void> T ReplaceProgress(int32_t newValue) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1784F9C))(this, newValue);
	}
	template <typename T = void> T RemoveProgress() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17850A0))(this);
	}
	template <typename T = bool> T get_isQuestTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17850AC))(this);
	}
	template <typename T = void> T set_isQuestTarget(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x17850B8))(this, value);
	}
	template <typename T = bool> T get_isQuestsChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17851D0))(this);
	}
	template <typename T = void> T set_isQuestsChanged(bool value) {
		return ((T (*)(EventEntity*, bool))(Il2CppBase() + 0x17851DC))(this, value);
	}
	template <typename T = uintptr_t> T get_room() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17852F4))(this);
	}
	template <typename T = bool> T get_hasRoom() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178537C))(this);
	}
	template <typename T = void> T AddRoom(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x1785388))(this, newName);
	}
	template <typename T = void> T ReplaceRoom(Il2CppString* newName) {
		return ((T (*)(EventEntity*, Il2CppString*))(Il2CppBase() + 0x178549C))(this, newName);
	}
	template <typename T = void> T RemoveRoom() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17855B0))(this);
	}
	template <typename T = uintptr_t> T get_rotation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17855BC))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785644))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1785650))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(EventEntity*, float))(Il2CppBase() + 0x1785754))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785858))(this);
	}
	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785864))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17858EC))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17858F8))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17859FC))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785B00))(this);
	}
	template <typename T = uintptr_t> T get_seasonPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785B0C))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785B94))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785BA0))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785CA4))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785DA8))(this);
	}
	template <typename T = uintptr_t> T get_silver() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785DB4))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1785E3C))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785E48))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1785F4C))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786050))(this);
	}
	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178605C))(this);
	}
	template <typename T = bool> T get_hasSource() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17860E4))(this);
	}
	template <typename T = void> T AddSource(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17860F0))(this, newId);
	}
	template <typename T = void> T ReplaceSource(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x17861F4))(this, newId);
	}
	template <typename T = void> T RemoveSource() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17862F8))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786304))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178638C))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1786398))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(EventEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x17864AC))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17865C0))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17865CC))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786654))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786660))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786764))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786868))(this);
	}
	template <typename T = uintptr_t> T get_targetResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786874))(this);
	}
	template <typename T = bool> T get_hasTargetResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17868FC))(this);
	}
	template <typename T = void> T AddTargetResult(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786908))(this, newId);
	}
	template <typename T = void> T ReplaceTargetResult(int32_t newId) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786A0C))(this, newId);
	}
	template <typename T = void> T RemoveTargetResult() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786B10))(this);
	}
	template <typename T = uintptr_t> T get_tickets() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786B1C))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786BA4))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786BB0))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786CB4))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786DB8))(this);
	}
	template <typename T = uintptr_t> T get_vIPPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786DC4))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1786E4C))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786E58))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(EventEntity*, int32_t))(Il2CppBase() + 0x1786F5C))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1787060))(this);
	}
	template <typename T = uintptr_t> T get_vipChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178706C))(this);
	}
	template <typename T = bool> T get_hasVipChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17870F4))(this);
	}
	template <typename T = void> T AddVipChanged(uintptr_t newType) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1787100))(this, newType);
	}
	template <typename T = void> T ReplaceVipChanged(uintptr_t newType) {
		return ((T (*)(EventEntity*, uintptr_t))(Il2CppBase() + 0x1787204))(this, newType);
	}
	template <typename T = void> T RemoveVipChanged() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1787308))(this);
	}
	template <typename T = uintptr_t> T get_waveItem() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x1787314))(this);
	}
	template <typename T = bool> T get_hasWaveItem() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x178739C))(this);
	}
	template <typename T = void> T AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(EventEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x17873A8))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(EventEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x17874C4))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T RemoveWaveItem() {
		return ((T (*)(EventEntity*))(Il2CppBase() + 0x17875E0))(this);
	}

};

}
