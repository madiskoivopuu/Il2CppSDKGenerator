#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameEntity"));
	}

	template <typename T = EntityStatus*> T& _status() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = AutoModeComponent*> static T& autoModeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AutoOpenDoorComponent*> static T& autoOpenDoorComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = AvatarComponent*> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = CanTravelComponent*> static T& canTravelComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = ClickComponent*> static T& clickComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = CreepComponent*> static T& creepComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = DisabledComponent*> static T& disabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = DraggedComponent*> static T& draggedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = ExplodeOnDeathComponent*> static T& explodeOnDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = ExternalInventory*> static T& externalInventoryComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = FakeBaseComponent*> static T& fakeBaseComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = FollowTargetComponent*> static T& followTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = HideBagComponent*> static T& hideBagComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = HideHeadComponent*> static T& hideHeadComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = HidePetComponent*> static T& hidePetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = InventoryLockedComponent*> static T& inventoryLockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = MoveToTargetPosition*> static T& moveToTargetPositionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = NoAutoModeComponent*> static T& noAutoModeComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = NotAggressiveComponent*> static T& notAggressiveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = NotInteractableComponent*> static T& notInteractableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = NotPursuitTargetComponent*> static T& notPursuitTargetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = NotSelectableComponent*> static T& notSelectableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = OnDeathComponent*> static T& onDeathComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = PlayerComponent*> static T& playerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = PlayerKillComponent*> static T& playerKillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = SaveableComponent*> static T& saveableComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = UnlockedComponent*> static T& unlockedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = Il2CppString*> T get_DataName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF80B84))(this);
	}
	template <typename T = GameDataEntity*> T get_Data() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF80C60))(this);
	}
	template <typename T = void> T AddData(Il2CppString* name, GameDataEntity* data) {
		return ((T (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF80CA8))(this, name, data);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF80DD4))(this);
	}
	template <typename T = EntityStatus*> T get_Status() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF810AC))(this);
	}
	template <typename T = bool> T get_hasStatusPanel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81230))(this);
	}
	template <typename T = void> T RemoveStatusPanel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8129C))(this);
	}
	template <typename T = void> static T DestroyStatusPanel(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xF813A0))(0, entity);
	}
	template <typename T = AABBComponent*> T get_aABB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8143C))(this);
	}
	template <typename T = bool> T get_hasAABB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF814C4))(this);
	}
	template <typename T = void> T AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(GameEntity*, float, float, float, float))(Il2CppBase() + 0xF814D0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((T (*)(GameEntity*, float, float, float, float))(Il2CppBase() + 0xF815EC))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename T = void> T RemoveAABB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81708))(this);
	}
	template <typename T = AFKMoveComponent*> T get_aFKMove() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81714))(this);
	}
	template <typename T = bool> T get_hasAFKMove() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8179C))(this);
	}
	template <typename T = void> T AddAFKMove(int64_t newTick) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF817A8))(this, newTick);
	}
	template <typename T = void> T ReplaceAFKMove(int64_t newTick) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF818AC))(this, newTick);
	}
	template <typename T = void> T RemoveAFKMove() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF819B0))(this);
	}
	template <typename T = AFKTriggerComponent*> T get_aFKTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF819BC))(this);
	}
	template <typename T = bool> T get_hasAFKTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81A44))(this);
	}
	template <typename T = void> T AddAFKTrigger(bool newMove) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF81A50))(this, newMove);
	}
	template <typename T = void> T ReplaceAFKTrigger(bool newMove) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF81B58))(this, newMove);
	}
	template <typename T = void> T RemoveAFKTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81C60))(this);
	}
	template <typename T = AIBattleSourceComponent*> T get_aIBattleSource() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81C6C))(this);
	}
	template <typename T = bool> T get_hasAIBattleSource() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81CF4))(this);
	}
	template <typename T = void> T AddAIBattleSource(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF81D00))(this, newId);
	}
	template <typename T = void> T ReplaceAIBattleSource(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF81E04))(this, newId);
	}
	template <typename T = void> T RemoveAIBattleSource() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81F08))(this);
	}
	template <typename T = AIBattleStateComponent*> T get_aIBattleState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81F14))(this);
	}
	template <typename T = bool> T get_hasAIBattleState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81F9C))(this);
	}
	template <typename T = void> T AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(GameEntity*, int32_t, int64_t))(Il2CppBase() + 0xF81FA8))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(GameEntity*, int32_t, int64_t))(Il2CppBase() + 0xF820B4))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T RemoveAIBattleState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF821C0))(this);
	}
	template <typename T = AIEvadeTimeComponent*> T get_aIEvadeTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF821CC))(this);
	}
	template <typename T = bool> T get_hasAIEvadeTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82254))(this);
	}
	template <typename T = void> T AddAIEvadeTime(int64_t newTicks) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF82260))(this, newTicks);
	}
	template <typename T = void> T ReplaceAIEvadeTime(int64_t newTicks) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF82364))(this, newTicks);
	}
	template <typename T = void> T RemoveAIEvadeTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82468))(this);
	}
	template <typename T = AIPocketsStateComponent*> T get_aIPocketsState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82474))(this);
	}
	template <typename T = bool> T get_hasAIPocketsState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF824FC))(this);
	}
	template <typename T = void> T AddAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((T (*)(GameEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0xF82508))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T ReplaceAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((T (*)(GameEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0xF826C0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename T = void> T RemoveAIPocketsState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82878))(this);
	}
	template <typename T = ActiveComponent*> T get_active() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82884))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8290C))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF82918))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF82A20))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82B28))(this);
	}
	template <typename T = AddExperienceComponent*> T get_addExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82B34))(this);
	}
	template <typename T = bool> T get_hasAddExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82BBC))(this);
	}
	template <typename T = void> T AddAddExperience(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF82BC8))(this, newValue);
	}
	template <typename T = void> T ReplaceAddExperience(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF82CCC))(this, newValue);
	}
	template <typename T = void> T RemoveAddExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82DD0))(this);
	}
	template <typename T = AddRaidKarmaComponent*> T get_addRaidKarma() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82DDC))(this);
	}
	template <typename T = bool> T get_hasAddRaidKarma() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF82E64))(this);
	}
	template <typename T = void> T AddAddRaidKarma(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF82E70))(this, newValue);
	}
	template <typename T = void> T ReplaceAddRaidKarma(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF82F74))(this, newValue);
	}
	template <typename T = void> T RemoveAddRaidKarma() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83078))(this);
	}
	template <typename T = AddStoreExperienceComponent*> T get_addStoreExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83084))(this);
	}
	template <typename T = bool> T get_hasAddStoreExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8310C))(this);
	}
	template <typename T = void> T AddAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF83118))(this, newList);
	}
	template <typename T = void> T ReplaceAddStoreExperience(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8322C))(this, newList);
	}
	template <typename T = void> T RemoveAddStoreExperience() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83340))(this);
	}
	template <typename T = AggroRadiusComponent*> T get_aggroRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8334C))(this);
	}
	template <typename T = bool> T get_hasAggroRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF833D4))(this);
	}
	template <typename T = void> T AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(GameEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0xF833E0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((T (*)(GameEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0xF83510))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename T = void> T RemoveAggroRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83640))(this);
	}
	template <typename T = AggroTargetComponent*> T get_aggroTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8364C))(this);
	}
	template <typename T = bool> T get_hasAggroTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF836D4))(this);
	}
	template <typename T = void> T AddAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(GameEntity*, int32_t, bool))(Il2CppBase() + 0xF836E0))(this, newId, newMovable);
	}
	template <typename T = void> T ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((T (*)(GameEntity*, int32_t, bool))(Il2CppBase() + 0xF837F0))(this, newId, newMovable);
	}
	template <typename T = void> T RemoveAggroTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83900))(this);
	}
	template <typename T = AlvesBpPointsComponent*> T get_alvesBpPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8390C))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83994))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF839A0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83AA4))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83BA8))(this);
	}
	template <typename T = AlvesWavesBadgesT1Component*> T get_alvesWavesBadgesT1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83BB4))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83C3C))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83C48))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83D4C))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83E50))(this);
	}
	template <typename T = AlvesWavesBadgesT2Component*> T get_alvesWavesBadgesT2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83E5C))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF83EE4))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83EF0))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83FF4))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF840F8))(this);
	}
	template <typename T = AlvesWavesBadgesT3Component*> T get_alvesWavesBadgesT3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84104))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8418C))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF84198))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8429C))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF843A0))(this);
	}
	template <typename T = AngularSpeedComponent*> T get_angularSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF843AC))(this);
	}
	template <typename T = bool> T get_hasAngularSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84434))(this);
	}
	template <typename T = void> T AddAngularSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF84440))(this, newValue);
	}
	template <typename T = void> T ReplaceAngularSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF84544))(this, newValue);
	}
	template <typename T = void> T RemoveAngularSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84648))(this);
	}
	template <typename T = AnimatorComponent*> T get_animator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84654))(this);
	}
	template <typename T = bool> T get_hasAnimator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF846DC))(this);
	}
	template <typename T = void> T AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0xF846E8))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0xF84890))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename T = void> T RemoveAnimator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84A38))(this);
	}
	template <typename T = ApplyOnTargetActiveEffectComponent*> T get_applyOnTargetActiveEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84A44))(this);
	}
	template <typename T = bool> T get_hasApplyOnTargetActiveEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84ACC))(this);
	}
	template <typename T = void> T AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF84AD8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF84C74))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveApplyOnTargetActiveEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84E10))(this);
	}
	template <typename T = ArmingBackpackComponent*> T get_armingBackpack() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84E1C))(this);
	}
	template <typename T = bool> T get_hasArmingBackpack() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF84EA4))(this);
	}
	template <typename T = void> T AddArmingBackpack(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF84EB0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBackpack(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF84FC4))(this, newName);
	}
	template <typename T = void> T RemoveArmingBackpack() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF850D8))(this);
	}
	template <typename T = ArmingBannerComponent*> T get_armingBanner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF850E4))(this);
	}
	template <typename T = bool> T get_hasArmingBanner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8516C))(this);
	}
	template <typename T = void> T AddArmingBanner(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85178))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBanner(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8528C))(this, newName);
	}
	template <typename T = void> T RemoveArmingBanner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF853A0))(this);
	}
	template <typename T = ArmingBeardComponent*> T get_armingBeard() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF853AC))(this);
	}
	template <typename T = bool> T get_hasArmingBeard() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85434))(this);
	}
	template <typename T = void> T AddArmingBeard(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85440))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBeard(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85554))(this, newName);
	}
	template <typename T = void> T RemoveArmingBeard() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85668))(this);
	}
	template <typename T = ArmingCharmComponent*> T get_armingCharm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85674))(this);
	}
	template <typename T = bool> T get_hasArmingCharm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF856FC))(this);
	}
	template <typename T = void> T AddArmingCharm(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85708))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCharm(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8581C))(this, newName);
	}
	template <typename T = void> T RemoveArmingCharm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85930))(this);
	}
	template <typename T = ArmingChestComponent*> T get_armingChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8593C))(this);
	}
	template <typename T = bool> T get_hasArmingChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF859C4))(this);
	}
	template <typename T = void> T AddArmingChest(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF859D0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingChest(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85AE4))(this, newName);
	}
	template <typename T = void> T RemoveArmingChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85BF8))(this);
	}
	template <typename T = ArmingClassComponent*> T get_armingClass() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85C04))(this);
	}
	template <typename T = bool> T get_hasArmingClass() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85C8C))(this);
	}
	template <typename T = void> T AddArmingClass(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85C98))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClass(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85DAC))(this, newName);
	}
	template <typename T = void> T RemoveArmingClass() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85EC0))(this);
	}
	template <typename T = ArmingClothesComponent*> T get_armingClothes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85ECC))(this);
	}
	template <typename T = bool> T get_hasArmingClothes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF85F54))(this);
	}
	template <typename T = void> T AddArmingClothes(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85F60))(this, newName);
	}
	template <typename T = void> T ReplaceArmingClothes(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86074))(this, newName);
	}
	template <typename T = void> T RemoveArmingClothes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86188))(this);
	}
	template <typename T = ArmingCorpseComponent*> T get_armingCorpse() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86194))(this);
	}
	template <typename T = bool> T get_hasArmingCorpse() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8621C))(this);
	}
	template <typename T = void> T AddArmingCorpse(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86228))(this, newName);
	}
	template <typename T = void> T ReplaceArmingCorpse(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8633C))(this, newName);
	}
	template <typename T = void> T RemoveArmingCorpse() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86450))(this);
	}
	template <typename T = ArmingFaceComponent*> T get_armingFace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8645C))(this);
	}
	template <typename T = bool> T get_hasArmingFace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF864E4))(this);
	}
	template <typename T = void> T AddArmingFace(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF864F0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFace(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86604))(this, newName);
	}
	template <typename T = void> T RemoveArmingFace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86718))(this);
	}
	template <typename T = ArmingFeetComponent*> T get_armingFeet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86724))(this);
	}
	template <typename T = bool> T get_hasArmingFeet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF867AC))(this);
	}
	template <typename T = void> T AddArmingFeet(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF867B8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingFeet(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF868CC))(this, newName);
	}
	template <typename T = void> T RemoveArmingFeet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF869E0))(this);
	}
	template <typename T = ArmingHairColorComponent*> T get_armingHairColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF869EC))(this);
	}
	template <typename T = bool> T get_hasArmingHairColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86A74))(this);
	}
	template <typename T = void> T AddArmingHairColor(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86A80))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHairColor(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86B94))(this, newName);
	}
	template <typename T = void> T RemoveArmingHairColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86CA8))(this);
	}
	template <typename T = ArmingHairComponent*> T get_armingHair() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86CB4))(this);
	}
	template <typename T = bool> T get_hasArmingHair() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86D3C))(this);
	}
	template <typename T = void> T AddArmingHair(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86D48))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHair(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86E5C))(this, newName);
	}
	template <typename T = void> T RemoveArmingHair() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86F70))(this);
	}
	template <typename T = ArmingHeadComponent*> T get_armingHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF86F7C))(this);
	}
	template <typename T = bool> T get_hasArmingHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87004))(this);
	}
	template <typename T = void> T AddArmingHead(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87010))(this, newName);
	}
	template <typename T = void> T ReplaceArmingHead(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87124))(this, newName);
	}
	template <typename T = void> T RemoveArmingHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87238))(this);
	}
	template <typename T = ArmingLegsComponent*> T get_armingLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87244))(this);
	}
	template <typename T = bool> T get_hasArmingLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF872CC))(this);
	}
	template <typename T = void> T AddArmingLegs(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF872D8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingLegs(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF873EC))(this, newName);
	}
	template <typename T = void> T RemoveArmingLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87500))(this);
	}
	template <typename T = ArmingMountComponent*> T get_armingMount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8750C))(this);
	}
	template <typename T = bool> T get_hasArmingMount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87594))(this);
	}
	template <typename T = void> T AddArmingMount(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF875A0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMount(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF876B4))(this, newName);
	}
	template <typename T = void> T RemoveArmingMount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF877C8))(this);
	}
	template <typename T = ArmingMountSkill1Component*> T get_armingMountSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF877D4))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8785C))(this);
	}
	template <typename T = void> T AddArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87868))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8797C))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87A90))(this);
	}
	template <typename T = ArmingMountSkill2Component*> T get_armingMountSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87A9C))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87B24))(this);
	}
	template <typename T = void> T AddArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87B30))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87C44))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87D58))(this);
	}
	template <typename T = ArmingMountSkill3Component*> T get_armingMountSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87D64))(this);
	}
	template <typename T = bool> T get_hasArmingMountSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF87DEC))(this);
	}
	template <typename T = void> T AddArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87DF8))(this, newName);
	}
	template <typename T = void> T ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87F0C))(this, newName);
	}
	template <typename T = void> T RemoveArmingMountSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88020))(this);
	}
	template <typename T = ArmingPassiveSkill1Component*> T get_armingPassiveSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8802C))(this);
	}
	template <typename T = bool> T get_hasArmingPassiveSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF880B4))(this);
	}
	template <typename T = void> T AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF880C0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF881D4))(this, newName);
	}
	template <typename T = void> T RemoveArmingPassiveSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF882E8))(this);
	}
	template <typename T = ArmingPetComponent*> T get_armingPet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF882F4))(this);
	}
	template <typename T = bool> T get_hasArmingPet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8837C))(this);
	}
	template <typename T = void> T AddArmingPet(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88388))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPet(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8849C))(this, newName);
	}
	template <typename T = void> T RemoveArmingPet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF885B0))(this);
	}
	template <typename T = ArmingPetSkill1Component*> T get_armingPetSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF885BC))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88644))(this);
	}
	template <typename T = void> T AddArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88650))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88764))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88878))(this);
	}
	template <typename T = ArmingPetSkill2Component*> T get_armingPetSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88884))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8890C))(this);
	}
	template <typename T = void> T AddArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88918))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88A2C))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88B40))(this);
	}
	template <typename T = ArmingPetSkill3Component*> T get_armingPetSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88B4C))(this);
	}
	template <typename T = bool> T get_hasArmingPetSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88BD4))(this);
	}
	template <typename T = void> T AddArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88BE0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88CF4))(this, newName);
	}
	template <typename T = void> T RemoveArmingPetSkill3() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88E08))(this);
	}
	template <typename T = ArmingPocketComponent*> T get_armingPocket() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88E14))(this);
	}
	template <typename T = bool> T get_hasArmingPocket() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF88E9C))(this);
	}
	template <typename T = void> T AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF88EA8))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF88FEC))(this, newName1, newName2, newName3);
	}
	template <typename T = void> T RemoveArmingPocket() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89130))(this);
	}
	template <typename T = ArmingRunesComponent*> T get_armingRunes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8913C))(this);
	}
	template <typename T = bool> T get_hasArmingRunes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF891C4))(this);
	}
	template <typename T = void> T AddArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF891D0))(this, newNames);
	}
	template <typename T = void> T ReplaceArmingRunes(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF892E4))(this, newNames);
	}
	template <typename T = void> T RemoveArmingRunes() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF893F8))(this);
	}
	template <typename T = ArmingSkill1Component*> T get_armingSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89404))(this);
	}
	template <typename T = bool> T get_hasArmingSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8948C))(this);
	}
	template <typename T = void> T AddArmingSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89498))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill1(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF895AC))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill1() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF896C0))(this);
	}
	template <typename T = ArmingSkill2Component*> T get_armingSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF896CC))(this);
	}
	template <typename T = bool> T get_hasArmingSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89754))(this);
	}
	template <typename T = void> T AddArmingSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89760))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkill2(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89874))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkill2() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89988))(this);
	}
	template <typename T = ArmingSkinColorComponent*> T get_armingSkinColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89994))(this);
	}
	template <typename T = bool> T get_hasArmingSkinColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89A1C))(this);
	}
	template <typename T = void> T AddArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89A28))(this, newName);
	}
	template <typename T = void> T ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89B3C))(this, newName);
	}
	template <typename T = void> T RemoveArmingSkinColor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89C50))(this);
	}
	template <typename T = ArmingWeaponComponent*> T get_armingWeapon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89C5C))(this);
	}
	template <typename T = bool> T get_hasArmingWeapon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89CE4))(this);
	}
	template <typename T = void> T AddArmingWeapon(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89CF0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingWeapon(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89E04))(this, newName);
	}
	template <typename T = void> T RemoveArmingWeapon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89F18))(this);
	}
	template <typename T = ArrivalTimeComponent*> T get_arrivalTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89F24))(this);
	}
	template <typename T = bool> T get_hasArrivalTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF89FAC))(this);
	}
	template <typename T = void> T AddArrivalTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF89FB8))(this, newValue);
	}
	template <typename T = void> T ReplaceArrivalTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8A0BC))(this, newValue);
	}
	template <typename T = void> T RemoveArrivalTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A1C0))(this);
	}
	template <typename T = ArrowMarkerComponent*> T get_arrowMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A1CC))(this);
	}
	template <typename T = bool> T get_hasArrowMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A254))(this);
	}
	template <typename T = void> T AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0xF8A260))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0xF8A3B8))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename T = void> T RemoveArrowMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A510))(this);
	}
	template <typename T = AuraComponent*> T get_aura() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A51C))(this);
	}
	template <typename T = bool> T get_hasAura() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A5A4))(this);
	}
	template <typename T = void> T AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0xF8A5B0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<uintptr_t>* newList, TargetsSelector* newSelector) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, TargetsSelector*))(Il2CppBase() + 0xF8A708))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename T = void> T RemoveAura() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A860))(this);
	}
	template <typename T = AutoAbilityComponent*> T get_autoAbility() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A86C))(this);
	}
	template <typename T = bool> T get_hasAutoAbility() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8A8F4))(this);
	}
	template <typename T = void> T AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(GameEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF8A900))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((T (*)(GameEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF8AA3C))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename T = void> T RemoveAutoAbility() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AB78))(this);
	}
	template <typename T = AutoDestructionComponent*> T get_autoDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AB84))(this);
	}
	template <typename T = bool> T get_hasAutoDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AC0C))(this);
	}
	template <typename T = void> T AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0xF8AC18))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0xF8AD60))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename T = void> T RemoveAutoDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AEA8))(this);
	}
	template <typename T = AutoFarmComponent*> T get_autoFarm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AEB4))(this);
	}
	template <typename T = bool> T get_hasAutoFarm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8AF3C))(this);
	}
	template <typename T = void> T AddAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF8AF48))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T ReplaceAutoFarm(Il2CppArray<uintptr_t>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF8B094))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename T = void> T RemoveAutoFarm() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B1E0))(this);
	}
	template <typename T = AutoLockComponent*> T get_autoLock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B1EC))(this);
	}
	template <typename T = bool> T get_hasAutoLock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B274))(this);
	}
	template <typename T = void> T AddAutoLock(int64_t newTime) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8B280))(this, newTime);
	}
	template <typename T = void> T ReplaceAutoLock(int64_t newTime) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8B384))(this, newTime);
	}
	template <typename T = void> T RemoveAutoLock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B488))(this);
	}
	template <typename T = AutoMagicSpawnerComponent*> T get_autoMagicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B494))(this);
	}
	template <typename T = bool> T get_hasAutoMagicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B51C))(this);
	}
	template <typename T = void> T AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8B528))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8B66C))(this, newActivator, newName, newNames);
	}
	template <typename T = void> T RemoveAutoMagicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B7B0))(this);
	}
	template <typename T = bool> T get_isAutoMode() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B7BC))(this);
	}
	template <typename T = void> T set_isAutoMode(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF8B7C8))(this, value);
	}
	template <typename T = bool> T get_isAutoOpenDoor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8B8E0))(this);
	}
	template <typename T = void> T set_isAutoOpenDoor(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF8B8EC))(this, value);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BA04))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF8BA10))(this, value);
	}
	template <typename T = BackPointComponent*> T get_backPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BB28))(this);
	}
	template <typename T = bool> T get_hasBackPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BBB0))(this);
	}
	template <typename T = void> T AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(GameEntity*, int64_t, float, float))(Il2CppBase() + 0xF8BBBC))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((T (*)(GameEntity*, int64_t, float, float))(Il2CppBase() + 0xF8BCD4))(this, newBackTick, newX, newY);
	}
	template <typename T = void> T RemoveBackPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BDEC))(this);
	}
	template <typename T = BackTargetComponent*> T get_backTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BDF8))(this);
	}
	template <typename T = bool> T get_hasBackTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8BE80))(this);
	}
	template <typename T = void> T AddBackTarget(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8BE8C))(this, newId);
	}
	template <typename T = void> T ReplaceBackTarget(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8BF90))(this, newId);
	}
	template <typename T = void> T RemoveBackTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C094))(this);
	}
	template <typename T = BattleIdComponent*> T get_battleId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C0A0))(this);
	}
	template <typename T = bool> T get_hasBattleId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C128))(this);
	}
	template <typename T = void> T AddBattleId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8C134))(this, newId);
	}
	template <typename T = void> T ReplaceBattleId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8C238))(this, newId);
	}
	template <typename T = void> T RemoveBattleId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C33C))(this);
	}
	template <typename T = BattleStatisticTypeComponent*> T get_battleStatisticType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C348))(this);
	}
	template <typename T = bool> T get_hasBattleStatisticType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C3D0))(this);
	}
	template <typename T = void> T AddBattleStatisticType(BattleStatisticType* newValue) {
		return ((T (*)(GameEntity*, BattleStatisticType*))(Il2CppBase() + 0xF8C3DC))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleStatisticType(BattleStatisticType* newValue) {
		return ((T (*)(GameEntity*, BattleStatisticType*))(Il2CppBase() + 0xF8C4E0))(this, newValue);
	}
	template <typename T = void> T RemoveBattleStatisticType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C5E4))(this);
	}
	template <typename T = BawlComponent*> T get_bawl() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C5F0))(this);
	}
	template <typename T = bool> T get_hasBawl() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C678))(this);
	}
	template <typename T = void> T AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8C684))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8C7F8))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename T = void> T RemoveBawl() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C96C))(this);
	}
	template <typename T = BindComponent*> T get_bind() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8C978))(this);
	}
	template <typename T = bool> T get_hasBind() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CA00))(this);
	}
	template <typename T = void> T AddBind(EntityId* newTarget) {
		return ((T (*)(GameEntity*, EntityId*))(Il2CppBase() + 0xF8CA0C))(this, newTarget);
	}
	template <typename T = void> T ReplaceBind(EntityId* newTarget) {
		return ((T (*)(GameEntity*, EntityId*))(Il2CppBase() + 0xF8CB10))(this, newTarget);
	}
	template <typename T = void> T RemoveBind() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CC14))(this);
	}
	template <typename T = BonusMaxHealthComponent*> T get_bonusMaxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CC20))(this);
	}
	template <typename T = bool> T get_hasBonusMaxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CCA8))(this);
	}
	template <typename T = void> T AddBonusMaxHealth(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF8CCB4))(this, newValue);
	}
	template <typename T = void> T ReplaceBonusMaxHealth(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF8CDB8))(this, newValue);
	}
	template <typename T = void> T RemoveBonusMaxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CEBC))(this);
	}
	template <typename T = BossOpenResourcesComponent*> T get_bossOpenResources() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CEC8))(this);
	}
	template <typename T = bool> T get_hasBossOpenResources() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8CF50))(this);
	}
	template <typename T = void> T AddBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(GameEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8CF5C))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T ReplaceBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<uintptr_t>* newOpenPortalItems, Il2CppArray<uintptr_t>* newBosses) {
		return ((T (*)(GameEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8D0A8))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename T = void> T RemoveBossOpenResources() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D1F4))(this);
	}
	template <typename T = BossOpenStateComponent*> T get_bossOpenState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D200))(this);
	}
	template <typename T = bool> T get_hasBossOpenState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D288))(this);
	}
	template <typename T = void> T AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((T (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0xF8D294))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((T (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0xF8D3D8))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename T = void> T RemoveBossOpenState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D51C))(this);
	}
	template <typename T = BuildGroupComponent*> T get_buildGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D528))(this);
	}
	template <typename T = bool> T get_hasBuildGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D594))(this);
	}
	template <typename T = void> T AddBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8D5A0))(this, newList);
	}
	template <typename T = void> T ReplaceBuildGroup(Il2CppArray<uintptr_t>* newList) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8D698))(this, newList);
	}
	template <typename T = void> T RemoveBuildGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D790))(this);
	}
	template <typename T = BuildPlaceComponent*> T get_buildPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D79C))(this);
	}
	template <typename T = bool> T get_hasBuildPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8D824))(this);
	}
	template <typename T = void> T AddBuildPlace(Fill* newFill) {
		return ((T (*)(GameEntity*, Fill*))(Il2CppBase() + 0xF8D830))(this, newFill);
	}
	template <typename T = void> T ReplaceBuildPlace(Fill* newFill) {
		return ((T (*)(GameEntity*, Fill*))(Il2CppBase() + 0xF8D934))(this, newFill);
	}
	template <typename T = void> T RemoveBuildPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8DA38))(this);
	}
	template <typename T = BuilderComponent*> T get_builder() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8DA44))(this);
	}
	template <typename T = bool> T get_hasBuilder() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8DACC))(this);
	}
	template <typename T = void> T AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8DAD8))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8DD70))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename T = void> T RemoveBuilder() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E008))(this);
	}
	template <typename T = CampBathComponent*> T get_campBath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E014))(this);
	}
	template <typename T = bool> T get_hasCampBath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E09C))(this);
	}
	template <typename T = void> T AddCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0xF8E0A8))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T ReplaceCampBath(Il2CppArray<uintptr_t>* newFuel, float newMaxWorkTime) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, float))(Il2CppBase() + 0xF8E1CC))(this, newFuel, newMaxWorkTime);
	}
	template <typename T = void> T RemoveCampBath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E2F0))(this);
	}
	template <typename T = bool> T get_CanTravel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E2FC))(this);
	}
	template <typename T = void> T set_CanTravel(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF8E308))(this, value);
	}
	template <typename T = CashbackCoinsComponent*> T get_cashbackCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E420))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E4A8))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8E4B4))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8E5B8))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E6BC))(this);
	}
	template <typename T = CellComponent*> T get_cell() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E6C8))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E750))(this);
	}
	template <typename T = void> T AddCell(uint8_t newId) {
		return ((T (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xF8E75C))(this, newId);
	}
	template <typename T = void> T ReplaceCell(uint8_t newId) {
		return ((T (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xF8E860))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E964))(this);
	}
	template <typename T = ChanceComponent*> T get_chance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E970))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8E9F8))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8EA04))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8EB3C))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8EC74))(this);
	}
	template <typename T = ChestMarkerComponent*> T get_chestMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8EC80))(this);
	}
	template <typename T = bool> T get_hasChestMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8ED08))(this);
	}
	template <typename T = void> T AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0xF8ED14))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0xF8EE30))(this, newSlotIndex, newItemName);
	}
	template <typename T = void> T RemoveChestMarker() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8EF4C))(this);
	}
	template <typename T = ChestOnDeathComponent*> T get_chestOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8EF58))(this);
	}
	template <typename T = bool> T get_hasChestOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8EFE0))(this);
	}
	template <typename T = void> T AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((T (*)(GameEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0xF8EFEC))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((T (*)(GameEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0xF8F174))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename T = void> T RemoveChestOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F2FC))(this);
	}
	template <typename T = ChildsComponent*> T get_childs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F308))(this);
	}
	template <typename T = bool> T get_hasChilds() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F390))(this);
	}
	template <typename T = void> T AddChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8F39C))(this, newSlots);
	}
	template <typename T = void> T ReplaceChilds(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8F4B0))(this, newSlots);
	}
	template <typename T = void> T RemoveChilds() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F5C4))(this);
	}
	template <typename T = ChooseCreatureComponent*> T get_chooseCreature() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F5D0))(this);
	}
	template <typename T = bool> T get_hasChooseCreature() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F658))(this);
	}
	template <typename T = void> T AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0xF8F664))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((T (*)(GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0xF8F784))(this, newRandomGroup, newForceSpawn);
	}
	template <typename T = void> T RemoveChooseCreature() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F8A4))(this);
	}
	template <typename T = ClanComponent*> T get_clan() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F8B0))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8F938))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8F944))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FA48))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FB4C))(this);
	}
	template <typename T = ClanPersonalComponent*> T get_clanPersonal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FB58))(this);
	}
	template <typename T = bool> T get_hasClanPersonal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FBE0))(this);
	}
	template <typename T = void> T AddClanPersonal(int64_t newClanId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FBEC))(this, newClanId);
	}
	template <typename T = void> T ReplaceClanPersonal(int64_t newClanId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FCF0))(this, newClanId);
	}
	template <typename T = void> T RemoveClanPersonal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FDF4))(this);
	}
	template <typename T = ClanPersonalGeneratorComponent*> T get_clanPersonalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FE00))(this);
	}
	template <typename T = bool> T get_hasClanPersonalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF8FE88))(this);
	}
	template <typename T = void> T AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xF8FE94))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xF8FFF0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemoveClanPersonalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9014C))(this);
	}
	template <typename T = bool> T get_isClick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90158))(this);
	}
	template <typename T = void> T set_isClick(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF90164))(this, value);
	}
	template <typename T = ClosedDurationComponent*> T get_closedDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9027C))(this);
	}
	template <typename T = bool> T get_hasClosedDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90304))(this);
	}
	template <typename T = void> T AddClosedDuration(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF90310))(this, newValue);
	}
	template <typename T = void> T ReplaceClosedDuration(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF90414))(this, newValue);
	}
	template <typename T = void> T RemoveClosedDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90518))(this);
	}
	template <typename T = CoinsComponent*> T get_coins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90524))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF905AC))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF905B8))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF906BC))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF907C0))(this);
	}
	template <typename T = CorpseDestructionComponent*> T get_corpseDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF907CC))(this);
	}
	template <typename T = bool> T get_hasCorpseDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90854))(this);
	}
	template <typename T = void> T AddCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF90860))(this, newValues);
	}
	template <typename T = void> T ReplaceCorpseDestruction(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF90974))(this, newValues);
	}
	template <typename T = void> T RemoveCorpseDestruction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90A88))(this);
	}
	template <typename T = CostumeChestComponent*> T get_costumeChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90A94))(this);
	}
	template <typename T = bool> T get_hasCostumeChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90B1C))(this);
	}
	template <typename T = void> T AddCostumeChest(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90B28))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeChest(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90C3C))(this, newName);
	}
	template <typename T = void> T RemoveCostumeChest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90D50))(this);
	}
	template <typename T = CostumeHeadComponent*> T get_costumeHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90D5C))(this);
	}
	template <typename T = bool> T get_hasCostumeHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF90DE4))(this);
	}
	template <typename T = void> T AddCostumeHead(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90DF0))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeHead(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90F04))(this, newName);
	}
	template <typename T = void> T RemoveCostumeHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91018))(this);
	}
	template <typename T = CostumeLegsComponent*> T get_costumeLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91024))(this);
	}
	template <typename T = bool> T get_hasCostumeLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF910AC))(this);
	}
	template <typename T = void> T AddCostumeLegs(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF910B8))(this, newName);
	}
	template <typename T = void> T ReplaceCostumeLegs(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF911CC))(this, newName);
	}
	template <typename T = void> T RemoveCostumeLegs() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF912E0))(this);
	}
	template <typename T = CountComponent*> T get_count() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF912EC))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91374))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF91380))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF91484))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91588))(this);
	}
	template <typename T = CoverComponent*> T get_cover() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91594))(this);
	}
	template <typename T = bool> T get_hasCover() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9161C))(this);
	}
	template <typename T = void> T AddCover(Il2CppString* newEffectName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF91628))(this, newEffectName);
	}
	template <typename T = void> T ReplaceCover(Il2CppString* newEffectName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9173C))(this, newEffectName);
	}
	template <typename T = void> T RemoveCover() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91850))(this);
	}
	template <typename T = CoverRadiusComponent*> T get_coverRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9185C))(this);
	}
	template <typename T = bool> T get_hasCoverRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF918E4))(this);
	}
	template <typename T = void> T AddCoverRadius(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF918F0))(this, newValue);
	}
	template <typename T = void> T ReplaceCoverRadius(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF919F4))(this, newValue);
	}
	template <typename T = void> T RemoveCoverRadius() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91AF8))(this);
	}
	template <typename T = CraftBoostComponent*> T get_craftBoost() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91B04))(this);
	}
	template <typename T = bool> T get_hasCraftBoost() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91B8C))(this);
	}
	template <typename T = void> T AddCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((T (*)(GameEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0xF91B98))(this, newList);
	}
	template <typename T = void> T ReplaceCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((T (*)(GameEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0xF91CAC))(this, newList);
	}
	template <typename T = void> T RemoveCraftBoost() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91DC0))(this);
	}
	template <typename T = CraftWorkComponent*> T get_craftWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91DCC))(this);
	}
	template <typename T = bool> T get_hasCraftWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF91E54))(this);
	}
	template <typename T = void> T AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(GameEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0xF91E60))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((T (*)(GameEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0xF91FCC))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename T = void> T RemoveCraftWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92138))(this);
	}
	template <typename T = CreateInventoryComponent*> T get_createInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92144))(this);
	}
	template <typename T = bool> T get_hasCreateInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF921CC))(this);
	}
	template <typename T = void> T AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF921D8))(this, newRandomGroup);
	}
	template <typename T = void> T ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF922EC))(this, newRandomGroup);
	}
	template <typename T = void> T RemoveCreateInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92400))(this);
	}
	template <typename T = CreateUniqueInventoryComponent*> T get_createUniqueInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9240C))(this);
	}
	template <typename T = bool> T get_hasCreateUniqueInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92494))(this);
	}
	template <typename T = void> T AddCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF924A0))(this, newRandomGroups);
	}
	template <typename T = void> T ReplaceCreateUniqueInventory(Il2CppArray<uintptr_t>* newRandomGroups) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF925B4))(this, newRandomGroups);
	}
	template <typename T = void> T RemoveCreateUniqueInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF926C8))(this);
	}
	template <typename T = CreationTimeComponent*> T get_creationTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF926D4))(this);
	}
	template <typename T = bool> T get_hasCreationTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9275C))(this);
	}
	template <typename T = void> T AddCreationTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF92768))(this, newValue);
	}
	template <typename T = void> T ReplaceCreationTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9286C))(this, newValue);
	}
	template <typename T = void> T RemoveCreationTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92970))(this);
	}
	template <typename T = bool> T get_isCreep() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9297C))(this);
	}
	template <typename T = void> T set_isCreep(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF92988))(this, value);
	}
	template <typename T = CurrentRoofComponent*> T get_currentRoof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92AA0))(this);
	}
	template <typename T = bool> T get_hasCurrentRoof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92B28))(this);
	}
	template <typename T = void> T AddCurrentRoof(int32_t newIndex) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF92B34))(this, newIndex);
	}
	template <typename T = void> T ReplaceCurrentRoof(int32_t newIndex) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF92C38))(this, newIndex);
	}
	template <typename T = void> T RemoveCurrentRoof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92D3C))(this);
	}
	template <typename T = CustomStoreComponent*> T get_customStore() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92D48))(this);
	}
	template <typename T = bool> T get_hasCustomStore() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF92DD0))(this);
	}
	template <typename T = void> T AddCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xF92DDC))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename T = void> T ReplaceCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xF930E4))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename T = void> T RemoveCustomStore() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF933EC))(this);
	}
	template <typename T = CyclicPointsComponent*> T get_cyclicPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF933F8))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93480))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9348C))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93590))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93694))(this);
	}
	template <typename T = CyclicPremiumTokensComponent*> T get_cyclicPremiumTokens() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF936A0))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93728))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93734))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93838))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9393C))(this);
	}
	template <typename T = CyclicYmirSoulComponent*> T get_cyclicYmirSoul() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93948))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF939D0))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF939DC))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93AE0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93BE4))(this);
	}
	template <typename T = DamageCoefComponent*> T get_damageCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93BF0))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93C78))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF93C84))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF93D88))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93E8C))(this);
	}
	template <typename T = DamageStatComponent*> T get_damageStat() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93E98))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF93F20))(this);
	}
	template <typename T = void> T AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(GameEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF93F2C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(GameEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF940F0))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF942B4))(this);
	}
	template <typename T = DamageTypeComponent*> T get_damageType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF942C0))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94348))(this);
	}
	template <typename T = void> T AddDamageType(DamageType* newValue) {
		return ((T (*)(GameEntity*, DamageType*))(Il2CppBase() + 0xF94354))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(DamageType* newValue) {
		return ((T (*)(GameEntity*, DamageType*))(Il2CppBase() + 0xF94458))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9455C))(this);
	}
	template <typename T = DefaultGradeComponent*> T get_defaultGrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94568))(this);
	}
	template <typename T = bool> T get_hasDefaultGrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF945F0))(this);
	}
	template <typename T = void> T AddDefaultGrade(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF945FC))(this, newValue);
	}
	template <typename T = void> T ReplaceDefaultGrade(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF94700))(this, newValue);
	}
	template <typename T = void> T RemoveDefaultGrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94804))(this);
	}
	template <typename T = DefaultVectorFieldComponent*> T get_defaultVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94810))(this);
	}
	template <typename T = bool> T get_hasDefaultVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94898))(this);
	}
	template <typename T = void> T AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF948A4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF949D4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveDefaultVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94B04))(this);
	}
	template <typename T = DelayComponent*> T get_delay() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94B10))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94B98))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF94BA4))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF94CA8))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94DAC))(this);
	}
	template <typename T = DescriptionComponent*> T get_description() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94DB8))(this);
	}
	template <typename T = bool> T get_hasDescription() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF94E40))(this);
	}
	template <typename T = void> T AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF94E4C))(this, newCaption, newText);
	}
	template <typename T = void> T ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF94F74))(this, newCaption, newText);
	}
	template <typename T = void> T RemoveDescription() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9509C))(this);
	}
	template <typename T = DestroyOnDeathComponent*> T get_destroyOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF950A8))(this);
	}
	template <typename T = bool> T get_hasDestroyOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95130))(this);
	}
	template <typename T = void> T AddDestroyOnDeath(bool newInstantly) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9513C))(this, newInstantly);
	}
	template <typename T = void> T ReplaceDestroyOnDeath(bool newInstantly) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF95244))(this, newInstantly);
	}
	template <typename T = void> T RemoveDestroyOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9534C))(this);
	}
	template <typename T = DifficultyComponent*> T get_difficulty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95358))(this);
	}
	template <typename T = bool> T get_hasDifficulty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF953E0))(this);
	}
	template <typename T = void> T AddDifficulty(Difficulty* newType) {
		return ((T (*)(GameEntity*, Difficulty*))(Il2CppBase() + 0xF953EC))(this, newType);
	}
	template <typename T = void> T ReplaceDifficulty(Difficulty* newType) {
		return ((T (*)(GameEntity*, Difficulty*))(Il2CppBase() + 0xF954F0))(this, newType);
	}
	template <typename T = void> T RemoveDifficulty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF955F4))(this);
	}
	template <typename T = bool> T get_isDisabled() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95600))(this);
	}
	template <typename T = void> T set_isDisabled(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9560C))(this, value);
	}
	template <typename T = DistanceComponent*> T get_distance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95724))(this);
	}
	template <typename T = bool> T get_hasDistance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF957AC))(this);
	}
	template <typename T = void> T AddDistance(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF957B8))(this, newValue);
	}
	template <typename T = void> T ReplaceDistance(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF958BC))(this, newValue);
	}
	template <typename T = void> T RemoveDistance() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF959C0))(this);
	}
	template <typename T = DoorWallComponent*> T get_doorWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF959CC))(this);
	}
	template <typename T = bool> T get_hasDoorWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95A54))(this);
	}
	template <typename T = void> T AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xF95A60))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xF95B88))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T RemoveDoorWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95CB0))(this);
	}
	template <typename T = bool> T get_isDragged() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95CBC))(this);
	}
	template <typename T = void> T set_isDragged(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF95CC8))(this, value);
	}
	template <typename T = DurabilityDamageComponent*> T get_durabilityDamage() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95DE0))(this);
	}
	template <typename T = bool> T get_hasDurabilityDamage() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF95E68))(this);
	}
	template <typename T = void> T AddDurabilityDamage(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF95E74))(this, newValue);
	}
	template <typename T = void> T ReplaceDurabilityDamage(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF95F78))(this, newValue);
	}
	template <typename T = void> T RemoveDurabilityDamage() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9607C))(this);
	}
	template <typename T = DurationComponent*> T get_duration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96088))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96110))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF9611C))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF96220))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96324))(this);
	}
	template <typename T = EndTimeComponent*> T get_endTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96330))(this);
	}
	template <typename T = bool> T get_hasEndTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF963B8))(this);
	}
	template <typename T = void> T AddEndTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF963C4))(this, newValue);
	}
	template <typename T = void> T ReplaceEndTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF964C8))(this, newValue);
	}
	template <typename T = void> T RemoveEndTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF965CC))(this);
	}
	template <typename T = EnergyComponent*> T get_energy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF965D8))(this);
	}
	template <typename T = bool> T get_hasEnergy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96660))(this);
	}
	template <typename T = void> T AddEnergy(int64_t newTick) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9666C))(this, newTick);
	}
	template <typename T = void> T ReplaceEnergy(int64_t newTick) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF96770))(this, newTick);
	}
	template <typename T = void> T RemoveEnergy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96874))(this);
	}
	template <typename T = EnterConditionComponent*> T get_enterCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96880))(this);
	}
	template <typename T = bool> T get_hasEnterCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96908))(this);
	}
	template <typename T = void> T AddEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0xF96914))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0xF96A64))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveEnterCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96BB4))(this);
	}
	template <typename T = EnterQuestsComponent*> T get_enterQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96BC0))(this);
	}
	template <typename T = bool> T get_hasEnterQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96C48))(this);
	}
	template <typename T = void> T AddEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF96C54))(this, newValues);
	}
	template <typename T = void> T ReplaceEnterQuests(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF96D68))(this, newValues);
	}
	template <typename T = void> T RemoveEnterQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96E7C))(this);
	}
	template <typename T = EventBpPointsAComponent*> T get_eventBpPointsA() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96E88))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF96F10))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF96F1C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97020))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97124))(this);
	}
	template <typename T = EventBpPointsBComponent*> T get_eventBpPointsB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97130))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF971B8))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF971C4))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF972C8))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF973CC))(this);
	}
	template <typename T = EventBpPointsCComponent*> T get_eventBpPointsC() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF973D8))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97460))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9746C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97570))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97674))(this);
	}
	template <typename T = EventTagComponent*> T get_eventTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97680))(this);
	}
	template <typename T = bool> T get_hasEventTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97708))(this);
	}
	template <typename T = void> T AddEventTag(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF97714))(this, newValue);
	}
	template <typename T = void> T ReplaceEventTag(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF97828))(this, newValue);
	}
	template <typename T = void> T RemoveEventTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9793C))(this);
	}
	template <typename T = ExplodeComponent*> T get_explode() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97948))(this);
	}
	template <typename T = bool> T get_hasExplode() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF979D0))(this);
	}
	template <typename T = void> T AddExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((T (*)(GameEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0xF979DC))(this, newItem, newType);
	}
	template <typename T = void> T ReplaceExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((T (*)(GameEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0xF97AF8))(this, newItem, newType);
	}
	template <typename T = void> T RemoveExplode() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97C14))(this);
	}
	template <typename T = bool> T get_isExplodeOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97C20))(this);
	}
	template <typename T = void> T set_isExplodeOnDeath(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF97C2C))(this, value);
	}
	template <typename T = bool> T get_isExternalInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97D44))(this);
	}
	template <typename T = void> T set_isExternalInventory(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF97D50))(this, value);
	}
	template <typename T = ExtraLevelCapComponent*> T get_extraLevelCap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97E68))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF97EF0))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97EFC))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF98000))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98104))(this);
	}
	template <typename T = ExtractWorkComponent*> T get_extractWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98110))(this);
	}
	template <typename T = bool> T get_hasExtractWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98198))(this);
	}
	template <typename T = void> T AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(GameEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0xF981A4))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((T (*)(GameEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0xF982DC))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename T = void> T RemoveExtractWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98414))(this);
	}
	template <typename T = bool> T get_isFakeBase() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98420))(this);
	}
	template <typename T = void> T set_isFakeBase(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9842C))(this, value);
	}
	template <typename T = FakeClanNameComponent*> T get_fakeClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98544))(this);
	}
	template <typename T = bool> T get_hasFakeClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF985CC))(this);
	}
	template <typename T = void> T AddFakeClanName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF985D8))(this, newValue);
	}
	template <typename T = void> T ReplaceFakeClanName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF986EC))(this, newValue);
	}
	template <typename T = void> T RemoveFakeClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98800))(this);
	}
	template <typename T = FloorComponent*> T get_floor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9880C))(this);
	}
	template <typename T = bool> T get_hasFloor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98894))(this);
	}
	template <typename T = void> T AddFloor(Il2CppString* newRoof) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF988A0))(this, newRoof);
	}
	template <typename T = void> T ReplaceFloor(Il2CppString* newRoof) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF989B4))(this, newRoof);
	}
	template <typename T = void> T RemoveFloor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98AC8))(this);
	}
	template <typename T = FogComponent*> T get_fog() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98AD4))(this);
	}
	template <typename T = bool> T get_hasFog() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98B5C))(this);
	}
	template <typename T = void> T AddFog(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF98B68))(this, newName);
	}
	template <typename T = void> T ReplaceFog(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF98C7C))(this, newName);
	}
	template <typename T = void> T RemoveFog() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98D90))(this);
	}
	template <typename T = FollowComponent*> T get_follow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98D9C))(this);
	}
	template <typename T = bool> T get_hasFollow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF98E24))(this);
	}
	template <typename T = void> T AddFollow(float newSpeed) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF98E30))(this, newSpeed);
	}
	template <typename T = void> T ReplaceFollow(float newSpeed) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF98F34))(this, newSpeed);
	}
	template <typename T = void> T RemoveFollow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99038))(this);
	}
	template <typename T = bool> T get_isFollowTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99044))(this);
	}
	template <typename T = void> T set_isFollowTarget(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF99050))(this, value);
	}
	template <typename T = GameDataComponent*> T get_gameData() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF80BD8))(this);
	}
	template <typename T = bool> T get_hasGameData() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF80BCC))(this);
	}
	template <typename T = void> T AddGameData(Il2CppString* newName, GameDataEntity* newDataEntity) {
		return ((T (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF99168))(this, newName, newDataEntity);
	}
	template <typename T = void> T ReplaceGameData(Il2CppString* newName, GameDataEntity* newDataEntity) {
		return ((T (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF80CAC))(this, newName, newDataEntity);
	}
	template <typename T = void> T RemoveGameData() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99290))(this);
	}
	template <typename T = GenderComponent*> T get_gender() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9929C))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99324))(this);
	}
	template <typename T = void> T AddGender(Gender* newType) {
		return ((T (*)(GameEntity*, Gender*))(Il2CppBase() + 0xF99330))(this, newType);
	}
	template <typename T = void> T ReplaceGender(Gender* newType) {
		return ((T (*)(GameEntity*, Gender*))(Il2CppBase() + 0xF99434))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99538))(this);
	}
	template <typename T = GenerateWallComponent*> T get_generateWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99544))(this);
	}
	template <typename T = bool> T get_hasGenerateWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF995CC))(this);
	}
	template <typename T = void> T AddGenerateWall(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF995D8))(this, newName);
	}
	template <typename T = void> T ReplaceGenerateWall(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF996EC))(this, newName);
	}
	template <typename T = void> T RemoveGenerateWall() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99800))(this);
	}
	template <typename T = GiantReputationComponent*> T get_giantReputation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9980C))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99894))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF998A0))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF999A4))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99AA8))(this);
	}
	template <typename T = GradeComponent*> T get_grade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99AB4))(this);
	}
	template <typename T = bool> T get_hasGrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99B3C))(this);
	}
	template <typename T = void> T AddGrade(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99B48))(this, newValue);
	}
	template <typename T = void> T ReplaceGrade(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99C4C))(this, newValue);
	}
	template <typename T = void> T RemoveGrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99D50))(this);
	}
	template <typename T = GradeFromLocationComponent*> T get_gradeFromLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99D5C))(this);
	}
	template <typename T = bool> T get_hasGradeFromLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99DE4))(this);
	}
	template <typename T = void> T AddGradeFromLocation(int32_t newOffset) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99DF0))(this, newOffset);
	}
	template <typename T = void> T ReplaceGradeFromLocation(int32_t newOffset) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99EF4))(this, newOffset);
	}
	template <typename T = void> T RemoveGradeFromLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF99FF8))(this);
	}
	template <typename T = GradeHideComponent*> T get_gradeHide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A004))(this);
	}
	template <typename T = bool> T get_hasGradeHide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A08C))(this);
	}
	template <typename T = void> T AddGradeHide(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A098))(this, newValue);
	}
	template <typename T = void> T ReplaceGradeHide(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A19C))(this, newValue);
	}
	template <typename T = void> T RemoveGradeHide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A2A0))(this);
	}
	template <typename T = GradeViewComponent*> T get_gradeView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A2AC))(this);
	}
	template <typename T = bool> T get_hasGradeView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A334))(this);
	}
	template <typename T = void> T AddGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9A340))(this, newValues);
	}
	template <typename T = void> T ReplaceGradeView(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9A454))(this, newValues);
	}
	template <typename T = void> T RemoveGradeView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A568))(this);
	}
	template <typename T = GroupChildComponent*> T get_groupChild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A574))(this);
	}
	template <typename T = bool> T get_hasGroupChild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A5FC))(this);
	}
	template <typename T = void> T AddGroupChild(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A608))(this, newId);
	}
	template <typename T = void> T ReplaceGroupChild(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A70C))(this, newId);
	}
	template <typename T = void> T RemoveGroupChild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A810))(this);
	}
	template <typename T = GroupComponent*> T get_group() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A81C))(this);
	}
	template <typename T = bool> T get_hasGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9A8A4))(this);
	}
	template <typename T = void> T AddGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9A8B0))(this, newSlots);
	}
	template <typename T = void> T ReplaceGroup(Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9A9C4))(this, newSlots);
	}
	template <typename T = void> T RemoveGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AAD8))(this);
	}
	template <typename T = GuildBossCoinsComponent*> T get_guildBossCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AAE4))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AB6C))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AB78))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AC7C))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AD80))(this);
	}
	template <typename T = GuildCoinsComponent*> T get_guildCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AD8C))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9AE14))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AE20))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AF24))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B028))(this);
	}
	template <typename T = GuildComponent*> T get_guild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B034))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B0BC))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B0C8))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B1CC))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B2D0))(this);
	}
	template <typename T = GuildTagComponent*> T get_guildTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B2DC))(this);
	}
	template <typename T = bool> T get_hasGuildTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B364))(this);
	}
	template <typename T = void> T AddGuildTag(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9B370))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildTag(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9B484))(this, newValue);
	}
	template <typename T = void> T RemoveGuildTag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B598))(this);
	}
	template <typename T = HashPositionComponent*> T get_hashPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B5A4))(this);
	}
	template <typename T = bool> T get_hasHashPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B62C))(this);
	}
	template <typename T = void> T AddHashPosition(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B638))(this, newValue);
	}
	template <typename T = void> T ReplaceHashPosition(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B73C))(this, newValue);
	}
	template <typename T = void> T RemoveHashPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B840))(this);
	}
	template <typename T = HealthCoefComponent*> T get_healthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B84C))(this);
	}
	template <typename T = bool> T get_hasHealthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9B8D4))(this);
	}
	template <typename T = void> T AddHealthCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF9B8E0))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF9B9E4))(this, newValue);
	}
	template <typename T = void> T RemoveHealthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BAE8))(this);
	}
	template <typename T = bool> T get_isHideBag() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BAF4))(this);
	}
	template <typename T = void> T set_isHideBag(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BB00))(this, value);
	}
	template <typename T = HideComponent*> T get_hide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BC18))(this);
	}
	template <typename T = bool> T get_hasHide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BCA0))(this);
	}
	template <typename T = void> T AddHide(HIDEFLAG* newFlag) {
		return ((T (*)(GameEntity*, HIDEFLAG*))(Il2CppBase() + 0xF9BCAC))(this, newFlag);
	}
	template <typename T = void> T ReplaceHide(HIDEFLAG* newFlag) {
		return ((T (*)(GameEntity*, HIDEFLAG*))(Il2CppBase() + 0xF9BDB0))(this, newFlag);
	}
	template <typename T = void> T RemoveHide() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BEB4))(this);
	}
	template <typename T = bool> T get_isHideHead() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BEC0))(this);
	}
	template <typename T = void> T set_isHideHead(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BECC))(this, value);
	}
	template <typename T = bool> T get_isHidePet() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9BFE4))(this);
	}
	template <typename T = void> T set_isHidePet(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BFF0))(this, value);
	}
	template <typename T = IconComponent*> T get_icon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C108))(this);
	}
	template <typename T = bool> T get_hasIcon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C190))(this);
	}
	template <typename T = void> T AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9C19C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9C2F4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename T = void> T RemoveIcon() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C44C))(this);
	}
	template <typename T = IdComponent*> T get_id() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81024))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF81018))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9C458))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9C55C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C660))(this);
	}
	template <typename T = IgnoreDoorVectorFieldComponent*> T get_ignoreDoorVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C66C))(this);
	}
	template <typename T = bool> T get_hasIgnoreDoorVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C6F4))(this);
	}
	template <typename T = void> T AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF9C700))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF9C830))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename T = void> T RemoveIgnoreDoorVectorField() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C960))(this);
	}
	template <typename T = InfluenceComponent*> T get_influence() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C96C))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9C9F4))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9CA00))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9CB04))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CC08))(this);
	}
	template <typename T = InteractTargetComponent*> T get_interactTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CC14))(this);
	}
	template <typename T = bool> T get_hasInteractTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CC9C))(this);
	}
	template <typename T = void> T AddInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((T (*)(GameEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0xF9CCA8))(this, newId, newPosition);
	}
	template <typename T = void> T ReplaceInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((T (*)(GameEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0xF9CDC4))(this, newId, newPosition);
	}
	template <typename T = void> T RemoveInteractTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CEE0))(this);
	}
	template <typename T = InventoryComponent*> T get_inventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CEEC))(this);
	}
	template <typename T = bool> T get_hasInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9CF74))(this);
	}
	template <typename T = void> T AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xF9CF80))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xF9D0B8))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveInventory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D1F0))(this);
	}
	template <typename T = InventoryContentComponent*> T get_inventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D1FC))(this);
	}
	template <typename T = bool> T get_hasInventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D284))(this);
	}
	template <typename T = void> T AddInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9D290))(this, newData);
	}
	template <typename T = void> T ReplaceInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF9D3A4))(this, newData);
	}
	template <typename T = void> T RemoveInventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D4B8))(this);
	}
	template <typename T = bool> T get_isInventoryLocked() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D4C4))(this);
	}
	template <typename T = void> T set_isInventoryLocked(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xF9D4D0))(this, value);
	}
	template <typename T = KilledByComponent*> T get_killedBy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D5E8))(this);
	}
	template <typename T = bool> T get_hasKilledBy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D670))(this);
	}
	template <typename T = void> T AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9D67C))(this, newId, newName, newItemName);
	}
	template <typename T = void> T ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9D7B4))(this, newId, newName, newItemName);
	}
	template <typename T = void> T RemoveKilledBy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D8EC))(this);
	}
	template <typename T = LastActionTickComponent*> T get_lastActionTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D8F8))(this);
	}
	template <typename T = bool> T get_hasLastActionTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9D980))(this);
	}
	template <typename T = void> T AddLastActionTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9D98C))(this, newValue);
	}
	template <typename T = void> T ReplaceLastActionTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9DA90))(this, newValue);
	}
	template <typename T = void> T RemoveLastActionTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DB94))(this);
	}
	template <typename T = LastDamagerComponent*> T get_lastDamager() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DBA0))(this);
	}
	template <typename T = bool> T get_hasLastDamager() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DC28))(this);
	}
	template <typename T = void> T AddLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(GameEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0xF9DC34))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T ReplaceLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(GameEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0xF9DD64))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T RemoveLastDamager() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DE94))(this);
	}
	template <typename T = LevelComponent*> T get_level() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DEA0))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9DF28))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF9DF34))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xF9E038))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E13C))(this);
	}
	template <typename T = LobbyTypeComponent*> T get_lobbyType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E148))(this);
	}
	template <typename T = bool> T get_hasLobbyType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E1D0))(this);
	}
	template <typename T = void> T AddLobbyType(LobbyType* newType) {
		return ((T (*)(GameEntity*, LobbyType*))(Il2CppBase() + 0xF9E1DC))(this, newType);
	}
	template <typename T = void> T ReplaceLobbyType(LobbyType* newType) {
		return ((T (*)(GameEntity*, LobbyType*))(Il2CppBase() + 0xF9E2E0))(this, newType);
	}
	template <typename T = void> T RemoveLobbyType() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E3E4))(this);
	}
	template <typename T = LocationRegionComponent*> T get_locationRegion() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E3F0))(this);
	}
	template <typename T = bool> T get_hasLocationRegion() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E478))(this);
	}
	template <typename T = void> T AddLocationRegion(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E484))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegion(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E598))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegion() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E6AC))(this);
	}
	template <typename T = LocationRegionEnterComponent*> T get_locationRegionEnter() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E6B8))(this);
	}
	template <typename T = bool> T get_hasLocationRegionEnter() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E740))(this);
	}
	template <typename T = void> T AddLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E74C))(this, newName);
	}
	template <typename T = void> T ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E860))(this, newName);
	}
	template <typename T = void> T RemoveLocationRegionEnter() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E974))(this);
	}
	template <typename T = LockControllerComponent*> T get_lockController() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9E980))(this);
	}
	template <typename T = bool> T get_hasLockController() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EA08))(this);
	}
	template <typename T = void> T AddLockController(Il2CppString* newActivator) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9EA14))(this, newActivator);
	}
	template <typename T = void> T ReplaceLockController(Il2CppString* newActivator) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9EB28))(this, newActivator);
	}
	template <typename T = void> T RemoveLockController() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EC3C))(this);
	}
	template <typename T = LoopSoundComponent*> T get_loopSound() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EC48))(this);
	}
	template <typename T = bool> T get_hasLoopSound() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9ECD0))(this);
	}
	template <typename T = void> T AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9ECDC))(this, newWork, newLoop);
	}
	template <typename T = void> T ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9EE04))(this, newWork, newLoop);
	}
	template <typename T = void> T RemoveLoopSound() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EF2C))(this);
	}
	template <typename T = LootStatusComponent*> T get_lootStatus() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EF38))(this);
	}
	template <typename T = bool> T get_hasLootStatus() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9EFC0))(this);
	}
	template <typename T = void> T AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xF9EFCC))(this, newTag, newWeight);
	}
	template <typename T = void> T ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xF9F0E8))(this, newTag, newWeight);
	}
	template <typename T = void> T RemoveLootStatus() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F204))(this);
	}
	template <typename T = MagicSaveComponent*> T get_magicSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F210))(this);
	}
	template <typename T = bool> T get_hasMagicSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F298))(this);
	}
	template <typename T = void> T AddMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF9F2A4))(this, newItems, newRiding);
	}
	template <typename T = void> T ReplaceMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF9F3C4))(this, newItems, newRiding);
	}
	template <typename T = void> T RemoveMagicSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F4E4))(this);
	}
	template <typename T = MagicSpawnerComponent*> T get_magicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F4F0))(this);
	}
	template <typename T = bool> T get_hasMagicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F578))(this);
	}
	template <typename T = void> T AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF9F584))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newOnce) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xF9F6FC))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename T = void> T RemoveMagicSpawner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F874))(this);
	}
	template <typename T = MagicTriggerIdComponent*> T get_magicTriggerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F880))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9F908))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9F914))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9FA18))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FB1C))(this);
	}
	template <typename T = MapNotifyComponent*> T get_mapNotify() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FB28))(this);
	}
	template <typename T = bool> T get_hasMapNotify() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FBB0))(this);
	}
	template <typename T = void> T AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FBBC))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((T (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FD1C))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename T = void> T RemoveMapNotify() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FE7C))(this);
	}
	template <typename T = MapPathComponent*> T get_mapPath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FE88))(this);
	}
	template <typename T = bool> T get_hasMapPath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xF9FF10))(this);
	}
	template <typename T = void> T AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FF1C))(this, newStartId, newEndId);
	}
	template <typename T = void> T ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFA0044))(this, newStartId, newEndId);
	}
	template <typename T = void> T RemoveMapPath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA016C))(this);
	}
	template <typename T = MapPathViewComponent*> T get_mapPathView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0178))(this);
	}
	template <typename T = bool> T get_hasMapPathView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0200))(this);
	}
	template <typename T = void> T AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA020C))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<uintptr_t>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA0374))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename T = void> T RemoveMapPathView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA04DC))(this);
	}
	template <typename T = MapSpeedComponent*> T get_mapSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA04E8))(this);
	}
	template <typename T = bool> T get_hasMapSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0570))(this);
	}
	template <typename T = void> T AddMapSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA057C))(this, newValue);
	}
	template <typename T = void> T ReplaceMapSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA0680))(this, newValue);
	}
	template <typename T = void> T RemoveMapSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0784))(this);
	}
	template <typename T = MaxHealthCoefComponent*> T get_maxHealthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0790))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0818))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA0824))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA0928))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0A2C))(this);
	}
	template <typename T = MaxHealthComponent*> T get_maxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0A38))(this);
	}
	template <typename T = bool> T get_hasMaxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0AC0))(this);
	}
	template <typename T = void> T AddMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA0ACC))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA0BD4))(this, newValue, newResurrectValue);
	}
	template <typename T = void> T RemoveMaxHealth() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0CDC))(this);
	}
	template <typename T = MetabolismSettingComponent*> T get_metabolismSetting() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0CE8))(this);
	}
	template <typename T = bool> T get_hasMetabolismSetting() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0D70))(this);
	}
	template <typename T = void> T AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(GameEntity*, float, float, float, float, float))(Il2CppBase() + 0xFA0D7C))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((T (*)(GameEntity*, float, float, float, float, float))(Il2CppBase() + 0xFA0EA8))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename T = void> T RemoveMetabolismSetting() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0FD4))(this);
	}
	template <typename T = MinimapArrowComponent*> T get_minimapArrow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA0FE0))(this);
	}
	template <typename T = bool> T get_hasMinimapArrow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1068))(this);
	}
	template <typename T = void> T AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0xFA1074))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0xFA11B0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T RemoveMinimapArrow() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA12EC))(this);
	}
	template <typename T = MinimapComponent*> T get_minimap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA12F8))(this);
	}
	template <typename T = bool> T get_hasMinimap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1380))(this);
	}
	template <typename T = void> T AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA138C))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA14D4))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename T = void> T RemoveMinimap() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA161C))(this);
	}
	template <typename T = MinimapPingComponent*> T get_minimapPing() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1628))(this);
	}
	template <typename T = bool> T get_hasMinimapPing() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA16B0))(this);
	}
	template <typename T = void> T AddMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA16BC))(this, newLifetime, newRadius);
	}
	template <typename T = void> T ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA17C4))(this, newLifetime, newRadius);
	}
	template <typename T = void> T RemoveMinimapPing() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA18CC))(this);
	}
	template <typename T = MiningComponent*> T get_mining() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA18D8))(this);
	}
	template <typename T = bool> T get_hasMining() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1960))(this);
	}
	template <typename T = void> T AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA196C))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<uintptr_t>* newMagics) {
		return ((T (*)(GameEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA1ABC))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename T = void> T RemoveMining() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1C0C))(this);
	}
	template <typename T = ModifiersComponent*> T get_modifiers() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1C18))(this);
	}
	template <typename T = bool> T get_hasModifiers() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1CA0))(this);
	}
	template <typename T = void> T AddModifiers(ModifierEntity* newValue) {
		return ((T (*)(GameEntity*, ModifierEntity*))(Il2CppBase() + 0xFA1CAC))(this, newValue);
	}
	template <typename T = void> T ReplaceModifiers(ModifierEntity* newValue) {
		return ((T (*)(GameEntity*, ModifierEntity*))(Il2CppBase() + 0xFA1DC0))(this, newValue);
	}
	template <typename T = void> T RemoveModifiers() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1ED4))(this);
	}
	template <typename T = MountInventoryContentComponent*> T get_mountInventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1EE0))(this);
	}
	template <typename T = bool> T get_hasMountInventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA1F68))(this);
	}
	template <typename T = void> T AddMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA1F74))(this, newData);
	}
	template <typename T = void> T ReplaceMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA2088))(this, newData);
	}
	template <typename T = void> T RemoveMountInventoryContent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA219C))(this);
	}
	template <typename T = MountInventoryIdComponent*> T get_mountInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA21A8))(this);
	}
	template <typename T = bool> T get_hasMountInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2230))(this);
	}
	template <typename T = void> T AddMountInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA223C))(this, newId);
	}
	template <typename T = void> T ReplaceMountInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA2340))(this, newId);
	}
	template <typename T = void> T RemoveMountInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2444))(this);
	}
	template <typename T = MountInvetoryComponent*> T get_mountInvetory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2450))(this);
	}
	template <typename T = bool> T get_hasMountInvetory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA24D8))(this);
	}
	template <typename T = void> T AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xFA24E4))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xFA261C))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename T = void> T RemoveMountInvetory() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2754))(this);
	}
	template <typename T = MountTraderComponent*> T get_mountTrader() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2760))(this);
	}
	template <typename T = bool> T get_hasMountTrader() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA27E8))(this);
	}
	template <typename T = void> T AddMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA27F4))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T ReplaceMountTrader(Il2CppArray<uintptr_t>* newGradeSettings, Il2CppArray<uintptr_t>* newMountsRandomGroupByType) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA291C))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename T = void> T RemoveMountTrader() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2A44))(this);
	}
	template <typename T = MoveToTargetComponent*> T get_moveToTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2A50))(this);
	}
	template <typename T = bool> T get_hasMoveToTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2AD8))(this);
	}
	template <typename T = void> T AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(GameEntity*, int32_t, float))(Il2CppBase() + 0xFA2AE4))(this, newId, newMinDistance);
	}
	template <typename T = void> T ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(GameEntity*, int32_t, float))(Il2CppBase() + 0xFA2BF8))(this, newId, newMinDistance);
	}
	template <typename T = void> T RemoveMoveToTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2D0C))(this);
	}
	template <typename T = bool> T get_isMoveToTargetPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2D18))(this);
	}
	template <typename T = void> T set_isMoveToTargetPosition(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA2D24))(this, value);
	}
	template <typename T = NeedQuestsComponent*> T get_needQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2E3C))(this);
	}
	template <typename T = bool> T get_hasNeedQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA2EC4))(this);
	}
	template <typename T = void> T AddNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0xFA2ED0))(this, newValues, newFailMsg);
	}
	template <typename T = void> T ReplaceNeedQuests(Il2CppArray<uintptr_t>* newValues, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0xFA2FF8))(this, newValues, newFailMsg);
	}
	template <typename T = void> T RemoveNeedQuests() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3120))(this);
	}
	template <typename T = NeedRemoveEmptyComponent*> T get_needRemoveEmpty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA312C))(this);
	}
	template <typename T = bool> T get_hasNeedRemoveEmpty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA31B4))(this);
	}
	template <typename T = void> T AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(GameEntity*, bool, Il2CppString*))(Il2CppBase() + 0xFA31C0))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((T (*)(GameEntity*, bool, Il2CppString*))(Il2CppBase() + 0xFA32E0))(this, newValue, newSpawnObject);
	}
	template <typename T = void> T RemoveNeedRemoveEmpty() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3400))(this);
	}
	template <typename T = NextWayPointComponent*> T get_nextWayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA340C))(this);
	}
	template <typename T = bool> T get_hasNextWayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3494))(this);
	}
	template <typename T = void> T AddNextWayPoint(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA34A0))(this, newName);
	}
	template <typename T = void> T ReplaceNextWayPoint(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA35B4))(this, newName);
	}
	template <typename T = void> T RemoveNextWayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA36C8))(this);
	}
	template <typename T = bool> T get_isNoAutoMode() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA36D4))(this);
	}
	template <typename T = void> T set_isNoAutoMode(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA36E0))(this, value);
	}
	template <typename T = bool> T get_isNotAggressive() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA37F8))(this);
	}
	template <typename T = void> T set_isNotAggressive(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3804))(this, value);
	}
	template <typename T = bool> T get_isNotInteractable() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA391C))(this);
	}
	template <typename T = void> T set_isNotInteractable(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3928))(this, value);
	}
	template <typename T = bool> T get_isNotPursuitTarget() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3A40))(this);
	}
	template <typename T = void> T set_isNotPursuitTarget(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3A4C))(this, value);
	}
	template <typename T = bool> T get_isNotSelectable() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3B64))(this);
	}
	template <typename T = void> T set_isNotSelectable(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3B70))(this, value);
	}
	template <typename T = ObjectTriggerComponent*> T get_objectTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3C88))(this);
	}
	template <typename T = bool> T get_hasObjectTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3D10))(this);
	}
	template <typename T = void> T AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xFA3D1C))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((T (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xFA3E44))(this, newAttack, newPocket, newInteract);
	}
	template <typename T = void> T RemoveObjectTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3F6C))(this);
	}
	template <typename T = bool> T get_isOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA3F78))(this);
	}
	template <typename T = void> T set_isOnDeath(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3F84))(this, value);
	}
	template <typename T = OnEmptyWorldComponent*> T get_onEmptyWorld() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA409C))(this);
	}
	template <typename T = bool> T get_hasOnEmptyWorld() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4124))(this);
	}
	template <typename T = void> T AddOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(GameEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0xFA4130))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T ReplaceOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((T (*)(GameEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0xFA4254))(this, newActive, newRestore, newDestroy);
	}
	template <typename T = void> T RemoveOnEmptyWorld() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4378))(this);
	}
	template <typename T = OrientationComponent*> T get_orientation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4384))(this);
	}
	template <typename T = bool> T get_hasOrientation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA440C))(this);
	}
	template <typename T = void> T AddOrientation(uint8_t newValue) {
		return ((T (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xFA4418))(this, newValue);
	}
	template <typename T = void> T ReplaceOrientation(uint8_t newValue) {
		return ((T (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xFA451C))(this, newValue);
	}
	template <typename T = void> T RemoveOrientation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4620))(this);
	}
	template <typename T = OwnerComponent*> T get_owner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA462C))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA46B4))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA46C0))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA47C4))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA48C8))(this);
	}
	template <typename T = OwnerNameComponent*> T get_ownerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA48D4))(this);
	}
	template <typename T = bool> T get_hasOwnerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA495C))(this);
	}
	template <typename T = void> T AddOwnerName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA4968))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnerName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA4A7C))(this, newValue);
	}
	template <typename T = void> T RemoveOwnerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4B90))(this);
	}
	template <typename T = ParentComponent*> T get_parent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4B9C))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4C24))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA4C30))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA4D34))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4E38))(this);
	}
	template <typename T = PatrolComponent*> T get_patrol() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4E44))(this);
	}
	template <typename T = bool> T get_hasPatrol() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA4ECC))(this);
	}
	template <typename T = void> T AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA4ED8))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA5010))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T RemovePatrol() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5148))(this);
	}
	template <typename T = PeriodComponent*> T get_period() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5154))(this);
	}
	template <typename T = bool> T get_hasPeriod() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA51DC))(this);
	}
	template <typename T = void> T AddPeriod(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA51E8))(this, newValue);
	}
	template <typename T = void> T ReplacePeriod(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA52EC))(this, newValue);
	}
	template <typename T = void> T RemovePeriod() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA53F0))(this);
	}
	template <typename T = PersonalComponent*> T get_personal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA53FC))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5484))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA5490))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA5594))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5698))(this);
	}
	template <typename T = PersonalGeneratorComponent*> T get_personalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA56A4))(this);
	}
	template <typename T = bool> T get_hasPersonalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA572C))(this);
	}
	template <typename T = void> T AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xFA5738))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xFA5894))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalGenerator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA59F0))(this);
	}
	template <typename T = PersonalKeyComponent*> T get_personalKey() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA59FC))(this);
	}
	template <typename T = bool> T get_hasPersonalKey() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5A84))(this);
	}
	template <typename T = void> T AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0xFA5A90))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((T (*)(GameEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0xFA5BC4))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename T = void> T RemovePersonalKey() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5CF8))(this);
	}
	template <typename T = PetInventoryIdComponent*> T get_petInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5D04))(this);
	}
	template <typename T = bool> T get_hasPetInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5D8C))(this);
	}
	template <typename T = void> T AddPetInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA5D98))(this, newId);
	}
	template <typename T = void> T ReplacePetInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA5E9C))(this, newId);
	}
	template <typename T = void> T RemovePetInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5FA0))(this);
	}
	template <typename T = PhasesComponent*> T get_phases() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA5FAC))(this);
	}
	template <typename T = bool> T get_hasPhases() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6034))(this);
	}
	template <typename T = void> T AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(GameEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA6040))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<uintptr_t>* newPhases) {
		return ((T (*)(GameEntity*, Il2CppString*, float, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA618C))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename T = void> T RemovePhases() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA62D8))(this);
	}
	template <typename T = PlaceOwnerComponent*> T get_placeOwner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA62E4))(this);
	}
	template <typename T = bool> T get_hasPlaceOwner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA636C))(this);
	}
	template <typename T = void> T AddPlaceOwner(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6378))(this, newId);
	}
	template <typename T = void> T ReplacePlaceOwner(int64_t newId) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA647C))(this, newId);
	}
	template <typename T = void> T RemovePlaceOwner() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6580))(this);
	}
	template <typename T = bool> T get_isPlayer() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA658C))(this);
	}
	template <typename T = void> T set_isPlayer(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA6598))(this, value);
	}
	template <typename T = PlayerIdComponent*> T get_playerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA66B0))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6738))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6744))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6848))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA694C))(this);
	}
	template <typename T = bool> T get_isPlayerKill() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6958))(this);
	}
	template <typename T = void> T set_isPlayerKill(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFA6964))(this, value);
	}
	template <typename T = PlayerNameComponent*> T get_playerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6A7C))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6B04))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6B10))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6C24))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6D38))(this);
	}
	template <typename T = PointLabelComponent*> T get_pointLabel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6D44))(this);
	}
	template <typename T = bool> T get_hasPointLabel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA6DCC))(this);
	}
	template <typename T = void> T AddPointLabel(Il2CppString* newCondition) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6DD8))(this, newCondition);
	}
	template <typename T = void> T ReplacePointLabel(Il2CppString* newCondition) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6EEC))(this, newCondition);
	}
	template <typename T = void> T RemovePointLabel() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7000))(this);
	}
	template <typename T = PointsComponent*> T get_points() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA700C))(this);
	}
	template <typename T = bool> T get_hasPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7094))(this);
	}
	template <typename T = void> T AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(GameEntity*, float, int32_t, float))(Il2CppBase() + 0xFA70A0))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(GameEntity*, float, int32_t, float))(Il2CppBase() + 0xFA71BC))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T RemovePoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA72D8))(this);
	}
	template <typename T = PortalComponent*> T get_portal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA72E4))(this);
	}
	template <typename T = bool> T get_hasPortal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7350))(this);
	}
	template <typename T = void> T AddPortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0xFA735C))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplacePortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0xFA7510))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemovePortal() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA76C4))(this);
	}
	template <typename T = PortalsPointsComponent*> T get_portalsPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA76D0))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7758))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA7764))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA7868))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA796C))(this);
	}
	template <typename T = PositionComponent*> T get_position() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7978))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7A00))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA7A0C))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA7B14))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7C1C))(this);
	}
	template <typename T = PositionPlaceComponent*> T get_positionPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7C28))(this);
	}
	template <typename T = bool> T get_hasPositionPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7CB0))(this);
	}
	template <typename T = void> T AddPositionPlace(PositionPlace* newType) {
		return ((T (*)(GameEntity*, PositionPlace*))(Il2CppBase() + 0xFA7CBC))(this, newType);
	}
	template <typename T = void> T ReplacePositionPlace(PositionPlace* newType) {
		return ((T (*)(GameEntity*, PositionPlace*))(Il2CppBase() + 0xFA7DC0))(this, newType);
	}
	template <typename T = void> T RemovePositionPlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7EC4))(this);
	}
	template <typename T = PositionTransactionComponent*> T get_positionTransaction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7ED0))(this);
	}
	template <typename T = bool> T get_hasPositionTransaction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA7F58))(this);
	}
	template <typename T = void> T AddPositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((T (*)(GameEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0xFA7F64))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T ReplacePositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((T (*)(GameEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0xFA80A8))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename T = void> T RemovePositionTransaction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA81EC))(this);
	}
	template <typename T = PowerComponent*> T get_power() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA81F8))(this);
	}
	template <typename T = bool> T get_hasPower() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8280))(this);
	}
	template <typename T = void> T AddPower(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA828C))(this, newValue);
	}
	template <typename T = void> T ReplacePower(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFA8390))(this, newValue);
	}
	template <typename T = void> T RemovePower() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8494))(this);
	}
	template <typename T = ProductionComponent*> T get_production() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA84A0))(this);
	}
	template <typename T = bool> T get_hasProduction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8528))(this);
	}
	template <typename T = void> T AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA8534))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<uintptr_t>* newLeavepoints) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA86C4))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename T = void> T RemoveProduction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8854))(this);
	}
	template <typename T = ProductionWorkComponent*> T get_productionWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8860))(this);
	}
	template <typename T = bool> T get_hasProductionWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA88E8))(this);
	}
	template <typename T = void> T AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0xFA88F4))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0xFA8A58))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename T = void> T RemoveProductionWork() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8BBC))(this);
	}
	template <typename T = PursuitComponent*> T get_pursuit() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8BC8))(this);
	}
	template <typename T = bool> T get_hasPursuit() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8C50))(this);
	}
	template <typename T = void> T AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(GameEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0xFA8C5C))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((T (*)(GameEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0xFA8DB8))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename T = void> T RemovePursuit() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8F14))(this);
	}
	template <typename T = PursuitGroupComponent*> T get_pursuitGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8F20))(this);
	}
	template <typename T = bool> T get_hasPursuitGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA8FA8))(this);
	}
	template <typename T = void> T AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(GameEntity*, float, Il2CppString*))(Il2CppBase() + 0xFA8FB4))(this, newDistance, newGroupName);
	}
	template <typename T = void> T ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((T (*)(GameEntity*, float, Il2CppString*))(Il2CppBase() + 0xFA90D8))(this, newDistance, newGroupName);
	}
	template <typename T = void> T RemovePursuitGroup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA91FC))(this);
	}
	template <typename T = QuestsSaveComponent*> T get_questsSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9208))(this);
	}
	template <typename T = bool> T get_hasQuestsSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9290))(this);
	}
	template <typename T = void> T AddQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA929C))(this, newVersion, newData);
	}
	template <typename T = void> T ReplaceQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(GameEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA93B8))(this, newVersion, newData);
	}
	template <typename T = void> T RemoveQuestsSave() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA94D4))(this);
	}
	template <typename T = RandomClanNameComponent*> T get_randomClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA94E0))(this);
	}
	template <typename T = bool> T get_hasRandomClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9568))(this);
	}
	template <typename T = void> T AddRandomClanName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA9574))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomClanName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA9690))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomClanName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA97AC))(this);
	}
	template <typename T = RandomNameComponent*> T get_randomName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA97B8))(this);
	}
	template <typename T = bool> T get_hasRandomName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9840))(this);
	}
	template <typename T = void> T AddRandomName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA984C))(this, newRule, newNames);
	}
	template <typename T = void> T ReplaceRandomName(RandomNameRules* newRule, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, RandomNameRules*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA9968))(this, newRule, newNames);
	}
	template <typename T = void> T RemoveRandomName() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9A84))(this);
	}
	template <typename T = RarityComponent*> T get_rarity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9A90))(this);
	}
	template <typename T = bool> T get_hasRarity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9B18))(this);
	}
	template <typename T = void> T AddRarity(Rarity* newValue) {
		return ((T (*)(GameEntity*, Rarity*))(Il2CppBase() + 0xFA9B24))(this, newValue);
	}
	template <typename T = void> T ReplaceRarity(Rarity* newValue) {
		return ((T (*)(GameEntity*, Rarity*))(Il2CppBase() + 0xFA9C28))(this, newValue);
	}
	template <typename T = void> T RemoveRarity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9D2C))(this);
	}
	template <typename T = RavenNestComponent*> T get_ravenNest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9D38))(this);
	}
	template <typename T = bool> T get_hasRavenNest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9DC0))(this);
	}
	template <typename T = void> T AddRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA9DCC))(this, newFuel);
	}
	template <typename T = void> T ReplaceRavenNest(Il2CppArray<uintptr_t>* newFuel) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFA9EE0))(this, newFuel);
	}
	template <typename T = void> T RemoveRavenNest() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFA9FF4))(this);
	}
	template <typename T = RavenNestStatsComponent*> T get_ravenNestStats() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA000))(this);
	}
	template <typename T = bool> T get_hasRavenNestStats() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA088))(this);
	}
	template <typename T = void> T AddRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(GameEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0xFAA094))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T ReplaceRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((T (*)(GameEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0xFAA1BC))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename T = void> T RemoveRavenNestStats() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA2E4))(this);
	}
	template <typename T = RequiredComponent*> T get_required() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA2F0))(this);
	}
	template <typename T = bool> T get_hasRequired() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA378))(this);
	}
	template <typename T = void> T AddRequired(int32_t newLevel) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAA384))(this, newLevel);
	}
	template <typename T = void> T ReplaceRequired(int32_t newLevel) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAA488))(this, newLevel);
	}
	template <typename T = void> T RemoveRequired() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA58C))(this);
	}
	template <typename T = ResetTimeComponent*> T get_resetTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA598))(this);
	}
	template <typename T = bool> T get_hasResetTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA620))(this);
	}
	template <typename T = void> T AddResetTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAA62C))(this, newValue);
	}
	template <typename T = void> T ReplaceResetTime(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAA730))(this, newValue);
	}
	template <typename T = void> T RemoveResetTime() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA834))(this);
	}
	template <typename T = RespawnPointComponent*> T get_respawnPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA840))(this);
	}
	template <typename T = bool> T get_hasRespawnPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAA8C8))(this);
	}
	template <typename T = void> T AddRespawnPoint(float newRange) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAA8D4))(this, newRange);
	}
	template <typename T = void> T ReplaceRespawnPoint(float newRange) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAA9D8))(this, newRange);
	}
	template <typename T = void> T RemoveRespawnPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAAADC))(this);
	}
	template <typename T = RewardsComponent*> T get_rewards() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAAAE8))(this);
	}
	template <typename T = bool> T get_hasRewards() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAAB70))(this);
	}
	template <typename T = void> T AddRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xFAAB7C))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T ReplaceRewards(Il2CppArray<uintptr_t>* newList, int32_t newProgressionLevel) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xFAAC98))(this, newList, newProgressionLevel);
	}
	template <typename T = void> T RemoveRewards() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAADB4))(this);
	}
	template <typename T = RoamingComponent*> T get_roaming() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAADC0))(this);
	}
	template <typename T = bool> T get_hasRoaming() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAAE48))(this);
	}
	template <typename T = void> T AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(GameEntity*, float, float, float))(Il2CppBase() + 0xFAAE54))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((T (*)(GameEntity*, float, float, float))(Il2CppBase() + 0xFAAF6C))(this, newDistance, newTime, newMaxTime);
	}
	template <typename T = void> T RemoveRoaming() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB084))(this);
	}
	template <typename T = RoofComponent*> T get_roof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB090))(this);
	}
	template <typename T = bool> T get_hasRoof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB118))(this);
	}
	template <typename T = void> T AddRoof(int32_t newIndex) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAB124))(this, newIndex);
	}
	template <typename T = void> T ReplaceRoof(int32_t newIndex) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAB228))(this, newIndex);
	}
	template <typename T = void> T RemoveRoof() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB32C))(this);
	}
	template <typename T = RoomComponent*> T get_room() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB338))(this);
	}
	template <typename T = bool> T get_hasRoom() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB3C0))(this);
	}
	template <typename T = void> T AddRoom(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFAB3CC))(this, newName);
	}
	template <typename T = void> T ReplaceRoom(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFAB4E0))(this, newName);
	}
	template <typename T = void> T RemoveRoom() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB5F4))(this);
	}
	template <typename T = RoomsDoorComponent*> T get_roomsDoor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB600))(this);
	}
	template <typename T = bool> T get_hasRoomsDoor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB688))(this);
	}
	template <typename T = void> T AddRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFAB694))(this, newNames);
	}
	template <typename T = void> T ReplaceRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFAB7A8))(this, newNames);
	}
	template <typename T = void> T RemoveRoomsDoor() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB8BC))(this);
	}
	template <typename T = RotateToComponent*> T get_rotateTo() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB8C8))(this);
	}
	template <typename T = bool> T get_hasRotateTo() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAB950))(this);
	}
	template <typename T = void> T AddRotateTo(float newAngle) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAB95C))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotateTo(float newAngle) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFABA60))(this, newAngle);
	}
	template <typename T = void> T RemoveRotateTo() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABB64))(this);
	}
	template <typename T = RotationComponent*> T get_rotation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABB70))(this);
	}
	template <typename T = bool> T get_hasRotation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABBF8))(this);
	}
	template <typename T = void> T AddRotation(float newAngle) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFABC04))(this, newAngle);
	}
	template <typename T = void> T ReplaceRotation(float newAngle) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFABD08))(this, newAngle);
	}
	template <typename T = void> T RemoveRotation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABE0C))(this);
	}
	template <typename T = RuneInventoryIdComponent*> T get_runeInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABE18))(this);
	}
	template <typename T = bool> T get_hasRuneInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFABEA0))(this);
	}
	template <typename T = void> T AddRuneInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFABEAC))(this, newId);
	}
	template <typename T = void> T ReplaceRuneInventoryId(int32_t newId) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFABFB0))(this, newId);
	}
	template <typename T = void> T RemoveRuneInventoryId() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC0B4))(this);
	}
	template <typename T = SaveActionComponent*> T get_saveAction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC0C0))(this);
	}
	template <typename T = bool> T get_hasSaveAction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC148))(this);
	}
	template <typename T = void> T AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xFAC154))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xFAC2A4))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename T = void> T RemoveSaveAction() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC3F4))(this);
	}
	template <typename T = bool> T get_isSaveable() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC400))(this);
	}
	template <typename T = void> T set_isSaveable(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFAC40C))(this, value);
	}
	template <typename T = SaviorPointsComponent*> T get_saviorPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC524))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC5AC))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAC5B8))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAC6BC))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC7C0))(this);
	}
	template <typename T = ScoutComponent*> T get_scout() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC7CC))(this);
	}
	template <typename T = bool> T get_hasScout() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAC854))(this);
	}
	template <typename T = void> T AddScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAC860))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<uintptr_t>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameEntity*, int32_t, float, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAC9D8))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveScout() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACB50))(this);
	}
	template <typename T = SeasonPointsComponent*> T get_seasonPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACB5C))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACBE4))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFACBF0))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFACCF4))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACDF8))(this);
	}
	template <typename T = ServerPositionComponent*> T get_serverPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACE04))(this);
	}
	template <typename T = bool> T get_hasServerPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFACE8C))(this);
	}
	template <typename T = void> T AddServerPosition(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFACE98))(this, newX, newY);
	}
	template <typename T = void> T ReplaceServerPosition(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFACFA0))(this, newX, newY);
	}
	template <typename T = void> T RemoveServerPosition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD0A8))(this);
	}
	template <typename T = ServerTickComponent*> T get_serverTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD0B4))(this);
	}
	template <typename T = bool> T get_hasServerTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD13C))(this);
	}
	template <typename T = void> T AddServerTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAD148))(this, newValue);
	}
	template <typename T = void> T ReplaceServerTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAD24C))(this, newValue);
	}
	template <typename T = void> T RemoveServerTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD350))(this);
	}
	template <typename T = SharedComponent*> T get_shared() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD35C))(this);
	}
	template <typename T = bool> T get_hasShared() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD3E4))(this);
	}
	template <typename T = void> T AddShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(GameEntity*, bool, bool))(Il2CppBase() + 0xFAD3F0))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((T (*)(GameEntity*, bool, bool))(Il2CppBase() + 0xFAD504))(this, newValue, newCantSwitch);
	}
	template <typename T = void> T RemoveShared() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD618))(this);
	}
	template <typename T = ShowConditionComponent*> T get_showCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD624))(this);
	}
	template <typename T = bool> T get_hasShowCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD6AC))(this);
	}
	template <typename T = void> T AddShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0xFAD6B8))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T ReplaceShowCondition(Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, bool, Il2CppString*))(Il2CppBase() + 0xFAD808))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename T = void> T RemoveShowCondition() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD958))(this);
	}
	template <typename T = SilverComponent*> T get_silver() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD964))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAD9EC))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAD9F8))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFADAFC))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADC00))(this);
	}
	template <typename T = SinglePlaceComponent*> T get_singlePlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADC0C))(this);
	}
	template <typename T = bool> T get_hasSinglePlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADC94))(this);
	}
	template <typename T = void> T AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(GameEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0xFADCA0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((T (*)(GameEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0xFADDD8))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename T = void> T RemoveSinglePlace() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADF10))(this);
	}
	template <typename T = SlotCountComponent*> T get_slotCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADF1C))(this);
	}
	template <typename T = bool> T get_hasSlotCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFADFA4))(this);
	}
	template <typename T = void> T AddSlotCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFADFB0))(this, newValue);
	}
	template <typename T = void> T ReplaceSlotCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAE0B4))(this, newValue);
	}
	template <typename T = void> T RemoveSlotCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE1B8))(this);
	}
	template <typename T = SpawnAndDestroyComponent*> T get_spawnAndDestroy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE1C4))(this);
	}
	template <typename T = bool> T get_hasSpawnAndDestroy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE24C))(this);
	}
	template <typename T = void> T AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0xFAE258))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0xFAE390))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename T = void> T RemoveSpawnAndDestroy() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE4C8))(this);
	}
	template <typename T = SpawnOnDeathComponent*> T get_spawnOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE4D4))(this);
	}
	template <typename T = bool> T get_hasSpawnOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE55C))(this);
	}
	template <typename T = void> T AddSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(GameEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xFAE568))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T ReplaceSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<uintptr_t>* newItems, int32_t newRandomCount) {
		return ((T (*)(GameEntity*, ApplyPlaceParams*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0xFAE6A0))(this, newParams, newItems, newRandomCount);
	}
	template <typename T = void> T RemoveSpawnOnDeath() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE7D8))(this);
	}
	template <typename T = SpectatorComponent*> T get_spectator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE7E4))(this);
	}
	template <typename T = bool> T get_hasSpectator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAE86C))(this);
	}
	template <typename T = void> T AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(GameEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0xFAE878))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((T (*)(GameEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0xFAE9B4))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename T = void> T RemoveSpectator() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAEAF0))(this);
	}
	template <typename T = SpeedComponent*> T get_speed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAEAFC))(this);
	}
	template <typename T = bool> T get_hasSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAEB84))(this);
	}
	template <typename T = void> T AddSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAEB90))(this, newValue);
	}
	template <typename T = void> T ReplaceSpeed(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAEC94))(this, newValue);
	}
	template <typename T = void> T RemoveSpeed() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAED98))(this);
	}
	template <typename T = StateViewComponent*> T get_stateView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAEDA4))(this);
	}
	template <typename T = bool> T get_hasStateView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAEE2C))(this);
	}
	template <typename T = void> T AddStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFAEE38))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T ReplaceStateView(Il2CppArray<uintptr_t>* newValues, Il2CppArray<uintptr_t>* newFirstOfValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFAEF60))(this, newValues, newFirstOfValues);
	}
	template <typename T = void> T RemoveStateView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF088))(this);
	}
	template <typename T = StatueComponent*> T get_statue() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF094))(this);
	}
	template <typename T = bool> T get_hasStatue() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF11C))(this);
	}
	template <typename T = void> T AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAF128))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((T (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAF274))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename T = void> T RemoveStatue() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF3C0))(this);
	}
	template <typename T = StatusBarViewComponent*> T get_statusBarView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF3CC))(this);
	}
	template <typename T = bool> T get_hasStatusBarView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF454))(this);
	}
	template <typename T = void> T AddStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0xFAF460))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T ReplaceStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((T (*)(GameEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0xFAF5D4))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename T = void> T RemoveStatusBarView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF748))(this);
	}
	template <typename T = TeamComponent*> T get_team() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF754))(this);
	}
	template <typename T = bool> T get_hasTeam() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAF7DC))(this);
	}
	template <typename T = void> T AddTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((T (*)(GameEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0xFAF7E8))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T ReplaceTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((T (*)(GameEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0xFAF92C))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename T = void> T RemoveTeam() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFA70))(this);
	}
	template <typename T = TenacityCoefComponent*> T get_tenacityCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFA7C))(this);
	}
	template <typename T = bool> T get_hasTenacityCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFB04))(this);
	}
	template <typename T = void> T AddTenacityCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAFB10))(this, newValue);
	}
	template <typename T = void> T ReplaceTenacityCoef(float newValue) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFAFC14))(this, newValue);
	}
	template <typename T = void> T RemoveTenacityCoef() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFD18))(this);
	}
	template <typename T = TickComponent*> T get_tick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFD24))(this);
	}
	template <typename T = bool> T get_hasTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFDAC))(this);
	}
	template <typename T = void> T AddTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAFDB8))(this, newValue);
	}
	template <typename T = void> T ReplaceTick(int64_t newValue) {
		return ((T (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAFEBC))(this, newValue);
	}
	template <typename T = void> T RemoveTick() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFFC0))(this);
	}
	template <typename T = TicketsComponent*> T get_tickets() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFAFFCC))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0054))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0060))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0164))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0268))(this);
	}
	template <typename T = TicksCountComponent*> T get_ticksCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0274))(this);
	}
	template <typename T = bool> T get_hasTicksCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB02FC))(this);
	}
	template <typename T = void> T AddTicksCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0308))(this, newValue);
	}
	template <typename T = void> T ReplaceTicksCount(int32_t newValue) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB040C))(this, newValue);
	}
	template <typename T = void> T RemoveTicksCount() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0510))(this);
	}
	template <typename T = TimeTriggerComponent*> T get_timeTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB051C))(this);
	}
	template <typename T = bool> T get_hasTimeTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB05A4))(this);
	}
	template <typename T = void> T AddTimeTrigger(float newBeforeEnd) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFB05B0))(this, newBeforeEnd);
	}
	template <typename T = void> T ReplaceTimeTrigger(float newBeforeEnd) {
		return ((T (*)(GameEntity*, float))(Il2CppBase() + 0xFB06B4))(this, newBeforeEnd);
	}
	template <typename T = void> T RemoveTimeTrigger() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB07B8))(this);
	}
	template <typename T = TimerEffectComponent*> T get_timerEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB07C4))(this);
	}
	template <typename T = bool> T get_hasTimerEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB084C))(this);
	}
	template <typename T = void> T AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB0858))(this, newName, newMinGrade);
	}
	template <typename T = void> T ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB0974))(this, newName, newMinGrade);
	}
	template <typename T = void> T RemoveTimerEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0A90))(this);
	}
	template <typename T = ToLocationComponent*> T get_toLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0A9C))(this);
	}
	template <typename T = bool> T get_hasToLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0B24))(this);
	}
	template <typename T = void> T AddToLocation(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB0B30))(this, newName);
	}
	template <typename T = void> T ReplaceToLocation(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB0C44))(this, newName);
	}
	template <typename T = void> T RemoveToLocation() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0D58))(this);
	}
	template <typename T = TransportComponent*> T get_transport() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0D64))(this);
	}
	template <typename T = bool> T get_hasTransport() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB0DEC))(this);
	}
	template <typename T = void> T AddTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB0DF8))(this, newValues);
	}
	template <typename T = void> T ReplaceTransport(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB0F0C))(this, newValues);
	}
	template <typename T = void> T RemoveTransport() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1020))(this);
	}
	template <typename T = TriggerViewComponent*> T get_triggerView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB102C))(this);
	}
	template <typename T = bool> T get_hasTriggerView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB10B4))(this);
	}
	template <typename T = void> T AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0xFB10C0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0xFB123C))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename T = void> T RemoveTriggerView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB13B8))(this);
	}
	template <typename T = UniqueLookupComponent*> T get_uniqueLookup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB13C4))(this);
	}
	template <typename T = bool> T get_hasUniqueLookup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB144C))(this);
	}
	template <typename T = void> T AddUniqueLookup(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1458))(this, newName);
	}
	template <typename T = void> T ReplaceUniqueLookup(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB156C))(this, newName);
	}
	template <typename T = void> T RemoveUniqueLookup() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1680))(this);
	}
	template <typename T = UnlockComponent*> T get_unlock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB168C))(this);
	}
	template <typename T = bool> T get_hasUnlock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1714))(this);
	}
	template <typename T = void> T AddUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB1720))(this, newNames);
	}
	template <typename T = void> T ReplaceUnlock(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(GameEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB1834))(this, newNames);
	}
	template <typename T = void> T RemoveUnlock() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1948))(this);
	}
	template <typename T = UnlockDurationComponent*> T get_unlockDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1954))(this);
	}
	template <typename T = bool> T get_hasUnlockDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB19DC))(this);
	}
	template <typename T = void> T AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB19E8))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((T (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB1B0C))(this, newUnlockedEffect, newDuration);
	}
	template <typename T = void> T RemoveUnlockDuration() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1C30))(this);
	}
	template <typename T = bool> T get_isUnlocked() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1C3C))(this);
	}
	template <typename T = void> T set_isUnlocked(bool value) {
		return ((T (*)(GameEntity*, bool))(Il2CppBase() + 0xFB1C48))(this, value);
	}
	template <typename T = UpgradeComponent*> T get_upgrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1D60))(this);
	}
	template <typename T = bool> T get_hasUpgrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB1DE8))(this);
	}
	template <typename T = void> T AddUpgrade(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1DF4))(this, newName);
	}
	template <typename T = void> T ReplaceUpgrade(Il2CppString* newName) {
		return ((T (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1F08))(this, newName);
	}
	template <typename T = void> T RemoveUpgrade() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB201C))(this);
	}
	template <typename T = UpgradeEffectComponent*> T get_upgradeEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2028))(this);
	}
	template <typename T = bool> T get_hasUpgradeEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB20B0))(this);
	}
	template <typename T = void> T AddUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xFB20BC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T ReplaceUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<uintptr_t>* newRandomTexts, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames, Il2CppArray<uintptr_t>* newRandomNames, bool newPersonal) {
		return ((T (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0xFB2258))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename T = void> T RemoveUpgradeEffect() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB23F4))(this);
	}
	template <typename T = VIPPointsComponent*> T get_vIPPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2400))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2488))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB2494))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB2598))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB269C))(this);
	}
	template <typename T = VelocityComponent*> T get_velocity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB26A8))(this);
	}
	template <typename T = bool> T get_hasVelocity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2730))(this);
	}
	template <typename T = void> T AddVelocity(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFB273C))(this, newX, newY);
	}
	template <typename T = void> T ReplaceVelocity(float newX, float newY) {
		return ((T (*)(GameEntity*, float, float))(Il2CppBase() + 0xFB2844))(this, newX, newY);
	}
	template <typename T = void> T RemoveVelocity() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB294C))(this);
	}
	template <typename T = ViewComponent*> T get_view() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2958))(this);
	}
	template <typename T = bool> T get_hasView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB29E0))(this);
	}
	template <typename T = void> T AddView(IEntityView* newValue) {
		return ((T (*)(GameEntity*, IEntityView*))(Il2CppBase() + 0xFB29EC))(this, newValue);
	}
	template <typename T = void> T ReplaceView(IEntityView* newValue) {
		return ((T (*)(GameEntity*, IEntityView*))(Il2CppBase() + 0xFB2B00))(this, newValue);
	}
	template <typename T = void> T RemoveView() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2C14))(this);
	}
	template <typename T = WaveIndexComponent*> T get_waveIndex() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2C20))(this);
	}
	template <typename T = bool> T get_hasWaveIndex() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2CA8))(this);
	}
	template <typename T = void> T AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(GameEntity*, int32_t, int32_t))(Il2CppBase() + 0xFB2CB4))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((T (*)(GameEntity*, int32_t, int32_t))(Il2CppBase() + 0xFB2DBC))(this, newIndex, newWavesCount);
	}
	template <typename T = void> T RemoveWaveIndex() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2EC4))(this);
	}
	template <typename T = WaveItemComponent*> T get_waveItem() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2ED0))(this);
	}
	template <typename T = bool> T get_hasWaveItem() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB2F58))(this);
	}
	template <typename T = void> T AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB2F64))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((T (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB3080))(this, newEventName, newWaveIndex);
	}
	template <typename T = void> T RemoveWaveItem() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB319C))(this);
	}
	template <typename T = WaveStateComponent*> T get_waveState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB31A8))(this);
	}
	template <typename T = bool> T get_hasWaveState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3230))(this);
	}
	template <typename T = void> T AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0xFB323C))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((T (*)(GameEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0xFB3354))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename T = void> T RemoveWaveState() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB346C))(this);
	}
	template <typename T = WavesEventComponent*> T get_wavesEvent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3478))(this);
	}
	template <typename T = bool> T get_hasWavesEvent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3500))(this);
	}
	template <typename T = void> T AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(GameEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB350C))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<uintptr_t>* newWaves) {
		return ((T (*)(GameEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xFB36C8))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename T = void> T RemoveWavesEvent() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3884))(this);
	}
	template <typename T = WayPointComponent*> T get_wayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3890))(this);
	}
	template <typename T = bool> T get_hasWayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3918))(this);
	}
	template <typename T = void> T AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB3924))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB3A48))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T RemoveWayPoint() {
		return ((T (*)(GameEntity*))(Il2CppBase() + 0xFB3B6C))(this);
	}

};

