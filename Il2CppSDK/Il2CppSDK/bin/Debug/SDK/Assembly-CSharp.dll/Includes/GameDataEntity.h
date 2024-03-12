#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataEntity"));
	}

	template <typename T = uintptr_t> static T& activateOnLocationLockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& autoAttackComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& autoModeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& autoOpenDoorComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& buildBlockerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& canTravelComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& clickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& creepComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& disabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& draggedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& explodeOnDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& externalInventoryComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& fakeBaseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& findViewInSceneComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& followTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& hideBagComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& hideHeadComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& hidePetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& inventoryLockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& mannequinComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& mapPointComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& moveToTargetPositionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& noAutoModeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& notAggressiveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& notInteractableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& notPursuitTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& notSelectableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& onDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& onGroundComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& playerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& playerKillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& saveableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& shieldTotemComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& unlockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& wallCollisionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10546A8))(this);
	}
	template <typename T = uintptr_t> T get_aFKMove() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10547E0))(this);
	}
	template <typename T = bool> T get_hasAFKMove() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054868))(this);
	}
	template <typename T = void> T AddAFKMove(int64_t newTick) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1054874))(this, newTick);
	}
	template <typename T = void> T ReplaceAFKMove(int64_t newTick) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1054978))(this, newTick);
	}
	template <typename T = void> T RemoveAFKMove() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054A7C))(this);
	}
	template <typename T = uintptr_t> T get_aFKTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054A88))(this);
	}
	template <typename T = bool> T get_hasAFKTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054B10))(this);
	}
	template <typename T = void> T AddAFKTrigger(bool newMove) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054B1C))(this, newMove);
	}
	template <typename T = void> T ReplaceAFKTrigger(bool newMove) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054C24))(this, newMove);
	}
	template <typename T = void> T RemoveAFKTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054D2C))(this);
	}
	template <typename T = uintptr_t> T get_aIBattle() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054D38))(this);
	}
	template <typename T = bool> T get_hasAIBattle() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054DC0))(this);
	}
	template <typename T = void> T AddAIBattle(Il2CppString* newGroupTag, bool newStartInEvade, float newEvadeDelay, Il2CppArray<uintptr_t>* newEvadeMagics, Il2CppString* newEvadeItem, Il2CppArray<uintptr_t>* newDefaultActiveTargets, Il2CppArray<uintptr_t>* newPhases, Il2CppArray<uintptr_t>* newWeapons, float newWeaponSwitchCooldown, Il2CppArray<uintptr_t>* newSchedule, Il2CppArray<uintptr_t>* newDeathActiveTargets, bool newDestroyChildren) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1054DCC))(this, newGroupTag, newStartInEvade, newEvadeDelay, newEvadeMagics, newEvadeItem, newDefaultActiveTargets, newPhases, newWeapons, newWeaponSwitchCooldown, newSchedule, newDeathActiveTargets, newDestroyChildren);
	}
	template <typename T = void> T ReplaceAIBattle(Il2CppString* newGroupTag, bool newStartInEvade, float newEvadeDelay, Il2CppArray<uintptr_t>* newEvadeMagics, Il2CppString* newEvadeItem, Il2CppArray<uintptr_t>* newDefaultActiveTargets, Il2CppArray<uintptr_t>* newPhases, Il2CppArray<uintptr_t>* newWeapons, float newWeaponSwitchCooldown, Il2CppArray<uintptr_t>* newSchedule, Il2CppArray<uintptr_t>* newDeathActiveTargets, bool newDestroyChildren) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1054FC4))(this, newGroupTag, newStartInEvade, newEvadeDelay, newEvadeMagics, newEvadeItem, newDefaultActiveTargets, newPhases, newWeapons, newWeaponSwitchCooldown, newSchedule, newDeathActiveTargets, newDestroyChildren);
	}
	template <typename T = void> T RemoveAIBattle() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10551BC))(this);
	}
	template <typename T = uintptr_t> T get_aIBattleSource() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10551C8))(this);
	}
	template <typename T = bool> T get_hasAIBattleSource() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055250))(this);
	}
	template <typename T = void> T AddAIBattleSource(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x105525C))(this, newId);
	}
	template <typename T = void> T ReplaceAIBattleSource(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1055360))(this, newId);
	}
	template <typename T = void> T RemoveAIBattleSource() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055464))(this);
	}
	template <typename T = uintptr_t> T get_aIBattleState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055470))(this);
	}
	template <typename T = bool> T get_hasAIBattleState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10554F8))(this);
	}
	template <typename T = void> T AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(GameDataEntity*, int32_t, int64_t))(Il2CppBase() + 0x1055504))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(GameDataEntity*, int32_t, int64_t))(Il2CppBase() + 0x1055610))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T RemoveAIBattleState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105571C))(this);
	}
	template <typename T = uintptr_t> T get_aIBattleTracker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055728))(this);
	}
	template <typename T = bool> T get_hasAIBattleTracker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10557B0))(this);
	}
	template <typename T = void> T AddAIBattleTracker(uintptr_t newEnrage, Il2CppString* newCaption, Il2CppString* newIcon, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10557BC))(this, newEnrage, newCaption, newIcon, newMagics);
	}
	template <typename T = void> T ReplaceAIBattleTracker(uintptr_t newEnrage, Il2CppString* newCaption, Il2CppString* newIcon, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1055914))(this, newEnrage, newCaption, newIcon, newMagics);
	}
	template <typename T = void> T RemoveAIBattleTracker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055A6C))(this);
	}
	template <typename T = uintptr_t> T get_aIEvadeTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055A78))(this);
	}
	template <typename T = bool> T get_hasAIEvadeTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055B00))(this);
	}
	template <typename T = void> T AddAIEvadeTime(int64_t newTicks) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1055B0C))(this, newTicks);
	}
	template <typename T = void> T ReplaceAIEvadeTime(int64_t newTicks) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1055C10))(this, newTicks);
	}
	template <typename T = void> T RemoveAIEvadeTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055D14))(this);
	}
	template <typename T = uintptr_t> T get_aIPocketsState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055D20))(this);
	}
	template <typename T = bool> T get_hasAIPocketsState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1055DA8))(this);
	}
	template <typename T = void> T AddAIPocketsState(uintptr_t newPocket1, uintptr_t newPocket2, uintptr_t newPocket3, uintptr_t newSkill1, uintptr_t newSkill2, uintptr_t newSkill3, uintptr_t newSkill4, uintptr_t newSkill5) {
		return ((T (*)(GameDataEntity*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1055DB4))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T ReplaceAIPocketsState(uintptr_t newPocket1, uintptr_t newPocket2, uintptr_t newPocket3, uintptr_t newSkill1, uintptr_t newSkill2, uintptr_t newSkill3, uintptr_t newSkill4, uintptr_t newSkill5) {
		return ((T (*)(GameDataEntity*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1055F6C))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T RemoveAIPocketsState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056124))(this);
	}
	template <typename T = uintptr_t> T get_accumulativeExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056130))(this);
	}
	template <typename T = bool> T get_hasAccumulativeExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10561B8))(this);
	}
	template <typename T = void> T AddAccumulativeExchange(Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newFilters, Il2CppArray<uintptr_t>* newRewards, uintptr_t newAccumulativeReward, bool newConsiderDurability, int32_t newSecondsToComplete, int32_t newSpeedUpCurrencyCount, Il2CppString* newAnalyticEvent, Il2CppString* newEffect, Il2CppString* newInfoText, Il2CppString* newWindowIcon, Il2CppString* newWindowDesk, Il2CppString* newUseButtonText, Il2CppString* newGetRewardButtonText, Il2CppString* newSpeedUpButtonText, Il2CppString* newWaitTillEndWarningText, Il2CppString* newTakeRewardWarningText) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, bool, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10561C4))(this, newResources, newFilters, newRewards, newAccumulativeReward, newConsiderDurability, newSecondsToComplete, newSpeedUpCurrencyCount, newAnalyticEvent, newEffect, newInfoText, newWindowIcon, newWindowDesk, newUseButtonText, newGetRewardButtonText, newSpeedUpButtonText, newWaitTillEndWarningText, newTakeRewardWarningText);
	}
	template <typename T = void> T ReplaceAccumulativeExchange(Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newFilters, Il2CppArray<uintptr_t>* newRewards, uintptr_t newAccumulativeReward, bool newConsiderDurability, int32_t newSecondsToComplete, int32_t newSpeedUpCurrencyCount, Il2CppString* newAnalyticEvent, Il2CppString* newEffect, Il2CppString* newInfoText, Il2CppString* newWindowIcon, Il2CppString* newWindowDesk, Il2CppString* newUseButtonText, Il2CppString* newGetRewardButtonText, Il2CppString* newSpeedUpButtonText, Il2CppString* newWaitTillEndWarningText, Il2CppString* newTakeRewardWarningText) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, bool, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1056438))(this, newResources, newFilters, newRewards, newAccumulativeReward, newConsiderDurability, newSecondsToComplete, newSpeedUpCurrencyCount, newAnalyticEvent, newEffect, newInfoText, newWindowIcon, newWindowDesk, newUseButtonText, newGetRewardButtonText, newSpeedUpButtonText, newWaitTillEndWarningText, newTakeRewardWarningText);
	}
	template <typename T = void> T RemoveAccumulativeExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10566AC))(this);
	}
	template <typename T = bool> T get_isActivateOnLocationLocked() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10566B8))(this);
	}
	template <typename T = void> T set_isActivateOnLocationLocked(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10566C4))(this, value);
	}
	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10567DC))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056864))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1056870))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1056978))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056A80))(this);
	}
	template <typename T = uintptr_t> T get_activeEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056A8C))(this);
	}
	template <typename T = bool> T get_hasActiveEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056B14))(this);
	}
	template <typename T = void> T AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1056B20))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1056CBC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveActiveEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056E58))(this);
	}
	template <typename T = uintptr_t> T get_addExpByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056E64))(this);
	}
	template <typename T = bool> T get_hasAddExpByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1056EEC))(this);
	}
	template <typename T = void> T AddAddExpByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1056EF8))(this, newValues);
	}
	template <typename T = void> T ReplaceAddExpByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x105700C))(this, newValues);
	}
	template <typename T = void> T RemoveAddExpByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057120))(this);
	}
	template <typename T = uintptr_t> T get_addExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105712C))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10571B4))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10571C0))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10572C4))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10573C8))(this);
	}
	template <typename T = uintptr_t> T get_addRaidKarma() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10573D4))(this);
	}
	template <typename T = bool> T get_hasAddRaidKarma() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105745C))(this);
	}
	template <typename T = void> T AddAddRaidKarma(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1057468))(this, newValue);
	}
	template <typename T = void> T ReplaceAddRaidKarma(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x105756C))(this, newValue);
	}
	template <typename T = void> T RemoveAddRaidKarma() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057670))(this);
	}
	template <typename T = uintptr_t> T get_addStoreExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105767C))(this);
	}
	template <typename T = bool> T get_hasAddStoreExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057704))(this);
	}
	template <typename T = void> T AddAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1057710))(this, newList);
	}
	template <typename T = void> T ReplaceAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1057824))(this, newList);
	}
	template <typename T = void> T RemoveAddStoreExperience() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057938))(this);
	}
	template <typename T = uintptr_t> T get_aggroMeRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057944))(this);
	}
	template <typename T = bool> T get_hasAggroMeRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10579CC))(this);
	}
	template <typename T = void> T AddAggroMeRadius(float newValue, Il2CppString* newTargetCondition, Il2CppString* newSourceCondition) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10579D8))(this, newValue, newTargetCondition, newSourceCondition);
	}
	template <typename T = void> T ReplaceAggroMeRadius(float newValue, Il2CppString* newTargetCondition, Il2CppString* newSourceCondition) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1057B10))(this, newValue, newTargetCondition, newSourceCondition);
	}
	template <typename T = void> T RemoveAggroMeRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057C48))(this);
	}
	template <typename T = uintptr_t> T get_aggroRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057C54))(this);
	}
	template <typename T = bool> T get_hasAggroRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057CDC))(this);
	}
	template <typename T = void> T AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(GameDataEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x1057CE8))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(GameDataEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x1057E18))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T RemoveAggroRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057F48))(this);
	}
	template <typename T = uintptr_t> T get_aggroTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057F54))(this);
	}
	template <typename T = bool> T get_hasAggroTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1057FDC))(this);
	}
	template <typename T = void> T AddAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(GameDataEntity*, int32_t, bool))(Il2CppBase() + 0x1057FE8))(this, newId, newMovable);
	}
	template <typename T = void> T ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(GameDataEntity*, int32_t, bool))(Il2CppBase() + 0x10580F8))(this, newId, newMovable);
	}
	template <typename T = void> T RemoveAggroTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058208))(this);
	}
	template <typename T = uintptr_t> T get_alvesBpPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058214))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105829C))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10582A8))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10583AC))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10584B0))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10584BC))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058544))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058550))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058654))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058758))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058764))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10587EC))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10587F8))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10588FC))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058A00))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058A0C))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058A94))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058AA0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058BA4))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058CA8))(this);
	}
	template <typename T = uintptr_t> T get_angularSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058CB4))(this);
	}
	template <typename T = bool> T get_hasAngularSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058D3C))(this);
	}
	template <typename T = void> T AddAngularSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1058D48))(this, newValue);
	}
	template <typename T = void> T ReplaceAngularSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1058E4C))(this, newValue);
	}
	template <typename T = void> T RemoveAngularSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058F50))(this);
	}
	template <typename T = uintptr_t> T get_animator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058F5C))(this);
	}
	template <typename T = bool> T get_hasAnimator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1058FE4))(this);
	}
	template <typename T = void> T AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1058FF0))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1059198))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T RemoveAnimator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059340))(this);
	}
	template <typename T = uintptr_t> T get_applyOnTargetActiveEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105934C))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetActiveEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10593D4))(this);
	}
	template <typename T = void> T AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x10593E0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x105957C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetActiveEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059718))(this);
	}
	template <typename T = uintptr_t> T get_armingBackpack() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059724))(this);
	}
	template <typename T = bool> T get_hasArmingBackpack() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10597AC))(this);
	}
	template <typename T = void> T AddArmingBackpack(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10597B8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBackpack(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10598CC))(this, newName);
	}
	template <typename T = void> T RemoveArmingBackpack() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10599E0))(this);
	}
	template <typename T = uintptr_t> T get_armingBanner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10599EC))(this);
	}
	template <typename T = bool> T get_hasArmingBanner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059A74))(this);
	}
	template <typename T = void> T AddArmingBanner(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059A80))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBanner(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059B94))(this, newName);
	}
	template <typename T = void> T RemoveArmingBanner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059CA8))(this);
	}
	template <typename T = uintptr_t> T get_armingBeard() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059CB4))(this);
	}
	template <typename T = bool> T get_hasArmingBeard() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059D3C))(this);
	}
	template <typename T = void> T AddArmingBeard(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059D48))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBeard(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059E5C))(this, newName);
	}
	template <typename T = void> T RemoveArmingBeard() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059F70))(this);
	}
	template <typename T = uintptr_t> T get_armingCharm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1059F7C))(this);
	}
	template <typename T = bool> T get_hasArmingCharm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A004))(this);
	}
	template <typename T = void> T AddArmingCharm(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A010))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCharm(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A124))(this, newName);
	}
	template <typename T = void> T RemoveArmingCharm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A238))(this);
	}
	template <typename T = uintptr_t> T get_armingChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A244))(this);
	}
	template <typename T = bool> T get_hasArmingChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A2CC))(this);
	}
	template <typename T = void> T AddArmingChest(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A2D8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingChest(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A3EC))(this, newName);
	}
	template <typename T = void> T RemoveArmingChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A500))(this);
	}
	template <typename T = uintptr_t> T get_armingClass() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A50C))(this);
	}
	template <typename T = bool> T get_hasArmingClass() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A594))(this);
	}
	template <typename T = void> T AddArmingClass(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A5A0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClass(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A6B4))(this, newName);
	}
	template <typename T = void> T RemoveArmingClass() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A7C8))(this);
	}
	template <typename T = uintptr_t> T get_armingClothes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A7D4))(this);
	}
	template <typename T = bool> T get_hasArmingClothes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105A85C))(this);
	}
	template <typename T = void> T AddArmingClothes(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A868))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClothes(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A97C))(this, newName);
	}
	template <typename T = void> T RemoveArmingClothes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105AA90))(this);
	}
	template <typename T = uintptr_t> T get_armingCorpse() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105AA9C))(this);
	}
	template <typename T = bool> T get_hasArmingCorpse() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105AB24))(this);
	}
	template <typename T = void> T AddArmingCorpse(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AB30))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCorpse(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AC44))(this, newName);
	}
	template <typename T = void> T RemoveArmingCorpse() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105AD58))(this);
	}
	template <typename T = uintptr_t> T get_armingFace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105AD64))(this);
	}
	template <typename T = bool> T get_hasArmingFace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105ADEC))(this);
	}
	template <typename T = void> T AddArmingFace(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105ADF8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFace(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AF0C))(this, newName);
	}
	template <typename T = void> T RemoveArmingFace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B020))(this);
	}
	template <typename T = uintptr_t> T get_armingFeet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B02C))(this);
	}
	template <typename T = bool> T get_hasArmingFeet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B0B4))(this);
	}
	template <typename T = void> T AddArmingFeet(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B0C0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFeet(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B1D4))(this, newName);
	}
	template <typename T = void> T RemoveArmingFeet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B2E8))(this);
	}
	template <typename T = uintptr_t> T get_armingHairColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B2F4))(this);
	}
	template <typename T = bool> T get_hasArmingHairColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B37C))(this);
	}
	template <typename T = void> T AddArmingHairColor(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B388))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHairColor(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B49C))(this, newName);
	}
	template <typename T = void> T RemoveArmingHairColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B5B0))(this);
	}
	template <typename T = uintptr_t> T get_armingHair() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B5BC))(this);
	}
	template <typename T = bool> T get_hasArmingHair() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B644))(this);
	}
	template <typename T = void> T AddArmingHair(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B650))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHair(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B764))(this, newName);
	}
	template <typename T = void> T RemoveArmingHair() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B878))(this);
	}
	template <typename T = uintptr_t> T get_armingHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B884))(this);
	}
	template <typename T = bool> T get_hasArmingHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105B90C))(this);
	}
	template <typename T = void> T AddArmingHead(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B918))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHead(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BA2C))(this, newName);
	}
	template <typename T = void> T RemoveArmingHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BB40))(this);
	}
	template <typename T = uintptr_t> T get_armingLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BB4C))(this);
	}
	template <typename T = bool> T get_hasArmingLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BBD4))(this);
	}
	template <typename T = void> T AddArmingLegs(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BBE0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingLegs(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BCF4))(this, newName);
	}
	template <typename T = void> T RemoveArmingLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BE08))(this);
	}
	template <typename T = uintptr_t> T get_armingMount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BE14))(this);
	}
	template <typename T = bool> T get_hasArmingMount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105BE9C))(this);
	}
	template <typename T = void> T AddArmingMount(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BEA8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMount(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BFBC))(this, newName);
	}
	template <typename T = void> T RemoveArmingMount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C0D0))(this);
	}
	template <typename T = uintptr_t> T get_armingMountSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C0DC))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C164))(this);
	}
	template <typename T = void> T AddArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C170))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C284))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C398))(this);
	}
	template <typename T = uintptr_t> T get_armingMountSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C3A4))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C42C))(this);
	}
	template <typename T = void> T AddArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C438))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C54C))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C660))(this);
	}
	template <typename T = uintptr_t> T get_armingMountSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C66C))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C6F4))(this);
	}
	template <typename T = void> T AddArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C700))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C814))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C928))(this);
	}
	template <typename T = uintptr_t> T get_armingPassiveSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C934))(this);
	}
	template <typename T = bool> T get_hasArmingPassiveSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105C9BC))(this);
	}
	template <typename T = void> T AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C9C8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CADC))(this, newName);
	}
	template <typename T = void> T RemoveArmingPassiveSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CBF0))(this);
	}
	template <typename T = uintptr_t> T get_armingPet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CBFC))(this);
	}
	template <typename T = bool> T get_hasArmingPet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CC84))(this);
	}
	template <typename T = void> T AddArmingPet(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CC90))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPet(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CDA4))(this, newName);
	}
	template <typename T = void> T RemoveArmingPet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CEB8))(this);
	}
	template <typename T = uintptr_t> T get_armingPetSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CEC4))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105CF4C))(this);
	}
	template <typename T = void> T AddArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CF58))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D06C))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D180))(this);
	}
	template <typename T = uintptr_t> T get_armingPetSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D18C))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D214))(this);
	}
	template <typename T = void> T AddArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D220))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D334))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D448))(this);
	}
	template <typename T = uintptr_t> T get_armingPetSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D454))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D4DC))(this);
	}
	template <typename T = void> T AddArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D4E8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D5FC))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill3() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D710))(this);
	}
	template <typename T = uintptr_t> T get_armingPocket() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D71C))(this);
	}
	template <typename T = bool> T get_hasArmingPocket() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105D7A4))(this);
	}
	template <typename T = void> T AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105D7B0))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105D8F4))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T RemoveArmingPocket() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DA38))(this);
	}
	template <typename T = uintptr_t> T get_armingRunes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DA44))(this);
	}
	template <typename T = bool> T get_hasArmingRunes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DACC))(this);
	}
	template <typename T = void> T AddArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x105DAD8))(this, newNames);
	}
	template <typename T = void> T ReplaceArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x105DBEC))(this, newNames);
	}
	template <typename T = void> T RemoveArmingRunes() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DD00))(this);
	}
	template <typename T = uintptr_t> T get_armingSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DD0C))(this);
	}
	template <typename T = bool> T get_hasArmingSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DD94))(this);
	}
	template <typename T = void> T AddArmingSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105DDA0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill1(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105DEB4))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill1() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DFC8))(this);
	}
	template <typename T = uintptr_t> T get_armingSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105DFD4))(this);
	}
	template <typename T = bool> T get_hasArmingSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E05C))(this);
	}
	template <typename T = void> T AddArmingSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E068))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill2(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E17C))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill2() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E290))(this);
	}
	template <typename T = uintptr_t> T get_armingSkinColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E29C))(this);
	}
	template <typename T = bool> T get_hasArmingSkinColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E324))(this);
	}
	template <typename T = void> T AddArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E330))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E444))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkinColor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E558))(this);
	}
	template <typename T = uintptr_t> T get_armingWeapon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E564))(this);
	}
	template <typename T = bool> T get_hasArmingWeapon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E5EC))(this);
	}
	template <typename T = void> T AddArmingWeapon(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E5F8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingWeapon(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E70C))(this, newName);
	}
	template <typename T = void> T RemoveArmingWeapon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E820))(this);
	}
	template <typename T = uintptr_t> T get_arrivalTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E82C))(this);
	}
	template <typename T = bool> T get_hasArrivalTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105E8B4))(this);
	}
	template <typename T = void> T AddArrivalTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105E8C0))(this, newValue);
	}
	template <typename T = void> T ReplaceArrivalTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105E9C4))(this, newValue);
	}
	template <typename T = void> T RemoveArrivalTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EAC8))(this);
	}
	template <typename T = uintptr_t> T get_arrowMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EAD4))(this);
	}
	template <typename T = bool> T get_hasArrowMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EB5C))(this);
	}
	template <typename T = void> T AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x105EB68))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x105ECC0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T RemoveArrowMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EE18))(this);
	}
	template <typename T = uintptr_t> T get_aura() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EE24))(this);
	}
	template <typename T = bool> T get_hasAura() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105EEAC))(this);
	}
	template <typename T = void> T AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, uintptr_t newSelector) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x105EEB8))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, uintptr_t newSelector) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x105F010))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveAura() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F168))(this);
	}
	template <typename T = uintptr_t> T get_autoAbility() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F174))(this);
	}
	template <typename T = bool> T get_hasAutoAbility() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F1FC))(this);
	}
	template <typename T = void> T AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(GameDataEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105F208))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(GameDataEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105F344))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T RemoveAutoAbility() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F480))(this);
	}
	template <typename T = bool> T get_isAutoAttack() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F48C))(this);
	}
	template <typename T = void> T set_isAutoAttack(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x105F498))(this, value);
	}
	template <typename T = uintptr_t> T get_autoDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F5B0))(this);
	}
	template <typename T = bool> T get_hasAutoDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F638))(this);
	}
	template <typename T = void> T AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x105F644))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x105F78C))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T RemoveAutoDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F8D4))(this);
	}
	template <typename T = uintptr_t> T get_autoFarm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F8E0))(this);
	}
	template <typename T = bool> T get_hasAutoFarm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105F968))(this);
	}
	template <typename T = void> T AddAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x105F974))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T ReplaceAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x105FAC0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T RemoveAutoFarm() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FC0C))(this);
	}
	template <typename T = uintptr_t> T get_autoLock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FC18))(this);
	}
	template <typename T = bool> T get_hasAutoLock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FCA0))(this);
	}
	template <typename T = void> T AddAutoLock(int64_t newTime) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105FCAC))(this, newTime);
	}
	template <typename T = void> T ReplaceAutoLock(int64_t newTime) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105FDB0))(this, newTime);
	}
	template <typename T = void> T RemoveAutoLock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FEB4))(this);
	}
	template <typename T = uintptr_t> T get_autoMagicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FEC0))(this);
	}
	template <typename T = bool> T get_hasAutoMagicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105FF48))(this);
	}
	template <typename T = void> T AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x105FF54))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1060098))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T RemoveAutoMagicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10601DC))(this);
	}
	template <typename T = bool> T get_isAutoMode() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10601E8))(this);
	}
	template <typename T = void> T set_isAutoMode(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10601F4))(this, value);
	}
	template <typename T = bool> T get_isAutoOpenDoor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106030C))(this);
	}
	template <typename T = void> T set_isAutoOpenDoor(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1060318))(this, value);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060430))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10542D4))(this, value);
	}
	template <typename T = uintptr_t> T get_backPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106043C))(this);
	}
	template <typename T = bool> T get_hasBackPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10604C4))(this);
	}
	template <typename T = void> T AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(GameDataEntity*, int64_t, float, float))(Il2CppBase() + 0x10604D0))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(GameDataEntity*, int64_t, float, float))(Il2CppBase() + 0x10605E8))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T RemoveBackPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060700))(this);
	}
	template <typename T = uintptr_t> T get_backTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106070C))(this);
	}
	template <typename T = bool> T get_hasBackTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060794))(this);
	}
	template <typename T = void> T AddBackTarget(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10607A0))(this, newId);
	}
	template <typename T = void> T ReplaceBackTarget(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10608A4))(this, newId);
	}
	template <typename T = void> T RemoveBackTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10609A8))(this);
	}
	template <typename T = uintptr_t> T get_bank() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10609B4))(this);
	}
	template <typename T = bool> T get_hasBank() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060A3C))(this);
	}
	template <typename T = void> T AddBank(int32_t newBaseSize, int32_t newSizePerGrade) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1060A48))(this, newBaseSize, newSizePerGrade);
	}
	template <typename T = void> T ReplaceBank(int32_t newBaseSize, int32_t newSizePerGrade) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1060B50))(this, newBaseSize, newSizePerGrade);
	}
	template <typename T = void> T RemoveBank() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060C58))(this);
	}
	template <typename T = uintptr_t> T get_battleId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060C64))(this);
	}
	template <typename T = bool> T get_hasBattleId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060CEC))(this);
	}
	template <typename T = void> T AddBattleId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1060CF8))(this, newId);
	}
	template <typename T = void> T ReplaceBattleId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1060DFC))(this, newId);
	}
	template <typename T = void> T RemoveBattleId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060F00))(this);
	}
	template <typename T = uintptr_t> T get_battleStatisticType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060F0C))(this);
	}
	template <typename T = bool> T get_hasBattleStatisticType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1060F94))(this);
	}
	template <typename T = void> T AddBattleStatisticType(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1060FA0))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleStatisticType(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10610A4))(this, newValue);
	}
	template <typename T = void> T RemoveBattleStatisticType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10611A8))(this);
	}
	template <typename T = uintptr_t> T get_bawl() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10611B4))(this);
	}
	template <typename T = bool> T get_hasBawl() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106123C))(this);
	}
	template <typename T = void> T AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1061248))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10613BC))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T RemoveBawl() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061530))(this);
	}
	template <typename T = uintptr_t> T get_bind() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106153C))(this);
	}
	template <typename T = bool> T get_hasBind() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10615C4))(this);
	}
	template <typename T = void> T AddBind(uintptr_t newTarget) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10615D0))(this, newTarget);
	}
	template <typename T = void> T ReplaceBind(uintptr_t newTarget) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10616D4))(this, newTarget);
	}
	template <typename T = void> T RemoveBind() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10617D8))(this);
	}
	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1054758))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x105474C))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10617E4))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10618F8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061A0C))(this);
	}
	template <typename T = uintptr_t> T get_bonusMaxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061A18))(this);
	}
	template <typename T = bool> T get_hasBonusMaxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061AA0))(this);
	}
	template <typename T = void> T AddBonusMaxHealth(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1061AAC))(this, newValue);
	}
	template <typename T = void> T ReplaceBonusMaxHealth(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1061BB0))(this, newValue);
	}
	template <typename T = void> T RemoveBonusMaxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061CB4))(this);
	}
	template <typename T = uintptr_t> T get_bossOpenResources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061CC0))(this);
	}
	template <typename T = bool> T get_hasBossOpenResources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061D48))(this);
	}
	template <typename T = void> T AddBossOpenResources(uintptr_t newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(GameDataEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1061D54))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T ReplaceBossOpenResources(uintptr_t newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(GameDataEntity*, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1061EA0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T RemoveBossOpenResources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061FEC))(this);
	}
	template <typename T = uintptr_t> T get_bossOpenState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1061FF8))(this);
	}
	template <typename T = bool> T get_hasBossOpenState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062080))(this);
	}
	template <typename T = void> T AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<uintptr_t>* newStates) {
		return ((T (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x106208C))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<uintptr_t>* newStates) {
		return ((T (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x10621D0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T RemoveBossOpenState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062314))(this);
	}
	template <typename T = uintptr_t> T get_boxCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062320))(this);
	}
	template <typename T = bool> T get_hasBoxCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10623A8))(this);
	}
	template <typename T = void> T AddBoxCollision(float newWidth, float newHeight, float newHole, bool newTrigger) {
		return ((T (*)(GameDataEntity*, float, float, float, bool))(Il2CppBase() + 0x10623B4))(this, newWidth, newHeight, newHole, newTrigger);
	}
	template <typename T = void> T ReplaceBoxCollision(float newWidth, float newHeight, float newHole, bool newTrigger) {
		return ((T (*)(GameDataEntity*, float, float, float, bool))(Il2CppBase() + 0x10624E0))(this, newWidth, newHeight, newHole, newTrigger);
	}
	template <typename T = void> T RemoveBoxCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106260C))(this);
	}
	template <typename T = bool> T get_isBuildBlocker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062618))(this);
	}
	template <typename T = void> T set_isBuildBlocker(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1062624))(this, value);
	}
	template <typename T = uintptr_t> T get_buildGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106273C))(this);
	}
	template <typename T = bool> T get_hasBuildGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10627A8))(this);
	}
	template <typename T = void> T AddBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10627B4))(this, newList);
	}
	template <typename T = void> T ReplaceBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10628AC))(this, newList);
	}
	template <typename T = void> T RemoveBuildGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10629A4))(this);
	}
	template <typename T = uintptr_t> T get_buildPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10629B0))(this);
	}
	template <typename T = bool> T get_hasBuildPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062A38))(this);
	}
	template <typename T = void> T AddBuildPlace(uintptr_t newFill) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1062A44))(this, newFill);
	}
	template <typename T = void> T ReplaceBuildPlace(uintptr_t newFill) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1062B48))(this, newFill);
	}
	template <typename T = void> T RemoveBuildPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062C4C))(this);
	}
	template <typename T = uintptr_t> T get_builder() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062C58))(this);
	}
	template <typename T = bool> T get_hasBuilder() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1062CE0))(this);
	}
	template <typename T = void> T AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, unsigned char newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, unsigned char newSizeX, unsigned char newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, uintptr_t newType, uintptr_t newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, unsigned char, bool, bool, bool, bool, bool, bool, bool, unsigned char, unsigned char, bool, bool, bool, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1062CEC))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, unsigned char newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, unsigned char newSizeX, unsigned char newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, uintptr_t newType, uintptr_t newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, unsigned char, bool, bool, bool, bool, bool, bool, bool, unsigned char, unsigned char, bool, bool, bool, bool, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1062F84))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T RemoveBuilder() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106321C))(this);
	}
	template <typename T = uintptr_t> T get_campBath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063228))(this);
	}
	template <typename T = bool> T get_hasCampBath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10632B0))(this);
	}
	template <typename T = void> T AddCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x10632BC))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T ReplaceCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0x10633E0))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T RemoveCampBath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063504))(this);
	}
	template <typename T = bool> T get_CanTravel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063510))(this);
	}
	template <typename T = void> T set_CanTravel(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106351C))(this, value);
	}
	template <typename T = uintptr_t> T get_cashbackCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063634))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10636BC))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10636C8))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10637CC))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10638D0))(this);
	}
	template <typename T = uintptr_t> T get_cell() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1053FB8))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1053C88))(this);
	}
	template <typename T = void> T AddCell(unsigned char newId) {
		return ((T (*)(GameDataEntity*, unsigned char))(Il2CppBase() + 0x10638DC))(this, newId);
	}
	template <typename T = void> T ReplaceCell(unsigned char newId) {
		return ((T (*)(GameDataEntity*, unsigned char))(Il2CppBase() + 0x10639E0))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063AE4))(this);
	}
	template <typename T = uintptr_t> T get_chance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063AF0))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063B78))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1063B84))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1063CBC))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063DF4))(this);
	}
	template <typename T = uintptr_t> T get_chestMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063E00))(this);
	}
	template <typename T = bool> T get_hasChestMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1063E88))(this);
	}
	template <typename T = void> T AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1063E94))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1063FB0))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T RemoveChestMarker() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10640CC))(this);
	}
	template <typename T = uintptr_t> T get_chestOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10640D8))(this);
	}
	template <typename T = bool> T get_hasChestOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064160))(this);
	}
	template <typename T = void> T AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, uintptr_t newAdditionalPersonalDrop) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, uintptr_t))(Il2CppBase() + 0x106416C))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, uintptr_t newAdditionalPersonalDrop) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, uintptr_t))(Il2CppBase() + 0x10642F4))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T RemoveChestOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106447C))(this);
	}
	template <typename T = uintptr_t> T get_chestReward() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064488))(this);
	}
	template <typename T = bool> T get_hasChestReward() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064510))(this);
	}
	template <typename T = void> T AddChestReward(Il2CppString* newRandomGroup, Il2CppString* newRequiredItem, int32_t newPrice, Il2CppString* newEffectName, int32_t newFreeSlotsRequired) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106451C))(this, newRandomGroup, newRequiredItem, newPrice, newEffectName, newFreeSlotsRequired);
	}
	template <typename T = void> T ReplaceChestReward(Il2CppString* newRandomGroup, Il2CppString* newRequiredItem, int32_t newPrice, Il2CppString* newEffectName, int32_t newFreeSlotsRequired) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1064678))(this, newRandomGroup, newRequiredItem, newPrice, newEffectName, newFreeSlotsRequired);
	}
	template <typename T = void> T RemoveChestReward() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10647D4))(this);
	}
	template <typename T = uintptr_t> T get_childs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10647E0))(this);
	}
	template <typename T = bool> T get_hasChilds() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064868))(this);
	}
	template <typename T = void> T AddChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1064874))(this, newSlots);
	}
	template <typename T = void> T ReplaceChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1064988))(this, newSlots);
	}
	template <typename T = void> T RemoveChilds() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064A9C))(this);
	}
	template <typename T = uintptr_t> T get_chooseCreature() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064AA8))(this);
	}
	template <typename T = bool> T get_hasChooseCreature() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064B30))(this);
	}
	template <typename T = void> T AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1064B3C))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1064C5C))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T RemoveChooseCreature() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064D7C))(this);
	}
	template <typename T = uintptr_t> T get_circleCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064D88))(this);
	}
	template <typename T = bool> T get_hasCircleCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1064E10))(this);
	}
	template <typename T = void> T AddCircleCollision(float newRadius, bool newTrigger) {
		return ((T (*)(GameDataEntity*, float, bool))(Il2CppBase() + 0x1064E1C))(this, newRadius, newTrigger);
	}
	template <typename T = void> T ReplaceCircleCollision(float newRadius, bool newTrigger) {
		return ((T (*)(GameDataEntity*, float, bool))(Il2CppBase() + 0x1064F34))(this, newRadius, newTrigger);
	}
	template <typename T = void> T RemoveCircleCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106504C))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065058))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10650E0))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10650EC))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10651F0))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10652F4))(this);
	}
	template <typename T = uintptr_t> T get_clanPersonal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065300))(this);
	}
	template <typename T = bool> T get_hasClanPersonal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065388))(this);
	}
	template <typename T = void> T AddClanPersonal(int64_t newClanId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1065394))(this, newClanId);
	}
	template <typename T = void> T ReplaceClanPersonal(int64_t newClanId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1065498))(this, newClanId);
	}
	template <typename T = void> T RemoveClanPersonal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106559C))(this);
	}
	template <typename T = uintptr_t> T get_clanPersonalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10655A8))(this);
	}
	template <typename T = bool> T get_hasClanPersonalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065630))(this);
	}
	template <typename T = void> T AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x106563C))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1065798))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemoveClanPersonalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10658F4))(this);
	}
	template <typename T = bool> T get_isClick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065900))(this);
	}
	template <typename T = void> T set_isClick(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106590C))(this, value);
	}
	template <typename T = uintptr_t> T get_closedDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065A24))(this);
	}
	template <typename T = bool> T get_hasClosedDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065AAC))(this);
	}
	template <typename T = void> T AddClosedDuration(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1065AB8))(this, newValue);
	}
	template <typename T = void> T ReplaceClosedDuration(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1065BBC))(this, newValue);
	}
	template <typename T = void> T RemoveClosedDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065CC0))(this);
	}
	template <typename T = uintptr_t> T get_coins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065CCC))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065D54))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1065D60))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1065E64))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065F68))(this);
	}
	template <typename T = uintptr_t> T get_collisionActive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065F74))(this);
	}
	template <typename T = bool> T get_hasCollisionActive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1065FFC))(this);
	}
	template <typename T = void> T AddCollisionActive(Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1066008))(this, newTargetCondition, newActorCondition);
	}
	template <typename T = void> T ReplaceCollisionActive(Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1066130))(this, newTargetCondition, newActorCondition);
	}
	template <typename T = void> T RemoveCollisionActive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066258))(this);
	}
	template <typename T = uintptr_t> T get_containerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066264))(this);
	}
	template <typename T = bool> T get_hasContainerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10662EC))(this);
	}
	template <typename T = void> T AddContainerAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10662F8))(this, newName);
	}
	template <typename T = void> T ReplaceContainerAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106640C))(this, newName);
	}
	template <typename T = void> T RemoveContainerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066520))(this);
	}
	template <typename T = uintptr_t> T get_corpseDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106652C))(this);
	}
	template <typename T = bool> T get_hasCorpseDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10665B4))(this);
	}
	template <typename T = void> T AddCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10665C0))(this, newValues);
	}
	template <typename T = void> T ReplaceCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10666D4))(this, newValues);
	}
	template <typename T = void> T RemoveCorpseDestruction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10667E8))(this);
	}
	template <typename T = uintptr_t> T get_costumeChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10667F4))(this);
	}
	template <typename T = bool> T get_hasCostumeChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106687C))(this);
	}
	template <typename T = void> T AddCostumeChest(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066888))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeChest(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106699C))(this, newName);
	}
	template <typename T = void> T RemoveCostumeChest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066AB0))(this);
	}
	template <typename T = uintptr_t> T get_costumeHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066ABC))(this);
	}
	template <typename T = bool> T get_hasCostumeHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066B44))(this);
	}
	template <typename T = void> T AddCostumeHead(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066B50))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeHead(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066C64))(this, newName);
	}
	template <typename T = void> T RemoveCostumeHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066D78))(this);
	}
	template <typename T = uintptr_t> T get_costumeLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066D84))(this);
	}
	template <typename T = bool> T get_hasCostumeLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1066E0C))(this);
	}
	template <typename T = void> T AddCostumeLegs(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066E18))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeLegs(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066F2C))(this, newName);
	}
	template <typename T = void> T RemoveCostumeLegs() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067040))(this);
	}
	template <typename T = uintptr_t> T get_count() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106704C))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10670D4))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10670E0))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10671E4))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10672E8))(this);
	}
	template <typename T = uintptr_t> T get_cover() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10672F4))(this);
	}
	template <typename T = bool> T get_hasCover() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106737C))(this);
	}
	template <typename T = void> T AddCover(Il2CppString* newEffectName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1067388))(this, newEffectName);
	}
	template <typename T = void> T ReplaceCover(Il2CppString* newEffectName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106749C))(this, newEffectName);
	}
	template <typename T = void> T RemoveCover() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10675B0))(this);
	}
	template <typename T = uintptr_t> T get_coverRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10675BC))(this);
	}
	template <typename T = bool> T get_hasCoverRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067644))(this);
	}
	template <typename T = void> T AddCoverRadius(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1067650))(this, newValue);
	}
	template <typename T = void> T ReplaceCoverRadius(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1067754))(this, newValue);
	}
	template <typename T = void> T RemoveCoverRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067858))(this);
	}
	template <typename T = uintptr_t> T get_craftAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067864))(this);
	}
	template <typename T = bool> T get_hasCraftAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10678EC))(this);
	}
	template <typename T = void> T AddCraftAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10678F8))(this, newName);
	}
	template <typename T = void> T ReplaceCraftAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1067A0C))(this, newName);
	}
	template <typename T = void> T RemoveCraftAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067B20))(this);
	}
	template <typename T = uintptr_t> T get_craftBoost() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067B2C))(this);
	}
	template <typename T = bool> T get_hasCraftBoost() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067BB4))(this);
	}
	template <typename T = void> T AddCraftBoost(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1067BC0))(this, newList);
	}
	template <typename T = void> T ReplaceCraftBoost(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1067CD4))(this, newList);
	}
	template <typename T = void> T RemoveCraftBoost() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067DE8))(this);
	}
	template <typename T = uintptr_t> T get_craft() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067DF4))(this);
	}
	template <typename T = bool> T get_hasCraft() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1067E7C))(this);
	}
	template <typename T = void> T AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1067E88))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<uintptr_t>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<uintptr_t>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1068088))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename T = void> T RemoveCraft() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068288))(this);
	}
	template <typename T = uintptr_t> T get_craftWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068294))(this);
	}
	template <typename T = bool> T get_hasCraftWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106831C))(this);
	}
	template <typename T = void> T AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x1068328))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x1068494))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T RemoveCraftWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068600))(this);
	}
	template <typename T = uintptr_t> T get_createInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106860C))(this);
	}
	template <typename T = bool> T get_hasCreateInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068694))(this);
	}
	template <typename T = void> T AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10686A0))(this, newRandomGroup);
	}
	template <typename T = void> T ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10687B4))(this, newRandomGroup);
	}
	template <typename T = void> T RemoveCreateInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10688C8))(this);
	}
	template <typename T = uintptr_t> T get_createUniqueInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10688D4))(this);
	}
	template <typename T = bool> T get_hasCreateUniqueInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106895C))(this);
	}
	template <typename T = void> T AddCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1068968))(this, newRandomGroups);
	}
	template <typename T = void> T ReplaceCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1068A7C))(this, newRandomGroups);
	}
	template <typename T = void> T RemoveCreateUniqueInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068B90))(this);
	}
	template <typename T = uintptr_t> T get_creationTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068B9C))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068C24))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1068C30))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1068D34))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068E38))(this);
	}
	template <typename T = bool> T get_isCreep() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10538F8))(this);
	}
	template <typename T = void> T set_isCreep(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1068E44))(this, value);
	}
	template <typename T = uintptr_t> T get_currencyExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068F5C))(this);
	}
	template <typename T = bool> T get_hasCurrencyExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1068FE4))(this);
	}
	template <typename T = void> T AddCurrencyExchange(Il2CppString* newCurrencyItem, int32_t newLimit, float newResetTimeout, void* newResetValue, Il2CppString* newStartTimeTempBuff, Il2CppString* newBuffItem, float newBuffCoef, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newTooltipLine, Il2CppString* newEffect) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, float, void*, Il2CppString*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1068FF0))(this, newCurrencyItem, newLimit, newResetTimeout, newResetValue, newStartTimeTempBuff, newBuffItem, newBuffCoef, newWindowLine, newNoCurrencyWindowLine, newTooltipLine, newEffect);
	}
	template <typename T = void> T ReplaceCurrencyExchange(Il2CppString* newCurrencyItem, int32_t newLimit, float newResetTimeout, void* newResetValue, Il2CppString* newStartTimeTempBuff, Il2CppString* newBuffItem, float newBuffCoef, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newTooltipLine, Il2CppString* newEffect) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, float, void*, Il2CppString*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10691C4))(this, newCurrencyItem, newLimit, newResetTimeout, newResetValue, newStartTimeTempBuff, newBuffItem, newBuffCoef, newWindowLine, newNoCurrencyWindowLine, newTooltipLine, newEffect);
	}
	template <typename T = void> T RemoveCurrencyExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069398))(this);
	}
	template <typename T = uintptr_t> T get_currentRoof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10693A4))(this);
	}
	template <typename T = bool> T get_hasCurrentRoof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106942C))(this);
	}
	template <typename T = void> T AddCurrentRoof(int32_t newIndex) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069438))(this, newIndex);
	}
	template <typename T = void> T ReplaceCurrentRoof(int32_t newIndex) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106953C))(this, newIndex);
	}
	template <typename T = void> T RemoveCurrentRoof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069640))(this);
	}
	template <typename T = uintptr_t> T get_customStore() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106964C))(this);
	}
	template <typename T = bool> T get_hasCustomStore() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10696D4))(this);
	}
	template <typename T = void> T AddCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, uintptr_t newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10696E0))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename T = void> T ReplaceCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, uintptr_t newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10699E8))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename T = void> T RemoveCustomStore() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069CF0))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069CFC))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069D84))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069D90))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069E94))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069F98))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPremiumTokens() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1069FA4))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A02C))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A038))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A13C))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A240))(this);
	}
	template <typename T = uintptr_t> T get_cyclicYmirSoul() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A24C))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A2D4))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A2E0))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A3E4))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A4E8))(this);
	}
	template <typename T = uintptr_t> T get_dailyShopAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A4F4))(this);
	}
	template <typename T = bool> T get_hasDailyShopAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A57C))(this);
	}
	template <typename T = void> T AddDailyShopAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106A588))(this, newName);
	}
	template <typename T = void> T ReplaceDailyShopAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106A69C))(this, newName);
	}
	template <typename T = void> T RemoveDailyShopAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A7B0))(this);
	}
	template <typename T = uintptr_t> T get_dailyShop() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A7BC))(this);
	}
	template <typename T = bool> T get_hasDailyShop() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106A844))(this);
	}
	template <typename T = void> T AddDailyShop(float newTax, int32_t newBaseSize, int32_t newSizePerGrade, Il2CppArray<uintptr_t>* newSlots, Il2CppArray<uintptr_t>* newGradeLimits) {
		return ((T (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106A850))(this, newTax, newBaseSize, newSizePerGrade, newSlots, newGradeLimits);
	}
	template <typename T = void> T ReplaceDailyShop(float newTax, int32_t newBaseSize, int32_t newSizePerGrade, Il2CppArray<uintptr_t>* newSlots, Il2CppArray<uintptr_t>* newGradeLimits) {
		return ((T (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106A99C))(this, newTax, newBaseSize, newSizePerGrade, newSlots, newGradeLimits);
	}
	template <typename T = void> T RemoveDailyShop() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106AAE8))(this);
	}
	template <typename T = uintptr_t> T get_dailyTavern() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106AAF4))(this);
	}
	template <typename T = bool> T get_hasDailyTavern() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106AB7C))(this);
	}
	template <typename T = void> T AddDailyTavern(Il2CppArray<uintptr_t>* newRewardCoefs) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106AB88))(this, newRewardCoefs);
	}
	template <typename T = void> T ReplaceDailyTavern(Il2CppArray<uintptr_t>* newRewardCoefs) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106AC9C))(this, newRewardCoefs);
	}
	template <typename T = void> T RemoveDailyTavern() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106ADB0))(this);
	}
	template <typename T = uintptr_t> T get_damageCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106ADBC))(this);
	}
	template <typename T = bool> T get_hasDamageCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106AE44))(this);
	}
	template <typename T = void> T AddDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106AE50))(this, newValues);
	}
	template <typename T = void> T ReplaceDamageCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106AF64))(this, newValues);
	}
	template <typename T = void> T RemoveDamageCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B078))(this);
	}
	template <typename T = uintptr_t> T get_damageCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B084))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B10C))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106B118))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106B21C))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B320))(this);
	}
	template <typename T = uintptr_t> T get_damageEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B32C))(this);
	}
	template <typename T = bool> T get_hasDamageEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B3B4))(this);
	}
	template <typename T = void> T AddDamageEffect(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106B3C0))(this, newName);
	}
	template <typename T = void> T ReplaceDamageEffect(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106B4D4))(this, newName);
	}
	template <typename T = void> T RemoveDamageEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B5E8))(this);
	}
	template <typename T = uintptr_t> T get_damageStat() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B5F4))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106B67C))(this);
	}
	template <typename T = void> T AddDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(GameDataEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106B688))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(GameDataEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106B84C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BA10))(this);
	}
	template <typename T = uintptr_t> T get_damageType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BA1C))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BAA4))(this);
	}
	template <typename T = void> T AddDamageType(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x106BAB0))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10537F4))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BBB4))(this);
	}
	template <typename T = uintptr_t> T get_defaultArming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BBC0))(this);
	}
	template <typename T = bool> T get_hasDefaultArming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106BC48))(this);
	}
	template <typename T = void> T AddDefaultArming(Il2CppString* newWeapon, Il2CppString* newFace, Il2CppString* newHair, Il2CppString* newBeard, Il2CppString* newHairColor, Il2CppString* newSkinColor, Il2CppString* newClothes, Il2CppString* newCostumeHead, Il2CppString* newCostumeChest, Il2CppString* newCostumeLegs, Il2CppString* newBanner, Il2CppString* newCorpse) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106BC54))(this, newWeapon, newFace, newHair, newBeard, newHairColor, newSkinColor, newClothes, newCostumeHead, newCostumeChest, newCostumeLegs, newBanner, newCorpse);
	}
	template <typename T = void> T ReplaceDefaultArming(Il2CppString* newWeapon, Il2CppString* newFace, Il2CppString* newHair, Il2CppString* newBeard, Il2CppString* newHairColor, Il2CppString* newSkinColor, Il2CppString* newClothes, Il2CppString* newCostumeHead, Il2CppString* newCostumeChest, Il2CppString* newCostumeLegs, Il2CppString* newBanner, Il2CppString* newCorpse) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106BE6C))(this, newWeapon, newFace, newHair, newBeard, newHairColor, newSkinColor, newClothes, newCostumeHead, newCostumeChest, newCostumeLegs, newBanner, newCorpse);
	}
	template <typename T = void> T RemoveDefaultArming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C084))(this);
	}
	template <typename T = uintptr_t> T get_defaultGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C090))(this);
	}
	template <typename T = bool> T get_hasDefaultGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C118))(this);
	}
	template <typename T = void> T AddDefaultGrade(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106C124))(this, newValue);
	}
	template <typename T = void> T ReplaceDefaultGrade(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106C228))(this, newValue);
	}
	template <typename T = void> T RemoveDefaultGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C32C))(this);
	}
	template <typename T = uintptr_t> T get_defaultVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C338))(this);
	}
	template <typename T = bool> T get_hasDefaultVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C3C0))(this);
	}
	template <typename T = void> T AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x106C3CC))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x106C4FC))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveDefaultVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C62C))(this);
	}
	template <typename T = uintptr_t> T get_delay() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C638))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C6C0))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106C6CC))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106C7D0))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C8D4))(this);
	}
	template <typename T = uintptr_t> T get_description() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C8E0))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106C968))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106C974))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106CA9C))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CBC4))(this);
	}
	template <typename T = uintptr_t> T get_destroyAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CBD0))(this);
	}
	template <typename T = bool> T get_hasDestroyAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CC58))(this);
	}
	template <typename T = void> T AddDestroyAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106CC64))(this, newName);
	}
	template <typename T = void> T ReplaceDestroyAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106CD78))(this, newName);
	}
	template <typename T = void> T RemoveDestroyAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CE8C))(this);
	}
	template <typename T = uintptr_t> T get_destroyOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CE98))(this);
	}
	template <typename T = bool> T get_hasDestroyOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106CF20))(this);
	}
	template <typename T = void> T AddDestroyOnDeath(bool newInstantly) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106CF2C))(this, newInstantly);
	}
	template <typename T = void> T ReplaceDestroyOnDeath(bool newInstantly) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106D034))(this, newInstantly);
	}
	template <typename T = void> T RemoveDestroyOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D13C))(this);
	}
	template <typename T = uintptr_t> T get_difficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D148))(this);
	}
	template <typename T = bool> T get_hasDifficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D1D0))(this);
	}
	template <typename T = void> T AddDifficulty(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x106D1DC))(this, newType);
	}
	template <typename T = void> T ReplaceDifficulty(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x106D2E0))(this, newType);
	}
	template <typename T = void> T RemoveDifficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D3E4))(this);
	}
	template <typename T = uintptr_t> T get_diplomacyManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D3F0))(this);
	}
	template <typename T = bool> T get_hasDiplomacyManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D478))(this);
	}
	template <typename T = void> T AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106D484))(this, newName);
	}
	template <typename T = void> T ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106D598))(this, newName);
	}
	template <typename T = void> T RemoveDiplomacyManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D6AC))(this);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D6B8))(this);
	}
	template <typename T = void> T set_isDisabled(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106D6C4))(this, value);
	}
	template <typename T = uintptr_t> T get_distance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D7DC))(this);
	}
	template <typename T = bool> T get_hasDistance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106D864))(this);
	}
	template <typename T = void> T AddDistance(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106D870))(this, newValue);
	}
	template <typename T = void> T ReplaceDistance(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106D974))(this, newValue);
	}
	template <typename T = void> T RemoveDistance() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DA78))(this);
	}
	template <typename T = uintptr_t> T get_districtLevelUpgrades() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DA84))(this);
	}
	template <typename T = bool> T get_hasDistrictLevelUpgrades() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DB0C))(this);
	}
	template <typename T = void> T AddDistrictLevelUpgrades(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106DB18))(this, newValues);
	}
	template <typename T = void> T ReplaceDistrictLevelUpgrades(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106DC2C))(this, newValues);
	}
	template <typename T = void> T RemoveDistrictLevelUpgrades() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DD40))(this);
	}
	template <typename T = uintptr_t> T get_doorWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DD4C))(this);
	}
	template <typename T = bool> T get_hasDoorWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106DDD4))(this);
	}
	template <typename T = void> T AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x106DDE0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x106DF08))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T RemoveDoorWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E030))(this);
	}
	template <typename T = bool> T get_isDragged() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E03C))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054590))(this, value);
	}
	template <typename T = uintptr_t> T get_dungeonDifficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E048))(this);
	}
	template <typename T = bool> T get_hasDungeonDifficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E0D0))(this);
	}
	template <typename T = void> T AddDungeonDifficulty(Il2CppString* newDefaultDescription, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106E0DC))(this, newDefaultDescription, newList);
	}
	template <typename T = void> T ReplaceDungeonDifficulty(Il2CppString* newDefaultDescription, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106E204))(this, newDefaultDescription, newList);
	}
	template <typename T = void> T RemoveDungeonDifficulty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E32C))(this);
	}
	template <typename T = uintptr_t> T get_durabilityDamage() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E338))(this);
	}
	template <typename T = bool> T get_hasDurabilityDamage() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E3C0))(this);
	}
	template <typename T = void> T AddDurabilityDamage(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E3CC))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityDamage(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E4D0))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityDamage() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E5D4))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E5E0))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E668))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E674))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E778))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E87C))(this);
	}
	template <typename T = uintptr_t> T get_endTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E888))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106E910))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106E91C))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106EA20))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EB24))(this);
	}
	template <typename T = uintptr_t> T get_enemyInteract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EB30))(this);
	}
	template <typename T = bool> T get_hasEnemyInteract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EBB8))(this);
	}
	template <typename T = void> T AddEnemyInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x106EBC4))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceEnemyInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x106ED70))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveEnemyInteract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EF1C))(this);
	}
	template <typename T = uintptr_t> T get_energy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EF28))(this);
	}
	template <typename T = bool> T get_hasEnergy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106EFB0))(this);
	}
	template <typename T = void> T AddEnergy(int64_t newTick) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106EFBC))(this, newTick);
	}
	template <typename T = void> T ReplaceEnergy(int64_t newTick) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106F0C0))(this, newTick);
	}
	template <typename T = void> T RemoveEnergy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F1C4))(this);
	}
	template <typename T = uintptr_t> T get_enterCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F1D0))(this);
	}
	template <typename T = bool> T get_hasEnterCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F258))(this);
	}
	template <typename T = void> T AddEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x106F264))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x106F3B4))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveEnterCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F504))(this);
	}
	template <typename T = uintptr_t> T get_enterQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F510))(this);
	}
	template <typename T = bool> T get_hasEnterQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F598))(this);
	}
	template <typename T = void> T AddEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106F5A4))(this, newValues);
	}
	template <typename T = void> T ReplaceEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x106F6B8))(this, newValues);
	}
	template <typename T = void> T RemoveEnterQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F7CC))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsA() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F7D8))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106F860))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106F86C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106F970))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FA74))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsB() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FA80))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FB08))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FB14))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FC18))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FD1C))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsC() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FD28))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FDB0))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FDBC))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FEC0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FFC4))(this);
	}
	template <typename T = uintptr_t> T get_eventTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x106FFD0))(this);
	}
	template <typename T = bool> T get_hasEventTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070058))(this);
	}
	template <typename T = void> T AddEventTag(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1070064))(this, newValue);
	}
	template <typename T = void> T ReplaceEventTag(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1070178))(this, newValue);
	}
	template <typename T = void> T RemoveEventTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107028C))(this);
	}
	template <typename T = uintptr_t> T get_exchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070298))(this);
	}
	template <typename T = bool> T get_hasExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070320))(this);
	}
	template <typename T = void> T AddExchange(uintptr_t newPriceCurrency, Il2CppString* newStartTimeTempBuff, int32_t newLimit, float newResetTimeout, void* newResetValue, bool newConsiderDurability, Il2CppArray<uintptr_t>* newResources, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newNoCurrencyPopUpCaption, Il2CppString* newNoCurrencyPopUpLine, Il2CppString* newHintLine, Il2CppString* newEffect) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, int32_t, float, void*, bool, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107032C))(this, newPriceCurrency, newStartTimeTempBuff, newLimit, newResetTimeout, newResetValue, newConsiderDurability, newResources, newWindowLine, newNoCurrencyWindowLine, newNoCurrencyPopUpCaption, newNoCurrencyPopUpLine, newHintLine, newEffect);
	}
	template <typename T = void> T ReplaceExchange(uintptr_t newPriceCurrency, Il2CppString* newStartTimeTempBuff, int32_t newLimit, float newResetTimeout, void* newResetValue, bool newConsiderDurability, Il2CppArray<uintptr_t>* newResources, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newNoCurrencyPopUpCaption, Il2CppString* newNoCurrencyPopUpLine, Il2CppString* newHintLine, Il2CppString* newEffect) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, int32_t, float, void*, bool, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1070524))(this, newPriceCurrency, newStartTimeTempBuff, newLimit, newResetTimeout, newResetValue, newConsiderDurability, newResources, newWindowLine, newNoCurrencyWindowLine, newNoCurrencyPopUpCaption, newNoCurrencyPopUpLine, newHintLine, newEffect);
	}
	template <typename T = void> T RemoveExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107071C))(this);
	}
	template <typename T = uintptr_t> T get_explode() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070728))(this);
	}
	template <typename T = bool> T get_hasExplode() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10707B0))(this);
	}
	template <typename T = void> T AddExplode(Il2CppString* newItem, uintptr_t newType) {
		return ((T (*)(GameDataEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x10707BC))(this, newItem, newType);
	}
	template <typename T = void> T ReplaceExplode(Il2CppString* newItem, uintptr_t newType) {
		return ((T (*)(GameDataEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x10708D8))(this, newItem, newType);
	}
	template <typename T = void> T RemoveExplode() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10709F4))(this);
	}
	template <typename T = bool> T get_isExplodeOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070A00))(this);
	}
	template <typename T = void> T set_isExplodeOnDeath(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1070A0C))(this, value);
	}
	template <typename T = bool> T get_isExternalInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070B24))(this);
	}
	template <typename T = void> T set_isExternalInventory(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1070B30))(this, value);
	}
	template <typename T = uintptr_t> T get_extraLevelCap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070C48))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070CD0))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1070CDC))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1070DE0))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070EE4))(this);
	}
	template <typename T = uintptr_t> T get_extract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070EF0))(this);
	}
	template <typename T = bool> T get_hasExtract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1070F78))(this);
	}
	template <typename T = void> T AddExtract(Il2CppArray<uintptr_t>* newGrades, int32_t newDuration, float newRate, float newFullSlotBonus, float newStealRate, bool newAllowStealResources, Il2CppString* newRequiredResource, Il2CppString* newRewardResource, Il2CppString* newStealResource, Il2CppString* newInfoText, Il2CppString* newConfirmNotFullLoadText) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t, float, float, float, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1070F84))(this, newGrades, newDuration, newRate, newFullSlotBonus, newStealRate, newAllowStealResources, newRequiredResource, newRewardResource, newStealResource, newInfoText, newConfirmNotFullLoadText);
	}
	template <typename T = void> T ReplaceExtract(Il2CppArray<uintptr_t>* newGrades, int32_t newDuration, float newRate, float newFullSlotBonus, float newStealRate, bool newAllowStealResources, Il2CppString* newRequiredResource, Il2CppString* newRewardResource, Il2CppString* newStealResource, Il2CppString* newInfoText, Il2CppString* newConfirmNotFullLoadText) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t, float, float, float, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107114C))(this, newGrades, newDuration, newRate, newFullSlotBonus, newStealRate, newAllowStealResources, newRequiredResource, newRewardResource, newStealResource, newInfoText, newConfirmNotFullLoadText);
	}
	template <typename T = void> T RemoveExtract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071314))(this);
	}
	template <typename T = uintptr_t> T get_extractWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071320))(this);
	}
	template <typename T = bool> T get_hasExtractWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10713A8))(this);
	}
	template <typename T = void> T AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(GameDataEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x10713B4))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(GameDataEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x10714EC))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T RemoveExtractWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071624))(this);
	}
	template <typename T = bool> T get_isFakeBase() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071630))(this);
	}
	template <typename T = void> T set_isFakeBase(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107163C))(this, value);
	}
	template <typename T = uintptr_t> T get_fakeClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071754))(this);
	}
	template <typename T = bool> T get_hasFakeClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10717DC))(this);
	}
	template <typename T = void> T AddFakeClanName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10717E8))(this, newValue);
	}
	template <typename T = void> T ReplaceFakeClanName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10718FC))(this, newValue);
	}
	template <typename T = void> T RemoveFakeClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071A10))(this);
	}
	template <typename T = uintptr_t> T get_finalizeAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071A1C))(this);
	}
	template <typename T = bool> T get_hasFinalizeAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071AA4))(this);
	}
	template <typename T = void> T AddFinalizeAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1071AB0))(this, newName);
	}
	template <typename T = void> T ReplaceFinalizeAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1071BC4))(this, newName);
	}
	template <typename T = void> T RemoveFinalizeAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071CD8))(this);
	}
	template <typename T = uintptr_t> T get_finalize() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071CE4))(this);
	}
	template <typename T = bool> T get_hasFinalize() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1071D6C))(this);
	}
	template <typename T = void> T AddFinalize(Il2CppString* newTargetCondition, Il2CppString* newActorCondition, Il2CppString* newTo, bool newIgnoreSlots, float newDuration) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x1071D78))(this, newTargetCondition, newActorCondition, newTo, newIgnoreSlots, newDuration);
	}
	template <typename T = void> T ReplaceFinalize(Il2CppString* newTargetCondition, Il2CppString* newActorCondition, Il2CppString* newTo, bool newIgnoreSlots, float newDuration) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x1071ED8))(this, newTargetCondition, newActorCondition, newTo, newIgnoreSlots, newDuration);
	}
	template <typename T = void> T RemoveFinalize() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072038))(this);
	}
	template <typename T = bool> T get_isFindViewInScene() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072044))(this);
	}
	template <typename T = void> T set_isFindViewInScene(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1072050))(this, value);
	}
	template <typename T = uintptr_t> T get_floor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072168))(this);
	}
	template <typename T = bool> T get_hasFloor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10721F0))(this);
	}
	template <typename T = void> T AddFloor(Il2CppString* newRoof) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10721FC))(this, newRoof);
	}
	template <typename T = void> T ReplaceFloor(Il2CppString* newRoof) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1072310))(this, newRoof);
	}
	template <typename T = void> T RemoveFloor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072424))(this);
	}
	template <typename T = uintptr_t> T get_fog() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072430))(this);
	}
	template <typename T = bool> T get_hasFog() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10724B8))(this);
	}
	template <typename T = void> T AddFog(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10724C4))(this, newName);
	}
	template <typename T = void> T ReplaceFog(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10725D8))(this, newName);
	}
	template <typename T = void> T RemoveFog() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10726EC))(this);
	}
	template <typename T = uintptr_t> T get_follow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10726F8))(this);
	}
	template <typename T = bool> T get_hasFollow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072780))(this);
	}
	template <typename T = void> T AddFollow(float newSpeed) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x107278C))(this, newSpeed);
	}
	template <typename T = void> T ReplaceFollow(float newSpeed) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1072890))(this, newSpeed);
	}
	template <typename T = void> T RemoveFollow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072994))(this);
	}
	template <typename T = bool> T get_isFollowTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10729A0))(this);
	}
	template <typename T = void> T set_isFollowTarget(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10729AC))(this, value);
	}
	template <typename T = uintptr_t> T get_fusion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072AC4))(this);
	}
	template <typename T = bool> T get_hasFusion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072B4C))(this);
	}
	template <typename T = void> T AddFusion(float newCooldown, Il2CppString* newAnalyticName) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1072B58))(this, newCooldown, newAnalyticName);
	}
	template <typename T = void> T ReplaceFusion(float newCooldown, Il2CppString* newAnalyticName) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1072C7C))(this, newCooldown, newAnalyticName);
	}
	template <typename T = void> T RemoveFusion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072DA0))(this);
	}
	template <typename T = uintptr_t> T get_gamePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072DAC))(this);
	}
	template <typename T = bool> T get_hasGamePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1072E34))(this);
	}
	template <typename T = void> T AddGamePlace(uintptr_t newRequired, uintptr_t newNone, uintptr_t newFill, Il2CppArray<uintptr_t>* newMaxCountConditions, int32_t newMaxCount, Il2CppString* newMaxGroup, int32_t newHeight, int32_t newWidth) {
		return ((T (*)(GameDataEntity*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1072E40))(this, newRequired, newNone, newFill, newMaxCountConditions, newMaxCount, newMaxGroup, newHeight, newWidth);
	}
	template <typename T = void> T ReplaceGamePlace(uintptr_t newRequired, uintptr_t newNone, uintptr_t newFill, Il2CppArray<uintptr_t>* newMaxCountConditions, int32_t newMaxCount, Il2CppString* newMaxGroup, int32_t newHeight, int32_t newWidth) {
		return ((T (*)(GameDataEntity*, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1072FAC))(this, newRequired, newNone, newFill, newMaxCountConditions, newMaxCount, newMaxGroup, newHeight, newWidth);
	}
	template <typename T = void> T RemoveGamePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073118))(this);
	}
	template <typename T = uintptr_t> T get_gameSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073124))(this);
	}
	template <typename T = bool> T get_hasGameSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10731AC))(this);
	}
	template <typename T = void> T AddGameSound(Il2CppString* newDeath, Il2CppString* newFootstep, Il2CppString* newFootstepInvisible, Il2CppString* newDamage, Il2CppString* newCreate, Il2CppString* newDestroy, Il2CppString* newAggression, Il2CppString* newOpen, Il2CppString* newClose, float newAggressionInterval, float newAggressionChance) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x10731B8))(this, newDeath, newFootstep, newFootstepInvisible, newDamage, newCreate, newDestroy, newAggression, newOpen, newClose, newAggressionInterval, newAggressionChance);
	}
	template <typename T = void> T ReplaceGameSound(Il2CppString* newDeath, Il2CppString* newFootstep, Il2CppString* newFootstepInvisible, Il2CppString* newDamage, Il2CppString* newCreate, Il2CppString* newDestroy, Il2CppString* newAggression, Il2CppString* newOpen, Il2CppString* newClose, float newAggressionInterval, float newAggressionChance) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x107339C))(this, newDeath, newFootstep, newFootstepInvisible, newDamage, newCreate, newDestroy, newAggression, newOpen, newClose, newAggressionInterval, newAggressionChance);
	}
	template <typename T = void> T RemoveGameSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073580))(this);
	}
	template <typename T = uintptr_t> T get_gender() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107358C))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073614))(this);
	}
	template <typename T = void> T AddGender(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1073620))(this, newType);
	}
	template <typename T = void> T ReplaceGender(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1073724))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073828))(this);
	}
	template <typename T = uintptr_t> T get_generateWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073834))(this);
	}
	template <typename T = bool> T get_hasGenerateWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10738BC))(this);
	}
	template <typename T = void> T AddGenerateWall(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10738C8))(this, newName);
	}
	template <typename T = void> T ReplaceGenerateWall(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10739DC))(this, newName);
	}
	template <typename T = void> T RemoveGenerateWall() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073AF0))(this);
	}
	template <typename T = uintptr_t> T get_giantReputation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073AFC))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073B84))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073B90))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073C94))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073D98))(this);
	}
	template <typename T = uintptr_t> T get_grade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073DA4))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1073E2C))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073E38))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073F3C))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074040))(this);
	}
	template <typename T = uintptr_t> T get_gradeFromLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107404C))(this);
	}
	template <typename T = bool> T get_hasGradeFromLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10740D4))(this);
	}
	template <typename T = void> T AddGradeFromLocation(int32_t newOffset) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10740E0))(this, newOffset);
	}
	template <typename T = void> T ReplaceGradeFromLocation(int32_t newOffset) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10741E4))(this, newOffset);
	}
	template <typename T = void> T RemoveGradeFromLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10742E8))(this);
	}
	template <typename T = uintptr_t> T get_gradeHide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10742F4))(this);
	}
	template <typename T = bool> T get_hasGradeHide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107437C))(this);
	}
	template <typename T = void> T AddGradeHide(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074388))(this, newValue);
	}
	template <typename T = void> T ReplaceGradeHide(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107448C))(this, newValue);
	}
	template <typename T = void> T RemoveGradeHide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074590))(this);
	}
	template <typename T = uintptr_t> T get_gradeView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107459C))(this);
	}
	template <typename T = bool> T get_hasGradeView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074624))(this);
	}
	template <typename T = void> T AddGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1074630))(this, newValues);
	}
	template <typename T = void> T ReplaceGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1074744))(this, newValues);
	}
	template <typename T = void> T RemoveGradeView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074858))(this);
	}
	template <typename T = uintptr_t> T get_groupChild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074864))(this);
	}
	template <typename T = bool> T get_hasGroupChild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10748EC))(this);
	}
	template <typename T = void> T AddGroupChild(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10748F8))(this, newId);
	}
	template <typename T = void> T ReplaceGroupChild(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10749FC))(this, newId);
	}
	template <typename T = void> T RemoveGroupChild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074B00))(this);
	}
	template <typename T = uintptr_t> T get_group() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074B0C))(this);
	}
	template <typename T = bool> T get_hasGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074B94))(this);
	}
	template <typename T = void> T AddGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1074BA0))(this, newSlots);
	}
	template <typename T = void> T ReplaceGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1074CB4))(this, newSlots);
	}
	template <typename T = void> T RemoveGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074DC8))(this);
	}
	template <typename T = uintptr_t> T get_guildBossCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074DD4))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1074E5C))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074E68))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074F6C))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075070))(this);
	}
	template <typename T = uintptr_t> T get_guildCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107507C))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075104))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1075110))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1075214))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075318))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075324))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10753AC))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10753B8))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10754BC))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10755C0))(this);
	}
	template <typename T = uintptr_t> T get_guildTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10755CC))(this);
	}
	template <typename T = bool> T get_hasGuildTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075654))(this);
	}
	template <typename T = void> T AddGuildTag(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1075660))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildTag(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1075774))(this, newValue);
	}
	template <typename T = void> T RemoveGuildTag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075888))(this);
	}
	template <typename T = uintptr_t> T get_hashPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075894))(this);
	}
	template <typename T = bool> T get_hasHashPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107591C))(this);
	}
	template <typename T = void> T AddHashPosition(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1075928))(this, newValue);
	}
	template <typename T = void> T ReplaceHashPosition(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1075A2C))(this, newValue);
	}
	template <typename T = void> T RemoveHashPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075B30))(this);
	}
	template <typename T = uintptr_t> T get_healthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075B3C))(this);
	}
	template <typename T = bool> T get_hasHealthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075BC4))(this);
	}
	template <typename T = void> T AddHealthCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1075BD0))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1075CD4))(this, newValue);
	}
	template <typename T = void> T RemoveHealthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075DD8))(this);
	}
	template <typename T = bool> T get_isHideBag() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075DE4))(this);
	}
	template <typename T = void> T set_isHideBag(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1075DF0))(this, value);
	}
	template <typename T = uintptr_t> T get_hide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075F08))(this);
	}
	template <typename T = bool> T get_hasHide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1075F90))(this);
	}
	template <typename T = void> T AddHide(uintptr_t newFlag) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1075F9C))(this, newFlag);
	}
	template <typename T = void> T ReplaceHide(uintptr_t newFlag) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10760A0))(this, newFlag);
	}
	template <typename T = void> T RemoveHide() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10761A4))(this);
	}
	template <typename T = bool> T get_isHideHead() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10761B0))(this);
	}
	template <typename T = void> T set_isHideHead(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10761BC))(this, value);
	}
	template <typename T = bool> T get_isHidePet() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10762D4))(this);
	}
	template <typename T = void> T set_isHidePet(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10762E0))(this, value);
	}
	template <typename T = uintptr_t> T get_icon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10763F8))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076480))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107648C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10765E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107673C))(this);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076748))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10767D0))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10767DC))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10768E0))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10769E4))(this);
	}
	template <typename T = uintptr_t> T get_ignoreDoorVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10769F0))(this);
	}
	template <typename T = bool> T get_hasIgnoreDoorVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076A78))(this);
	}
	template <typename T = void> T AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1076A84))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1076BB4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveIgnoreDoorVectorField() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076CE4))(this);
	}
	template <typename T = uintptr_t> T get_influenceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076CF0))(this);
	}
	template <typename T = bool> T get_hasInfluenceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076D78))(this);
	}
	template <typename T = void> T AddInfluenceByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1076D84))(this, newValues);
	}
	template <typename T = void> T ReplaceInfluenceByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1076E98))(this, newValues);
	}
	template <typename T = void> T RemoveInfluenceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076FAC))(this);
	}
	template <typename T = uintptr_t> T get_influence() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1076FB8))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077040))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107704C))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1077150))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077254))(this);
	}
	template <typename T = uintptr_t> T get_instantEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077260))(this);
	}
	template <typename T = bool> T get_hasInstantEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10772E8))(this);
	}
	template <typename T = void> T AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x10772F4))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<uintptr_t>* newTarget, Il2CppString* newTrail) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x107744C))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename T = void> T RemoveInstantEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10775A4))(this);
	}
	template <typename T = uintptr_t> T get_interactAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10775B0))(this);
	}
	template <typename T = bool> T get_hasInteractAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077638))(this);
	}
	template <typename T = void> T AddInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1077644))(this, newName, newList);
	}
	template <typename T = void> T ReplaceInteractAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107776C))(this, newName, newList);
	}
	template <typename T = void> T RemoveInteractAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077894))(this);
	}
	template <typename T = uintptr_t> T get_interact() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10778A0))(this);
	}
	template <typename T = bool> T get_hasInteract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077928))(this);
	}
	template <typename T = void> T AddInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1077934))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T ReplaceInteract(uintptr_t newAction, Il2CppArray<uintptr_t>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, uintptr_t newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1077AE0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename T = void> T RemoveInteract() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077C8C))(this);
	}
	template <typename T = uintptr_t> T get_interactCooldown() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077C98))(this);
	}
	template <typename T = bool> T get_hasInteractCooldown() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077D20))(this);
	}
	template <typename T = void> T AddInteractCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1077D2C))(this, newValues, newTags);
	}
	template <typename T = void> T ReplaceInteractCooldown(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newTags) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1077E54))(this, newValues, newTags);
	}
	template <typename T = void> T RemoveInteractCooldown() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077F7C))(this);
	}
	template <typename T = uintptr_t> T get_interactRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1077F88))(this);
	}
	template <typename T = bool> T get_hasInteractRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078010))(this);
	}
	template <typename T = void> T AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(GameDataEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x107801C))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((T (*)(GameDataEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x107815C))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename T = void> T RemoveInteractRadius() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107829C))(this);
	}
	template <typename T = uintptr_t> T get_interactTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10782A8))(this);
	}
	template <typename T = bool> T get_hasInteractTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078330))(this);
	}
	template <typename T = void> T AddInteractTarget(int32_t newId, void* newPosition) {
		return ((T (*)(GameDataEntity*, int32_t, void*))(Il2CppBase() + 0x107833C))(this, newId, newPosition);
	}
	template <typename T = void> T ReplaceInteractTarget(int32_t newId, void* newPosition) {
		return ((T (*)(GameDataEntity*, int32_t, void*))(Il2CppBase() + 0x1078458))(this, newId, newPosition);
	}
	template <typename T = void> T RemoveInteractTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078574))(this);
	}
	template <typename T = uintptr_t> T get_inventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078580))(this);
	}
	template <typename T = bool> T get_hasInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078608))(this);
	}
	template <typename T = void> T AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x1078614))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x107874C))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveInventory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078884))(this);
	}
	template <typename T = uintptr_t> T get_inventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078890))(this);
	}
	template <typename T = bool> T get_hasInventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078918))(this);
	}
	template <typename T = void> T AddInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1078924))(this, newData);
	}
	template <typename T = void> T ReplaceInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1078A38))(this, newData);
	}
	template <typename T = void> T RemoveInventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078B4C))(this);
	}
	template <typename T = bool> T get_isInventoryLocked() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078B58))(this);
	}
	template <typename T = void> T set_isInventoryLocked(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1078B64))(this, value);
	}
	template <typename T = uintptr_t> T get_killedBy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078C7C))(this);
	}
	template <typename T = bool> T get_hasKilledBy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078D04))(this);
	}
	template <typename T = void> T AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1078D10))(this, newId, newName, newItemName);
	}
	template <typename T = void> T ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1078E48))(this, newId, newName, newItemName);
	}
	template <typename T = void> T RemoveKilledBy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078F80))(this);
	}
	template <typename T = uintptr_t> T get_lastActionTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1078F8C))(this);
	}
	template <typename T = bool> T get_hasLastActionTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079014))(this);
	}
	template <typename T = void> T AddLastActionTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1079020))(this, newValue);
	}
	template <typename T = void> T ReplaceLastActionTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1079124))(this, newValue);
	}
	template <typename T = void> T RemoveLastActionTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079228))(this);
	}
	template <typename T = uintptr_t> T get_lastDamager() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079234))(this);
	}
	template <typename T = bool> T get_hasLastDamager() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10792BC))(this);
	}
	template <typename T = void> T AddLastDamager(uintptr_t newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(GameDataEntity*, uintptr_t, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x10792C8))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T ReplaceLastDamager(uintptr_t newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(GameDataEntity*, uintptr_t, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x10793F8))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T RemoveLastDamager() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079528))(this);
	}
	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079534))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10795BC))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10795C8))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10796CC))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10797D0))(this);
	}
	template <typename T = uintptr_t> T get_lobbyType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10797DC))(this);
	}
	template <typename T = bool> T get_hasLobbyType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079864))(this);
	}
	template <typename T = void> T AddLobbyType(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1079870))(this, newType);
	}
	template <typename T = void> T ReplaceLobbyType(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1079974))(this, newType);
	}
	template <typename T = void> T RemoveLobbyType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079A78))(this);
	}
	template <typename T = uintptr_t> T get_locationRegion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079A84))(this);
	}
	template <typename T = bool> T get_hasLocationRegion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079B0C))(this);
	}
	template <typename T = void> T AddLocationRegion(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079B18))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegion(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079C2C))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegion() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079D40))(this);
	}
	template <typename T = uintptr_t> T get_locationRegionEnter() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079D4C))(this);
	}
	template <typename T = bool> T get_hasLocationRegionEnter() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1079DD4))(this);
	}
	template <typename T = void> T AddLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079DE0))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079EF4))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegionEnter() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A008))(this);
	}
	template <typename T = uintptr_t> T get_lockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A014))(this);
	}
	template <typename T = bool> T get_hasLockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A09C))(this);
	}
	template <typename T = void> T AddLockAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A0A8))(this, newName);
	}
	template <typename T = void> T ReplaceLockAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A1BC))(this, newName);
	}
	template <typename T = void> T RemoveLockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A2D0))(this);
	}
	template <typename T = uintptr_t> T get_lockController() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A2DC))(this);
	}
	template <typename T = bool> T get_hasLockController() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A364))(this);
	}
	template <typename T = void> T AddLockController(Il2CppString* newActivator) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A370))(this, newActivator);
	}
	template <typename T = void> T ReplaceLockController(Il2CppString* newActivator) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A484))(this, newActivator);
	}
	template <typename T = void> T RemoveLockController() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A598))(this);
	}
	template <typename T = uintptr_t> T get_loopSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A5A4))(this);
	}
	template <typename T = bool> T get_hasLoopSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A62C))(this);
	}
	template <typename T = void> T AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107A638))(this, newWork, newLoop);
	}
	template <typename T = void> T ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107A760))(this, newWork, newLoop);
	}
	template <typename T = void> T RemoveLoopSound() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A888))(this);
	}
	template <typename T = uintptr_t> T get_lootByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A894))(this);
	}
	template <typename T = bool> T get_hasLootByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107A91C))(this);
	}
	template <typename T = void> T AddLootByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107A928))(this, newValues);
	}
	template <typename T = void> T ReplaceLootByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107AA3C))(this, newValues);
	}
	template <typename T = void> T RemoveLootByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107AB50))(this);
	}
	template <typename T = uintptr_t> T get_lootStatus() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107AB5C))(this);
	}
	template <typename T = bool> T get_hasLootStatus() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107ABE4))(this);
	}
	template <typename T = void> T AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x107ABF0))(this, newTag, newWeight);
	}
	template <typename T = void> T ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x107AD0C))(this, newTag, newWeight);
	}
	template <typename T = void> T RemoveLootStatus() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107AE28))(this);
	}
	template <typename T = uintptr_t> T get_magicSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107AE34))(this);
	}
	template <typename T = bool> T get_hasMagicSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107AEBC))(this);
	}
	template <typename T = void> T AddMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x107AEC8))(this, newItems, newRiding);
	}
	template <typename T = void> T ReplaceMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x107AFE8))(this, newItems, newRiding);
	}
	template <typename T = void> T RemoveMagicSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B108))(this);
	}
	template <typename T = uintptr_t> T get_magicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B114))(this);
	}
	template <typename T = bool> T get_hasMagicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B19C))(this);
	}
	template <typename T = void> T AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x107B1A8))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x107B320))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T RemoveMagicSpawner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B498))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B4A4))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B52C))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107B538))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107B63C))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B740))(this);
	}
	template <typename T = bool> T get_isMannequin() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B74C))(this);
	}
	template <typename T = void> T set_isMannequin(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107B758))(this, value);
	}
	template <typename T = uintptr_t> T get_mapNotify() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B870))(this);
	}
	template <typename T = bool> T get_hasMapNotify() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107B8F8))(this);
	}
	template <typename T = void> T AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107B904))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BA64))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T RemoveMapNotify() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BBC4))(this);
	}
	template <typename T = uintptr_t> T get_mapPath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BBD0))(this);
	}
	template <typename T = bool> T get_hasMapPath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BC58))(this);
	}
	template <typename T = void> T AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BC64))(this, newStartId, newEndId);
	}
	template <typename T = void> T ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BD8C))(this, newStartId, newEndId);
	}
	template <typename T = void> T RemoveMapPath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BEB4))(this);
	}
	template <typename T = uintptr_t> T get_mapPathView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BEC0))(this);
	}
	template <typename T = bool> T get_hasMapPathView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107BF48))(this);
	}
	template <typename T = void> T AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x107BF54))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x107C0BC))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T RemoveMapPathView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C224))(this);
	}
	template <typename T = bool> T get_isMapPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C230))(this);
	}
	template <typename T = void> T set_isMapPoint(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107C23C))(this, value);
	}
	template <typename T = uintptr_t> T get_mapSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C354))(this);
	}
	template <typename T = bool> T get_hasMapSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C3DC))(this);
	}
	template <typename T = void> T AddMapSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C3E8))(this, newValue);
	}
	template <typename T = void> T ReplaceMapSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C4EC))(this, newValue);
	}
	template <typename T = void> T RemoveMapSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C5F0))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C5FC))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C684))(this);
	}
	template <typename T = void> T AddMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107C690))(this, newValues);
	}
	template <typename T = void> T ReplaceMaxHealthCoefByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107C7A4))(this, newValues);
	}
	template <typename T = void> T RemoveMaxHealthCoefByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C8B8))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C8C4))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107C94C))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C958))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x107CA5C))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CB60))(this);
	}
	template <typename T = uintptr_t> T get_maxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CB6C))(this);
	}
	template <typename T = bool> T get_hasMaxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CBF4))(this);
	}
	template <typename T = void> T AddMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107CC00))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107CD08))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T RemoveMaxHealth() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CE10))(this);
	}
	template <typename T = uintptr_t> T get_metabolismSetting() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CE1C))(this);
	}
	template <typename T = bool> T get_hasMetabolismSetting() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107CEA4))(this);
	}
	template <typename T = void> T AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(GameDataEntity*, float, float, float, float, float))(Il2CppBase() + 0x107CEB0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(GameDataEntity*, float, float, float, float, float))(Il2CppBase() + 0x107CFDC))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T RemoveMetabolismSetting() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D108))(this);
	}
	template <typename T = uintptr_t> T get_minimapArrow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D114))(this);
	}
	template <typename T = bool> T get_hasMinimapArrow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D19C))(this);
	}
	template <typename T = void> T AddMinimapArrow(uintptr_t newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, uintptr_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x107D1A8))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T ReplaceMinimapArrow(uintptr_t newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, uintptr_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x107D2E4))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T RemoveMinimapArrow() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D420))(this);
	}
	template <typename T = uintptr_t> T get_minimap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D42C))(this);
	}
	template <typename T = bool> T get_hasMinimap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D4B4))(this);
	}
	template <typename T = void> T AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107D4C0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107D608))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T RemoveMinimap() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D750))(this);
	}
	template <typename T = uintptr_t> T get_minimapPing() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D75C))(this);
	}
	template <typename T = bool> T get_hasMinimapPing() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107D7E4))(this);
	}
	template <typename T = void> T AddMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107D7F0))(this, newLifetime, newRadius);
	}
	template <typename T = void> T ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107D8F8))(this, newLifetime, newRadius);
	}
	template <typename T = void> T RemoveMinimapPing() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DA00))(this);
	}
	template <typename T = uintptr_t> T get_miningAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DA0C))(this);
	}
	template <typename T = bool> T get_hasMiningAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DA94))(this);
	}
	template <typename T = void> T AddMiningAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107DAA0))(this, newName);
	}
	template <typename T = void> T ReplaceMiningAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107DBB4))(this, newName);
	}
	template <typename T = void> T RemoveMiningAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DCC8))(this);
	}
	template <typename T = uintptr_t> T get_mining() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DCD4))(this);
	}
	template <typename T = bool> T get_hasMining() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107DD5C))(this);
	}
	template <typename T = void> T AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107DD68))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107DEB8))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T RemoveMining() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E008))(this);
	}
	template <typename T = uintptr_t> T get_mountInventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E014))(this);
	}
	template <typename T = bool> T get_hasMountInventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E09C))(this);
	}
	template <typename T = void> T AddMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107E0A8))(this, newData);
	}
	template <typename T = void> T ReplaceMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107E1BC))(this, newData);
	}
	template <typename T = void> T RemoveMountInventoryContent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E2D0))(this);
	}
	template <typename T = uintptr_t> T get_mountInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E2DC))(this);
	}
	template <typename T = bool> T get_hasMountInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E364))(this);
	}
	template <typename T = void> T AddMountInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107E370))(this, newId);
	}
	template <typename T = void> T ReplaceMountInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107E474))(this, newId);
	}
	template <typename T = void> T RemoveMountInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E578))(this);
	}
	template <typename T = uintptr_t> T get_mountInvetory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E584))(this);
	}
	template <typename T = bool> T get_hasMountInvetory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E60C))(this);
	}
	template <typename T = void> T AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x107E618))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, uintptr_t newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x107E750))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveMountInvetory() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E888))(this);
	}
	template <typename T = uintptr_t> T get_mountTrader() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E894))(this);
	}
	template <typename T = bool> T get_hasMountTrader() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107E91C))(this);
	}
	template <typename T = void> T AddMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107E928))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T ReplaceMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x107EA50))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T RemoveMountTrader() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EB78))(this);
	}
	template <typename T = uintptr_t> T get_moveToTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EB84))(this);
	}
	template <typename T = bool> T get_hasMoveToTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EC0C))(this);
	}
	template <typename T = void> T AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(GameDataEntity*, int32_t, float))(Il2CppBase() + 0x107EC18))(this, newId, newMinDistance);
	}
	template <typename T = void> T ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(GameDataEntity*, int32_t, float))(Il2CppBase() + 0x107ED2C))(this, newId, newMinDistance);
	}
	template <typename T = void> T RemoveMoveToTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EE40))(this);
	}
	template <typename T = bool> T get_isMoveToTargetPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EE4C))(this);
	}
	template <typename T = void> T set_isMoveToTargetPosition(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107EE58))(this, value);
	}
	template <typename T = uintptr_t> T get_needQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EF70))(this);
	}
	template <typename T = bool> T get_hasNeedQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107EFF8))(this);
	}
	template <typename T = void> T AddNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x107F004))(this, newValues, newFailMsg);
	}
	template <typename T = void> T ReplaceNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x107F12C))(this, newValues, newFailMsg);
	}
	template <typename T = void> T RemoveNeedQuests() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F254))(this);
	}
	template <typename T = uintptr_t> T get_needRemoveEmpty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F260))(this);
	}
	template <typename T = bool> T get_hasNeedRemoveEmpty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F2E8))(this);
	}
	template <typename T = void> T AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(GameDataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x107F2F4))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(GameDataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x107F414))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T RemoveNeedRemoveEmpty() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F534))(this);
	}
	template <typename T = uintptr_t> T get_nextWayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F540))(this);
	}
	template <typename T = bool> T get_hasNextWayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F5C8))(this);
	}
	template <typename T = void> T AddNextWayPoint(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107F5D4))(this, newName);
	}
	template <typename T = void> T ReplaceNextWayPoint(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107F6E8))(this, newName);
	}
	template <typename T = void> T RemoveNextWayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F7FC))(this);
	}
	template <typename T = bool> T get_isNoAutoMode() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F808))(this);
	}
	template <typename T = void> T set_isNoAutoMode(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107F814))(this, value);
	}
	template <typename T = bool> T get_isNotAggressive() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107F92C))(this);
	}
	template <typename T = void> T set_isNotAggressive(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107F938))(this, value);
	}
	template <typename T = bool> T get_isNotInteractable() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107FA50))(this);
	}
	template <typename T = void> T set_isNotInteractable(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FA5C))(this, value);
	}
	template <typename T = bool> T get_isNotPursuitTarget() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107FB74))(this);
	}
	template <typename T = void> T set_isNotPursuitTarget(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FB80))(this, value);
	}
	template <typename T = bool> T get_isNotSelectable() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107FC98))(this);
	}
	template <typename T = void> T set_isNotSelectable(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FCA4))(this, value);
	}
	template <typename T = uintptr_t> T get_objectTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107FDBC))(this);
	}
	template <typename T = bool> T get_hasObjectTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x107FE44))(this);
	}
	template <typename T = void> T AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x107FE50))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x107FF78))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T RemoveObjectTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10800A0))(this);
	}
	template <typename T = uintptr_t> T get_odinsCupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10800AC))(this);
	}
	template <typename T = bool> T get_hasOdinsCupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080134))(this);
	}
	template <typename T = void> T AddOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080140))(this, newName);
	}
	template <typename T = void> T ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080254))(this, newName);
	}
	template <typename T = void> T RemoveOdinsCupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080368))(this);
	}
	template <typename T = uintptr_t> T get_offerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080374))(this);
	}
	template <typename T = bool> T get_hasOfferAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10803FC))(this);
	}
	template <typename T = void> T AddOfferAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080408))(this, newName);
	}
	template <typename T = void> T ReplaceOfferAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108051C))(this, newName);
	}
	template <typename T = void> T RemoveOfferAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080630))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108063C))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10806C4))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10806D0))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10807E4))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10808F8))(this);
	}
	template <typename T = bool> T get_isOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080904))(this);
	}
	template <typename T = void> T set_isOnDeath(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1080910))(this, value);
	}
	template <typename T = uintptr_t> T get_onEmptyWorld() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080A28))(this);
	}
	template <typename T = bool> T get_hasOnEmptyWorld() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080AB0))(this);
	}
	template <typename T = void> T AddOnEmptyWorld(void* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(GameDataEntity*, void*, bool, bool))(Il2CppBase() + 0x1080ABC))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T ReplaceOnEmptyWorld(void* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(GameDataEntity*, void*, bool, bool))(Il2CppBase() + 0x1080BE0))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T RemoveOnEmptyWorld() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080D04))(this);
	}
	template <typename T = bool> T get_isOnGround() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080D10))(this);
	}
	template <typename T = void> T set_isOnGround(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1080D1C))(this, value);
	}
	template <typename T = uintptr_t> T get_orientation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080E34))(this);
	}
	template <typename T = bool> T get_hasOrientation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1080EBC))(this);
	}
	template <typename T = void> T AddOrientation(unsigned char newValue) {
		return ((T (*)(GameDataEntity*, unsigned char))(Il2CppBase() + 0x1080EC8))(this, newValue);
	}
	template <typename T = void> T ReplaceOrientation(unsigned char newValue) {
		return ((T (*)(GameDataEntity*, unsigned char))(Il2CppBase() + 0x1080FCC))(this, newValue);
	}
	template <typename T = void> T RemoveOrientation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10810D0))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10810DC))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081164))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081170))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081274))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081378))(this);
	}
	template <typename T = uintptr_t> T get_ownerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081384))(this);
	}
	template <typename T = bool> T get_hasOwnerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108140C))(this);
	}
	template <typename T = void> T AddOwnerName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1081418))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnerName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108152C))(this, newValue);
	}
	template <typename T = void> T RemoveOwnerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081640))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108164C))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10816D4))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10816E0))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10817E4))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10818E8))(this);
	}
	template <typename T = uintptr_t> T get_patrol() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10818F4))(this);
	}
	template <typename T = bool> T get_hasPatrol() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108197C))(this);
	}
	template <typename T = void> T AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x1081988))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x1081AC0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T RemovePatrol() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081BF8))(this);
	}
	template <typename T = uintptr_t> T get_period() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081C04))(this);
	}
	template <typename T = bool> T get_hasPeriod() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081C8C))(this);
	}
	template <typename T = void> T AddPeriod(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1081C98))(this, newValue);
	}
	template <typename T = void> T ReplacePeriod(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1081D9C))(this, newValue);
	}
	template <typename T = void> T RemovePeriod() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081EA0))(this);
	}
	template <typename T = uintptr_t> T get_personal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081EAC))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1081F34))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081F40))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1082044))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082148))(this);
	}
	template <typename T = uintptr_t> T get_personalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082154))(this);
	}
	template <typename T = bool> T get_hasPersonalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10821DC))(this);
	}
	template <typename T = void> T AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x10821E8))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1082344))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalGenerator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10824A0))(this);
	}
	template <typename T = uintptr_t> T get_personalKey() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10824AC))(this);
	}
	template <typename T = bool> T get_hasPersonalKey() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082534))(this);
	}
	template <typename T = void> T AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1082540))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(GameDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1082674))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalKey() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10827A8))(this);
	}
	template <typename T = uintptr_t> T get_petInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10827B4))(this);
	}
	template <typename T = bool> T get_hasPetInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108283C))(this);
	}
	template <typename T = void> T AddPetInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1082848))(this, newId);
	}
	template <typename T = void> T ReplacePetInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108294C))(this, newId);
	}
	template <typename T = void> T RemovePetInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082A50))(this);
	}
	template <typename T = uintptr_t> T get_phases() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082A5C))(this);
	}
	template <typename T = bool> T get_hasPhases() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082AE4))(this);
	}
	template <typename T = void> T AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1082AF0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1082C3C))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T RemovePhases() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082D88))(this);
	}
	template <typename T = uintptr_t> T get_pickupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082D94))(this);
	}
	template <typename T = bool> T get_hasPickupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1082E1C))(this);
	}
	template <typename T = void> T AddPickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1082E28))(this, newName, newList);
	}
	template <typename T = void> T ReplacePickupAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1082F50))(this, newName, newList);
	}
	template <typename T = void> T RemovePickupAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083078))(this);
	}
	template <typename T = uintptr_t> T get_placeOwner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083084))(this);
	}
	template <typename T = bool> T get_hasPlaceOwner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108310C))(this);
	}
	template <typename T = void> T AddPlaceOwner(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1083118))(this, newId);
	}
	template <typename T = void> T ReplacePlaceOwner(int64_t newId) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108321C))(this, newId);
	}
	template <typename T = void> T RemovePlaceOwner() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083320))(this);
	}
	template <typename T = bool> T get_isPlayer() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10537E8))(this);
	}
	template <typename T = void> T set_isPlayer(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108332C))(this, value);
	}
	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083444))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10834CC))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10834D8))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10835DC))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10836E0))(this);
	}
	template <typename T = bool> T get_isPlayerKill() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10836EC))(this);
	}
	template <typename T = void> T set_isPlayerKill(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10836F8))(this, value);
	}
	template <typename T = uintptr_t> T get_playerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083810))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083898))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10838A4))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10839B8))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083ACC))(this);
	}
	template <typename T = uintptr_t> T get_pointLabel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083AD8))(this);
	}
	template <typename T = bool> T get_hasPointLabel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083B60))(this);
	}
	template <typename T = void> T AddPointLabel(Il2CppString* newCondition) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1083B6C))(this, newCondition);
	}
	template <typename T = void> T ReplacePointLabel(Il2CppString* newCondition) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1083C80))(this, newCondition);
	}
	template <typename T = void> T RemovePointLabel() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083D94))(this);
	}
	template <typename T = uintptr_t> T get_points() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083DA0))(this);
	}
	template <typename T = bool> T get_hasPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1083E28))(this);
	}
	template <typename T = void> T AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(GameDataEntity*, float, int32_t, float))(Il2CppBase() + 0x1083E34))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(GameDataEntity*, float, int32_t, float))(Il2CppBase() + 0x1083F50))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T RemovePoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108406C))(this);
	}
	template <typename T = uintptr_t> T get_portalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084078))(this);
	}
	template <typename T = bool> T get_hasPortalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084100))(this);
	}
	template <typename T = void> T AddPortalAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108410C))(this, newName);
	}
	template <typename T = void> T ReplacePortalAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1084220))(this, newName);
	}
	template <typename T = void> T RemovePortalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084334))(this);
	}
	template <typename T = uintptr_t> T get_portal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084340))(this);
	}
	template <typename T = bool> T get_hasPortal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10843AC))(this);
	}
	template <typename T = void> T AddPortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x10843B8))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplacePortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x108456C))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemovePortal() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084720))(this);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108472C))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10847B4))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10847C0))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10848C4))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10849C8))(this);
	}
	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10849D4))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1053C7C))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1084A5C))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1084B64))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084C6C))(this);
	}
	template <typename T = uintptr_t> T get_positionPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084C78))(this);
	}
	template <typename T = bool> T get_hasPositionPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084D00))(this);
	}
	template <typename T = void> T AddPositionPlace(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1084D0C))(this, newType);
	}
	template <typename T = void> T ReplacePositionPlace(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1084E10))(this, newType);
	}
	template <typename T = void> T RemovePositionPlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084F14))(this);
	}
	template <typename T = uintptr_t> T get_positionTransaction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084F20))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1084FA8))(this);
	}
	template <typename T = void> T AddPositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(GameDataEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1084FB4))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(uintptr_t newEase, float newDuration, int64_t newStartTime, uintptr_t newStartPosition, uintptr_t newEndPosition) {
		return ((T (*)(GameDataEntity*, uintptr_t, float, int64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10850F8))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108523C))(this);
	}
	template <typename T = uintptr_t> T get_power() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085248))(this);
	}
	template <typename T = bool> T get_hasPower() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10852D0))(this);
	}
	template <typename T = void> T AddPower(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10852DC))(this, newValue);
	}
	template <typename T = void> T ReplacePower(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10853E0))(this, newValue);
	}
	template <typename T = void> T RemovePower() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10854E4))(this);
	}
	template <typename T = uintptr_t> T get_prefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10854F0))(this);
	}
	template <typename T = bool> T get_hasPrefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085578))(this);
	}
	template <typename T = void> T AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x1085584))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, uintptr_t newResourceType) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x10856C8))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename T = void> T RemovePrefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108580C))(this);
	}
	template <typename T = uintptr_t> T get_production() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085818))(this);
	}
	template <typename T = bool> T get_hasProduction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10858A0))(this);
	}
	template <typename T = void> T AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10858AC))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1085A3C))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T RemoveProduction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085BCC))(this);
	}
	template <typename T = uintptr_t> T get_productionWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085BD8))(this);
	}
	template <typename T = bool> T get_hasProductionWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085C60))(this);
	}
	template <typename T = void> T AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x1085C6C))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x1085DD0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T RemoveProductionWork() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085F34))(this);
	}
	template <typename T = uintptr_t> T get_progressionExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085F40))(this);
	}
	template <typename T = bool> T get_hasProgressionExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1085FC8))(this);
	}
	template <typename T = void> T AddProgressionExchange(int32_t newLimit, float newResetTimeout, Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newFilters, Il2CppArray<uintptr_t>* newRewards, bool newConsiderDurability, Il2CppString* newWindowLine, Il2CppString* newTooMuchPointsPopUpCaption, Il2CppString* newTooMuchPointsPopUpLine, Il2CppString* newRequiredResourcesCaption, Il2CppString* newRequiredResourcesDescription, Il2CppString* newRequiredResourcesFirstLine, Il2CppString* newRequiredResourcesSecondLine, Il2CppString* newRequiredResourcesHideLine, Il2CppString* newUseButtonText, bool newRequiredResourcesHideReward, bool newRequiredResourcesHideRequest, Il2CppString* newEffect, Il2CppString* newAnalyticEvent) {
		return ((T (*)(GameDataEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1085FD4))(this, newLimit, newResetTimeout, newResources, newFilters, newRewards, newConsiderDurability, newWindowLine, newTooMuchPointsPopUpCaption, newTooMuchPointsPopUpLine, newRequiredResourcesCaption, newRequiredResourcesDescription, newRequiredResourcesFirstLine, newRequiredResourcesSecondLine, newRequiredResourcesHideLine, newUseButtonText, newRequiredResourcesHideReward, newRequiredResourcesHideRequest, newEffect, newAnalyticEvent);
	}
	template <typename T = void> T ReplaceProgressionExchange(int32_t newLimit, float newResetTimeout, Il2CppArray<uintptr_t>* newResources, Il2CppArray<uintptr_t>* newFilters, Il2CppArray<uintptr_t>* newRewards, bool newConsiderDurability, Il2CppString* newWindowLine, Il2CppString* newTooMuchPointsPopUpCaption, Il2CppString* newTooMuchPointsPopUpLine, Il2CppString* newRequiredResourcesCaption, Il2CppString* newRequiredResourcesDescription, Il2CppString* newRequiredResourcesFirstLine, Il2CppString* newRequiredResourcesSecondLine, Il2CppString* newRequiredResourcesHideLine, Il2CppString* newUseButtonText, bool newRequiredResourcesHideReward, bool newRequiredResourcesHideRequest, Il2CppString* newEffect, Il2CppString* newAnalyticEvent) {
		return ((T (*)(GameDataEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1086264))(this, newLimit, newResetTimeout, newResources, newFilters, newRewards, newConsiderDurability, newWindowLine, newTooMuchPointsPopUpCaption, newTooMuchPointsPopUpLine, newRequiredResourcesCaption, newRequiredResourcesDescription, newRequiredResourcesFirstLine, newRequiredResourcesSecondLine, newRequiredResourcesHideLine, newUseButtonText, newRequiredResourcesHideReward, newRequiredResourcesHideRequest, newEffect, newAnalyticEvent);
	}
	template <typename T = void> T RemoveProgressionExchange() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10864F4))(this);
	}
	template <typename T = uintptr_t> T get_pursuit() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086500))(this);
	}
	template <typename T = bool> T get_hasPursuit() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086588))(this);
	}
	template <typename T = void> T AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(GameDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x1086594))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(GameDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x10866F0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T RemovePursuit() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108684C))(this);
	}
	template <typename T = uintptr_t> T get_pursuitGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086858))(this);
	}
	template <typename T = bool> T get_hasPursuitGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10868E0))(this);
	}
	template <typename T = void> T AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x10868EC))(this, newDistance, newGroupName);
	}
	template <typename T = void> T ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1086A10))(this, newDistance, newGroupName);
	}
	template <typename T = void> T RemovePursuitGroup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086B34))(this);
	}
	template <typename T = uintptr_t> T get_questsSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086B40))(this);
	}
	template <typename T = bool> T get_hasQuestsSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086BC8))(this);
	}
	template <typename T = void> T AddQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1086BD4))(this, newVersion, newData);
	}
	template <typename T = void> T ReplaceQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1086CF0))(this, newVersion, newData);
	}
	template <typename T = void> T RemoveQuestsSave() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086E0C))(this);
	}
	template <typename T = uintptr_t> T get_randomClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086E18))(this);
	}
	template <typename T = bool> T get_hasRandomClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1086EA0))(this);
	}
	template <typename T = void> T AddRandomClanName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1086EAC))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomClanName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1086FC8))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomClanName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10870E4))(this);
	}
	template <typename T = uintptr_t> T get_randomName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10870F0))(this);
	}
	template <typename T = bool> T get_hasRandomName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087178))(this);
	}
	template <typename T = void> T AddRandomName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1087184))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomName(uintptr_t newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10872A0))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomName() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10873BC))(this);
	}
	template <typename T = uintptr_t> T get_rarity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10873C8))(this);
	}
	template <typename T = bool> T get_hasRarity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087450))(this);
	}
	template <typename T = void> T AddRarity(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x108745C))(this, newValue);
	}
	template <typename T = void> T ReplaceRarity(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1087560))(this, newValue);
	}
	template <typename T = void> T RemoveRarity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087664))(this);
	}
	template <typename T = uintptr_t> T get_ravenNest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087670))(this);
	}
	template <typename T = bool> T get_hasRavenNest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10876F8))(this);
	}
	template <typename T = void> T AddRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1087704))(this, newFuel);
	}
	template <typename T = void> T ReplaceRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1087818))(this, newFuel);
	}
	template <typename T = void> T RemoveRavenNest() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108792C))(this);
	}
	template <typename T = uintptr_t> T get_ravenNestManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087938))(this);
	}
	template <typename T = bool> T get_hasRavenNestManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10879C0))(this);
	}
	template <typename T = void> T AddRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10879CC))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087AE0))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087BF4))(this);
	}
	template <typename T = uintptr_t> T get_ravenNestStatsAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087C00))(this);
	}
	template <typename T = bool> T get_hasRavenNestStatsAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087C88))(this);
	}
	template <typename T = void> T AddRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087C94))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087DA8))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestStatsAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087EBC))(this);
	}
	template <typename T = uintptr_t> T get_ravenNestStats() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087EC8))(this);
	}
	template <typename T = bool> T get_hasRavenNestStats() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1087F50))(this);
	}
	template <typename T = void> T AddRavenNestStats(Il2CppList<uintptr_t>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(GameDataEntity*, Il2CppList<uintptr_t>*, int64_t, int64_t))(Il2CppBase() + 0x1087F5C))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T ReplaceRavenNestStats(Il2CppList<uintptr_t>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(GameDataEntity*, Il2CppList<uintptr_t>*, int64_t, int64_t))(Il2CppBase() + 0x1088084))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T RemoveRavenNestStats() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10881AC))(this);
	}
	template <typename T = uintptr_t> T get_repairAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10881B8))(this);
	}
	template <typename T = bool> T get_hasRepairAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088240))(this);
	}
	template <typename T = void> T AddRepairAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108824C))(this, newName);
	}
	template <typename T = void> T ReplaceRepairAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1088360))(this, newName);
	}
	template <typename T = void> T RemoveRepairAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088474))(this);
	}
	template <typename T = uintptr_t> T get_required() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088480))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088508))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1088514))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1088618))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108871C))(this);
	}
	template <typename T = uintptr_t> T get_resetTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088728))(this);
	}
	template <typename T = bool> T get_hasResetTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10887B0))(this);
	}
	template <typename T = void> T AddResetTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10887BC))(this, newValue);
	}
	template <typename T = void> T ReplaceResetTime(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10888C0))(this, newValue);
	}
	template <typename T = void> T RemoveResetTime() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10889C4))(this);
	}
	template <typename T = uintptr_t> T get_resources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10889D0))(this);
	}
	template <typename T = bool> T get_hasResources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088A58))(this);
	}
	template <typename T = void> T AddResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1088A64))(this, newList);
	}
	template <typename T = void> T ReplaceResources(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1088B78))(this, newList);
	}
	template <typename T = void> T RemoveResources() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088C8C))(this);
	}
	template <typename T = uintptr_t> T get_respawnPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088C98))(this);
	}
	template <typename T = bool> T get_hasRespawnPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088D20))(this);
	}
	template <typename T = void> T AddRespawnPoint(float newRange) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1088D2C))(this, newRange);
	}
	template <typename T = void> T ReplaceRespawnPoint(float newRange) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1088E30))(this, newRange);
	}
	template <typename T = void> T RemoveRespawnPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088F34))(this);
	}
	template <typename T = uintptr_t> T get_resurrectAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088F40))(this);
	}
	template <typename T = bool> T get_hasResurrectAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1088FC8))(this);
	}
	template <typename T = void> T AddResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1088FD4))(this, newName, newList);
	}
	template <typename T = void> T ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x10890FC))(this, newName, newList);
	}
	template <typename T = void> T RemoveResurrectAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089224))(this);
	}
	template <typename T = uintptr_t> T get_rewards() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089230))(this);
	}
	template <typename T = bool> T get_hasRewards() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10892B8))(this);
	}
	template <typename T = void> T AddRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10892C4))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T ReplaceRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x10893E0))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T RemoveRewards() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10894FC))(this);
	}
	template <typename T = uintptr_t> T get_roaming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089508))(this);
	}
	template <typename T = bool> T get_hasRoaming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089590))(this);
	}
	template <typename T = void> T AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(GameDataEntity*, float, float, float))(Il2CppBase() + 0x108959C))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(GameDataEntity*, float, float, float))(Il2CppBase() + 0x10896B4))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T RemoveRoaming() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10897CC))(this);
	}
	template <typename T = uintptr_t> T get_roof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10897D8))(this);
	}
	template <typename T = bool> T get_hasRoof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089860))(this);
	}
	template <typename T = void> T AddRoof(int32_t newIndex) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108986C))(this, newIndex);
	}
	template <typename T = void> T ReplaceRoof(int32_t newIndex) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1089970))(this, newIndex);
	}
	template <typename T = void> T RemoveRoof() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089A74))(this);
	}
	template <typename T = uintptr_t> T get_room() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089A80))(this);
	}
	template <typename T = bool> T get_hasRoom() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089B08))(this);
	}
	template <typename T = void> T AddRoom(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1089B14))(this, newName);
	}
	template <typename T = void> T ReplaceRoom(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1089C28))(this, newName);
	}
	template <typename T = void> T RemoveRoom() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089D3C))(this);
	}
	template <typename T = uintptr_t> T get_roomsDoor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089D48))(this);
	}
	template <typename T = bool> T get_hasRoomsDoor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1089DD0))(this);
	}
	template <typename T = void> T AddRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1089DDC))(this, newNames);
	}
	template <typename T = void> T ReplaceRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1089EF0))(this, newNames);
	}
	template <typename T = void> T RemoveRoomsDoor() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A004))(this);
	}
	template <typename T = uintptr_t> T get_rotateTo() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A010))(this);
	}
	template <typename T = bool> T get_hasRotateTo() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A098))(this);
	}
	template <typename T = void> T AddRotateTo(float newAngle) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A0A4))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotateTo(float newAngle) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A1A8))(this, newAngle);
	}
	template <typename T = void> T RemoveRotateTo() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A2AC))(this);
	}
	template <typename T = uintptr_t> T get_rotation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A2B8))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A340))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A34C))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A450))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A554))(this);
	}
	template <typename T = uintptr_t> T get_runeInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A560))(this);
	}
	template <typename T = bool> T get_hasRuneInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A5E8))(this);
	}
	template <typename T = void> T AddRuneInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108A5F4))(this, newId);
	}
	template <typename T = void> T ReplaceRuneInventoryId(int32_t newId) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108A6F8))(this, newId);
	}
	template <typename T = void> T RemoveRuneInventoryId() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A7FC))(this);
	}
	template <typename T = uintptr_t> T get_saveAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A808))(this);
	}
	template <typename T = bool> T get_hasSaveAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108A890))(this);
	}
	template <typename T = void> T AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x108A89C))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x108A9EC))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T RemoveSaveAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AB3C))(this);
	}
	template <typename T = bool> T get_isSaveable() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AB48))(this);
	}
	template <typename T = void> T set_isSaveable(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108AB54))(this, value);
	}
	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AC6C))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108ACF4))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108AD00))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108AE04))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AF08))(this);
	}
	template <typename T = uintptr_t> T get_scout() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AF14))(this);
	}
	template <typename T = bool> T get_hasScout() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108AF9C))(this);
	}
	template <typename T = void> T AddScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameDataEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108AFA8))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameDataEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108B120))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveScout() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B298))(this);
	}
	template <typename T = uintptr_t> T get_seasonPointsByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B2A4))(this);
	}
	template <typename T = bool> T get_hasSeasonPointsByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B32C))(this);
	}
	template <typename T = void> T AddSeasonPointsByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108B338))(this, newValues);
	}
	template <typename T = void> T ReplaceSeasonPointsByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108B44C))(this, newValues);
	}
	template <typename T = void> T RemoveSeasonPointsByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B560))(this);
	}
	template <typename T = uintptr_t> T get_seasonPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B56C))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B5F4))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108B600))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108B704))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B808))(this);
	}
	template <typename T = uintptr_t> T get_serverPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B814))(this);
	}
	template <typename T = bool> T get_hasServerPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108B89C))(this);
	}
	template <typename T = void> T AddServerPosition(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x108B8A8))(this, newX, newY);
	}
	template <typename T = void> T ReplaceServerPosition(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x108B9B0))(this, newX, newY);
	}
	template <typename T = void> T RemoveServerPosition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BAB8))(this);
	}
	template <typename T = uintptr_t> T get_serverTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BAC4))(this);
	}
	template <typename T = bool> T get_hasServerTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BB4C))(this);
	}
	template <typename T = void> T AddServerTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108BB58))(this, newValue);
	}
	template <typename T = void> T ReplaceServerTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108BC5C))(this, newValue);
	}
	template <typename T = void> T RemoveServerTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BD60))(this);
	}
	template <typename T = uintptr_t> T get_shared() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BD6C))(this);
	}
	template <typename T = bool> T get_hasShared() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108BDF4))(this);
	}
	template <typename T = void> T AddShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(GameDataEntity*, bool, bool))(Il2CppBase() + 0x108BE00))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(GameDataEntity*, bool, bool))(Il2CppBase() + 0x108BF14))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T RemoveShared() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C028))(this);
	}
	template <typename T = uintptr_t> T get_shieldManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C034))(this);
	}
	template <typename T = bool> T get_hasShieldManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C0BC))(this);
	}
	template <typename T = void> T AddShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108C0C8))(this, newName);
	}
	template <typename T = void> T ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108C1DC))(this, newName);
	}
	template <typename T = void> T RemoveShieldManagementAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C2F0))(this);
	}
	template <typename T = bool> T get_isShieldTotem() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C2FC))(this);
	}
	template <typename T = void> T set_isShieldTotem(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108C308))(this, value);
	}
	template <typename T = uintptr_t> T get_showCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C420))(this);
	}
	template <typename T = bool> T get_hasShowCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C4A8))(this);
	}
	template <typename T = void> T AddShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x108C4B4))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0x108C604))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveShowCondition() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C754))(this);
	}
	template <typename T = uintptr_t> T get_silver() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C760))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C7E8))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108C7F4))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108C8F8))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108C9FC))(this);
	}
	template <typename T = uintptr_t> T get_singlePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CA08))(this);
	}
	template <typename T = bool> T get_hasSinglePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CA90))(this);
	}
	template <typename T = void> T AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x108CA9C))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x108CBD4))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T RemoveSinglePlace() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CD0C))(this);
	}
	template <typename T = uintptr_t> T get_slotCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CD18))(this);
	}
	template <typename T = bool> T get_hasSlotCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CDA0))(this);
	}
	template <typename T = void> T AddSlotCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108CDAC))(this, newValue);
	}
	template <typename T = void> T ReplaceSlotCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108CEB0))(this, newValue);
	}
	template <typename T = void> T RemoveSlotCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CFB4))(this);
	}
	template <typename T = uintptr_t> T get_spawnAndDestroy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108CFC0))(this);
	}
	template <typename T = bool> T get_hasSpawnAndDestroy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D048))(this);
	}
	template <typename T = void> T AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x108D054))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x108D18C))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T RemoveSpawnAndDestroy() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D2C4))(this);
	}
	template <typename T = uintptr_t> T get_spawnEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D2D0))(this);
	}
	template <typename T = bool> T get_hasSpawnEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D358))(this);
	}
	template <typename T = void> T AddSpawnEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x108D364))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceSpawnEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x108D500))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveSpawnEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D69C))(this);
	}
	template <typename T = uintptr_t> T get_spawnOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D6A8))(this);
	}
	template <typename T = bool> T get_hasSpawnOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D730))(this);
	}
	template <typename T = void> T AddSpawnOnDeath(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x108D73C))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceSpawnOnDeath(uintptr_t newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x108D874))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveSpawnOnDeath() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D9AC))(this);
	}
	template <typename T = uintptr_t> T get_spectator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108D9B8))(this);
	}
	template <typename T = bool> T get_hasSpectator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DA40))(this);
	}
	template <typename T = void> T AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(GameDataEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x108DA4C))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(GameDataEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x108DB88))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T RemoveSpectator() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DCC4))(this);
	}
	template <typename T = uintptr_t> T get_speed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DCD0))(this);
	}
	template <typename T = bool> T get_hasSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DD58))(this);
	}
	template <typename T = void> T AddSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108DD64))(this, newValue);
	}
	template <typename T = void> T ReplaceSpeed(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108DE68))(this, newValue);
	}
	template <typename T = void> T RemoveSpeed() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DF6C))(this);
	}
	template <typename T = uintptr_t> T get_startTournamentAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108DF78))(this);
	}
	template <typename T = bool> T get_hasStartTournamentAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E000))(this);
	}
	template <typename T = void> T AddStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108E00C))(this, newName);
	}
	template <typename T = void> T ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108E120))(this, newName);
	}
	template <typename T = void> T RemoveStartTournamentAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E234))(this);
	}
	template <typename T = uintptr_t> T get_stateView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E240))(this);
	}
	template <typename T = bool> T get_hasStateView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E2C8))(this);
	}
	template <typename T = void> T AddStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108E2D4))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T ReplaceStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108E3FC))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T RemoveStateView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E524))(this);
	}
	template <typename T = uintptr_t> T get_statue() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E530))(this);
	}
	template <typename T = bool> T get_hasStatue() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E5B8))(this);
	}
	template <typename T = void> T AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108E5C4))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108E710))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveStatue() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E85C))(this);
	}
	template <typename T = uintptr_t> T get_statusBarView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E868))(this);
	}
	template <typename T = bool> T get_hasStatusBarView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108E8F0))(this);
	}
	template <typename T = void> T AddStatusBarView(uintptr_t newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x108E8FC))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T ReplaceStatusBarView(uintptr_t newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(GameDataEntity*, uintptr_t, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x108EA70))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T RemoveStatusBarView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EBE4))(this);
	}
	template <typename T = uintptr_t> T get_storeExperienceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EBF0))(this);
	}
	template <typename T = bool> T get_hasStoreExperienceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EC78))(this);
	}
	template <typename T = void> T AddStoreExperienceByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108EC84))(this, newValues);
	}
	template <typename T = void> T ReplaceStoreExperienceByGrade(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108ED98))(this, newValues);
	}
	template <typename T = void> T RemoveStoreExperienceByGrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EEAC))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EEB8))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108EF40))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108EF4C))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x108F060))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F174))(this);
	}
	template <typename T = uintptr_t> T get_team() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F180))(this);
	}
	template <typename T = bool> T get_hasTeam() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F208))(this);
	}
	template <typename T = void> T AddTeam(unsigned char newId, bool newSource, Il2CppString* newRandomByTag, void* newClanIds) {
		return ((T (*)(GameDataEntity*, unsigned char, bool, Il2CppString*, void*))(Il2CppBase() + 0x108F214))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T ReplaceTeam(unsigned char newId, bool newSource, Il2CppString* newRandomByTag, void* newClanIds) {
		return ((T (*)(GameDataEntity*, unsigned char, bool, Il2CppString*, void*))(Il2CppBase() + 0x108F358))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T RemoveTeam() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F49C))(this);
	}
	template <typename T = uintptr_t> T get_tenacityCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F4A8))(this);
	}
	template <typename T = bool> T get_hasTenacityCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F530))(this);
	}
	template <typename T = void> T AddTenacityCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108F53C))(this, newValue);
	}
	template <typename T = void> T ReplaceTenacityCoef(float newValue) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108F640))(this, newValue);
	}
	template <typename T = void> T RemoveTenacityCoef() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F744))(this);
	}
	template <typename T = uintptr_t> T get_tick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F750))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F7D8))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108F7E4))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108F8E8))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F9EC))(this);
	}
	template <typename T = uintptr_t> T get_tickets() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108F9F8))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FA80))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FA8C))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FB90))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FC94))(this);
	}
	template <typename T = uintptr_t> T get_ticksCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FCA0))(this);
	}
	template <typename T = bool> T get_hasTicksCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FD28))(this);
	}
	template <typename T = void> T AddTicksCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FD34))(this, newValue);
	}
	template <typename T = void> T ReplaceTicksCount(int32_t newValue) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FE38))(this, newValue);
	}
	template <typename T = void> T RemoveTicksCount() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FF3C))(this);
	}
	template <typename T = uintptr_t> T get_timeTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FF48))(this);
	}
	template <typename T = bool> T get_hasTimeTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x108FFD0))(this);
	}
	template <typename T = void> T AddTimeTrigger(float newBeforeEnd) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x108FFDC))(this, newBeforeEnd);
	}
	template <typename T = void> T ReplaceTimeTrigger(float newBeforeEnd) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x10900E0))(this, newBeforeEnd);
	}
	template <typename T = void> T RemoveTimeTrigger() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10901E4))(this);
	}
	template <typename T = uintptr_t> T get_timerEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10901F0))(this);
	}
	template <typename T = bool> T get_hasTimerEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090278))(this);
	}
	template <typename T = void> T AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1090284))(this, newName, newMinGrade);
	}
	template <typename T = void> T ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x10903A0))(this, newName, newMinGrade);
	}
	template <typename T = void> T RemoveTimerEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10904BC))(this);
	}
	template <typename T = uintptr_t> T get_toLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10904C8))(this);
	}
	template <typename T = bool> T get_hasToLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090550))(this);
	}
	template <typename T = void> T AddToLocation(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x109055C))(this, newName);
	}
	template <typename T = void> T ReplaceToLocation(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1090670))(this, newName);
	}
	template <typename T = void> T RemoveToLocation() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090784))(this);
	}
	template <typename T = uintptr_t> T get_toolTip() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090790))(this);
	}
	template <typename T = bool> T get_hasToolTip() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090818))(this);
	}
	template <typename T = void> T AddToolTip(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1090824))(this, newValue);
	}
	template <typename T = void> T ReplaceToolTip(uintptr_t newValue) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x1090938))(this, newValue);
	}
	template <typename T = void> T RemoveToolTip() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090A4C))(this);
	}
	template <typename T = uintptr_t> T get_transport() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090A58))(this);
	}
	template <typename T = bool> T get_hasTransport() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090AE0))(this);
	}
	template <typename T = void> T AddTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1090AEC))(this, newValues);
	}
	template <typename T = void> T ReplaceTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1090C00))(this, newValues);
	}
	template <typename T = void> T RemoveTransport() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090D14))(this);
	}
	template <typename T = uintptr_t> T get_triggerView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090D20))(this);
	}
	template <typename T = bool> T get_hasTriggerView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1090DA8))(this);
	}
	template <typename T = void> T AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x1090DB4))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x1090F30))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T RemoveTriggerView() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10910AC))(this);
	}
	template <typename T = uintptr_t> T get_uIPrefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10910B8))(this);
	}
	template <typename T = bool> T get_hasUIPrefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091140))(this);
	}
	template <typename T = void> T AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x109114C))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10912A4))(this, newName, newText, newIcon, newParams);
	}
	template <typename T = void> T RemoveUIPrefab() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10913FC))(this);
	}
	template <typename T = uintptr_t> T get_uniqueLookup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091408))(this);
	}
	template <typename T = bool> T get_hasUniqueLookup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091490))(this);
	}
	template <typename T = void> T AddUniqueLookup(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x109149C))(this, newName);
	}
	template <typename T = void> T ReplaceUniqueLookup(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10915B0))(this, newName);
	}
	template <typename T = void> T RemoveUniqueLookup() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10916C4))(this);
	}
	template <typename T = uintptr_t> T get_unlockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10916D0))(this);
	}
	template <typename T = bool> T get_hasUnlockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091758))(this);
	}
	template <typename T = void> T AddUnlockAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091764))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091878))(this, newName);
	}
	template <typename T = void> T RemoveUnlockAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x109198C))(this);
	}
	template <typename T = uintptr_t> T get_unlock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091998))(this);
	}
	template <typename T = bool> T get_hasUnlock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091A20))(this);
	}
	template <typename T = void> T AddUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1091A2C))(this, newNames);
	}
	template <typename T = void> T ReplaceUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameDataEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1091B40))(this, newNames);
	}
	template <typename T = void> T RemoveUnlock() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091C54))(this);
	}
	template <typename T = uintptr_t> T get_unlockContainerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091C60))(this);
	}
	template <typename T = bool> T get_hasUnlockContainerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091CE8))(this);
	}
	template <typename T = void> T AddUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091CF4))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091E08))(this, newName);
	}
	template <typename T = void> T RemoveUnlockContainerAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091F1C))(this);
	}
	template <typename T = uintptr_t> T get_unlockDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091F28))(this);
	}
	template <typename T = bool> T get_hasUnlockDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1091FB0))(this);
	}
	template <typename T = void> T AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1091FBC))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10920E0))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T RemoveUnlockDuration() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092204))(this);
	}
	template <typename T = uintptr_t> T get_unlockPortalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092210))(this);
	}
	template <typename T = bool> T get_hasUnlockPortalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092298))(this);
	}
	template <typename T = void> T AddUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10922A4))(this, newName);
	}
	template <typename T = void> T ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10923B8))(this, newName);
	}
	template <typename T = void> T RemoveUnlockPortalAction() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10924CC))(this);
	}
	template <typename T = bool> T get_isUnlocked() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10924D8))(this);
	}
	template <typename T = void> T set_isUnlocked(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10924E4))(this, value);
	}
	template <typename T = uintptr_t> T get_upgrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10925FC))(this);
	}
	template <typename T = bool> T get_hasUpgrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092684))(this);
	}
	template <typename T = void> T AddUpgrade(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1092690))(this, newName);
	}
	template <typename T = void> T ReplaceUpgrade(Il2CppString* newName) {
		return ((T (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10927A4))(this, newName);
	}
	template <typename T = void> T RemoveUpgrade() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10928B8))(this);
	}
	template <typename T = uintptr_t> T get_upgradeEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10928C4))(this);
	}
	template <typename T = bool> T get_hasUpgradeEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x109294C))(this);
	}
	template <typename T = void> T AddUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1092958))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1092AF4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveUpgradeEffect() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092C90))(this);
	}
	template <typename T = uintptr_t> T get_vIPPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092C9C))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092D24))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1092D30))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1092E34))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092F38))(this);
	}
	template <typename T = uintptr_t> T get_velocity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092F44))(this);
	}
	template <typename T = bool> T get_hasVelocity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1092FCC))(this);
	}
	template <typename T = void> T AddVelocity(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1092FD8))(this, newX, newY);
	}
	template <typename T = void> T ReplaceVelocity(float newX, float newY) {
		return ((T (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x10930E0))(this, newX, newY);
	}
	template <typename T = void> T RemoveVelocity() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10931E8))(this);
	}
	template <typename T = uintptr_t> T get_visualCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10931F4))(this);
	}
	template <typename T = bool> T get_hasVisualCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x109327C))(this);
	}
	template <typename T = void> T AddVisualCollision(float newRadius) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x1093288))(this, newRadius);
	}
	template <typename T = void> T ReplaceVisualCollision(float newRadius) {
		return ((T (*)(GameDataEntity*, float))(Il2CppBase() + 0x109338C))(this, newRadius);
	}
	template <typename T = void> T RemoveVisualCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093490))(this);
	}
	template <typename T = bool> T get_isWallCollision() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x109349C))(this);
	}
	template <typename T = void> T set_isWallCollision(bool value) {
		return ((T (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10934A8))(this, value);
	}
	template <typename T = uintptr_t> T get_waveIndex() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10935C0))(this);
	}
	template <typename T = bool> T get_hasWaveIndex() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093648))(this);
	}
	template <typename T = void> T AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1093654))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x109375C))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T RemoveWaveIndex() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093864))(this);
	}
	template <typename T = uintptr_t> T get_waveItem() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093870))(this);
	}
	template <typename T = bool> T get_hasWaveItem() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10938F8))(this);
	}
	template <typename T = void> T AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1093904))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1093A20))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T RemoveWaveItem() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093B3C))(this);
	}
	template <typename T = uintptr_t> T get_waveState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093B48))(this);
	}
	template <typename T = bool> T get_hasWaveState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093BD0))(this);
	}
	template <typename T = void> T AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1093BDC))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(GameDataEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1093CF4))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T RemoveWaveState() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093E0C))(this);
	}
	template <typename T = uintptr_t> T get_wavesEvent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093E18))(this);
	}
	template <typename T = bool> T get_hasWavesEvent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1093EA0))(this);
	}
	template <typename T = void> T AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1093EAC))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1094068))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T RemoveWavesEvent() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1094224))(this);
	}
	template <typename T = uintptr_t> T get_wayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1094230))(this);
	}
	template <typename T = bool> T get_hasWayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10942B8))(this);
	}
	template <typename T = void> T AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10942C4))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10943E8))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T RemoveWayPoint() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x109450C))(this);
	}
	template <typename T = uintptr_t> T get_worldType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x1094518))(this);
	}
	template <typename T = bool> T get_hasWorldType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10945A0))(this);
	}
	template <typename T = void> T AddWorldType(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10945AC))(this, newType);
	}
	template <typename T = void> T ReplaceWorldType(uintptr_t newType) {
		return ((T (*)(GameDataEntity*, uintptr_t))(Il2CppBase() + 0x10946B0))(this, newType);
	}
	template <typename T = void> T RemoveWorldType() {
		return ((T (*)(GameDataEntity*))(Il2CppBase() + 0x10947B4))(this);
	}

};

}
