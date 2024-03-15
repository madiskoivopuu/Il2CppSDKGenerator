#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDataEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataEntity"));
	}

	template <typename R = ActivateOnLocationLockedComponent*> static R& activateOnLocationLockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AutoAttackComponent*> static R& autoAttackComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = AutoModeComponent*> static R& autoModeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = AutoOpenDoorComponent*> static R& autoOpenDoorComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = BuildBlockerComponent*> static R& buildBlockerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = CanTravelComponent*> static R& canTravelComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = ClickComponent*> static R& clickComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = CreepComponent*> static R& creepComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = DisabledComponent*> static R& disabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = DraggedComponent*> static R& draggedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = ExplodeOnDeathComponent*> static R& explodeOnDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = ExternalInventory*> static R& externalInventoryComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = FakeBaseComponent*> static R& fakeBaseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = FindViewInSceneComponent*> static R& findViewInSceneComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = FollowTargetComponent*> static R& followTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = HideBagComponent*> static R& hideBagComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = HideHeadComponent*> static R& hideHeadComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = HidePetComponent*> static R& hidePetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = InventoryLockedComponent*> static R& inventoryLockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = MannequinComponent*> static R& mannequinComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = MapPointComponent*> static R& mapPointComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = MoveToTargetPosition*> static R& moveToTargetPositionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = NoAutoModeComponent*> static R& noAutoModeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = NotAggressiveComponent*> static R& notAggressiveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = NotInteractableComponent*> static R& notInteractableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = NotPursuitTargetComponent*> static R& notPursuitTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename R = NotSelectableComponent*> static R& notSelectableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename R = OnDeathComponent*> static R& onDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename R = OnGroundComponent*> static R& onGroundComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename R = PlayerComponent*> static R& playerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename R = PlayerKillComponent*> static R& playerKillComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename R = SaveableComponent*> static R& saveableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename R = ShieldTotemComponent*> static R& shieldTotemComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename R = UnlockedComponent*> static R& unlockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename R = WallCollisionComponent*> static R& wallCollisionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10546A8))(this);
	}
	template <typename R = AFKMoveComponent*> R get_aFKMove() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10547E0))(this);
	}
	template <typename R = bool> R get_hasAFKMove() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054868))(this);
	}
	template <typename R = void> R AddAFKMove(int64_t newTick) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1054874))(this, newTick);
	}
	template <typename R = void> R ReplaceAFKMove(int64_t newTick) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1054978))(this, newTick);
	}
	template <typename R = void> R RemoveAFKMove() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054A7C))(this);
	}
	template <typename R = AFKTriggerComponent*> R get_aFKTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054A88))(this);
	}
	template <typename R = bool> R get_hasAFKTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054B10))(this);
	}
	template <typename R = void> R AddAFKTrigger(bool newMove) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054B1C))(this, newMove);
	}
	template <typename R = void> R ReplaceAFKTrigger(bool newMove) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054C24))(this, newMove);
	}
	template <typename R = void> R RemoveAFKTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054D2C))(this);
	}
	template <typename R = AIBattleComponent*> R get_aIBattle() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054D38))(this);
	}
	template <typename R = bool> R get_hasAIBattle() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054DC0))(this);
	}
	template <typename R = void> R AddAIBattle(Il2CppString* newGroupTag, bool newStartInEvade, float newEvadeDelay, Il2CppArray<Il2CppString*>* newEvadeMagics, Il2CppString* newEvadeItem, Il2CppArray<ActiveTarget*>* newDefaultActiveTargets, Il2CppArray<Phase*>* newPhases, Il2CppArray<WeaponRecord*>* newWeapons, float newWeaponSwitchCooldown, Il2CppArray<ScheduleRecord*>* newSchedule, Il2CppArray<ActiveTarget*>* newDeathActiveTargets, bool newDestroyChildren) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, float, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<ActiveTarget*>*, Il2CppArray<Phase*>*, Il2CppArray<WeaponRecord*>*, float, Il2CppArray<ScheduleRecord*>*, Il2CppArray<ActiveTarget*>*, bool))(Il2CppBase() + 0x1054DCC))(this, newGroupTag, newStartInEvade, newEvadeDelay, newEvadeMagics, newEvadeItem, newDefaultActiveTargets, newPhases, newWeapons, newWeaponSwitchCooldown, newSchedule, newDeathActiveTargets, newDestroyChildren);
	}
	template <typename R = void> R ReplaceAIBattle(Il2CppString* newGroupTag, bool newStartInEvade, float newEvadeDelay, Il2CppArray<Il2CppString*>* newEvadeMagics, Il2CppString* newEvadeItem, Il2CppArray<ActiveTarget*>* newDefaultActiveTargets, Il2CppArray<Phase*>* newPhases, Il2CppArray<WeaponRecord*>* newWeapons, float newWeaponSwitchCooldown, Il2CppArray<ScheduleRecord*>* newSchedule, Il2CppArray<ActiveTarget*>* newDeathActiveTargets, bool newDestroyChildren) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, float, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<ActiveTarget*>*, Il2CppArray<Phase*>*, Il2CppArray<WeaponRecord*>*, float, Il2CppArray<ScheduleRecord*>*, Il2CppArray<ActiveTarget*>*, bool))(Il2CppBase() + 0x1054FC4))(this, newGroupTag, newStartInEvade, newEvadeDelay, newEvadeMagics, newEvadeItem, newDefaultActiveTargets, newPhases, newWeapons, newWeaponSwitchCooldown, newSchedule, newDeathActiveTargets, newDestroyChildren);
	}
	template <typename R = void> R RemoveAIBattle() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10551BC))(this);
	}
	template <typename R = AIBattleSourceComponent*> R get_aIBattleSource() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10551C8))(this);
	}
	template <typename R = bool> R get_hasAIBattleSource() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055250))(this);
	}
	template <typename R = void> R AddAIBattleSource(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x105525C))(this, newId);
	}
	template <typename R = void> R ReplaceAIBattleSource(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1055360))(this, newId);
	}
	template <typename R = void> R RemoveAIBattleSource() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055464))(this);
	}
	template <typename R = AIBattleStateComponent*> R get_aIBattleState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055470))(this);
	}
	template <typename R = bool> R get_hasAIBattleState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10554F8))(this);
	}
	template <typename R = void> R AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(GameDataEntity*, int32_t, int64_t))(Il2CppBase() + 0x1055504))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(GameDataEntity*, int32_t, int64_t))(Il2CppBase() + 0x1055610))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R RemoveAIBattleState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105571C))(this);
	}
	template <typename R = AIBattleTrackerComponent*> R get_aIBattleTracker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055728))(this);
	}
	template <typename R = bool> R get_hasAIBattleTracker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10557B0))(this);
	}
	template <typename R = void> R AddAIBattleTracker(EnrageTracker* newEnrage, Il2CppString* newCaption, Il2CppString* newIcon, Il2CppArray<MagicTracker*>* newMagics) {
		return ((R (*)(GameDataEntity*, EnrageTracker*, Il2CppString*, Il2CppString*, Il2CppArray<MagicTracker*>*))(Il2CppBase() + 0x10557BC))(this, newEnrage, newCaption, newIcon, newMagics);
	}
	template <typename R = void> R ReplaceAIBattleTracker(EnrageTracker* newEnrage, Il2CppString* newCaption, Il2CppString* newIcon, Il2CppArray<MagicTracker*>* newMagics) {
		return ((R (*)(GameDataEntity*, EnrageTracker*, Il2CppString*, Il2CppString*, Il2CppArray<MagicTracker*>*))(Il2CppBase() + 0x1055914))(this, newEnrage, newCaption, newIcon, newMagics);
	}
	template <typename R = void> R RemoveAIBattleTracker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055A6C))(this);
	}
	template <typename R = AIEvadeTimeComponent*> R get_aIEvadeTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055A78))(this);
	}
	template <typename R = bool> R get_hasAIEvadeTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055B00))(this);
	}
	template <typename R = void> R AddAIEvadeTime(int64_t newTicks) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1055B0C))(this, newTicks);
	}
	template <typename R = void> R ReplaceAIEvadeTime(int64_t newTicks) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1055C10))(this, newTicks);
	}
	template <typename R = void> R RemoveAIEvadeTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055D14))(this);
	}
	template <typename R = AIPocketsStateComponent*> R get_aIPocketsState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055D20))(this);
	}
	template <typename R = bool> R get_hasAIPocketsState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1055DA8))(this);
	}
	template <typename R = void> R AddAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(GameDataEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x1055DB4))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R ReplaceAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(GameDataEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0x1055F6C))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R RemoveAIPocketsState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056124))(this);
	}
	template <typename R = AccumulativeExchangeComponent*> R get_accumulativeExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056130))(this);
	}
	template <typename R = bool> R get_hasAccumulativeExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10561B8))(this);
	}
	template <typename R = void> R AddAccumulativeExchange(Il2CppArray<ExchangeResource*>* newResources, Il2CppArray<FilteredResources*>* newFilters, Il2CppArray<RewardResource*>* newRewards, RewardResource* newAccumulativeReward, bool newConsiderDurability, int32_t newSecondsToComplete, int32_t newSpeedUpCurrencyCount, Il2CppString* newAnalyticEvent, Il2CppString* newEffect, Il2CppString* newInfoText, Il2CppString* newWindowIcon, Il2CppString* newWindowDesk, Il2CppString* newUseButtonText, Il2CppString* newGetRewardButtonText, Il2CppString* newSpeedUpButtonText, Il2CppString* newWaitTillEndWarningText, Il2CppString* newTakeRewardWarningText) {
		return ((R (*)(GameDataEntity*, Il2CppArray<ExchangeResource*>*, Il2CppArray<FilteredResources*>*, Il2CppArray<RewardResource*>*, RewardResource*, bool, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10561C4))(this, newResources, newFilters, newRewards, newAccumulativeReward, newConsiderDurability, newSecondsToComplete, newSpeedUpCurrencyCount, newAnalyticEvent, newEffect, newInfoText, newWindowIcon, newWindowDesk, newUseButtonText, newGetRewardButtonText, newSpeedUpButtonText, newWaitTillEndWarningText, newTakeRewardWarningText);
	}
	template <typename R = void> R ReplaceAccumulativeExchange(Il2CppArray<ExchangeResource*>* newResources, Il2CppArray<FilteredResources*>* newFilters, Il2CppArray<RewardResource*>* newRewards, RewardResource* newAccumulativeReward, bool newConsiderDurability, int32_t newSecondsToComplete, int32_t newSpeedUpCurrencyCount, Il2CppString* newAnalyticEvent, Il2CppString* newEffect, Il2CppString* newInfoText, Il2CppString* newWindowIcon, Il2CppString* newWindowDesk, Il2CppString* newUseButtonText, Il2CppString* newGetRewardButtonText, Il2CppString* newSpeedUpButtonText, Il2CppString* newWaitTillEndWarningText, Il2CppString* newTakeRewardWarningText) {
		return ((R (*)(GameDataEntity*, Il2CppArray<ExchangeResource*>*, Il2CppArray<FilteredResources*>*, Il2CppArray<RewardResource*>*, RewardResource*, bool, int32_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1056438))(this, newResources, newFilters, newRewards, newAccumulativeReward, newConsiderDurability, newSecondsToComplete, newSpeedUpCurrencyCount, newAnalyticEvent, newEffect, newInfoText, newWindowIcon, newWindowDesk, newUseButtonText, newGetRewardButtonText, newSpeedUpButtonText, newWaitTillEndWarningText, newTakeRewardWarningText);
	}
	template <typename R = void> R RemoveAccumulativeExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10566AC))(this);
	}
	template <typename R = bool> R get_isActivateOnLocationLocked() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10566B8))(this);
	}
	template <typename R = void> R set_isActivateOnLocationLocked(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10566C4))(this, value);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10567DC))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056864))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1056870))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1056978))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056A80))(this);
	}
	template <typename R = ActiveEffectComponent*> R get_activeEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056A8C))(this);
	}
	template <typename R = bool> R get_hasActiveEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056B14))(this);
	}
	template <typename R = void> R AddActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1056B20))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1056CBC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveActiveEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056E58))(this);
	}
	template <typename R = AddExpByGradeComponent*> R get_addExpByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056E64))(this);
	}
	template <typename R = bool> R get_hasAddExpByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1056EEC))(this);
	}
	template <typename R = void> R AddAddExpByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x1056EF8))(this, newValues);
	}
	template <typename R = void> R ReplaceAddExpByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x105700C))(this, newValues);
	}
	template <typename R = void> R RemoveAddExpByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057120))(this);
	}
	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105712C))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10571B4))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10571C0))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10572C4))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10573C8))(this);
	}
	template <typename R = AddRaidKarmaComponent*> R get_addRaidKarma() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10573D4))(this);
	}
	template <typename R = bool> R get_hasAddRaidKarma() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105745C))(this);
	}
	template <typename R = void> R AddAddRaidKarma(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1057468))(this, newValue);
	}
	template <typename R = void> R ReplaceAddRaidKarma(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x105756C))(this, newValue);
	}
	template <typename R = void> R RemoveAddRaidKarma() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057670))(this);
	}
	template <typename R = AddStoreExperienceComponent*> R get_addStoreExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105767C))(this);
	}
	template <typename R = bool> R get_hasAddStoreExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057704))(this);
	}
	template <typename R = void> R AddAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0x1057710))(this, newList);
	}
	template <typename R = void> R ReplaceAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0x1057824))(this, newList);
	}
	template <typename R = void> R RemoveAddStoreExperience() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057938))(this);
	}
	template <typename R = AggroMeRadiusComponent*> R get_aggroMeRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057944))(this);
	}
	template <typename R = bool> R get_hasAggroMeRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10579CC))(this);
	}
	template <typename R = void> R AddAggroMeRadius(float newValue, Il2CppString* newTargetCondition, Il2CppString* newSourceCondition) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10579D8))(this, newValue, newTargetCondition, newSourceCondition);
	}
	template <typename R = void> R ReplaceAggroMeRadius(float newValue, Il2CppString* newTargetCondition, Il2CppString* newSourceCondition) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1057B10))(this, newValue, newTargetCondition, newSourceCondition);
	}
	template <typename R = void> R RemoveAggroMeRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057C48))(this);
	}
	template <typename R = AggroRadiusComponent*> R get_aggroRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057C54))(this);
	}
	template <typename R = bool> R get_hasAggroRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057CDC))(this);
	}
	template <typename R = void> R AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(GameDataEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x1057CE8))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(GameDataEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0x1057E18))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R RemoveAggroRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057F48))(this);
	}
	template <typename R = AggroTargetComponent*> R get_aggroTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057F54))(this);
	}
	template <typename R = bool> R get_hasAggroTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1057FDC))(this);
	}
	template <typename R = void> R AddAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(GameDataEntity*, int32_t, bool))(Il2CppBase() + 0x1057FE8))(this, newId, newMovable);
	}
	template <typename R = void> R ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(GameDataEntity*, int32_t, bool))(Il2CppBase() + 0x10580F8))(this, newId, newMovable);
	}
	template <typename R = void> R RemoveAggroTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058208))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058214))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105829C))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10582A8))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10583AC))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10584B0))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10584BC))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058544))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058550))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058654))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058758))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058764))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10587EC))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10587F8))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10588FC))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058A00))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058A0C))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058A94))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058AA0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1058BA4))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058CA8))(this);
	}
	template <typename R = AngularSpeedComponent*> R get_angularSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058CB4))(this);
	}
	template <typename R = bool> R get_hasAngularSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058D3C))(this);
	}
	template <typename R = void> R AddAngularSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1058D48))(this, newValue);
	}
	template <typename R = void> R ReplaceAngularSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1058E4C))(this, newValue);
	}
	template <typename R = void> R RemoveAngularSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058F50))(this);
	}
	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058F5C))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1058FE4))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1058FF0))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0x1059198))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059340))(this);
	}
	template <typename R = ApplyOnTargetActiveEffectComponent*> R get_applyOnTargetActiveEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105934C))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetActiveEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10593D4))(this);
	}
	template <typename R = void> R AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x10593E0))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x105957C))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetActiveEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059718))(this);
	}
	template <typename R = ArmingBackpackComponent*> R get_armingBackpack() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059724))(this);
	}
	template <typename R = bool> R get_hasArmingBackpack() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10597AC))(this);
	}
	template <typename R = void> R AddArmingBackpack(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10597B8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBackpack(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10598CC))(this, newName);
	}
	template <typename R = void> R RemoveArmingBackpack() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10599E0))(this);
	}
	template <typename R = ArmingBannerComponent*> R get_armingBanner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10599EC))(this);
	}
	template <typename R = bool> R get_hasArmingBanner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059A74))(this);
	}
	template <typename R = void> R AddArmingBanner(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059A80))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBanner(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059B94))(this, newName);
	}
	template <typename R = void> R RemoveArmingBanner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059CA8))(this);
	}
	template <typename R = ArmingBeardComponent*> R get_armingBeard() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059CB4))(this);
	}
	template <typename R = bool> R get_hasArmingBeard() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059D3C))(this);
	}
	template <typename R = void> R AddArmingBeard(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059D48))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBeard(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1059E5C))(this, newName);
	}
	template <typename R = void> R RemoveArmingBeard() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059F70))(this);
	}
	template <typename R = ArmingCharmComponent*> R get_armingCharm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1059F7C))(this);
	}
	template <typename R = bool> R get_hasArmingCharm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A004))(this);
	}
	template <typename R = void> R AddArmingCharm(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A010))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCharm(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A124))(this, newName);
	}
	template <typename R = void> R RemoveArmingCharm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A238))(this);
	}
	template <typename R = ArmingChestComponent*> R get_armingChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A244))(this);
	}
	template <typename R = bool> R get_hasArmingChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A2CC))(this);
	}
	template <typename R = void> R AddArmingChest(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A2D8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingChest(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A3EC))(this, newName);
	}
	template <typename R = void> R RemoveArmingChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A500))(this);
	}
	template <typename R = ArmingClassComponent*> R get_armingClass() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A50C))(this);
	}
	template <typename R = bool> R get_hasArmingClass() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A594))(this);
	}
	template <typename R = void> R AddArmingClass(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A5A0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClass(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A6B4))(this, newName);
	}
	template <typename R = void> R RemoveArmingClass() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A7C8))(this);
	}
	template <typename R = ArmingClothesComponent*> R get_armingClothes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A7D4))(this);
	}
	template <typename R = bool> R get_hasArmingClothes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105A85C))(this);
	}
	template <typename R = void> R AddArmingClothes(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A868))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClothes(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105A97C))(this, newName);
	}
	template <typename R = void> R RemoveArmingClothes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105AA90))(this);
	}
	template <typename R = ArmingCorpseComponent*> R get_armingCorpse() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105AA9C))(this);
	}
	template <typename R = bool> R get_hasArmingCorpse() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105AB24))(this);
	}
	template <typename R = void> R AddArmingCorpse(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AB30))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCorpse(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AC44))(this, newName);
	}
	template <typename R = void> R RemoveArmingCorpse() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105AD58))(this);
	}
	template <typename R = ArmingFaceComponent*> R get_armingFace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105AD64))(this);
	}
	template <typename R = bool> R get_hasArmingFace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105ADEC))(this);
	}
	template <typename R = void> R AddArmingFace(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105ADF8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFace(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105AF0C))(this, newName);
	}
	template <typename R = void> R RemoveArmingFace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B020))(this);
	}
	template <typename R = ArmingFeetComponent*> R get_armingFeet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B02C))(this);
	}
	template <typename R = bool> R get_hasArmingFeet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B0B4))(this);
	}
	template <typename R = void> R AddArmingFeet(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B0C0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFeet(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B1D4))(this, newName);
	}
	template <typename R = void> R RemoveArmingFeet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B2E8))(this);
	}
	template <typename R = ArmingHairColorComponent*> R get_armingHairColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B2F4))(this);
	}
	template <typename R = bool> R get_hasArmingHairColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B37C))(this);
	}
	template <typename R = void> R AddArmingHairColor(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B388))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHairColor(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B49C))(this, newName);
	}
	template <typename R = void> R RemoveArmingHairColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B5B0))(this);
	}
	template <typename R = ArmingHairComponent*> R get_armingHair() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B5BC))(this);
	}
	template <typename R = bool> R get_hasArmingHair() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B644))(this);
	}
	template <typename R = void> R AddArmingHair(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B650))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHair(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B764))(this, newName);
	}
	template <typename R = void> R RemoveArmingHair() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B878))(this);
	}
	template <typename R = ArmingHeadComponent*> R get_armingHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B884))(this);
	}
	template <typename R = bool> R get_hasArmingHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105B90C))(this);
	}
	template <typename R = void> R AddArmingHead(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105B918))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHead(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BA2C))(this, newName);
	}
	template <typename R = void> R RemoveArmingHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BB40))(this);
	}
	template <typename R = ArmingLegsComponent*> R get_armingLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BB4C))(this);
	}
	template <typename R = bool> R get_hasArmingLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BBD4))(this);
	}
	template <typename R = void> R AddArmingLegs(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BBE0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingLegs(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BCF4))(this, newName);
	}
	template <typename R = void> R RemoveArmingLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BE08))(this);
	}
	template <typename R = ArmingMountComponent*> R get_armingMount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BE14))(this);
	}
	template <typename R = bool> R get_hasArmingMount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105BE9C))(this);
	}
	template <typename R = void> R AddArmingMount(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BEA8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMount(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105BFBC))(this, newName);
	}
	template <typename R = void> R RemoveArmingMount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C0D0))(this);
	}
	template <typename R = ArmingMountSkill1Component*> R get_armingMountSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C0DC))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C164))(this);
	}
	template <typename R = void> R AddArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C170))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C284))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C398))(this);
	}
	template <typename R = ArmingMountSkill2Component*> R get_armingMountSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C3A4))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C42C))(this);
	}
	template <typename R = void> R AddArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C438))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C54C))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C660))(this);
	}
	template <typename R = ArmingMountSkill3Component*> R get_armingMountSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C66C))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C6F4))(this);
	}
	template <typename R = void> R AddArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C700))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C814))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C928))(this);
	}
	template <typename R = ArmingPassiveSkill1Component*> R get_armingPassiveSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C934))(this);
	}
	template <typename R = bool> R get_hasArmingPassiveSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105C9BC))(this);
	}
	template <typename R = void> R AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105C9C8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CADC))(this, newName);
	}
	template <typename R = void> R RemoveArmingPassiveSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CBF0))(this);
	}
	template <typename R = ArmingPetComponent*> R get_armingPet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CBFC))(this);
	}
	template <typename R = bool> R get_hasArmingPet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CC84))(this);
	}
	template <typename R = void> R AddArmingPet(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CC90))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPet(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CDA4))(this, newName);
	}
	template <typename R = void> R RemoveArmingPet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CEB8))(this);
	}
	template <typename R = ArmingPetSkill1Component*> R get_armingPetSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CEC4))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105CF4C))(this);
	}
	template <typename R = void> R AddArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105CF58))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D06C))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D180))(this);
	}
	template <typename R = ArmingPetSkill2Component*> R get_armingPetSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D18C))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D214))(this);
	}
	template <typename R = void> R AddArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D220))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D334))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D448))(this);
	}
	template <typename R = ArmingPetSkill3Component*> R get_armingPetSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D454))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D4DC))(this);
	}
	template <typename R = void> R AddArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D4E8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105D5FC))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill3() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D710))(this);
	}
	template <typename R = ArmingPocketComponent*> R get_armingPocket() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D71C))(this);
	}
	template <typename R = bool> R get_hasArmingPocket() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105D7A4))(this);
	}
	template <typename R = void> R AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105D7B0))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105D8F4))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R RemoveArmingPocket() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DA38))(this);
	}
	template <typename R = ArmingRunesComponent*> R get_armingRunes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DA44))(this);
	}
	template <typename R = bool> R get_hasArmingRunes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DACC))(this);
	}
	template <typename R = void> R AddArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x105DAD8))(this, newNames);
	}
	template <typename R = void> R ReplaceArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x105DBEC))(this, newNames);
	}
	template <typename R = void> R RemoveArmingRunes() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DD00))(this);
	}
	template <typename R = ArmingSkill1Component*> R get_armingSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DD0C))(this);
	}
	template <typename R = bool> R get_hasArmingSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DD94))(this);
	}
	template <typename R = void> R AddArmingSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105DDA0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill1(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105DEB4))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill1() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DFC8))(this);
	}
	template <typename R = ArmingSkill2Component*> R get_armingSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105DFD4))(this);
	}
	template <typename R = bool> R get_hasArmingSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E05C))(this);
	}
	template <typename R = void> R AddArmingSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E068))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill2(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E17C))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill2() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E290))(this);
	}
	template <typename R = ArmingSkinColorComponent*> R get_armingSkinColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E29C))(this);
	}
	template <typename R = bool> R get_hasArmingSkinColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E324))(this);
	}
	template <typename R = void> R AddArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E330))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E444))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkinColor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E558))(this);
	}
	template <typename R = ArmingWeaponComponent*> R get_armingWeapon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E564))(this);
	}
	template <typename R = bool> R get_hasArmingWeapon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E5EC))(this);
	}
	template <typename R = void> R AddArmingWeapon(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E5F8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingWeapon(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x105E70C))(this, newName);
	}
	template <typename R = void> R RemoveArmingWeapon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E820))(this);
	}
	template <typename R = ArrivalTimeComponent*> R get_arrivalTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E82C))(this);
	}
	template <typename R = bool> R get_hasArrivalTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105E8B4))(this);
	}
	template <typename R = void> R AddArrivalTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105E8C0))(this, newValue);
	}
	template <typename R = void> R ReplaceArrivalTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105E9C4))(this, newValue);
	}
	template <typename R = void> R RemoveArrivalTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EAC8))(this);
	}
	template <typename R = ArrowMarkerComponent*> R get_arrowMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EAD4))(this);
	}
	template <typename R = bool> R get_hasArrowMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EB5C))(this);
	}
	template <typename R = void> R AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x105EB68))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0x105ECC0))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R RemoveArrowMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EE18))(this);
	}
	template <typename R = AuraComponent*> R get_aura() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EE24))(this);
	}
	template <typename R = bool> R get_hasAura() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105EEAC))(this);
	}
	template <typename R = void> R AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x105EEB8))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0x105F010))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveAura() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F168))(this);
	}
	template <typename R = AutoAbilityComponent*> R get_autoAbility() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F174))(this);
	}
	template <typename R = bool> R get_hasAutoAbility() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F1FC))(this);
	}
	template <typename R = void> R AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(GameDataEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105F208))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(GameDataEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x105F344))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R RemoveAutoAbility() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F480))(this);
	}
	template <typename R = bool> R get_isAutoAttack() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F48C))(this);
	}
	template <typename R = void> R set_isAutoAttack(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x105F498))(this, value);
	}
	template <typename R = AutoDestructionComponent*> R get_autoDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F5B0))(this);
	}
	template <typename R = bool> R get_hasAutoDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F638))(this);
	}
	template <typename R = void> R AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x105F644))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0x105F78C))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R RemoveAutoDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F8D4))(this);
	}
	template <typename R = AutoFarmComponent*> R get_autoFarm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F8E0))(this);
	}
	template <typename R = bool> R get_hasAutoFarm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105F968))(this);
	}
	template <typename R = void> R AddAutoFarm(Il2CppArray<PriceItem*>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(GameDataEntity*, Il2CppArray<PriceItem*>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x105F974))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R ReplaceAutoFarm(Il2CppArray<PriceItem*>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(GameDataEntity*, Il2CppArray<PriceItem*>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x105FAC0))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R RemoveAutoFarm() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FC0C))(this);
	}
	template <typename R = AutoLockComponent*> R get_autoLock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FC18))(this);
	}
	template <typename R = bool> R get_hasAutoLock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FCA0))(this);
	}
	template <typename R = void> R AddAutoLock(int64_t newTime) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105FCAC))(this, newTime);
	}
	template <typename R = void> R ReplaceAutoLock(int64_t newTime) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x105FDB0))(this, newTime);
	}
	template <typename R = void> R RemoveAutoLock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FEB4))(this);
	}
	template <typename R = AutoMagicSpawnerComponent*> R get_autoMagicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FEC0))(this);
	}
	template <typename R = bool> R get_hasAutoMagicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105FF48))(this);
	}
	template <typename R = void> R AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x105FF54))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1060098))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R RemoveAutoMagicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10601DC))(this);
	}
	template <typename R = bool> R get_isAutoMode() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10601E8))(this);
	}
	template <typename R = void> R set_isAutoMode(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10601F4))(this, value);
	}
	template <typename R = bool> R get_isAutoOpenDoor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106030C))(this);
	}
	template <typename R = void> R set_isAutoOpenDoor(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1060318))(this, value);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060430))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10542D4))(this, value);
	}
	template <typename R = BackPointComponent*> R get_backPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106043C))(this);
	}
	template <typename R = bool> R get_hasBackPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10604C4))(this);
	}
	template <typename R = void> R AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(GameDataEntity*, int64_t, float, float))(Il2CppBase() + 0x10604D0))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(GameDataEntity*, int64_t, float, float))(Il2CppBase() + 0x10605E8))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R RemoveBackPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060700))(this);
	}
	template <typename R = BackTargetComponent*> R get_backTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106070C))(this);
	}
	template <typename R = bool> R get_hasBackTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060794))(this);
	}
	template <typename R = void> R AddBackTarget(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10607A0))(this, newId);
	}
	template <typename R = void> R ReplaceBackTarget(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10608A4))(this, newId);
	}
	template <typename R = void> R RemoveBackTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10609A8))(this);
	}
	template <typename R = BankComponent*> R get_bank() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10609B4))(this);
	}
	template <typename R = bool> R get_hasBank() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060A3C))(this);
	}
	template <typename R = void> R AddBank(int32_t newBaseSize, int32_t newSizePerGrade) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1060A48))(this, newBaseSize, newSizePerGrade);
	}
	template <typename R = void> R ReplaceBank(int32_t newBaseSize, int32_t newSizePerGrade) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1060B50))(this, newBaseSize, newSizePerGrade);
	}
	template <typename R = void> R RemoveBank() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060C58))(this);
	}
	template <typename R = BattleIdComponent*> R get_battleId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060C64))(this);
	}
	template <typename R = bool> R get_hasBattleId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060CEC))(this);
	}
	template <typename R = void> R AddBattleId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1060CF8))(this, newId);
	}
	template <typename R = void> R ReplaceBattleId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1060DFC))(this, newId);
	}
	template <typename R = void> R RemoveBattleId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060F00))(this);
	}
	template <typename R = BattleStatisticTypeComponent*> R get_battleStatisticType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060F0C))(this);
	}
	template <typename R = bool> R get_hasBattleStatisticType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1060F94))(this);
	}
	template <typename R = void> R AddBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(GameDataEntity*, BattleStatisticType*))(Il2CppBase() + 0x1060FA0))(this, newValue);
	}
	template <typename R = void> R ReplaceBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(GameDataEntity*, BattleStatisticType*))(Il2CppBase() + 0x10610A4))(this, newValue);
	}
	template <typename R = void> R RemoveBattleStatisticType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10611A8))(this);
	}
	template <typename R = BawlComponent*> R get_bawl() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10611B4))(this);
	}
	template <typename R = bool> R get_hasBawl() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106123C))(this);
	}
	template <typename R = void> R AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0x1061248))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0x10613BC))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R RemoveBawl() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061530))(this);
	}
	template <typename R = BindComponent*> R get_bind() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106153C))(this);
	}
	template <typename R = bool> R get_hasBind() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10615C4))(this);
	}
	template <typename R = void> R AddBind(EntityId* newTarget) {
		return ((R (*)(GameDataEntity*, EntityId*))(Il2CppBase() + 0x10615D0))(this, newTarget);
	}
	template <typename R = void> R ReplaceBind(EntityId* newTarget) {
		return ((R (*)(GameDataEntity*, EntityId*))(Il2CppBase() + 0x10616D4))(this, newTarget);
	}
	template <typename R = void> R RemoveBind() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10617D8))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1054758))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x105474C))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10617E4))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10618F8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061A0C))(this);
	}
	template <typename R = BonusMaxHealthComponent*> R get_bonusMaxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061A18))(this);
	}
	template <typename R = bool> R get_hasBonusMaxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061AA0))(this);
	}
	template <typename R = void> R AddBonusMaxHealth(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1061AAC))(this, newValue);
	}
	template <typename R = void> R ReplaceBonusMaxHealth(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1061BB0))(this, newValue);
	}
	template <typename R = void> R RemoveBonusMaxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061CB4))(this);
	}
	template <typename R = BossOpenResourcesComponent*> R get_bossOpenResources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061CC0))(this);
	}
	template <typename R = bool> R get_hasBossOpenResources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061D48))(this);
	}
	template <typename R = void> R AddBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(GameDataEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0x1061D54))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R ReplaceBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(GameDataEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0x1061EA0))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R RemoveBossOpenResources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061FEC))(this);
	}
	template <typename R = BossOpenStateComponent*> R get_bossOpenState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1061FF8))(this);
	}
	template <typename R = bool> R get_hasBossOpenState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062080))(this);
	}
	template <typename R = void> R AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((R (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0x106208C))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((R (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0x10621D0))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R RemoveBossOpenState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062314))(this);
	}
	template <typename R = BoxCollisionComponent*> R get_boxCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062320))(this);
	}
	template <typename R = bool> R get_hasBoxCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10623A8))(this);
	}
	template <typename R = void> R AddBoxCollision(float newWidth, float newHeight, float newHole, bool newTrigger) {
		return ((R (*)(GameDataEntity*, float, float, float, bool))(Il2CppBase() + 0x10623B4))(this, newWidth, newHeight, newHole, newTrigger);
	}
	template <typename R = void> R ReplaceBoxCollision(float newWidth, float newHeight, float newHole, bool newTrigger) {
		return ((R (*)(GameDataEntity*, float, float, float, bool))(Il2CppBase() + 0x10624E0))(this, newWidth, newHeight, newHole, newTrigger);
	}
	template <typename R = void> R RemoveBoxCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106260C))(this);
	}
	template <typename R = bool> R get_isBuildBlocker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062618))(this);
	}
	template <typename R = void> R set_isBuildBlocker(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1062624))(this, value);
	}
	template <typename R = BuildGroupComponent*> R get_buildGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106273C))(this);
	}
	template <typename R = bool> R get_hasBuildGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10627A8))(this);
	}
	template <typename R = void> R AddBuildGroup(Il2CppArray<BuildInstance*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<BuildInstance*>*))(Il2CppBase() + 0x10627B4))(this, newList);
	}
	template <typename R = void> R ReplaceBuildGroup(Il2CppArray<BuildInstance*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<BuildInstance*>*))(Il2CppBase() + 0x10628AC))(this, newList);
	}
	template <typename R = void> R RemoveBuildGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10629A4))(this);
	}
	template <typename R = BuildPlaceComponent*> R get_buildPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10629B0))(this);
	}
	template <typename R = bool> R get_hasBuildPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062A38))(this);
	}
	template <typename R = void> R AddBuildPlace(Fill* newFill) {
		return ((R (*)(GameDataEntity*, Fill*))(Il2CppBase() + 0x1062A44))(this, newFill);
	}
	template <typename R = void> R ReplaceBuildPlace(Fill* newFill) {
		return ((R (*)(GameDataEntity*, Fill*))(Il2CppBase() + 0x1062B48))(this, newFill);
	}
	template <typename R = void> R RemoveBuildPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062C4C))(this);
	}
	template <typename R = BuilderComponent*> R get_builder() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062C58))(this);
	}
	template <typename R = bool> R get_hasBuilder() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1062CE0))(this);
	}
	template <typename R = void> R AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<Resource*>* newResources) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1062CEC))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<Resource*>* newResources) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1062F84))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R RemoveBuilder() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106321C))(this);
	}
	template <typename R = CampBathComponent*> R get_campBath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063228))(this);
	}
	template <typename R = bool> R get_hasCampBath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10632B0))(this);
	}
	template <typename R = void> R AddCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(GameDataEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0x10632BC))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R ReplaceCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(GameDataEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0x10633E0))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R RemoveCampBath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063504))(this);
	}
	template <typename R = bool> R get_CanTravel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063510))(this);
	}
	template <typename R = void> R set_CanTravel(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106351C))(this, value);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063634))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10636BC))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10636C8))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10637CC))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10638D0))(this);
	}
	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1053FB8))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1053C88))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(GameDataEntity*, uint8_t))(Il2CppBase() + 0x10638DC))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(GameDataEntity*, uint8_t))(Il2CppBase() + 0x10639E0))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063AE4))(this);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063AF0))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063B78))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1063B84))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1063CBC))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063DF4))(this);
	}
	template <typename R = ChestMarkerComponent*> R get_chestMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063E00))(this);
	}
	template <typename R = bool> R get_hasChestMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1063E88))(this);
	}
	template <typename R = void> R AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1063E94))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0x1063FB0))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R RemoveChestMarker() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10640CC))(this);
	}
	template <typename R = ChestOnDeathComponent*> R get_chestOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10640D8))(this);
	}
	template <typename R = bool> R get_hasChestOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064160))(this);
	}
	template <typename R = void> R AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x106416C))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0x10642F4))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R RemoveChestOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106447C))(this);
	}
	template <typename R = ChestRewardComponent*> R get_chestReward() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064488))(this);
	}
	template <typename R = bool> R get_hasChestReward() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064510))(this);
	}
	template <typename R = void> R AddChestReward(Il2CppString* newRandomGroup, Il2CppString* newRequiredItem, int32_t newPrice, Il2CppString* newEffectName, int32_t newFreeSlotsRequired) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106451C))(this, newRandomGroup, newRequiredItem, newPrice, newEffectName, newFreeSlotsRequired);
	}
	template <typename R = void> R ReplaceChestReward(Il2CppString* newRandomGroup, Il2CppString* newRequiredItem, int32_t newPrice, Il2CppString* newEffectName, int32_t newFreeSlotsRequired) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1064678))(this, newRandomGroup, newRequiredItem, newPrice, newEffectName, newFreeSlotsRequired);
	}
	template <typename R = void> R RemoveChestReward() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10647D4))(this);
	}
	template <typename R = ChildsComponent*> R get_childs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10647E0))(this);
	}
	template <typename R = bool> R get_hasChilds() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064868))(this);
	}
	template <typename R = void> R AddChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1064874))(this, newSlots);
	}
	template <typename R = void> R ReplaceChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1064988))(this, newSlots);
	}
	template <typename R = void> R RemoveChilds() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064A9C))(this);
	}
	template <typename R = ChooseCreatureComponent*> R get_chooseCreature() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064AA8))(this);
	}
	template <typename R = bool> R get_hasChooseCreature() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064B30))(this);
	}
	template <typename R = void> R AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1064B3C))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool))(Il2CppBase() + 0x1064C5C))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R RemoveChooseCreature() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064D7C))(this);
	}
	template <typename R = CircleCollisionComponent*> R get_circleCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064D88))(this);
	}
	template <typename R = bool> R get_hasCircleCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1064E10))(this);
	}
	template <typename R = void> R AddCircleCollision(float newRadius, bool newTrigger) {
		return ((R (*)(GameDataEntity*, float, bool))(Il2CppBase() + 0x1064E1C))(this, newRadius, newTrigger);
	}
	template <typename R = void> R ReplaceCircleCollision(float newRadius, bool newTrigger) {
		return ((R (*)(GameDataEntity*, float, bool))(Il2CppBase() + 0x1064F34))(this, newRadius, newTrigger);
	}
	template <typename R = void> R RemoveCircleCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106504C))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065058))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10650E0))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10650EC))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10651F0))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10652F4))(this);
	}
	template <typename R = ClanPersonalComponent*> R get_clanPersonal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065300))(this);
	}
	template <typename R = bool> R get_hasClanPersonal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065388))(this);
	}
	template <typename R = void> R AddClanPersonal(int64_t newClanId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1065394))(this, newClanId);
	}
	template <typename R = void> R ReplaceClanPersonal(int64_t newClanId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1065498))(this, newClanId);
	}
	template <typename R = void> R RemoveClanPersonal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106559C))(this);
	}
	template <typename R = ClanPersonalGeneratorComponent*> R get_clanPersonalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10655A8))(this);
	}
	template <typename R = bool> R get_hasClanPersonalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065630))(this);
	}
	template <typename R = void> R AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x106563C))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1065798))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemoveClanPersonalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10658F4))(this);
	}
	template <typename R = bool> R get_isClick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065900))(this);
	}
	template <typename R = void> R set_isClick(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106590C))(this, value);
	}
	template <typename R = ClosedDurationComponent*> R get_closedDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065A24))(this);
	}
	template <typename R = bool> R get_hasClosedDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065AAC))(this);
	}
	template <typename R = void> R AddClosedDuration(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1065AB8))(this, newValue);
	}
	template <typename R = void> R ReplaceClosedDuration(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1065BBC))(this, newValue);
	}
	template <typename R = void> R RemoveClosedDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065CC0))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065CCC))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065D54))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1065D60))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1065E64))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065F68))(this);
	}
	template <typename R = CollisionActiveComponent*> R get_collisionActive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065F74))(this);
	}
	template <typename R = bool> R get_hasCollisionActive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1065FFC))(this);
	}
	template <typename R = void> R AddCollisionActive(Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1066008))(this, newTargetCondition, newActorCondition);
	}
	template <typename R = void> R ReplaceCollisionActive(Il2CppString* newTargetCondition, Il2CppString* newActorCondition) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1066130))(this, newTargetCondition, newActorCondition);
	}
	template <typename R = void> R RemoveCollisionActive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066258))(this);
	}
	template <typename R = ContainerActionComponent*> R get_containerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066264))(this);
	}
	template <typename R = bool> R get_hasContainerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10662EC))(this);
	}
	template <typename R = void> R AddContainerAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10662F8))(this, newName);
	}
	template <typename R = void> R ReplaceContainerAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106640C))(this, newName);
	}
	template <typename R = void> R RemoveContainerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066520))(this);
	}
	template <typename R = CorpseDestructionComponent*> R get_corpseDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106652C))(this);
	}
	template <typename R = bool> R get_hasCorpseDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10665B4))(this);
	}
	template <typename R = void> R AddCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0x10665C0))(this, newValues);
	}
	template <typename R = void> R ReplaceCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0x10666D4))(this, newValues);
	}
	template <typename R = void> R RemoveCorpseDestruction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10667E8))(this);
	}
	template <typename R = CostumeChestComponent*> R get_costumeChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10667F4))(this);
	}
	template <typename R = bool> R get_hasCostumeChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106687C))(this);
	}
	template <typename R = void> R AddCostumeChest(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066888))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeChest(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106699C))(this, newName);
	}
	template <typename R = void> R RemoveCostumeChest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066AB0))(this);
	}
	template <typename R = CostumeHeadComponent*> R get_costumeHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066ABC))(this);
	}
	template <typename R = bool> R get_hasCostumeHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066B44))(this);
	}
	template <typename R = void> R AddCostumeHead(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066B50))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeHead(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066C64))(this, newName);
	}
	template <typename R = void> R RemoveCostumeHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066D78))(this);
	}
	template <typename R = CostumeLegsComponent*> R get_costumeLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066D84))(this);
	}
	template <typename R = bool> R get_hasCostumeLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1066E0C))(this);
	}
	template <typename R = void> R AddCostumeLegs(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066E18))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeLegs(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1066F2C))(this, newName);
	}
	template <typename R = void> R RemoveCostumeLegs() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067040))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106704C))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10670D4))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10670E0))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10671E4))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10672E8))(this);
	}
	template <typename R = CoverComponent*> R get_cover() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10672F4))(this);
	}
	template <typename R = bool> R get_hasCover() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106737C))(this);
	}
	template <typename R = void> R AddCover(Il2CppString* newEffectName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1067388))(this, newEffectName);
	}
	template <typename R = void> R ReplaceCover(Il2CppString* newEffectName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106749C))(this, newEffectName);
	}
	template <typename R = void> R RemoveCover() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10675B0))(this);
	}
	template <typename R = CoverRadiusComponent*> R get_coverRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10675BC))(this);
	}
	template <typename R = bool> R get_hasCoverRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067644))(this);
	}
	template <typename R = void> R AddCoverRadius(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1067650))(this, newValue);
	}
	template <typename R = void> R ReplaceCoverRadius(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1067754))(this, newValue);
	}
	template <typename R = void> R RemoveCoverRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067858))(this);
	}
	template <typename R = CraftActionComponent*> R get_craftAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067864))(this);
	}
	template <typename R = bool> R get_hasCraftAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10678EC))(this);
	}
	template <typename R = void> R AddCraftAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10678F8))(this, newName);
	}
	template <typename R = void> R ReplaceCraftAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1067A0C))(this, newName);
	}
	template <typename R = void> R RemoveCraftAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067B20))(this);
	}
	template <typename R = CraftBoostComponent*> R get_craftBoost() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067B2C))(this);
	}
	template <typename R = bool> R get_hasCraftBoost() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067BB4))(this);
	}
	template <typename R = void> R AddCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x1067BC0))(this, newList);
	}
	template <typename R = void> R ReplaceCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0x1067CD4))(this, newList);
	}
	template <typename R = void> R RemoveCraftBoost() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067DE8))(this);
	}
	template <typename R = CraftComponent*> R get_craft() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067DF4))(this);
	}
	template <typename R = bool> R get_hasCraft() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1067E7C))(this);
	}
	template <typename R = void> R AddCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1067E88))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R ReplaceCraft(Il2CppString* newType, Il2CppString* newCategory, int32_t newSlotCount, bool newIsProduction, Il2CppString* newWorkerSummonItem, int32_t newMinOutSlots, Il2CppList<Il2CppString*>* newOutSlotUnlockConditions, Il2CppArray<FuelItem*>* newFuel, Il2CppString* newFuelType, float newTaggedFuelConversionRate, Il2CppString* newTaggedFuelIconAssetPath, Il2CppString* newTaggedFuelCaption, Il2CppString* newTaggedFuelDescription) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, int32_t, bool, Il2CppString*, int32_t, Il2CppList<Il2CppString*>*, Il2CppArray<FuelItem*>*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1068088))(this, newType, newCategory, newSlotCount, newIsProduction, newWorkerSummonItem, newMinOutSlots, newOutSlotUnlockConditions, newFuel, newFuelType, newTaggedFuelConversionRate, newTaggedFuelIconAssetPath, newTaggedFuelCaption, newTaggedFuelDescription);
	}
	template <typename R = void> R RemoveCraft() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068288))(this);
	}
	template <typename R = CraftWorkComponent*> R get_craftWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068294))(this);
	}
	template <typename R = bool> R get_hasCraftWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106831C))(this);
	}
	template <typename R = void> R AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x1068328))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0x1068494))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R RemoveCraftWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068600))(this);
	}
	template <typename R = CreateInventoryComponent*> R get_createInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106860C))(this);
	}
	template <typename R = bool> R get_hasCreateInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068694))(this);
	}
	template <typename R = void> R AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10686A0))(this, newRandomGroup);
	}
	template <typename R = void> R ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10687B4))(this, newRandomGroup);
	}
	template <typename R = void> R RemoveCreateInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10688C8))(this);
	}
	template <typename R = CreateUniqueInventoryComponent*> R get_createUniqueInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10688D4))(this);
	}
	template <typename R = bool> R get_hasCreateUniqueInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106895C))(this);
	}
	template <typename R = void> R AddCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1068968))(this, newRandomGroups);
	}
	template <typename R = void> R ReplaceCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1068A7C))(this, newRandomGroups);
	}
	template <typename R = void> R RemoveCreateUniqueInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068B90))(this);
	}
	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068B9C))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068C24))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1068C30))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1068D34))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068E38))(this);
	}
	template <typename R = bool> R get_isCreep() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10538F8))(this);
	}
	template <typename R = void> R set_isCreep(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1068E44))(this, value);
	}
	template <typename R = CurrencyExchangeComponent*> R get_currencyExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068F5C))(this);
	}
	template <typename R = bool> R get_hasCurrencyExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1068FE4))(this);
	}
	template <typename R = void> R AddCurrencyExchange(Il2CppString* newCurrencyItem, int32_t newLimit, float newResetTimeout, Nullable1int32_t>* newResetValue, Il2CppString* newStartTimeTempBuff, Il2CppString* newBuffItem, float newBuffCoef, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newTooltipLine, Il2CppString* newEffect) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, float, Nullable1int32_t>*, Il2CppString*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1068FF0))(this, newCurrencyItem, newLimit, newResetTimeout, newResetValue, newStartTimeTempBuff, newBuffItem, newBuffCoef, newWindowLine, newNoCurrencyWindowLine, newTooltipLine, newEffect);
	}
	template <typename R = void> R ReplaceCurrencyExchange(Il2CppString* newCurrencyItem, int32_t newLimit, float newResetTimeout, Nullable1int32_t>* newResetValue, Il2CppString* newStartTimeTempBuff, Il2CppString* newBuffItem, float newBuffCoef, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newTooltipLine, Il2CppString* newEffect) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, float, Nullable1int32_t>*, Il2CppString*, Il2CppString*, float, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10691C4))(this, newCurrencyItem, newLimit, newResetTimeout, newResetValue, newStartTimeTempBuff, newBuffItem, newBuffCoef, newWindowLine, newNoCurrencyWindowLine, newTooltipLine, newEffect);
	}
	template <typename R = void> R RemoveCurrencyExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069398))(this);
	}
	template <typename R = CurrentRoofComponent*> R get_currentRoof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10693A4))(this);
	}
	template <typename R = bool> R get_hasCurrentRoof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106942C))(this);
	}
	template <typename R = void> R AddCurrentRoof(int32_t newIndex) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069438))(this, newIndex);
	}
	template <typename R = void> R ReplaceCurrentRoof(int32_t newIndex) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106953C))(this, newIndex);
	}
	template <typename R = void> R RemoveCurrentRoof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069640))(this);
	}
	template <typename R = CustomStoreComponent*> R get_customStore() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106964C))(this);
	}
	template <typename R = bool> R get_hasCustomStore() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10696D4))(this);
	}
	template <typename R = void> R AddCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10696E0))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R ReplaceCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x10699E8))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R RemoveCustomStore() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069CF0))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069CFC))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069D84))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069D90))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1069E94))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069F98))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1069FA4))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A02C))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A038))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A13C))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A240))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A24C))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A2D4))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A2E0))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106A3E4))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A4E8))(this);
	}
	template <typename R = DailyShopActionComponent*> R get_dailyShopAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A4F4))(this);
	}
	template <typename R = bool> R get_hasDailyShopAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A57C))(this);
	}
	template <typename R = void> R AddDailyShopAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106A588))(this, newName);
	}
	template <typename R = void> R ReplaceDailyShopAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106A69C))(this, newName);
	}
	template <typename R = void> R RemoveDailyShopAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A7B0))(this);
	}
	template <typename R = DailyShopComponent*> R get_dailyShop() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A7BC))(this);
	}
	template <typename R = bool> R get_hasDailyShop() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106A844))(this);
	}
	template <typename R = void> R AddDailyShop(float newTax, int32_t newBaseSize, int32_t newSizePerGrade, Il2CppArray<Il2CppString*>* newSlots, Il2CppArray<SlotGradeLimit*>* newGradeLimits) {
		return ((R (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<SlotGradeLimit*>*))(Il2CppBase() + 0x106A850))(this, newTax, newBaseSize, newSizePerGrade, newSlots, newGradeLimits);
	}
	template <typename R = void> R ReplaceDailyShop(float newTax, int32_t newBaseSize, int32_t newSizePerGrade, Il2CppArray<Il2CppString*>* newSlots, Il2CppArray<SlotGradeLimit*>* newGradeLimits) {
		return ((R (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<SlotGradeLimit*>*))(Il2CppBase() + 0x106A99C))(this, newTax, newBaseSize, newSizePerGrade, newSlots, newGradeLimits);
	}
	template <typename R = void> R RemoveDailyShop() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106AAE8))(this);
	}
	template <typename R = DailyTavernComponent*> R get_dailyTavern() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106AAF4))(this);
	}
	template <typename R = bool> R get_hasDailyTavern() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106AB7C))(this);
	}
	template <typename R = void> R AddDailyTavern(Il2CppArray<float>* newRewardCoefs) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x106AB88))(this, newRewardCoefs);
	}
	template <typename R = void> R ReplaceDailyTavern(Il2CppArray<float>* newRewardCoefs) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x106AC9C))(this, newRewardCoefs);
	}
	template <typename R = void> R RemoveDailyTavern() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106ADB0))(this);
	}
	template <typename R = DamageCoefByGradeComponent*> R get_damageCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106ADBC))(this);
	}
	template <typename R = bool> R get_hasDamageCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106AE44))(this);
	}
	template <typename R = void> R AddDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x106AE50))(this, newValues);
	}
	template <typename R = void> R ReplaceDamageCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x106AF64))(this, newValues);
	}
	template <typename R = void> R RemoveDamageCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B078))(this);
	}
	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B084))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B10C))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106B118))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106B21C))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B320))(this);
	}
	template <typename R = DamageEffectComponent*> R get_damageEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B32C))(this);
	}
	template <typename R = bool> R get_hasDamageEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B3B4))(this);
	}
	template <typename R = void> R AddDamageEffect(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106B3C0))(this, newName);
	}
	template <typename R = void> R ReplaceDamageEffect(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106B4D4))(this, newName);
	}
	template <typename R = void> R RemoveDamageEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B5E8))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B5F4))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106B67C))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(GameDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106B688))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(GameDataEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x106B84C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BA10))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BA1C))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BAA4))(this);
	}
	template <typename R = void> R AddDamageType(DamageType* newValue) {
		return ((R (*)(GameDataEntity*, DamageType*))(Il2CppBase() + 0x106BAB0))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType* newValue) {
		return ((R (*)(GameDataEntity*, DamageType*))(Il2CppBase() + 0x10537F4))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BBB4))(this);
	}
	template <typename R = DefaultArmingComponent*> R get_defaultArming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BBC0))(this);
	}
	template <typename R = bool> R get_hasDefaultArming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106BC48))(this);
	}
	template <typename R = void> R AddDefaultArming(Il2CppString* newWeapon, Il2CppString* newFace, Il2CppString* newHair, Il2CppString* newBeard, Il2CppString* newHairColor, Il2CppString* newSkinColor, Il2CppString* newClothes, Il2CppString* newCostumeHead, Il2CppString* newCostumeChest, Il2CppString* newCostumeLegs, Il2CppString* newBanner, Il2CppString* newCorpse) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106BC54))(this, newWeapon, newFace, newHair, newBeard, newHairColor, newSkinColor, newClothes, newCostumeHead, newCostumeChest, newCostumeLegs, newBanner, newCorpse);
	}
	template <typename R = void> R ReplaceDefaultArming(Il2CppString* newWeapon, Il2CppString* newFace, Il2CppString* newHair, Il2CppString* newBeard, Il2CppString* newHairColor, Il2CppString* newSkinColor, Il2CppString* newClothes, Il2CppString* newCostumeHead, Il2CppString* newCostumeChest, Il2CppString* newCostumeLegs, Il2CppString* newBanner, Il2CppString* newCorpse) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106BE6C))(this, newWeapon, newFace, newHair, newBeard, newHairColor, newSkinColor, newClothes, newCostumeHead, newCostumeChest, newCostumeLegs, newBanner, newCorpse);
	}
	template <typename R = void> R RemoveDefaultArming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C084))(this);
	}
	template <typename R = DefaultGradeComponent*> R get_defaultGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C090))(this);
	}
	template <typename R = bool> R get_hasDefaultGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C118))(this);
	}
	template <typename R = void> R AddDefaultGrade(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106C124))(this, newValue);
	}
	template <typename R = void> R ReplaceDefaultGrade(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106C228))(this, newValue);
	}
	template <typename R = void> R RemoveDefaultGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C32C))(this);
	}
	template <typename R = DefaultVectorFieldComponent*> R get_defaultVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C338))(this);
	}
	template <typename R = bool> R get_hasDefaultVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C3C0))(this);
	}
	template <typename R = void> R AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x106C3CC))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x106C4FC))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveDefaultVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C62C))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C638))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C6C0))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106C6CC))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106C7D0))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C8D4))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C8E0))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106C968))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106C974))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x106CA9C))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CBC4))(this);
	}
	template <typename R = DestroyActionComponent*> R get_destroyAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CBD0))(this);
	}
	template <typename R = bool> R get_hasDestroyAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CC58))(this);
	}
	template <typename R = void> R AddDestroyAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106CC64))(this, newName);
	}
	template <typename R = void> R ReplaceDestroyAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106CD78))(this, newName);
	}
	template <typename R = void> R RemoveDestroyAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CE8C))(this);
	}
	template <typename R = DestroyOnDeathComponent*> R get_destroyOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CE98))(this);
	}
	template <typename R = bool> R get_hasDestroyOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106CF20))(this);
	}
	template <typename R = void> R AddDestroyOnDeath(bool newInstantly) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106CF2C))(this, newInstantly);
	}
	template <typename R = void> R ReplaceDestroyOnDeath(bool newInstantly) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106D034))(this, newInstantly);
	}
	template <typename R = void> R RemoveDestroyOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D13C))(this);
	}
	template <typename R = DifficultyComponent*> R get_difficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D148))(this);
	}
	template <typename R = bool> R get_hasDifficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D1D0))(this);
	}
	template <typename R = void> R AddDifficulty(Difficulty* newType) {
		return ((R (*)(GameDataEntity*, Difficulty*))(Il2CppBase() + 0x106D1DC))(this, newType);
	}
	template <typename R = void> R ReplaceDifficulty(Difficulty* newType) {
		return ((R (*)(GameDataEntity*, Difficulty*))(Il2CppBase() + 0x106D2E0))(this, newType);
	}
	template <typename R = void> R RemoveDifficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D3E4))(this);
	}
	template <typename R = DiplomacyManagementActionComponent*> R get_diplomacyManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D3F0))(this);
	}
	template <typename R = bool> R get_hasDiplomacyManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D478))(this);
	}
	template <typename R = void> R AddDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106D484))(this, newName);
	}
	template <typename R = void> R ReplaceDiplomacyManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x106D598))(this, newName);
	}
	template <typename R = void> R RemoveDiplomacyManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D6AC))(this);
	}
	template <typename R = bool> R get_isDisabled() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D6B8))(this);
	}
	template <typename R = void> R set_isDisabled(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x106D6C4))(this, value);
	}
	template <typename R = DistanceComponent*> R get_distance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D7DC))(this);
	}
	template <typename R = bool> R get_hasDistance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106D864))(this);
	}
	template <typename R = void> R AddDistance(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106D870))(this, newValue);
	}
	template <typename R = void> R ReplaceDistance(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106D974))(this, newValue);
	}
	template <typename R = void> R RemoveDistance() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DA78))(this);
	}
	template <typename R = DistrictLevelUpgrades*> R get_districtLevelUpgrades() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DA84))(this);
	}
	template <typename R = bool> R get_hasDistrictLevelUpgrades() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DB0C))(this);
	}
	template <typename R = void> R AddDistrictLevelUpgrades(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x106DB18))(this, newValues);
	}
	template <typename R = void> R ReplaceDistrictLevelUpgrades(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x106DC2C))(this, newValues);
	}
	template <typename R = void> R RemoveDistrictLevelUpgrades() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DD40))(this);
	}
	template <typename R = DoorWallComponent*> R get_doorWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DD4C))(this);
	}
	template <typename R = bool> R get_hasDoorWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106DDD4))(this);
	}
	template <typename R = void> R AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x106DDE0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x106DF08))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R RemoveDoorWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E030))(this);
	}
	template <typename R = bool> R get_isDragged() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E03C))(this);
	}
	template <typename R = void> R set_isDragged(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1054590))(this, value);
	}
	template <typename R = DungeonDifficultyComponent*> R get_dungeonDifficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E048))(this);
	}
	template <typename R = bool> R get_hasDungeonDifficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E0D0))(this);
	}
	template <typename R = void> R AddDungeonDifficulty(Il2CppString* newDefaultDescription, Il2CppArray<Difficulty*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Difficulty*>*))(Il2CppBase() + 0x106E0DC))(this, newDefaultDescription, newList);
	}
	template <typename R = void> R ReplaceDungeonDifficulty(Il2CppString* newDefaultDescription, Il2CppArray<Difficulty*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Difficulty*>*))(Il2CppBase() + 0x106E204))(this, newDefaultDescription, newList);
	}
	template <typename R = void> R RemoveDungeonDifficulty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E32C))(this);
	}
	template <typename R = DurabilityDamageComponent*> R get_durabilityDamage() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E338))(this);
	}
	template <typename R = bool> R get_hasDurabilityDamage() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E3C0))(this);
	}
	template <typename R = void> R AddDurabilityDamage(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E3CC))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityDamage(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E4D0))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityDamage() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E5D4))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E5E0))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E668))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E674))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x106E778))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E87C))(this);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E888))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106E910))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106E91C))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106EA20))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EB24))(this);
	}
	template <typename R = EnemyInteractComponent*> R get_enemyInteract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EB30))(this);
	}
	template <typename R = bool> R get_hasEnemyInteract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EBB8))(this);
	}
	template <typename R = void> R AddEnemyInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(GameDataEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x106EBC4))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceEnemyInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(GameDataEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x106ED70))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveEnemyInteract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EF1C))(this);
	}
	template <typename R = EnergyComponent*> R get_energy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EF28))(this);
	}
	template <typename R = bool> R get_hasEnergy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106EFB0))(this);
	}
	template <typename R = void> R AddEnergy(int64_t newTick) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106EFBC))(this, newTick);
	}
	template <typename R = void> R ReplaceEnergy(int64_t newTick) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x106F0C0))(this, newTick);
	}
	template <typename R = void> R RemoveEnergy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F1C4))(this);
	}
	template <typename R = EnterConditionComponent*> R get_enterCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F1D0))(this);
	}
	template <typename R = bool> R get_hasEnterCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F258))(this);
	}
	template <typename R = void> R AddEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x106F264))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x106F3B4))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveEnterCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F504))(this);
	}
	template <typename R = EnterQuestsComponent*> R get_enterQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F510))(this);
	}
	template <typename R = bool> R get_hasEnterQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F598))(this);
	}
	template <typename R = void> R AddEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x106F5A4))(this, newValues);
	}
	template <typename R = void> R ReplaceEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x106F6B8))(this, newValues);
	}
	template <typename R = void> R RemoveEnterQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F7CC))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F7D8))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106F860))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106F86C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106F970))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FA74))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FA80))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FB08))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FB14))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FC18))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FD1C))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FD28))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FDB0))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FDBC))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x106FEC0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FFC4))(this);
	}
	template <typename R = EventTagComponent*> R get_eventTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x106FFD0))(this);
	}
	template <typename R = bool> R get_hasEventTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070058))(this);
	}
	template <typename R = void> R AddEventTag(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1070064))(this, newValue);
	}
	template <typename R = void> R ReplaceEventTag(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1070178))(this, newValue);
	}
	template <typename R = void> R RemoveEventTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107028C))(this);
	}
	template <typename R = ExchangeComponent*> R get_exchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070298))(this);
	}
	template <typename R = bool> R get_hasExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070320))(this);
	}
	template <typename R = void> R AddExchange(CurrencyType* newPriceCurrency, Il2CppString* newStartTimeTempBuff, int32_t newLimit, float newResetTimeout, Nullable1int32_t>* newResetValue, bool newConsiderDurability, Il2CppArray<ExchangeResource*>* newResources, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newNoCurrencyPopUpCaption, Il2CppString* newNoCurrencyPopUpLine, Il2CppString* newHintLine, Il2CppString* newEffect) {
		return ((R (*)(GameDataEntity*, CurrencyType*, Il2CppString*, int32_t, float, Nullable1int32_t>*, bool, Il2CppArray<ExchangeResource*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107032C))(this, newPriceCurrency, newStartTimeTempBuff, newLimit, newResetTimeout, newResetValue, newConsiderDurability, newResources, newWindowLine, newNoCurrencyWindowLine, newNoCurrencyPopUpCaption, newNoCurrencyPopUpLine, newHintLine, newEffect);
	}
	template <typename R = void> R ReplaceExchange(CurrencyType* newPriceCurrency, Il2CppString* newStartTimeTempBuff, int32_t newLimit, float newResetTimeout, Nullable1int32_t>* newResetValue, bool newConsiderDurability, Il2CppArray<ExchangeResource*>* newResources, Il2CppString* newWindowLine, Il2CppString* newNoCurrencyWindowLine, Il2CppString* newNoCurrencyPopUpCaption, Il2CppString* newNoCurrencyPopUpLine, Il2CppString* newHintLine, Il2CppString* newEffect) {
		return ((R (*)(GameDataEntity*, CurrencyType*, Il2CppString*, int32_t, float, Nullable1int32_t>*, bool, Il2CppArray<ExchangeResource*>*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1070524))(this, newPriceCurrency, newStartTimeTempBuff, newLimit, newResetTimeout, newResetValue, newConsiderDurability, newResources, newWindowLine, newNoCurrencyWindowLine, newNoCurrencyPopUpCaption, newNoCurrencyPopUpLine, newHintLine, newEffect);
	}
	template <typename R = void> R RemoveExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107071C))(this);
	}
	template <typename R = ExplodeComponent*> R get_explode() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070728))(this);
	}
	template <typename R = bool> R get_hasExplode() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10707B0))(this);
	}
	template <typename R = void> R AddExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(GameDataEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x10707BC))(this, newItem, newType);
	}
	template <typename R = void> R ReplaceExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(GameDataEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0x10708D8))(this, newItem, newType);
	}
	template <typename R = void> R RemoveExplode() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10709F4))(this);
	}
	template <typename R = bool> R get_isExplodeOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070A00))(this);
	}
	template <typename R = void> R set_isExplodeOnDeath(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1070A0C))(this, value);
	}
	template <typename R = bool> R get_isExternalInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070B24))(this);
	}
	template <typename R = void> R set_isExternalInventory(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1070B30))(this, value);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070C48))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070CD0))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1070CDC))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1070DE0))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070EE4))(this);
	}
	template <typename R = ExtractComponent*> R get_extract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070EF0))(this);
	}
	template <typename R = bool> R get_hasExtract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1070F78))(this);
	}
	template <typename R = void> R AddExtract(Il2CppArray<Grade*>* newGrades, int32_t newDuration, float newRate, float newFullSlotBonus, float newStealRate, bool newAllowStealResources, Il2CppString* newRequiredResource, Il2CppString* newRewardResource, Il2CppString* newStealResource, Il2CppString* newInfoText, Il2CppString* newConfirmNotFullLoadText) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Grade*>*, int32_t, float, float, float, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1070F84))(this, newGrades, newDuration, newRate, newFullSlotBonus, newStealRate, newAllowStealResources, newRequiredResource, newRewardResource, newStealResource, newInfoText, newConfirmNotFullLoadText);
	}
	template <typename R = void> R ReplaceExtract(Il2CppArray<Grade*>* newGrades, int32_t newDuration, float newRate, float newFullSlotBonus, float newStealRate, bool newAllowStealResources, Il2CppString* newRequiredResource, Il2CppString* newRewardResource, Il2CppString* newStealResource, Il2CppString* newInfoText, Il2CppString* newConfirmNotFullLoadText) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Grade*>*, int32_t, float, float, float, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107114C))(this, newGrades, newDuration, newRate, newFullSlotBonus, newStealRate, newAllowStealResources, newRequiredResource, newRewardResource, newStealResource, newInfoText, newConfirmNotFullLoadText);
	}
	template <typename R = void> R RemoveExtract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071314))(this);
	}
	template <typename R = ExtractWorkComponent*> R get_extractWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071320))(this);
	}
	template <typename R = bool> R get_hasExtractWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10713A8))(this);
	}
	template <typename R = void> R AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(GameDataEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x10713B4))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(GameDataEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0x10714EC))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R RemoveExtractWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071624))(this);
	}
	template <typename R = bool> R get_isFakeBase() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071630))(this);
	}
	template <typename R = void> R set_isFakeBase(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107163C))(this, value);
	}
	template <typename R = FakeClanNameComponent*> R get_fakeClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071754))(this);
	}
	template <typename R = bool> R get_hasFakeClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10717DC))(this);
	}
	template <typename R = void> R AddFakeClanName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10717E8))(this, newValue);
	}
	template <typename R = void> R ReplaceFakeClanName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10718FC))(this, newValue);
	}
	template <typename R = void> R RemoveFakeClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071A10))(this);
	}
	template <typename R = FinalizeActionComponent*> R get_finalizeAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071A1C))(this);
	}
	template <typename R = bool> R get_hasFinalizeAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071AA4))(this);
	}
	template <typename R = void> R AddFinalizeAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1071AB0))(this, newName);
	}
	template <typename R = void> R ReplaceFinalizeAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1071BC4))(this, newName);
	}
	template <typename R = void> R RemoveFinalizeAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071CD8))(this);
	}
	template <typename R = FinalizeComponent*> R get_finalize() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071CE4))(this);
	}
	template <typename R = bool> R get_hasFinalize() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1071D6C))(this);
	}
	template <typename R = void> R AddFinalize(Il2CppString* newTargetCondition, Il2CppString* newActorCondition, Il2CppString* newTo, bool newIgnoreSlots, float newDuration) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x1071D78))(this, newTargetCondition, newActorCondition, newTo, newIgnoreSlots, newDuration);
	}
	template <typename R = void> R ReplaceFinalize(Il2CppString* newTargetCondition, Il2CppString* newActorCondition, Il2CppString* newTo, bool newIgnoreSlots, float newDuration) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float))(Il2CppBase() + 0x1071ED8))(this, newTargetCondition, newActorCondition, newTo, newIgnoreSlots, newDuration);
	}
	template <typename R = void> R RemoveFinalize() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072038))(this);
	}
	template <typename R = bool> R get_isFindViewInScene() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072044))(this);
	}
	template <typename R = void> R set_isFindViewInScene(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1072050))(this, value);
	}
	template <typename R = FloorComponent*> R get_floor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072168))(this);
	}
	template <typename R = bool> R get_hasFloor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10721F0))(this);
	}
	template <typename R = void> R AddFloor(Il2CppString* newRoof) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10721FC))(this, newRoof);
	}
	template <typename R = void> R ReplaceFloor(Il2CppString* newRoof) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1072310))(this, newRoof);
	}
	template <typename R = void> R RemoveFloor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072424))(this);
	}
	template <typename R = FogComponent*> R get_fog() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072430))(this);
	}
	template <typename R = bool> R get_hasFog() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10724B8))(this);
	}
	template <typename R = void> R AddFog(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10724C4))(this, newName);
	}
	template <typename R = void> R ReplaceFog(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10725D8))(this, newName);
	}
	template <typename R = void> R RemoveFog() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10726EC))(this);
	}
	template <typename R = FollowComponent*> R get_follow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10726F8))(this);
	}
	template <typename R = bool> R get_hasFollow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072780))(this);
	}
	template <typename R = void> R AddFollow(float newSpeed) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x107278C))(this, newSpeed);
	}
	template <typename R = void> R ReplaceFollow(float newSpeed) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1072890))(this, newSpeed);
	}
	template <typename R = void> R RemoveFollow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072994))(this);
	}
	template <typename R = bool> R get_isFollowTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10729A0))(this);
	}
	template <typename R = void> R set_isFollowTarget(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10729AC))(this, value);
	}
	template <typename R = FusionComponent*> R get_fusion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072AC4))(this);
	}
	template <typename R = bool> R get_hasFusion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072B4C))(this);
	}
	template <typename R = void> R AddFusion(float newCooldown, Il2CppString* newAnalyticName) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1072B58))(this, newCooldown, newAnalyticName);
	}
	template <typename R = void> R ReplaceFusion(float newCooldown, Il2CppString* newAnalyticName) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1072C7C))(this, newCooldown, newAnalyticName);
	}
	template <typename R = void> R RemoveFusion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072DA0))(this);
	}
	template <typename R = GamePlaceComponent*> R get_gamePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072DAC))(this);
	}
	template <typename R = bool> R get_hasGamePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1072E34))(this);
	}
	template <typename R = void> R AddGamePlace(Fill* newRequired, Fill* newNone, Fill* newFill, Il2CppArray<MaxCountCondition*>* newMaxCountConditions, int32_t newMaxCount, Il2CppString* newMaxGroup, int32_t newHeight, int32_t newWidth) {
		return ((R (*)(GameDataEntity*, Fill*, Fill*, Fill*, Il2CppArray<MaxCountCondition*>*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1072E40))(this, newRequired, newNone, newFill, newMaxCountConditions, newMaxCount, newMaxGroup, newHeight, newWidth);
	}
	template <typename R = void> R ReplaceGamePlace(Fill* newRequired, Fill* newNone, Fill* newFill, Il2CppArray<MaxCountCondition*>* newMaxCountConditions, int32_t newMaxCount, Il2CppString* newMaxGroup, int32_t newHeight, int32_t newWidth) {
		return ((R (*)(GameDataEntity*, Fill*, Fill*, Fill*, Il2CppArray<MaxCountCondition*>*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1072FAC))(this, newRequired, newNone, newFill, newMaxCountConditions, newMaxCount, newMaxGroup, newHeight, newWidth);
	}
	template <typename R = void> R RemoveGamePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073118))(this);
	}
	template <typename R = GameSoundComponent*> R get_gameSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073124))(this);
	}
	template <typename R = bool> R get_hasGameSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10731AC))(this);
	}
	template <typename R = void> R AddGameSound(Il2CppString* newDeath, Il2CppString* newFootstep, Il2CppString* newFootstepInvisible, Il2CppString* newDamage, Il2CppString* newCreate, Il2CppString* newDestroy, Il2CppString* newAggression, Il2CppString* newOpen, Il2CppString* newClose, float newAggressionInterval, float newAggressionChance) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x10731B8))(this, newDeath, newFootstep, newFootstepInvisible, newDamage, newCreate, newDestroy, newAggression, newOpen, newClose, newAggressionInterval, newAggressionChance);
	}
	template <typename R = void> R ReplaceGameSound(Il2CppString* newDeath, Il2CppString* newFootstep, Il2CppString* newFootstepInvisible, Il2CppString* newDamage, Il2CppString* newCreate, Il2CppString* newDestroy, Il2CppString* newAggression, Il2CppString* newOpen, Il2CppString* newClose, float newAggressionInterval, float newAggressionChance) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, float))(Il2CppBase() + 0x107339C))(this, newDeath, newFootstep, newFootstepInvisible, newDamage, newCreate, newDestroy, newAggression, newOpen, newClose, newAggressionInterval, newAggressionChance);
	}
	template <typename R = void> R RemoveGameSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073580))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107358C))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073614))(this);
	}
	template <typename R = void> R AddGender(Gender* newType) {
		return ((R (*)(GameDataEntity*, Gender*))(Il2CppBase() + 0x1073620))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender* newType) {
		return ((R (*)(GameDataEntity*, Gender*))(Il2CppBase() + 0x1073724))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073828))(this);
	}
	template <typename R = GenerateWallComponent*> R get_generateWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073834))(this);
	}
	template <typename R = bool> R get_hasGenerateWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10738BC))(this);
	}
	template <typename R = void> R AddGenerateWall(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10738C8))(this, newName);
	}
	template <typename R = void> R ReplaceGenerateWall(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10739DC))(this, newName);
	}
	template <typename R = void> R RemoveGenerateWall() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073AF0))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073AFC))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073B84))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073B90))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073C94))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073D98))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073DA4))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1073E2C))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073E38))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1073F3C))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074040))(this);
	}
	template <typename R = GradeFromLocationComponent*> R get_gradeFromLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107404C))(this);
	}
	template <typename R = bool> R get_hasGradeFromLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10740D4))(this);
	}
	template <typename R = void> R AddGradeFromLocation(int32_t newOffset) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10740E0))(this, newOffset);
	}
	template <typename R = void> R ReplaceGradeFromLocation(int32_t newOffset) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10741E4))(this, newOffset);
	}
	template <typename R = void> R RemoveGradeFromLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10742E8))(this);
	}
	template <typename R = GradeHideComponent*> R get_gradeHide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10742F4))(this);
	}
	template <typename R = bool> R get_hasGradeHide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107437C))(this);
	}
	template <typename R = void> R AddGradeHide(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074388))(this, newValue);
	}
	template <typename R = void> R ReplaceGradeHide(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107448C))(this, newValue);
	}
	template <typename R = void> R RemoveGradeHide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074590))(this);
	}
	template <typename R = GradeViewComponent*> R get_gradeView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107459C))(this);
	}
	template <typename R = bool> R get_hasGradeView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074624))(this);
	}
	template <typename R = void> R AddGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1074630))(this, newValues);
	}
	template <typename R = void> R ReplaceGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1074744))(this, newValues);
	}
	template <typename R = void> R RemoveGradeView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074858))(this);
	}
	template <typename R = GroupChildComponent*> R get_groupChild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074864))(this);
	}
	template <typename R = bool> R get_hasGroupChild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10748EC))(this);
	}
	template <typename R = void> R AddGroupChild(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10748F8))(this, newId);
	}
	template <typename R = void> R ReplaceGroupChild(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10749FC))(this, newId);
	}
	template <typename R = void> R RemoveGroupChild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074B00))(this);
	}
	template <typename R = GroupComponent*> R get_group() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074B0C))(this);
	}
	template <typename R = bool> R get_hasGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074B94))(this);
	}
	template <typename R = void> R AddGroup(Il2CppArray<Slot*>* newSlots) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Slot*>*))(Il2CppBase() + 0x1074BA0))(this, newSlots);
	}
	template <typename R = void> R ReplaceGroup(Il2CppArray<Slot*>* newSlots) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Slot*>*))(Il2CppBase() + 0x1074CB4))(this, newSlots);
	}
	template <typename R = void> R RemoveGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074DC8))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074DD4))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1074E5C))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074E68))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1074F6C))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075070))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107507C))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075104))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1075110))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1075214))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075318))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075324))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10753AC))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10753B8))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10754BC))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10755C0))(this);
	}
	template <typename R = GuildTagComponent*> R get_guildTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10755CC))(this);
	}
	template <typename R = bool> R get_hasGuildTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075654))(this);
	}
	template <typename R = void> R AddGuildTag(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1075660))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildTag(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1075774))(this, newValue);
	}
	template <typename R = void> R RemoveGuildTag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075888))(this);
	}
	template <typename R = HashPositionComponent*> R get_hashPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075894))(this);
	}
	template <typename R = bool> R get_hasHashPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107591C))(this);
	}
	template <typename R = void> R AddHashPosition(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1075928))(this, newValue);
	}
	template <typename R = void> R ReplaceHashPosition(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1075A2C))(this, newValue);
	}
	template <typename R = void> R RemoveHashPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075B30))(this);
	}
	template <typename R = HealthCoefComponent*> R get_healthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075B3C))(this);
	}
	template <typename R = bool> R get_hasHealthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075BC4))(this);
	}
	template <typename R = void> R AddHealthCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1075BD0))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1075CD4))(this, newValue);
	}
	template <typename R = void> R RemoveHealthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075DD8))(this);
	}
	template <typename R = bool> R get_isHideBag() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075DE4))(this);
	}
	template <typename R = void> R set_isHideBag(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1075DF0))(this, value);
	}
	template <typename R = HideComponent*> R get_hide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075F08))(this);
	}
	template <typename R = bool> R get_hasHide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1075F90))(this);
	}
	template <typename R = void> R AddHide(HIDEFLAG* newFlag) {
		return ((R (*)(GameDataEntity*, HIDEFLAG*))(Il2CppBase() + 0x1075F9C))(this, newFlag);
	}
	template <typename R = void> R ReplaceHide(HIDEFLAG* newFlag) {
		return ((R (*)(GameDataEntity*, HIDEFLAG*))(Il2CppBase() + 0x10760A0))(this, newFlag);
	}
	template <typename R = void> R RemoveHide() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10761A4))(this);
	}
	template <typename R = bool> R get_isHideHead() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10761B0))(this);
	}
	template <typename R = void> R set_isHideHead(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10761BC))(this, value);
	}
	template <typename R = bool> R get_isHidePet() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10762D4))(this);
	}
	template <typename R = void> R set_isHidePet(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10762E0))(this, value);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10763F8))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076480))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107648C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10765E4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107673C))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076748))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10767D0))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10767DC))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10768E0))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10769E4))(this);
	}
	template <typename R = IgnoreDoorVectorFieldComponent*> R get_ignoreDoorVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10769F0))(this);
	}
	template <typename R = bool> R get_hasIgnoreDoorVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076A78))(this);
	}
	template <typename R = void> R AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1076A84))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0x1076BB4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveIgnoreDoorVectorField() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076CE4))(this);
	}
	template <typename R = InfluenceByGradeComponent*> R get_influenceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076CF0))(this);
	}
	template <typename R = bool> R get_hasInfluenceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076D78))(this);
	}
	template <typename R = void> R AddInfluenceByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x1076D84))(this, newValues);
	}
	template <typename R = void> R ReplaceInfluenceByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x1076E98))(this, newValues);
	}
	template <typename R = void> R RemoveInfluenceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076FAC))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1076FB8))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077040))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107704C))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1077150))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077254))(this);
	}
	template <typename R = InstantEffectComponent*> R get_instantEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077260))(this);
	}
	template <typename R = bool> R get_hasInstantEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10772E8))(this);
	}
	template <typename R = void> R AddInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x10772F4))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R ReplaceInstantEffect(Il2CppString* newStart, Il2CppString* newSelf, Il2CppArray<Il2CppString*>* newTarget, Il2CppString* newTrail) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x107744C))(this, newStart, newSelf, newTarget, newTrail);
	}
	template <typename R = void> R RemoveInstantEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10775A4))(this);
	}
	template <typename R = InteractActionComponent*> R get_interactAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10775B0))(this);
	}
	template <typename R = bool> R get_hasInteractAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077638))(this);
	}
	template <typename R = void> R AddInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1077644))(this, newName, newList);
	}
	template <typename R = void> R ReplaceInteractAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x107776C))(this, newName, newList);
	}
	template <typename R = void> R RemoveInteractAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077894))(this);
	}
	template <typename R = InteractComponent*> R get_interact() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10778A0))(this);
	}
	template <typename R = bool> R get_hasInteract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077928))(this);
	}
	template <typename R = void> R AddInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(GameDataEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1077934))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R ReplaceInteract(ActionType* newAction, Il2CppArray<NameChance*>* newRequiredItem, Il2CppString* newRequiredCondition, Il2CppString* newIcon, InteractActionCondition* newCondition, int32_t newMinGrade, Il2CppString* newTargetCondition, Il2CppString* newNoToolWarning, bool newCanUseFromInventory) {
		return ((R (*)(GameDataEntity*, ActionType*, Il2CppArray<NameChance*>*, Il2CppString*, Il2CppString*, InteractActionCondition*, int32_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x1077AE0))(this, newAction, newRequiredItem, newRequiredCondition, newIcon, newCondition, newMinGrade, newTargetCondition, newNoToolWarning, newCanUseFromInventory);
	}
	template <typename R = void> R RemoveInteract() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077C8C))(this);
	}
	template <typename R = InteractCooldownComponent*> R get_interactCooldown() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077C98))(this);
	}
	template <typename R = bool> R get_hasInteractCooldown() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077D20))(this);
	}
	template <typename R = void> R AddInteractCooldown(Il2CppArray<NameFloat*>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(GameDataEntity*, Il2CppArray<NameFloat*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1077D2C))(this, newValues, newTags);
	}
	template <typename R = void> R ReplaceInteractCooldown(Il2CppArray<NameFloat*>* newValues, Il2CppArray<Il2CppString*>* newTags) {
		return ((R (*)(GameDataEntity*, Il2CppArray<NameFloat*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1077E54))(this, newValues, newTags);
	}
	template <typename R = void> R RemoveInteractCooldown() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077F7C))(this);
	}
	template <typename R = InteractRadiusComponent*> R get_interactRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1077F88))(this);
	}
	template <typename R = bool> R get_hasInteractRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078010))(this);
	}
	template <typename R = void> R AddInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(GameDataEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x107801C))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R ReplaceInteractRadius(float newMinValue, float newValue, float newHighLight, float newOffsetX, float newOffsetY, float newLogicOffsetX, float newLogicOffsetY) {
		return ((R (*)(GameDataEntity*, float, float, float, float, float, float, float))(Il2CppBase() + 0x107815C))(this, newMinValue, newValue, newHighLight, newOffsetX, newOffsetY, newLogicOffsetX, newLogicOffsetY);
	}
	template <typename R = void> R RemoveInteractRadius() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107829C))(this);
	}
	template <typename R = InteractTargetComponent*> R get_interactTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10782A8))(this);
	}
	template <typename R = bool> R get_hasInteractTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078330))(this);
	}
	template <typename R = void> R AddInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(GameDataEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0x107833C))(this, newId, newPosition);
	}
	template <typename R = void> R ReplaceInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(GameDataEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0x1078458))(this, newId, newPosition);
	}
	template <typename R = void> R RemoveInteractTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078574))(this);
	}
	template <typename R = InventoryComponent*> R get_inventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078580))(this);
	}
	template <typename R = bool> R get_hasInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078608))(this);
	}
	template <typename R = void> R AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x1078614))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x107874C))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveInventory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078884))(this);
	}
	template <typename R = InventoryContentComponent*> R get_inventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078890))(this);
	}
	template <typename R = bool> R get_hasInventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078918))(this);
	}
	template <typename R = void> R AddInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1078924))(this, newData);
	}
	template <typename R = void> R ReplaceInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1078A38))(this, newData);
	}
	template <typename R = void> R RemoveInventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078B4C))(this);
	}
	template <typename R = bool> R get_isInventoryLocked() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078B58))(this);
	}
	template <typename R = void> R set_isInventoryLocked(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1078B64))(this, value);
	}
	template <typename R = KilledByComponent*> R get_killedBy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078C7C))(this);
	}
	template <typename R = bool> R get_hasKilledBy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078D04))(this);
	}
	template <typename R = void> R AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1078D10))(this, newId, newName, newItemName);
	}
	template <typename R = void> R ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1078E48))(this, newId, newName, newItemName);
	}
	template <typename R = void> R RemoveKilledBy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078F80))(this);
	}
	template <typename R = LastActionTickComponent*> R get_lastActionTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1078F8C))(this);
	}
	template <typename R = bool> R get_hasLastActionTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079014))(this);
	}
	template <typename R = void> R AddLastActionTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1079020))(this, newValue);
	}
	template <typename R = void> R ReplaceLastActionTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1079124))(this, newValue);
	}
	template <typename R = void> R RemoveLastActionTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079228))(this);
	}
	template <typename R = LastDamagerComponent*> R get_lastDamager() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079234))(this);
	}
	template <typename R = bool> R get_hasLastDamager() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10792BC))(this);
	}
	template <typename R = void> R AddLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(GameDataEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x10792C8))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R ReplaceLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(GameDataEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x10793F8))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R RemoveLastDamager() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079528))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079534))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10795BC))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10795C8))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10796CC))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10797D0))(this);
	}
	template <typename R = LobbyTypeComponent*> R get_lobbyType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10797DC))(this);
	}
	template <typename R = bool> R get_hasLobbyType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079864))(this);
	}
	template <typename R = void> R AddLobbyType(LobbyType* newType) {
		return ((R (*)(GameDataEntity*, LobbyType*))(Il2CppBase() + 0x1079870))(this, newType);
	}
	template <typename R = void> R ReplaceLobbyType(LobbyType* newType) {
		return ((R (*)(GameDataEntity*, LobbyType*))(Il2CppBase() + 0x1079974))(this, newType);
	}
	template <typename R = void> R RemoveLobbyType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079A78))(this);
	}
	template <typename R = LocationRegionComponent*> R get_locationRegion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079A84))(this);
	}
	template <typename R = bool> R get_hasLocationRegion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079B0C))(this);
	}
	template <typename R = void> R AddLocationRegion(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079B18))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegion(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079C2C))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegion() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079D40))(this);
	}
	template <typename R = LocationRegionEnterComponent*> R get_locationRegionEnter() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079D4C))(this);
	}
	template <typename R = bool> R get_hasLocationRegionEnter() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1079DD4))(this);
	}
	template <typename R = void> R AddLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079DE0))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1079EF4))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegionEnter() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A008))(this);
	}
	template <typename R = LockActionComponent*> R get_lockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A014))(this);
	}
	template <typename R = bool> R get_hasLockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A09C))(this);
	}
	template <typename R = void> R AddLockAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A0A8))(this, newName);
	}
	template <typename R = void> R ReplaceLockAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A1BC))(this, newName);
	}
	template <typename R = void> R RemoveLockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A2D0))(this);
	}
	template <typename R = LockControllerComponent*> R get_lockController() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A2DC))(this);
	}
	template <typename R = bool> R get_hasLockController() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A364))(this);
	}
	template <typename R = void> R AddLockController(Il2CppString* newActivator) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A370))(this, newActivator);
	}
	template <typename R = void> R ReplaceLockController(Il2CppString* newActivator) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107A484))(this, newActivator);
	}
	template <typename R = void> R RemoveLockController() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A598))(this);
	}
	template <typename R = LoopSoundComponent*> R get_loopSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A5A4))(this);
	}
	template <typename R = bool> R get_hasLoopSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A62C))(this);
	}
	template <typename R = void> R AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107A638))(this, newWork, newLoop);
	}
	template <typename R = void> R ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107A760))(this, newWork, newLoop);
	}
	template <typename R = void> R RemoveLoopSound() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A888))(this);
	}
	template <typename R = LootByGradeComponent*> R get_lootByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A894))(this);
	}
	template <typename R = bool> R get_hasLootByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107A91C))(this);
	}
	template <typename R = void> R AddLootByGrade(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x107A928))(this, newValues);
	}
	template <typename R = void> R ReplaceLootByGrade(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x107AA3C))(this, newValues);
	}
	template <typename R = void> R RemoveLootByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107AB50))(this);
	}
	template <typename R = LootStatusComponent*> R get_lootStatus() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107AB5C))(this);
	}
	template <typename R = bool> R get_hasLootStatus() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107ABE4))(this);
	}
	template <typename R = void> R AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x107ABF0))(this, newTag, newWeight);
	}
	template <typename R = void> R ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x107AD0C))(this, newTag, newWeight);
	}
	template <typename R = void> R RemoveLootStatus() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107AE28))(this);
	}
	template <typename R = MagicSaveComponent*> R get_magicSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107AE34))(this);
	}
	template <typename R = bool> R get_hasMagicSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107AEBC))(this);
	}
	template <typename R = void> R AddMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x107AEC8))(this, newItems, newRiding);
	}
	template <typename R = void> R ReplaceMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x107AFE8))(this, newItems, newRiding);
	}
	template <typename R = void> R RemoveMagicSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B108))(this);
	}
	template <typename R = MagicSpawnerComponent*> R get_magicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B114))(this);
	}
	template <typename R = bool> R get_hasMagicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B19C))(this);
	}
	template <typename R = void> R AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x107B1A8))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x107B320))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R RemoveMagicSpawner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B498))(this);
	}
	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B4A4))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B52C))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107B538))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107B63C))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B740))(this);
	}
	template <typename R = bool> R get_isMannequin() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B74C))(this);
	}
	template <typename R = void> R set_isMannequin(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107B758))(this, value);
	}
	template <typename R = MapNotifyComponent*> R get_mapNotify() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B870))(this);
	}
	template <typename R = bool> R get_hasMapNotify() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107B8F8))(this);
	}
	template <typename R = void> R AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107B904))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(GameDataEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BA64))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R RemoveMapNotify() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BBC4))(this);
	}
	template <typename R = MapPathComponent*> R get_mapPath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BBD0))(this);
	}
	template <typename R = bool> R get_hasMapPath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BC58))(this);
	}
	template <typename R = void> R AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BC64))(this, newStartId, newEndId);
	}
	template <typename R = void> R ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x107BD8C))(this, newStartId, newEndId);
	}
	template <typename R = void> R RemoveMapPath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BEB4))(this);
	}
	template <typename R = MapPathViewComponent*> R get_mapPathView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BEC0))(this);
	}
	template <typename R = bool> R get_hasMapPathView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107BF48))(this);
	}
	template <typename R = void> R AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x107BF54))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(GameDataEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x107C0BC))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R RemoveMapPathView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C224))(this);
	}
	template <typename R = bool> R get_isMapPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C230))(this);
	}
	template <typename R = void> R set_isMapPoint(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107C23C))(this, value);
	}
	template <typename R = MapSpeedComponent*> R get_mapSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C354))(this);
	}
	template <typename R = bool> R get_hasMapSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C3DC))(this);
	}
	template <typename R = void> R AddMapSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C3E8))(this, newValue);
	}
	template <typename R = void> R ReplaceMapSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C4EC))(this, newValue);
	}
	template <typename R = void> R RemoveMapSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C5F0))(this);
	}
	template <typename R = MaxHealthCoefByGradeComponent*> R get_maxHealthCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C5FC))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C684))(this);
	}
	template <typename R = void> R AddMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x107C690))(this, newValues);
	}
	template <typename R = void> R ReplaceMaxHealthCoefByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x107C7A4))(this, newValues);
	}
	template <typename R = void> R RemoveMaxHealthCoefByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C8B8))(this);
	}
	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C8C4))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107C94C))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x107C958))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x107CA5C))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CB60))(this);
	}
	template <typename R = MaxHealthComponent*> R get_maxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CB6C))(this);
	}
	template <typename R = bool> R get_hasMaxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CBF4))(this);
	}
	template <typename R = void> R AddMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107CC00))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107CD08))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R RemoveMaxHealth() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CE10))(this);
	}
	template <typename R = MetabolismSettingComponent*> R get_metabolismSetting() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CE1C))(this);
	}
	template <typename R = bool> R get_hasMetabolismSetting() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107CEA4))(this);
	}
	template <typename R = void> R AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(GameDataEntity*, float, float, float, float, float))(Il2CppBase() + 0x107CEB0))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(GameDataEntity*, float, float, float, float, float))(Il2CppBase() + 0x107CFDC))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R RemoveMetabolismSetting() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D108))(this);
	}
	template <typename R = MinimapArrowComponent*> R get_minimapArrow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D114))(this);
	}
	template <typename R = bool> R get_hasMinimapArrow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D19C))(this);
	}
	template <typename R = void> R AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x107D1A8))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x107D2E4))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R RemoveMinimapArrow() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D420))(this);
	}
	template <typename R = MinimapComponent*> R get_minimap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D42C))(this);
	}
	template <typename R = bool> R get_hasMinimap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D4B4))(this);
	}
	template <typename R = void> R AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x107D4C0))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0x107D608))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R RemoveMinimap() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D750))(this);
	}
	template <typename R = MinimapPingComponent*> R get_minimapPing() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D75C))(this);
	}
	template <typename R = bool> R get_hasMinimapPing() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107D7E4))(this);
	}
	template <typename R = void> R AddMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107D7F0))(this, newLifetime, newRadius);
	}
	template <typename R = void> R ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x107D8F8))(this, newLifetime, newRadius);
	}
	template <typename R = void> R RemoveMinimapPing() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DA00))(this);
	}
	template <typename R = MiningActionComponent*> R get_miningAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DA0C))(this);
	}
	template <typename R = bool> R get_hasMiningAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DA94))(this);
	}
	template <typename R = void> R AddMiningAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107DAA0))(this, newName);
	}
	template <typename R = void> R ReplaceMiningAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107DBB4))(this, newName);
	}
	template <typename R = void> R RemoveMiningAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DCC8))(this);
	}
	template <typename R = MiningComponent*> R get_mining() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DCD4))(this);
	}
	template <typename R = bool> R get_hasMining() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107DD5C))(this);
	}
	template <typename R = void> R AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(GameDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x107DD68))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(GameDataEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x107DEB8))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R RemoveMining() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E008))(this);
	}
	template <typename R = MountInventoryContentComponent*> R get_mountInventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E014))(this);
	}
	template <typename R = bool> R get_hasMountInventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E09C))(this);
	}
	template <typename R = void> R AddMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x107E0A8))(this, newData);
	}
	template <typename R = void> R ReplaceMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x107E1BC))(this, newData);
	}
	template <typename R = void> R RemoveMountInventoryContent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E2D0))(this);
	}
	template <typename R = MountInventoryIdComponent*> R get_mountInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E2DC))(this);
	}
	template <typename R = bool> R get_hasMountInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E364))(this);
	}
	template <typename R = void> R AddMountInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107E370))(this, newId);
	}
	template <typename R = void> R ReplaceMountInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x107E474))(this, newId);
	}
	template <typename R = void> R RemoveMountInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E578))(this);
	}
	template <typename R = MountInvetoryComponent*> R get_mountInvetory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E584))(this);
	}
	template <typename R = bool> R get_hasMountInvetory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E60C))(this);
	}
	template <typename R = void> R AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x107E618))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0x107E750))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveMountInvetory() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E888))(this);
	}
	template <typename R = MountTraderComponent*> R get_mountTrader() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E894))(this);
	}
	template <typename R = bool> R get_hasMountTrader() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107E91C))(this);
	}
	template <typename R = void> R AddMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(GameDataEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x107E928))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R ReplaceMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(GameDataEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0x107EA50))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R RemoveMountTrader() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EB78))(this);
	}
	template <typename R = MoveToTargetComponent*> R get_moveToTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EB84))(this);
	}
	template <typename R = bool> R get_hasMoveToTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EC0C))(this);
	}
	template <typename R = void> R AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(GameDataEntity*, int32_t, float))(Il2CppBase() + 0x107EC18))(this, newId, newMinDistance);
	}
	template <typename R = void> R ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(GameDataEntity*, int32_t, float))(Il2CppBase() + 0x107ED2C))(this, newId, newMinDistance);
	}
	template <typename R = void> R RemoveMoveToTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EE40))(this);
	}
	template <typename R = bool> R get_isMoveToTargetPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EE4C))(this);
	}
	template <typename R = void> R set_isMoveToTargetPosition(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107EE58))(this, value);
	}
	template <typename R = NeedQuestsComponent*> R get_needQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EF70))(this);
	}
	template <typename R = bool> R get_hasNeedQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107EFF8))(this);
	}
	template <typename R = void> R AddNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x107F004))(this, newValues, newFailMsg);
	}
	template <typename R = void> R ReplaceNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0x107F12C))(this, newValues, newFailMsg);
	}
	template <typename R = void> R RemoveNeedQuests() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F254))(this);
	}
	template <typename R = NeedRemoveEmptyComponent*> R get_needRemoveEmpty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F260))(this);
	}
	template <typename R = bool> R get_hasNeedRemoveEmpty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F2E8))(this);
	}
	template <typename R = void> R AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(GameDataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x107F2F4))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(GameDataEntity*, bool, Il2CppString*))(Il2CppBase() + 0x107F414))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R RemoveNeedRemoveEmpty() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F534))(this);
	}
	template <typename R = NextWayPointComponent*> R get_nextWayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F540))(this);
	}
	template <typename R = bool> R get_hasNextWayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F5C8))(this);
	}
	template <typename R = void> R AddNextWayPoint(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107F5D4))(this, newName);
	}
	template <typename R = void> R ReplaceNextWayPoint(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x107F6E8))(this, newName);
	}
	template <typename R = void> R RemoveNextWayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F7FC))(this);
	}
	template <typename R = bool> R get_isNoAutoMode() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F808))(this);
	}
	template <typename R = void> R set_isNoAutoMode(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107F814))(this, value);
	}
	template <typename R = bool> R get_isNotAggressive() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107F92C))(this);
	}
	template <typename R = void> R set_isNotAggressive(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107F938))(this, value);
	}
	template <typename R = bool> R get_isNotInteractable() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107FA50))(this);
	}
	template <typename R = void> R set_isNotInteractable(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FA5C))(this, value);
	}
	template <typename R = bool> R get_isNotPursuitTarget() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107FB74))(this);
	}
	template <typename R = void> R set_isNotPursuitTarget(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FB80))(this, value);
	}
	template <typename R = bool> R get_isNotSelectable() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107FC98))(this);
	}
	template <typename R = void> R set_isNotSelectable(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x107FCA4))(this, value);
	}
	template <typename R = ObjectTriggerComponent*> R get_objectTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107FDBC))(this);
	}
	template <typename R = bool> R get_hasObjectTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x107FE44))(this);
	}
	template <typename R = void> R AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x107FE50))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(GameDataEntity*, bool, bool, bool))(Il2CppBase() + 0x107FF78))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R RemoveObjectTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10800A0))(this);
	}
	template <typename R = OdinsCupActionComponent*> R get_odinsCupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10800AC))(this);
	}
	template <typename R = bool> R get_hasOdinsCupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080134))(this);
	}
	template <typename R = void> R AddOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080140))(this, newName);
	}
	template <typename R = void> R ReplaceOdinsCupAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080254))(this, newName);
	}
	template <typename R = void> R RemoveOdinsCupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080368))(this);
	}
	template <typename R = OfferActionComponent*> R get_offerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080374))(this);
	}
	template <typename R = bool> R get_hasOfferAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10803FC))(this);
	}
	template <typename R = void> R AddOfferAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1080408))(this, newName);
	}
	template <typename R = void> R ReplaceOfferAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108051C))(this, newName);
	}
	template <typename R = void> R RemoveOfferAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080630))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108063C))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10806C4))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10806D0))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10807E4))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10808F8))(this);
	}
	template <typename R = bool> R get_isOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080904))(this);
	}
	template <typename R = void> R set_isOnDeath(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1080910))(this, value);
	}
	template <typename R = OnEmptyWorldComponent*> R get_onEmptyWorld() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080A28))(this);
	}
	template <typename R = bool> R get_hasOnEmptyWorld() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080AB0))(this);
	}
	template <typename R = void> R AddOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(GameDataEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x1080ABC))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R ReplaceOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(GameDataEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0x1080BE0))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R RemoveOnEmptyWorld() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080D04))(this);
	}
	template <typename R = bool> R get_isOnGround() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080D10))(this);
	}
	template <typename R = void> R set_isOnGround(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x1080D1C))(this, value);
	}
	template <typename R = OrientationComponent*> R get_orientation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080E34))(this);
	}
	template <typename R = bool> R get_hasOrientation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1080EBC))(this);
	}
	template <typename R = void> R AddOrientation(uint8_t newValue) {
		return ((R (*)(GameDataEntity*, uint8_t))(Il2CppBase() + 0x1080EC8))(this, newValue);
	}
	template <typename R = void> R ReplaceOrientation(uint8_t newValue) {
		return ((R (*)(GameDataEntity*, uint8_t))(Il2CppBase() + 0x1080FCC))(this, newValue);
	}
	template <typename R = void> R RemoveOrientation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10810D0))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10810DC))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081164))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081170))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081274))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081378))(this);
	}
	template <typename R = OwnerNameComponent*> R get_ownerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081384))(this);
	}
	template <typename R = bool> R get_hasOwnerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108140C))(this);
	}
	template <typename R = void> R AddOwnerName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1081418))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnerName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108152C))(this, newValue);
	}
	template <typename R = void> R RemoveOwnerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081640))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108164C))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10816D4))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10816E0))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10817E4))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10818E8))(this);
	}
	template <typename R = PatrolComponent*> R get_patrol() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10818F4))(this);
	}
	template <typename R = bool> R get_hasPatrol() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108197C))(this);
	}
	template <typename R = void> R AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x1081988))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x1081AC0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R RemovePatrol() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081BF8))(this);
	}
	template <typename R = PeriodComponent*> R get_period() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081C04))(this);
	}
	template <typename R = bool> R get_hasPeriod() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081C8C))(this);
	}
	template <typename R = void> R AddPeriod(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1081C98))(this, newValue);
	}
	template <typename R = void> R ReplacePeriod(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1081D9C))(this, newValue);
	}
	template <typename R = void> R RemovePeriod() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081EA0))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081EAC))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1081F34))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1081F40))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1082044))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082148))(this);
	}
	template <typename R = PersonalGeneratorComponent*> R get_personalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082154))(this);
	}
	template <typename R = bool> R get_hasPersonalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10821DC))(this);
	}
	template <typename R = void> R AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x10821E8))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x1082344))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalGenerator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10824A0))(this);
	}
	template <typename R = PersonalKeyComponent*> R get_personalKey() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10824AC))(this);
	}
	template <typename R = bool> R get_hasPersonalKey() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082534))(this);
	}
	template <typename R = void> R AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1082540))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(GameDataEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x1082674))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalKey() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10827A8))(this);
	}
	template <typename R = PetInventoryIdComponent*> R get_petInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10827B4))(this);
	}
	template <typename R = bool> R get_hasPetInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108283C))(this);
	}
	template <typename R = void> R AddPetInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1082848))(this, newId);
	}
	template <typename R = void> R ReplacePetInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108294C))(this, newId);
	}
	template <typename R = void> R RemovePetInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082A50))(this);
	}
	template <typename R = PhasesComponent*> R get_phases() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082A5C))(this);
	}
	template <typename R = bool> R get_hasPhases() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082AE4))(this);
	}
	template <typename R = void> R AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0x1082AF0))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0x1082C3C))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R RemovePhases() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082D88))(this);
	}
	template <typename R = PickupActionComponent*> R get_pickupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082D94))(this);
	}
	template <typename R = bool> R get_hasPickupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1082E1C))(this);
	}
	template <typename R = void> R AddPickupAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1082E28))(this, newName, newList);
	}
	template <typename R = void> R ReplacePickupAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1082F50))(this, newName, newList);
	}
	template <typename R = void> R RemovePickupAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083078))(this);
	}
	template <typename R = PlaceOwnerComponent*> R get_placeOwner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083084))(this);
	}
	template <typename R = bool> R get_hasPlaceOwner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108310C))(this);
	}
	template <typename R = void> R AddPlaceOwner(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x1083118))(this, newId);
	}
	template <typename R = void> R ReplacePlaceOwner(int64_t newId) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108321C))(this, newId);
	}
	template <typename R = void> R RemovePlaceOwner() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083320))(this);
	}
	template <typename R = bool> R get_isPlayer() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10537E8))(this);
	}
	template <typename R = void> R set_isPlayer(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108332C))(this, value);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083444))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10834CC))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10834D8))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10835DC))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10836E0))(this);
	}
	template <typename R = bool> R get_isPlayerKill() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10836EC))(this);
	}
	template <typename R = void> R set_isPlayerKill(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10836F8))(this, value);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083810))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083898))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10838A4))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10839B8))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083ACC))(this);
	}
	template <typename R = PointLabelComponent*> R get_pointLabel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083AD8))(this);
	}
	template <typename R = bool> R get_hasPointLabel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083B60))(this);
	}
	template <typename R = void> R AddPointLabel(Il2CppString* newCondition) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1083B6C))(this, newCondition);
	}
	template <typename R = void> R ReplacePointLabel(Il2CppString* newCondition) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1083C80))(this, newCondition);
	}
	template <typename R = void> R RemovePointLabel() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083D94))(this);
	}
	template <typename R = PointsComponent*> R get_points() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083DA0))(this);
	}
	template <typename R = bool> R get_hasPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1083E28))(this);
	}
	template <typename R = void> R AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(GameDataEntity*, float, int32_t, float))(Il2CppBase() + 0x1083E34))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(GameDataEntity*, float, int32_t, float))(Il2CppBase() + 0x1083F50))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R RemovePoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108406C))(this);
	}
	template <typename R = PortalActionComponent*> R get_portalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084078))(this);
	}
	template <typename R = bool> R get_hasPortalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084100))(this);
	}
	template <typename R = void> R AddPortalAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108410C))(this, newName);
	}
	template <typename R = void> R ReplacePortalAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1084220))(this, newName);
	}
	template <typename R = void> R RemovePortalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084334))(this);
	}
	template <typename R = PortalComponent*> R get_portal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084340))(this);
	}
	template <typename R = bool> R get_hasPortal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10843AC))(this);
	}
	template <typename R = void> R AddPortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL*>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL*>*, int32_t, bool, bool))(Il2CppBase() + 0x10843B8))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplacePortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL*>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL*>*, int32_t, bool, bool))(Il2CppBase() + 0x108456C))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemovePortal() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084720))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108472C))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10847B4))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10847C0))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x10848C4))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10849C8))(this);
	}
	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10849D4))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1053C7C))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1084A5C))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1084B64))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084C6C))(this);
	}
	template <typename R = PositionPlaceComponent*> R get_positionPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084C78))(this);
	}
	template <typename R = bool> R get_hasPositionPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084D00))(this);
	}
	template <typename R = void> R AddPositionPlace(PositionPlace* newType) {
		return ((R (*)(GameDataEntity*, PositionPlace*))(Il2CppBase() + 0x1084D0C))(this, newType);
	}
	template <typename R = void> R ReplacePositionPlace(PositionPlace* newType) {
		return ((R (*)(GameDataEntity*, PositionPlace*))(Il2CppBase() + 0x1084E10))(this, newType);
	}
	template <typename R = void> R RemovePositionPlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084F14))(this);
	}
	template <typename R = PositionTransactionComponent*> R get_positionTransaction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084F20))(this);
	}
	template <typename R = bool> R get_hasPositionTransaction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1084FA8))(this);
	}
	template <typename R = void> R AddPositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((R (*)(GameDataEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0x1084FB4))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R ReplacePositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((R (*)(GameDataEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0x10850F8))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R RemovePositionTransaction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108523C))(this);
	}
	template <typename R = PowerComponent*> R get_power() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085248))(this);
	}
	template <typename R = bool> R get_hasPower() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10852D0))(this);
	}
	template <typename R = void> R AddPower(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10852DC))(this, newValue);
	}
	template <typename R = void> R ReplacePower(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10853E0))(this, newValue);
	}
	template <typename R = void> R RemovePower() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10854E4))(this);
	}
	template <typename R = PrefabComponent*> R get_prefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10854F0))(this);
	}
	template <typename R = bool> R get_hasPrefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085578))(this);
	}
	template <typename R = void> R AddPrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x1085584))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R ReplacePrefab(Il2CppString* newName, Il2CppString* newFemaleName, bool newHidden, ProtoModels::WorldResourcesType* newResourceType) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, bool, ProtoModels::WorldResourcesType*))(Il2CppBase() + 0x10856C8))(this, newName, newFemaleName, newHidden, newResourceType);
	}
	template <typename R = void> R RemovePrefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108580C))(this);
	}
	template <typename R = ProductionComponent*> R get_production() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085818))(this);
	}
	template <typename R = bool> R get_hasProduction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10858A0))(this);
	}
	template <typename R = void> R AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint*>* newLeavepoints) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint*>*))(Il2CppBase() + 0x10858AC))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint*>* newLeavepoints) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint*>*))(Il2CppBase() + 0x1085A3C))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R RemoveProduction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085BCC))(this);
	}
	template <typename R = ProductionWorkComponent*> R get_productionWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085BD8))(this);
	}
	template <typename R = bool> R get_hasProductionWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085C60))(this);
	}
	template <typename R = void> R AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x1085C6C))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0x1085DD0))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R RemoveProductionWork() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085F34))(this);
	}
	template <typename R = ProgressionExchangeComponent*> R get_progressionExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085F40))(this);
	}
	template <typename R = bool> R get_hasProgressionExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1085FC8))(this);
	}
	template <typename R = void> R AddProgressionExchange(int32_t newLimit, float newResetTimeout, Il2CppArray<ExchangeResource*>* newResources, Il2CppArray<FilteredResources*>* newFilters, Il2CppArray<RewardResource*>* newRewards, bool newConsiderDurability, Il2CppString* newWindowLine, Il2CppString* newTooMuchPointsPopUpCaption, Il2CppString* newTooMuchPointsPopUpLine, Il2CppString* newRequiredResourcesCaption, Il2CppString* newRequiredResourcesDescription, Il2CppString* newRequiredResourcesFirstLine, Il2CppString* newRequiredResourcesSecondLine, Il2CppString* newRequiredResourcesHideLine, Il2CppString* newUseButtonText, bool newRequiredResourcesHideReward, bool newRequiredResourcesHideRequest, Il2CppString* newEffect, Il2CppString* newAnalyticEvent) {
		return ((R (*)(GameDataEntity*, int32_t, float, Il2CppArray<ExchangeResource*>*, Il2CppArray<FilteredResources*>*, Il2CppArray<RewardResource*>*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1085FD4))(this, newLimit, newResetTimeout, newResources, newFilters, newRewards, newConsiderDurability, newWindowLine, newTooMuchPointsPopUpCaption, newTooMuchPointsPopUpLine, newRequiredResourcesCaption, newRequiredResourcesDescription, newRequiredResourcesFirstLine, newRequiredResourcesSecondLine, newRequiredResourcesHideLine, newUseButtonText, newRequiredResourcesHideReward, newRequiredResourcesHideRequest, newEffect, newAnalyticEvent);
	}
	template <typename R = void> R ReplaceProgressionExchange(int32_t newLimit, float newResetTimeout, Il2CppArray<ExchangeResource*>* newResources, Il2CppArray<FilteredResources*>* newFilters, Il2CppArray<RewardResource*>* newRewards, bool newConsiderDurability, Il2CppString* newWindowLine, Il2CppString* newTooMuchPointsPopUpCaption, Il2CppString* newTooMuchPointsPopUpLine, Il2CppString* newRequiredResourcesCaption, Il2CppString* newRequiredResourcesDescription, Il2CppString* newRequiredResourcesFirstLine, Il2CppString* newRequiredResourcesSecondLine, Il2CppString* newRequiredResourcesHideLine, Il2CppString* newUseButtonText, bool newRequiredResourcesHideReward, bool newRequiredResourcesHideRequest, Il2CppString* newEffect, Il2CppString* newAnalyticEvent) {
		return ((R (*)(GameDataEntity*, int32_t, float, Il2CppArray<ExchangeResource*>*, Il2CppArray<FilteredResources*>*, Il2CppArray<RewardResource*>*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1086264))(this, newLimit, newResetTimeout, newResources, newFilters, newRewards, newConsiderDurability, newWindowLine, newTooMuchPointsPopUpCaption, newTooMuchPointsPopUpLine, newRequiredResourcesCaption, newRequiredResourcesDescription, newRequiredResourcesFirstLine, newRequiredResourcesSecondLine, newRequiredResourcesHideLine, newUseButtonText, newRequiredResourcesHideReward, newRequiredResourcesHideRequest, newEffect, newAnalyticEvent);
	}
	template <typename R = void> R RemoveProgressionExchange() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10864F4))(this);
	}
	template <typename R = PursuitComponent*> R get_pursuit() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086500))(this);
	}
	template <typename R = bool> R get_hasPursuit() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086588))(this);
	}
	template <typename R = void> R AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(GameDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x1086594))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(GameDataEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0x10866F0))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R RemovePursuit() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108684C))(this);
	}
	template <typename R = PursuitGroupComponent*> R get_pursuitGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086858))(this);
	}
	template <typename R = bool> R get_hasPursuitGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10868E0))(this);
	}
	template <typename R = void> R AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x10868EC))(this, newDistance, newGroupName);
	}
	template <typename R = void> R ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(GameDataEntity*, float, Il2CppString*))(Il2CppBase() + 0x1086A10))(this, newDistance, newGroupName);
	}
	template <typename R = void> R RemovePursuitGroup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086B34))(this);
	}
	template <typename R = QuestsSaveComponent*> R get_questsSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086B40))(this);
	}
	template <typename R = bool> R get_hasQuestsSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086BC8))(this);
	}
	template <typename R = void> R AddQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x1086BD4))(this, newVersion, newData);
	}
	template <typename R = void> R ReplaceQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x1086CF0))(this, newVersion, newData);
	}
	template <typename R = void> R RemoveQuestsSave() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086E0C))(this);
	}
	template <typename R = RandomClanNameComponent*> R get_randomClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086E18))(this);
	}
	template <typename R = bool> R get_hasRandomClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1086EA0))(this);
	}
	template <typename R = void> R AddRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1086EAC))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1086FC8))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomClanName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10870E4))(this);
	}
	template <typename R = RandomNameComponent*> R get_randomName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10870F0))(this);
	}
	template <typename R = bool> R get_hasRandomName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087178))(this);
	}
	template <typename R = void> R AddRandomName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1087184))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x10872A0))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomName() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10873BC))(this);
	}
	template <typename R = RarityComponent*> R get_rarity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10873C8))(this);
	}
	template <typename R = bool> R get_hasRarity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087450))(this);
	}
	template <typename R = void> R AddRarity(Rarity* newValue) {
		return ((R (*)(GameDataEntity*, Rarity*))(Il2CppBase() + 0x108745C))(this, newValue);
	}
	template <typename R = void> R ReplaceRarity(Rarity* newValue) {
		return ((R (*)(GameDataEntity*, Rarity*))(Il2CppBase() + 0x1087560))(this, newValue);
	}
	template <typename R = void> R RemoveRarity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087664))(this);
	}
	template <typename R = RavenNestComponent*> R get_ravenNest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087670))(this);
	}
	template <typename R = bool> R get_hasRavenNest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10876F8))(this);
	}
	template <typename R = void> R AddRavenNest(Il2CppArray<FuelItem*>* newFuel) {
		return ((R (*)(GameDataEntity*, Il2CppArray<FuelItem*>*))(Il2CppBase() + 0x1087704))(this, newFuel);
	}
	template <typename R = void> R ReplaceRavenNest(Il2CppArray<FuelItem*>* newFuel) {
		return ((R (*)(GameDataEntity*, Il2CppArray<FuelItem*>*))(Il2CppBase() + 0x1087818))(this, newFuel);
	}
	template <typename R = void> R RemoveRavenNest() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108792C))(this);
	}
	template <typename R = RavenNestManagementActionComponent*> R get_ravenNestManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087938))(this);
	}
	template <typename R = bool> R get_hasRavenNestManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10879C0))(this);
	}
	template <typename R = void> R AddRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10879CC))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087AE0))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087BF4))(this);
	}
	template <typename R = RavenNestStatsActionComponent*> R get_ravenNestStatsAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087C00))(this);
	}
	template <typename R = bool> R get_hasRavenNestStatsAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087C88))(this);
	}
	template <typename R = void> R AddRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087C94))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestStatsAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1087DA8))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestStatsAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087EBC))(this);
	}
	template <typename R = RavenNestStatsComponent*> R get_ravenNestStats() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087EC8))(this);
	}
	template <typename R = bool> R get_hasRavenNestStats() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1087F50))(this);
	}
	template <typename R = void> R AddRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(GameDataEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0x1087F5C))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R ReplaceRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(GameDataEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0x1088084))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R RemoveRavenNestStats() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10881AC))(this);
	}
	template <typename R = RepairActionComponent*> R get_repairAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10881B8))(this);
	}
	template <typename R = bool> R get_hasRepairAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088240))(this);
	}
	template <typename R = void> R AddRepairAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108824C))(this, newName);
	}
	template <typename R = void> R ReplaceRepairAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1088360))(this, newName);
	}
	template <typename R = void> R RemoveRepairAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088474))(this);
	}
	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088480))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088508))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1088514))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1088618))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108871C))(this);
	}
	template <typename R = ResetTimeComponent*> R get_resetTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088728))(this);
	}
	template <typename R = bool> R get_hasResetTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10887B0))(this);
	}
	template <typename R = void> R AddResetTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10887BC))(this, newValue);
	}
	template <typename R = void> R ReplaceResetTime(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x10888C0))(this, newValue);
	}
	template <typename R = void> R RemoveResetTime() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10889C4))(this);
	}
	template <typename R = ResourcesComponent*> R get_resources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10889D0))(this);
	}
	template <typename R = bool> R get_hasResources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088A58))(this);
	}
	template <typename R = void> R AddResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1088A64))(this, newList);
	}
	template <typename R = void> R ReplaceResources(Il2CppArray<Resource*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Resource*>*))(Il2CppBase() + 0x1088B78))(this, newList);
	}
	template <typename R = void> R RemoveResources() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088C8C))(this);
	}
	template <typename R = RespawnPointComponent*> R get_respawnPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088C98))(this);
	}
	template <typename R = bool> R get_hasRespawnPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088D20))(this);
	}
	template <typename R = void> R AddRespawnPoint(float newRange) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1088D2C))(this, newRange);
	}
	template <typename R = void> R ReplaceRespawnPoint(float newRange) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1088E30))(this, newRange);
	}
	template <typename R = void> R RemoveRespawnPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088F34))(this);
	}
	template <typename R = ResurrectActionComponent*> R get_resurrectAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088F40))(this);
	}
	template <typename R = bool> R get_hasResurrectAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1088FC8))(this);
	}
	template <typename R = void> R AddResurrectAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1088FD4))(this, newName, newList);
	}
	template <typename R = void> R ReplaceResurrectAction(Il2CppString* newName, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Item*>*))(Il2CppBase() + 0x10890FC))(this, newName, newList);
	}
	template <typename R = void> R RemoveResurrectAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089224))(this);
	}
	template <typename R = RewardsComponent*> R get_rewards() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089230))(this);
	}
	template <typename R = bool> R get_hasRewards() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10892B8))(this);
	}
	template <typename R = void> R AddRewards(Il2CppArray<Resource*>* newList, int32_t newProgressionLevel) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Resource*>*, int32_t))(Il2CppBase() + 0x10892C4))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R ReplaceRewards(Il2CppArray<Resource*>* newList, int32_t newProgressionLevel) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Resource*>*, int32_t))(Il2CppBase() + 0x10893E0))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R RemoveRewards() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10894FC))(this);
	}
	template <typename R = RoamingComponent*> R get_roaming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089508))(this);
	}
	template <typename R = bool> R get_hasRoaming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089590))(this);
	}
	template <typename R = void> R AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(GameDataEntity*, float, float, float))(Il2CppBase() + 0x108959C))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(GameDataEntity*, float, float, float))(Il2CppBase() + 0x10896B4))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R RemoveRoaming() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10897CC))(this);
	}
	template <typename R = RoofComponent*> R get_roof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10897D8))(this);
	}
	template <typename R = bool> R get_hasRoof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089860))(this);
	}
	template <typename R = void> R AddRoof(int32_t newIndex) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108986C))(this, newIndex);
	}
	template <typename R = void> R ReplaceRoof(int32_t newIndex) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1089970))(this, newIndex);
	}
	template <typename R = void> R RemoveRoof() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089A74))(this);
	}
	template <typename R = RoomComponent*> R get_room() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089A80))(this);
	}
	template <typename R = bool> R get_hasRoom() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089B08))(this);
	}
	template <typename R = void> R AddRoom(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1089B14))(this, newName);
	}
	template <typename R = void> R ReplaceRoom(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1089C28))(this, newName);
	}
	template <typename R = void> R RemoveRoom() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089D3C))(this);
	}
	template <typename R = RoomsDoorComponent*> R get_roomsDoor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089D48))(this);
	}
	template <typename R = bool> R get_hasRoomsDoor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1089DD0))(this);
	}
	template <typename R = void> R AddRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1089DDC))(this, newNames);
	}
	template <typename R = void> R ReplaceRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1089EF0))(this, newNames);
	}
	template <typename R = void> R RemoveRoomsDoor() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A004))(this);
	}
	template <typename R = RotateToComponent*> R get_rotateTo() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A010))(this);
	}
	template <typename R = bool> R get_hasRotateTo() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A098))(this);
	}
	template <typename R = void> R AddRotateTo(float newAngle) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A0A4))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotateTo(float newAngle) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A1A8))(this, newAngle);
	}
	template <typename R = void> R RemoveRotateTo() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A2AC))(this);
	}
	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A2B8))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A340))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A34C))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108A450))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A554))(this);
	}
	template <typename R = RuneInventoryIdComponent*> R get_runeInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A560))(this);
	}
	template <typename R = bool> R get_hasRuneInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A5E8))(this);
	}
	template <typename R = void> R AddRuneInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108A5F4))(this, newId);
	}
	template <typename R = void> R ReplaceRuneInventoryId(int32_t newId) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108A6F8))(this, newId);
	}
	template <typename R = void> R RemoveRuneInventoryId() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A7FC))(this);
	}
	template <typename R = SaveActionComponent*> R get_saveAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A808))(this);
	}
	template <typename R = bool> R get_hasSaveAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108A890))(this);
	}
	template <typename R = void> R AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x108A89C))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x108A9EC))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R RemoveSaveAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AB3C))(this);
	}
	template <typename R = bool> R get_isSaveable() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AB48))(this);
	}
	template <typename R = void> R set_isSaveable(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108AB54))(this, value);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AC6C))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108ACF4))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108AD00))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108AE04))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AF08))(this);
	}
	template <typename R = ScoutComponent*> R get_scout() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AF14))(this);
	}
	template <typename R = bool> R get_hasScout() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108AF9C))(this);
	}
	template <typename R = void> R AddScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameDataEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108AFA8))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameDataEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108B120))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveScout() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B298))(this);
	}
	template <typename R = SeasonPointsByGradeComponent*> R get_seasonPointsByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B2A4))(this);
	}
	template <typename R = bool> R get_hasSeasonPointsByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B32C))(this);
	}
	template <typename R = void> R AddSeasonPointsByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x108B338))(this, newValues);
	}
	template <typename R = void> R ReplaceSeasonPointsByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x108B44C))(this, newValues);
	}
	template <typename R = void> R RemoveSeasonPointsByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B560))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B56C))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B5F4))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108B600))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108B704))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B808))(this);
	}
	template <typename R = ServerPositionComponent*> R get_serverPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B814))(this);
	}
	template <typename R = bool> R get_hasServerPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108B89C))(this);
	}
	template <typename R = void> R AddServerPosition(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x108B8A8))(this, newX, newY);
	}
	template <typename R = void> R ReplaceServerPosition(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x108B9B0))(this, newX, newY);
	}
	template <typename R = void> R RemoveServerPosition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BAB8))(this);
	}
	template <typename R = ServerTickComponent*> R get_serverTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BAC4))(this);
	}
	template <typename R = bool> R get_hasServerTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BB4C))(this);
	}
	template <typename R = void> R AddServerTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108BB58))(this, newValue);
	}
	template <typename R = void> R ReplaceServerTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108BC5C))(this, newValue);
	}
	template <typename R = void> R RemoveServerTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BD60))(this);
	}
	template <typename R = SharedComponent*> R get_shared() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BD6C))(this);
	}
	template <typename R = bool> R get_hasShared() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108BDF4))(this);
	}
	template <typename R = void> R AddShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(GameDataEntity*, bool, bool))(Il2CppBase() + 0x108BE00))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(GameDataEntity*, bool, bool))(Il2CppBase() + 0x108BF14))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R RemoveShared() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C028))(this);
	}
	template <typename R = ShieldManagementActionComponent*> R get_shieldManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C034))(this);
	}
	template <typename R = bool> R get_hasShieldManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C0BC))(this);
	}
	template <typename R = void> R AddShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108C0C8))(this, newName);
	}
	template <typename R = void> R ReplaceShieldManagementAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108C1DC))(this, newName);
	}
	template <typename R = void> R RemoveShieldManagementAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C2F0))(this);
	}
	template <typename R = bool> R get_isShieldTotem() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C2FC))(this);
	}
	template <typename R = void> R set_isShieldTotem(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x108C308))(this, value);
	}
	template <typename R = ShowConditionComponent*> R get_showCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C420))(this);
	}
	template <typename R = bool> R get_hasShowCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C4A8))(this);
	}
	template <typename R = void> R AddShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x108C4B4))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0x108C604))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveShowCondition() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C754))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C760))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C7E8))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108C7F4))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108C8F8))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108C9FC))(this);
	}
	template <typename R = SinglePlaceComponent*> R get_singlePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CA08))(this);
	}
	template <typename R = bool> R get_hasSinglePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CA90))(this);
	}
	template <typename R = void> R AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x108CA9C))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0x108CBD4))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R RemoveSinglePlace() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CD0C))(this);
	}
	template <typename R = SlotCountComponent*> R get_slotCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CD18))(this);
	}
	template <typename R = bool> R get_hasSlotCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CDA0))(this);
	}
	template <typename R = void> R AddSlotCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108CDAC))(this, newValue);
	}
	template <typename R = void> R ReplaceSlotCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108CEB0))(this, newValue);
	}
	template <typename R = void> R RemoveSlotCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CFB4))(this);
	}
	template <typename R = SpawnAndDestroyComponent*> R get_spawnAndDestroy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108CFC0))(this);
	}
	template <typename R = bool> R get_hasSpawnAndDestroy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D048))(this);
	}
	template <typename R = void> R AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x108D054))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0x108D18C))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R RemoveSpawnAndDestroy() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D2C4))(this);
	}
	template <typename R = SpawnEffectComponent*> R get_spawnEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D2D0))(this);
	}
	template <typename R = bool> R get_hasSpawnEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D358))(this);
	}
	template <typename R = void> R AddSpawnEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x108D364))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceSpawnEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x108D500))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveSpawnEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D69C))(this);
	}
	template <typename R = SpawnOnDeathComponent*> R get_spawnOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D6A8))(this);
	}
	template <typename R = bool> R get_hasSpawnOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D730))(this);
	}
	template <typename R = void> R AddSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(GameDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x108D73C))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(GameDataEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0x108D874))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveSpawnOnDeath() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D9AC))(this);
	}
	template <typename R = SpectatorComponent*> R get_spectator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108D9B8))(this);
	}
	template <typename R = bool> R get_hasSpectator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DA40))(this);
	}
	template <typename R = void> R AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(GameDataEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x108DA4C))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(GameDataEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0x108DB88))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R RemoveSpectator() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DCC4))(this);
	}
	template <typename R = SpeedComponent*> R get_speed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DCD0))(this);
	}
	template <typename R = bool> R get_hasSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DD58))(this);
	}
	template <typename R = void> R AddSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108DD64))(this, newValue);
	}
	template <typename R = void> R ReplaceSpeed(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108DE68))(this, newValue);
	}
	template <typename R = void> R RemoveSpeed() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DF6C))(this);
	}
	template <typename R = StartTournamentActionComponent*> R get_startTournamentAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108DF78))(this);
	}
	template <typename R = bool> R get_hasStartTournamentAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E000))(this);
	}
	template <typename R = void> R AddStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108E00C))(this, newName);
	}
	template <typename R = void> R ReplaceStartTournamentAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x108E120))(this, newName);
	}
	template <typename R = void> R RemoveStartTournamentAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E234))(this);
	}
	template <typename R = StateViewComponent*> R get_stateView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E240))(this);
	}
	template <typename R = bool> R get_hasStateView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E2C8))(this);
	}
	template <typename R = void> R AddStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0x108E2D4))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R ReplaceStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0x108E3FC))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R RemoveStateView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E524))(this);
	}
	template <typename R = StatueComponent*> R get_statue() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E530))(this);
	}
	template <typename R = bool> R get_hasStatue() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E5B8))(this);
	}
	template <typename R = void> R AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108E5C4))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameDataEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x108E710))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveStatue() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E85C))(this);
	}
	template <typename R = StatusBarViewComponent*> R get_statusBarView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E868))(this);
	}
	template <typename R = bool> R get_hasStatusBarView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108E8F0))(this);
	}
	template <typename R = void> R AddStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x108E8FC))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R ReplaceStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(GameDataEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0x108EA70))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R RemoveStatusBarView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EBE4))(this);
	}
	template <typename R = StoreExperienceByGradeComponent*> R get_storeExperienceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EBF0))(this);
	}
	template <typename R = bool> R get_hasStoreExperienceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EC78))(this);
	}
	template <typename R = void> R AddStoreExperienceByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x108EC84))(this, newValues);
	}
	template <typename R = void> R ReplaceStoreExperienceByGrade(Il2CppArray<float>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<float>*))(Il2CppBase() + 0x108ED98))(this, newValues);
	}
	template <typename R = void> R RemoveStoreExperienceByGrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EEAC))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EEB8))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108EF40))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x108EF4C))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x108F060))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F174))(this);
	}
	template <typename R = TeamComponent*> R get_team() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F180))(this);
	}
	template <typename R = bool> R get_hasTeam() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F208))(this);
	}
	template <typename R = void> R AddTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(GameDataEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x108F214))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R ReplaceTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(GameDataEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0x108F358))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R RemoveTeam() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F49C))(this);
	}
	template <typename R = TenacityCoefComponent*> R get_tenacityCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F4A8))(this);
	}
	template <typename R = bool> R get_hasTenacityCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F530))(this);
	}
	template <typename R = void> R AddTenacityCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108F53C))(this, newValue);
	}
	template <typename R = void> R ReplaceTenacityCoef(float newValue) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108F640))(this, newValue);
	}
	template <typename R = void> R RemoveTenacityCoef() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F744))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F750))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F7D8))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108F7E4))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(GameDataEntity*, int64_t))(Il2CppBase() + 0x108F8E8))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F9EC))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108F9F8))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FA80))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FA8C))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FB90))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FC94))(this);
	}
	template <typename R = TicksCountComponent*> R get_ticksCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FCA0))(this);
	}
	template <typename R = bool> R get_hasTicksCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FD28))(this);
	}
	template <typename R = void> R AddTicksCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FD34))(this, newValue);
	}
	template <typename R = void> R ReplaceTicksCount(int32_t newValue) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x108FE38))(this, newValue);
	}
	template <typename R = void> R RemoveTicksCount() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FF3C))(this);
	}
	template <typename R = TimeTriggerComponent*> R get_timeTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FF48))(this);
	}
	template <typename R = bool> R get_hasTimeTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x108FFD0))(this);
	}
	template <typename R = void> R AddTimeTrigger(float newBeforeEnd) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x108FFDC))(this, newBeforeEnd);
	}
	template <typename R = void> R ReplaceTimeTrigger(float newBeforeEnd) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x10900E0))(this, newBeforeEnd);
	}
	template <typename R = void> R RemoveTimeTrigger() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10901E4))(this);
	}
	template <typename R = TimerEffectComponent*> R get_timerEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10901F0))(this);
	}
	template <typename R = bool> R get_hasTimerEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090278))(this);
	}
	template <typename R = void> R AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1090284))(this, newName, newMinGrade);
	}
	template <typename R = void> R ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x10903A0))(this, newName, newMinGrade);
	}
	template <typename R = void> R RemoveTimerEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10904BC))(this);
	}
	template <typename R = ToLocationComponent*> R get_toLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10904C8))(this);
	}
	template <typename R = bool> R get_hasToLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090550))(this);
	}
	template <typename R = void> R AddToLocation(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x109055C))(this, newName);
	}
	template <typename R = void> R ReplaceToLocation(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1090670))(this, newName);
	}
	template <typename R = void> R RemoveToLocation() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090784))(this);
	}
	template <typename R = ToolTipComponent*> R get_toolTip() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090790))(this);
	}
	template <typename R = bool> R get_hasToolTip() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090818))(this);
	}
	template <typename R = void> R AddToolTip(ToolTipValue* newValue) {
		return ((R (*)(GameDataEntity*, ToolTipValue*))(Il2CppBase() + 0x1090824))(this, newValue);
	}
	template <typename R = void> R ReplaceToolTip(ToolTipValue* newValue) {
		return ((R (*)(GameDataEntity*, ToolTipValue*))(Il2CppBase() + 0x1090938))(this, newValue);
	}
	template <typename R = void> R RemoveToolTip() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090A4C))(this);
	}
	template <typename R = TransportComponent*> R get_transport() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090A58))(this);
	}
	template <typename R = bool> R get_hasTransport() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090AE0))(this);
	}
	template <typename R = void> R AddTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1090AEC))(this, newValues);
	}
	template <typename R = void> R ReplaceTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1090C00))(this, newValues);
	}
	template <typename R = void> R RemoveTransport() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090D14))(this);
	}
	template <typename R = TriggerViewComponent*> R get_triggerView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090D20))(this);
	}
	template <typename R = bool> R get_hasTriggerView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1090DA8))(this);
	}
	template <typename R = void> R AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x1090DB4))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0x1090F30))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R RemoveTriggerView() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10910AC))(this);
	}
	template <typename R = UIPrefabComponent*> R get_uIPrefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10910B8))(this);
	}
	template <typename R = bool> R get_hasUIPrefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091140))(this);
	}
	template <typename R = void> R AddUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x109114C))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R ReplaceUIPrefab(Il2CppString* newName, Il2CppString* newText, Il2CppString* newIcon, Il2CppString* newParams) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10912A4))(this, newName, newText, newIcon, newParams);
	}
	template <typename R = void> R RemoveUIPrefab() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10913FC))(this);
	}
	template <typename R = UniqueLookupComponent*> R get_uniqueLookup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091408))(this);
	}
	template <typename R = bool> R get_hasUniqueLookup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091490))(this);
	}
	template <typename R = void> R AddUniqueLookup(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x109149C))(this, newName);
	}
	template <typename R = void> R ReplaceUniqueLookup(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10915B0))(this, newName);
	}
	template <typename R = void> R RemoveUniqueLookup() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10916C4))(this);
	}
	template <typename R = UnlockActionComponent*> R get_unlockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10916D0))(this);
	}
	template <typename R = bool> R get_hasUnlockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091758))(this);
	}
	template <typename R = void> R AddUnlockAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091764))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091878))(this, newName);
	}
	template <typename R = void> R RemoveUnlockAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x109198C))(this);
	}
	template <typename R = UnlockComponent*> R get_unlock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091998))(this);
	}
	template <typename R = bool> R get_hasUnlock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091A20))(this);
	}
	template <typename R = void> R AddUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1091A2C))(this, newNames);
	}
	template <typename R = void> R ReplaceUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameDataEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1091B40))(this, newNames);
	}
	template <typename R = void> R RemoveUnlock() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091C54))(this);
	}
	template <typename R = UnlockContainerActionComponent*> R get_unlockContainerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091C60))(this);
	}
	template <typename R = bool> R get_hasUnlockContainerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091CE8))(this);
	}
	template <typename R = void> R AddUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091CF4))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockContainerAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1091E08))(this, newName);
	}
	template <typename R = void> R RemoveUnlockContainerAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091F1C))(this);
	}
	template <typename R = UnlockDurationComponent*> R get_unlockDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091F28))(this);
	}
	template <typename R = bool> R get_hasUnlockDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1091FB0))(this);
	}
	template <typename R = void> R AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x1091FBC))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10920E0))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R RemoveUnlockDuration() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092204))(this);
	}
	template <typename R = UnlockPortalActionComponent*> R get_unlockPortalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092210))(this);
	}
	template <typename R = bool> R get_hasUnlockPortalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092298))(this);
	}
	template <typename R = void> R AddUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10922A4))(this, newName);
	}
	template <typename R = void> R ReplaceUnlockPortalAction(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10923B8))(this, newName);
	}
	template <typename R = void> R RemoveUnlockPortalAction() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10924CC))(this);
	}
	template <typename R = bool> R get_isUnlocked() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10924D8))(this);
	}
	template <typename R = void> R set_isUnlocked(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10924E4))(this, value);
	}
	template <typename R = UpgradeComponent*> R get_upgrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10925FC))(this);
	}
	template <typename R = bool> R get_hasUpgrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092684))(this);
	}
	template <typename R = void> R AddUpgrade(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x1092690))(this, newName);
	}
	template <typename R = void> R ReplaceUpgrade(Il2CppString* newName) {
		return ((R (*)(GameDataEntity*, Il2CppString*))(Il2CppBase() + 0x10927A4))(this, newName);
	}
	template <typename R = void> R RemoveUpgrade() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10928B8))(this);
	}
	template <typename R = UpgradeEffectComponent*> R get_upgradeEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10928C4))(this);
	}
	template <typename R = bool> R get_hasUpgradeEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x109294C))(this);
	}
	template <typename R = void> R AddUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1092958))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameDataEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0x1092AF4))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveUpgradeEffect() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092C90))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092C9C))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092D24))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1092D30))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(GameDataEntity*, int32_t))(Il2CppBase() + 0x1092E34))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092F38))(this);
	}
	template <typename R = VelocityComponent*> R get_velocity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092F44))(this);
	}
	template <typename R = bool> R get_hasVelocity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1092FCC))(this);
	}
	template <typename R = void> R AddVelocity(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x1092FD8))(this, newX, newY);
	}
	template <typename R = void> R ReplaceVelocity(float newX, float newY) {
		return ((R (*)(GameDataEntity*, float, float))(Il2CppBase() + 0x10930E0))(this, newX, newY);
	}
	template <typename R = void> R RemoveVelocity() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10931E8))(this);
	}
	template <typename R = VisualCollisionComponent*> R get_visualCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10931F4))(this);
	}
	template <typename R = bool> R get_hasVisualCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x109327C))(this);
	}
	template <typename R = void> R AddVisualCollision(float newRadius) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x1093288))(this, newRadius);
	}
	template <typename R = void> R ReplaceVisualCollision(float newRadius) {
		return ((R (*)(GameDataEntity*, float))(Il2CppBase() + 0x109338C))(this, newRadius);
	}
	template <typename R = void> R RemoveVisualCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093490))(this);
	}
	template <typename R = bool> R get_isWallCollision() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x109349C))(this);
	}
	template <typename R = void> R set_isWallCollision(bool value) {
		return ((R (*)(GameDataEntity*, bool))(Il2CppBase() + 0x10934A8))(this, value);
	}
	template <typename R = WaveIndexComponent*> R get_waveIndex() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10935C0))(this);
	}
	template <typename R = bool> R get_hasWaveIndex() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093648))(this);
	}
	template <typename R = void> R AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x1093654))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t))(Il2CppBase() + 0x109375C))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R RemoveWaveIndex() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093864))(this);
	}
	template <typename R = WaveItemComponent*> R get_waveItem() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093870))(this);
	}
	template <typename R = bool> R get_hasWaveItem() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10938F8))(this);
	}
	template <typename R = void> R AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1093904))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(GameDataEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1093A20))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R RemoveWaveItem() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093B3C))(this);
	}
	template <typename R = WaveStateComponent*> R get_waveState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093B48))(this);
	}
	template <typename R = bool> R get_hasWaveState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093BD0))(this);
	}
	template <typename R = void> R AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1093BDC))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(GameDataEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0x1093CF4))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R RemoveWaveState() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093E0C))(this);
	}
	template <typename R = WavesEventComponent*> R get_wavesEvent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093E18))(this);
	}
	template <typename R = bool> R get_hasWavesEvent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1093EA0))(this);
	}
	template <typename R = void> R AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0x1093EAC))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0x1094068))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R RemoveWavesEvent() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1094224))(this);
	}
	template <typename R = WayPointComponent*> R get_wayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1094230))(this);
	}
	template <typename R = bool> R get_hasWayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10942B8))(this);
	}
	template <typename R = void> R AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10942C4))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(GameDataEntity*, Il2CppString*, float))(Il2CppBase() + 0x10943E8))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R RemoveWayPoint() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x109450C))(this);
	}
	template <typename R = WorldTypeComponent*> R get_worldType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x1094518))(this);
	}
	template <typename R = bool> R get_hasWorldType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10945A0))(this);
	}
	template <typename R = void> R AddWorldType(WorldType* newType) {
		return ((R (*)(GameDataEntity*, WorldType*))(Il2CppBase() + 0x10945AC))(this, newType);
	}
	template <typename R = void> R ReplaceWorldType(WorldType* newType) {
		return ((R (*)(GameDataEntity*, WorldType*))(Il2CppBase() + 0x10946B0))(this, newType);
	}
	template <typename R = void> R RemoveWorldType() {
		return ((R (*)(GameDataEntity*))(Il2CppBase() + 0x10947B4))(this);
	}

};

