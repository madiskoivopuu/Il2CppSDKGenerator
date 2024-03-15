#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameEntity"));
	}

	template <typename R = EntityStatus*> R& _status() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = AutoModeComponent*> static R& autoModeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AutoOpenDoorComponent*> static R& autoOpenDoorComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = CanTravelComponent*> static R& canTravelComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ClickComponent*> static R& clickComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = CreepComponent*> static R& creepComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = DisabledComponent*> static R& disabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = DraggedComponent*> static R& draggedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = ExplodeOnDeathComponent*> static R& explodeOnDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = ExternalInventory*> static R& externalInventoryComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = FakeBaseComponent*> static R& fakeBaseComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = FollowTargetComponent*> static R& followTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = HideBagComponent*> static R& hideBagComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = HideHeadComponent*> static R& hideHeadComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename R = HidePetComponent*> static R& hidePetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename R = InventoryLockedComponent*> static R& inventoryLockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename R = MoveToTargetPosition*> static R& moveToTargetPositionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename R = NoAutoModeComponent*> static R& noAutoModeComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = NotAggressiveComponent*> static R& notAggressiveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename R = NotInteractableComponent*> static R& notInteractableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = NotPursuitTargetComponent*> static R& notPursuitTargetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = NotSelectableComponent*> static R& notSelectableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = OnDeathComponent*> static R& onDeathComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename R = PlayerComponent*> static R& playerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = PlayerKillComponent*> static R& playerKillComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename R = SaveableComponent*> static R& saveableComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename R = UnlockedComponent*> static R& unlockedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename R = Il2CppString*> R get_DataName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF80B84))(this);
	}
	template <typename R = GameDataEntity*> R get_Data() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF80C60))(this);
	}
	template <typename R = void> R AddData(Il2CppString* name, GameDataEntity* data) {
		return ((R (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF80CA8))(this, name, data);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF80DD4))(this);
	}
	template <typename R = EntityStatus*> R get_Status() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF810AC))(this);
	}
	template <typename R = bool> R get_hasStatusPanel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81230))(this);
	}
	template <typename R = void> R RemoveStatusPanel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8129C))(this);
	}
	template <typename R = void> static R DestroyStatusPanel(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0xF813A0))(0, entity);
	}
	template <typename R = AABBComponent*> R get_aABB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8143C))(this);
	}
	template <typename R = bool> R get_hasAABB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF814C4))(this);
	}
	template <typename R = void> R AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(GameEntity*, float, float, float, float))(Il2CppBase() + 0xF814D0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(GameEntity*, float, float, float, float))(Il2CppBase() + 0xF815EC))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R RemoveAABB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81708))(this);
	}
	template <typename R = AFKMoveComponent*> R get_aFKMove() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81714))(this);
	}
	template <typename R = bool> R get_hasAFKMove() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8179C))(this);
	}
	template <typename R = void> R AddAFKMove(int64_t newTick) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF817A8))(this, newTick);
	}
	template <typename R = void> R ReplaceAFKMove(int64_t newTick) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF818AC))(this, newTick);
	}
	template <typename R = void> R RemoveAFKMove() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF819B0))(this);
	}
	template <typename R = AFKTriggerComponent*> R get_aFKTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF819BC))(this);
	}
	template <typename R = bool> R get_hasAFKTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81A44))(this);
	}
	template <typename R = void> R AddAFKTrigger(bool newMove) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF81A50))(this, newMove);
	}
	template <typename R = void> R ReplaceAFKTrigger(bool newMove) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF81B58))(this, newMove);
	}
	template <typename R = void> R RemoveAFKTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81C60))(this);
	}
	template <typename R = AIBattleSourceComponent*> R get_aIBattleSource() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81C6C))(this);
	}
	template <typename R = bool> R get_hasAIBattleSource() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81CF4))(this);
	}
	template <typename R = void> R AddAIBattleSource(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF81D00))(this, newId);
	}
	template <typename R = void> R ReplaceAIBattleSource(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF81E04))(this, newId);
	}
	template <typename R = void> R RemoveAIBattleSource() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81F08))(this);
	}
	template <typename R = AIBattleStateComponent*> R get_aIBattleState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81F14))(this);
	}
	template <typename R = bool> R get_hasAIBattleState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81F9C))(this);
	}
	template <typename R = void> R AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(GameEntity*, int32_t, int64_t))(Il2CppBase() + 0xF81FA8))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(GameEntity*, int32_t, int64_t))(Il2CppBase() + 0xF820B4))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R RemoveAIBattleState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF821C0))(this);
	}
	template <typename R = AIEvadeTimeComponent*> R get_aIEvadeTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF821CC))(this);
	}
	template <typename R = bool> R get_hasAIEvadeTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82254))(this);
	}
	template <typename R = void> R AddAIEvadeTime(int64_t newTicks) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF82260))(this, newTicks);
	}
	template <typename R = void> R ReplaceAIEvadeTime(int64_t newTicks) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF82364))(this, newTicks);
	}
	template <typename R = void> R RemoveAIEvadeTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82468))(this);
	}
	template <typename R = AIPocketsStateComponent*> R get_aIPocketsState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82474))(this);
	}
	template <typename R = bool> R get_hasAIPocketsState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF824FC))(this);
	}
	template <typename R = void> R AddAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(GameEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0xF82508))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R ReplaceAIPocketsState(PocketState* newPocket1, PocketState* newPocket2, PocketState* newPocket3, PocketState* newSkill1, PocketState* newSkill2, PocketState* newSkill3, PocketState* newSkill4, PocketState* newSkill5) {
		return ((R (*)(GameEntity*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*, PocketState*))(Il2CppBase() + 0xF826C0))(this, newPocket1, newPocket2, newPocket3, newSkill1, newSkill2, newSkill3, newSkill4, newSkill5);
	}
	template <typename R = void> R RemoveAIPocketsState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82878))(this);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82884))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8290C))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF82918))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF82A20))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82B28))(this);
	}
	template <typename R = AddExperienceComponent*> R get_addExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82B34))(this);
	}
	template <typename R = bool> R get_hasAddExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82BBC))(this);
	}
	template <typename R = void> R AddAddExperience(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF82BC8))(this, newValue);
	}
	template <typename R = void> R ReplaceAddExperience(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF82CCC))(this, newValue);
	}
	template <typename R = void> R RemoveAddExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82DD0))(this);
	}
	template <typename R = AddRaidKarmaComponent*> R get_addRaidKarma() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82DDC))(this);
	}
	template <typename R = bool> R get_hasAddRaidKarma() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF82E64))(this);
	}
	template <typename R = void> R AddAddRaidKarma(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF82E70))(this, newValue);
	}
	template <typename R = void> R ReplaceAddRaidKarma(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF82F74))(this, newValue);
	}
	template <typename R = void> R RemoveAddRaidKarma() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83078))(this);
	}
	template <typename R = AddStoreExperienceComponent*> R get_addStoreExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83084))(this);
	}
	template <typename R = bool> R get_hasAddStoreExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8310C))(this);
	}
	template <typename R = void> R AddAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(GameEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0xF83118))(this, newList);
	}
	template <typename R = void> R ReplaceAddStoreExperience(Il2CppArray<Entry*>* newList) {
		return ((R (*)(GameEntity*, Il2CppArray<Entry*>*))(Il2CppBase() + 0xF8322C))(this, newList);
	}
	template <typename R = void> R RemoveAddStoreExperience() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83340))(this);
	}
	template <typename R = AggroRadiusComponent*> R get_aggroRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8334C))(this);
	}
	template <typename R = bool> R get_hasAggroRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF833D4))(this);
	}
	template <typename R = void> R AddAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(GameEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0xF833E0))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R ReplaceAggroRadius(float newValue, bool newSeesInvisible, Il2CppString* newTargetCondition) {
		return ((R (*)(GameEntity*, float, bool, Il2CppString*))(Il2CppBase() + 0xF83510))(this, newValue, newSeesInvisible, newTargetCondition);
	}
	template <typename R = void> R RemoveAggroRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83640))(this);
	}
	template <typename R = AggroTargetComponent*> R get_aggroTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8364C))(this);
	}
	template <typename R = bool> R get_hasAggroTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF836D4))(this);
	}
	template <typename R = void> R AddAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(GameEntity*, int32_t, bool))(Il2CppBase() + 0xF836E0))(this, newId, newMovable);
	}
	template <typename R = void> R ReplaceAggroTarget(int32_t newId, bool newMovable) {
		return ((R (*)(GameEntity*, int32_t, bool))(Il2CppBase() + 0xF837F0))(this, newId, newMovable);
	}
	template <typename R = void> R RemoveAggroTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83900))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8390C))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83994))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF839A0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83AA4))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83BA8))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83BB4))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83C3C))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83C48))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83D4C))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83E50))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83E5C))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF83EE4))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83EF0))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF83FF4))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF840F8))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84104))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8418C))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF84198))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8429C))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF843A0))(this);
	}
	template <typename R = AngularSpeedComponent*> R get_angularSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF843AC))(this);
	}
	template <typename R = bool> R get_hasAngularSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84434))(this);
	}
	template <typename R = void> R AddAngularSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF84440))(this, newValue);
	}
	template <typename R = void> R ReplaceAngularSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF84544))(this, newValue);
	}
	template <typename R = void> R RemoveAngularSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84648))(this);
	}
	template <typename R = AnimatorComponent*> R get_animator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84654))(this);
	}
	template <typename R = bool> R get_hasAnimator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF846DC))(this);
	}
	template <typename R = void> R AddAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0xF846E8))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R ReplaceAnimator(Il2CppString* newBoolName, Il2CppString* newIntName, int32_t newIntValue, int32_t newIntRange, Il2CppString* newTriggerName, float newDelay, float newDuration, float newTrigger, bool newHideWeapon, bool newHideTool, bool newRestoreWeapon) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, int32_t, int32_t, Il2CppString*, float, float, float, bool, bool, bool))(Il2CppBase() + 0xF84890))(this, newBoolName, newIntName, newIntValue, newIntRange, newTriggerName, newDelay, newDuration, newTrigger, newHideWeapon, newHideTool, newRestoreWeapon);
	}
	template <typename R = void> R RemoveAnimator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84A38))(this);
	}
	template <typename R = ApplyOnTargetActiveEffectComponent*> R get_applyOnTargetActiveEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84A44))(this);
	}
	template <typename R = bool> R get_hasApplyOnTargetActiveEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84ACC))(this);
	}
	template <typename R = void> R AddApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xF84AD8))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceApplyOnTargetActiveEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xF84C74))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveApplyOnTargetActiveEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84E10))(this);
	}
	template <typename R = ArmingBackpackComponent*> R get_armingBackpack() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84E1C))(this);
	}
	template <typename R = bool> R get_hasArmingBackpack() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF84EA4))(this);
	}
	template <typename R = void> R AddArmingBackpack(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF84EB0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBackpack(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF84FC4))(this, newName);
	}
	template <typename R = void> R RemoveArmingBackpack() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF850D8))(this);
	}
	template <typename R = ArmingBannerComponent*> R get_armingBanner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF850E4))(this);
	}
	template <typename R = bool> R get_hasArmingBanner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8516C))(this);
	}
	template <typename R = void> R AddArmingBanner(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85178))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBanner(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8528C))(this, newName);
	}
	template <typename R = void> R RemoveArmingBanner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF853A0))(this);
	}
	template <typename R = ArmingBeardComponent*> R get_armingBeard() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF853AC))(this);
	}
	template <typename R = bool> R get_hasArmingBeard() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85434))(this);
	}
	template <typename R = void> R AddArmingBeard(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85440))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBeard(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85554))(this, newName);
	}
	template <typename R = void> R RemoveArmingBeard() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85668))(this);
	}
	template <typename R = ArmingCharmComponent*> R get_armingCharm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85674))(this);
	}
	template <typename R = bool> R get_hasArmingCharm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF856FC))(this);
	}
	template <typename R = void> R AddArmingCharm(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85708))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCharm(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8581C))(this, newName);
	}
	template <typename R = void> R RemoveArmingCharm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85930))(this);
	}
	template <typename R = ArmingChestComponent*> R get_armingChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8593C))(this);
	}
	template <typename R = bool> R get_hasArmingChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF859C4))(this);
	}
	template <typename R = void> R AddArmingChest(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF859D0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingChest(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85AE4))(this, newName);
	}
	template <typename R = void> R RemoveArmingChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85BF8))(this);
	}
	template <typename R = ArmingClassComponent*> R get_armingClass() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85C04))(this);
	}
	template <typename R = bool> R get_hasArmingClass() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85C8C))(this);
	}
	template <typename R = void> R AddArmingClass(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85C98))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClass(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85DAC))(this, newName);
	}
	template <typename R = void> R RemoveArmingClass() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85EC0))(this);
	}
	template <typename R = ArmingClothesComponent*> R get_armingClothes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85ECC))(this);
	}
	template <typename R = bool> R get_hasArmingClothes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF85F54))(this);
	}
	template <typename R = void> R AddArmingClothes(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF85F60))(this, newName);
	}
	template <typename R = void> R ReplaceArmingClothes(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86074))(this, newName);
	}
	template <typename R = void> R RemoveArmingClothes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86188))(this);
	}
	template <typename R = ArmingCorpseComponent*> R get_armingCorpse() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86194))(this);
	}
	template <typename R = bool> R get_hasArmingCorpse() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8621C))(this);
	}
	template <typename R = void> R AddArmingCorpse(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86228))(this, newName);
	}
	template <typename R = void> R ReplaceArmingCorpse(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8633C))(this, newName);
	}
	template <typename R = void> R RemoveArmingCorpse() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86450))(this);
	}
	template <typename R = ArmingFaceComponent*> R get_armingFace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8645C))(this);
	}
	template <typename R = bool> R get_hasArmingFace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF864E4))(this);
	}
	template <typename R = void> R AddArmingFace(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF864F0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFace(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86604))(this, newName);
	}
	template <typename R = void> R RemoveArmingFace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86718))(this);
	}
	template <typename R = ArmingFeetComponent*> R get_armingFeet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86724))(this);
	}
	template <typename R = bool> R get_hasArmingFeet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF867AC))(this);
	}
	template <typename R = void> R AddArmingFeet(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF867B8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingFeet(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF868CC))(this, newName);
	}
	template <typename R = void> R RemoveArmingFeet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF869E0))(this);
	}
	template <typename R = ArmingHairColorComponent*> R get_armingHairColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF869EC))(this);
	}
	template <typename R = bool> R get_hasArmingHairColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86A74))(this);
	}
	template <typename R = void> R AddArmingHairColor(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86A80))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHairColor(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86B94))(this, newName);
	}
	template <typename R = void> R RemoveArmingHairColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86CA8))(this);
	}
	template <typename R = ArmingHairComponent*> R get_armingHair() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86CB4))(this);
	}
	template <typename R = bool> R get_hasArmingHair() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86D3C))(this);
	}
	template <typename R = void> R AddArmingHair(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86D48))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHair(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF86E5C))(this, newName);
	}
	template <typename R = void> R RemoveArmingHair() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86F70))(this);
	}
	template <typename R = ArmingHeadComponent*> R get_armingHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF86F7C))(this);
	}
	template <typename R = bool> R get_hasArmingHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87004))(this);
	}
	template <typename R = void> R AddArmingHead(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87010))(this, newName);
	}
	template <typename R = void> R ReplaceArmingHead(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87124))(this, newName);
	}
	template <typename R = void> R RemoveArmingHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87238))(this);
	}
	template <typename R = ArmingLegsComponent*> R get_armingLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87244))(this);
	}
	template <typename R = bool> R get_hasArmingLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF872CC))(this);
	}
	template <typename R = void> R AddArmingLegs(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF872D8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingLegs(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF873EC))(this, newName);
	}
	template <typename R = void> R RemoveArmingLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87500))(this);
	}
	template <typename R = ArmingMountComponent*> R get_armingMount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8750C))(this);
	}
	template <typename R = bool> R get_hasArmingMount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87594))(this);
	}
	template <typename R = void> R AddArmingMount(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF875A0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMount(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF876B4))(this, newName);
	}
	template <typename R = void> R RemoveArmingMount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF877C8))(this);
	}
	template <typename R = ArmingMountSkill1Component*> R get_armingMountSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF877D4))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8785C))(this);
	}
	template <typename R = void> R AddArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87868))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8797C))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87A90))(this);
	}
	template <typename R = ArmingMountSkill2Component*> R get_armingMountSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87A9C))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87B24))(this);
	}
	template <typename R = void> R AddArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87B30))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87C44))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87D58))(this);
	}
	template <typename R = ArmingMountSkill3Component*> R get_armingMountSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87D64))(this);
	}
	template <typename R = bool> R get_hasArmingMountSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF87DEC))(this);
	}
	template <typename R = void> R AddArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87DF8))(this, newName);
	}
	template <typename R = void> R ReplaceArmingMountSkill3(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF87F0C))(this, newName);
	}
	template <typename R = void> R RemoveArmingMountSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88020))(this);
	}
	template <typename R = ArmingPassiveSkill1Component*> R get_armingPassiveSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8802C))(this);
	}
	template <typename R = bool> R get_hasArmingPassiveSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF880B4))(this);
	}
	template <typename R = void> R AddArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF880C0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPassiveSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF881D4))(this, newName);
	}
	template <typename R = void> R RemoveArmingPassiveSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF882E8))(this);
	}
	template <typename R = ArmingPetComponent*> R get_armingPet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF882F4))(this);
	}
	template <typename R = bool> R get_hasArmingPet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8837C))(this);
	}
	template <typename R = void> R AddArmingPet(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88388))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPet(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF8849C))(this, newName);
	}
	template <typename R = void> R RemoveArmingPet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF885B0))(this);
	}
	template <typename R = ArmingPetSkill1Component*> R get_armingPetSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF885BC))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88644))(this);
	}
	template <typename R = void> R AddArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88650))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88764))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88878))(this);
	}
	template <typename R = ArmingPetSkill2Component*> R get_armingPetSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88884))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8890C))(this);
	}
	template <typename R = void> R AddArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88918))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88A2C))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88B40))(this);
	}
	template <typename R = ArmingPetSkill3Component*> R get_armingPetSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88B4C))(this);
	}
	template <typename R = bool> R get_hasArmingPetSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88BD4))(this);
	}
	template <typename R = void> R AddArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88BE0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingPetSkill3(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF88CF4))(this, newName);
	}
	template <typename R = void> R RemoveArmingPetSkill3() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88E08))(this);
	}
	template <typename R = ArmingPocketComponent*> R get_armingPocket() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88E14))(this);
	}
	template <typename R = bool> R get_hasArmingPocket() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF88E9C))(this);
	}
	template <typename R = void> R AddArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF88EA8))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R ReplaceArmingPocket(Il2CppString* newName1, Il2CppString* newName2, Il2CppString* newName3) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF88FEC))(this, newName1, newName2, newName3);
	}
	template <typename R = void> R RemoveArmingPocket() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89130))(this);
	}
	template <typename R = ArmingRunesComponent*> R get_armingRunes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8913C))(this);
	}
	template <typename R = bool> R get_hasArmingRunes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF891C4))(this);
	}
	template <typename R = void> R AddArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF891D0))(this, newNames);
	}
	template <typename R = void> R ReplaceArmingRunes(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF892E4))(this, newNames);
	}
	template <typename R = void> R RemoveArmingRunes() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF893F8))(this);
	}
	template <typename R = ArmingSkill1Component*> R get_armingSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89404))(this);
	}
	template <typename R = bool> R get_hasArmingSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8948C))(this);
	}
	template <typename R = void> R AddArmingSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89498))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill1(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF895AC))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill1() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF896C0))(this);
	}
	template <typename R = ArmingSkill2Component*> R get_armingSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF896CC))(this);
	}
	template <typename R = bool> R get_hasArmingSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89754))(this);
	}
	template <typename R = void> R AddArmingSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89760))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkill2(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89874))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkill2() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89988))(this);
	}
	template <typename R = ArmingSkinColorComponent*> R get_armingSkinColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89994))(this);
	}
	template <typename R = bool> R get_hasArmingSkinColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89A1C))(this);
	}
	template <typename R = void> R AddArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89A28))(this, newName);
	}
	template <typename R = void> R ReplaceArmingSkinColor(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89B3C))(this, newName);
	}
	template <typename R = void> R RemoveArmingSkinColor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89C50))(this);
	}
	template <typename R = ArmingWeaponComponent*> R get_armingWeapon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89C5C))(this);
	}
	template <typename R = bool> R get_hasArmingWeapon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89CE4))(this);
	}
	template <typename R = void> R AddArmingWeapon(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89CF0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingWeapon(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF89E04))(this, newName);
	}
	template <typename R = void> R RemoveArmingWeapon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89F18))(this);
	}
	template <typename R = ArrivalTimeComponent*> R get_arrivalTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89F24))(this);
	}
	template <typename R = bool> R get_hasArrivalTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF89FAC))(this);
	}
	template <typename R = void> R AddArrivalTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF89FB8))(this, newValue);
	}
	template <typename R = void> R ReplaceArrivalTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8A0BC))(this, newValue);
	}
	template <typename R = void> R RemoveArrivalTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A1C0))(this);
	}
	template <typename R = ArrowMarkerComponent*> R get_arrowMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A1CC))(this);
	}
	template <typename R = bool> R get_hasArrowMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A254))(this);
	}
	template <typename R = void> R AddArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0xF8A260))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R ReplaceArrowMarker(Il2CppString* newAssetPath, int32_t newOrder, bool newCheckLevel, bool newCheckClosedTimer, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, bool, bool, Il2CppString*))(Il2CppBase() + 0xF8A3B8))(this, newAssetPath, newOrder, newCheckLevel, newCheckClosedTimer, newHexColor);
	}
	template <typename R = void> R RemoveArrowMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A510))(this);
	}
	template <typename R = AuraComponent*> R get_aura() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A51C))(this);
	}
	template <typename R = bool> R get_hasAura() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A5A4))(this);
	}
	template <typename R = void> R AddAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0xF8A5B0))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R ReplaceAura(Il2CppString* newActiveCondition, Il2CppString* newName, Il2CppArray<Item*>* newList, TargetsSelector* newSelector) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Item*>*, TargetsSelector*))(Il2CppBase() + 0xF8A708))(this, newActiveCondition, newName, newList, newSelector);
	}
	template <typename R = void> R RemoveAura() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A860))(this);
	}
	template <typename R = AutoAbilityComponent*> R get_autoAbility() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A86C))(this);
	}
	template <typename R = bool> R get_hasAutoAbility() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8A8F4))(this);
	}
	template <typename R = void> R AddAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(GameEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF8A900))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R ReplaceAutoAbility(float newDelay, float newPeriod, Il2CppString* newActivator, Il2CppString* newUseCondition) {
		return ((R (*)(GameEntity*, float, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF8AA3C))(this, newDelay, newPeriod, newActivator, newUseCondition);
	}
	template <typename R = void> R RemoveAutoAbility() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AB78))(this);
	}
	template <typename R = AutoDestructionComponent*> R get_autoDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AB84))(this);
	}
	template <typename R = bool> R get_hasAutoDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AC0C))(this);
	}
	template <typename R = void> R AddAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0xF8AC18))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R ReplaceAutoDestruction(Il2CppString* newEffect, Il2CppString* newCondition, int64_t newStartTime, float newTime) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, int64_t, float))(Il2CppBase() + 0xF8AD60))(this, newEffect, newCondition, newStartTime, newTime);
	}
	template <typename R = void> R RemoveAutoDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AEA8))(this);
	}
	template <typename R = AutoFarmComponent*> R get_autoFarm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AEB4))(this);
	}
	template <typename R = bool> R get_hasAutoFarm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8AF3C))(this);
	}
	template <typename R = void> R AddAutoFarm(Il2CppArray<PriceItem*>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(GameEntity*, Il2CppArray<PriceItem*>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF8AF48))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R ReplaceAutoFarm(Il2CppArray<PriceItem*>* newPrices, int32_t newPrice, int32_t newPriceStep, Il2CppString* newRandomGroup, int32_t newCount) {
		return ((R (*)(GameEntity*, Il2CppArray<PriceItem*>*, int32_t, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF8B094))(this, newPrices, newPrice, newPriceStep, newRandomGroup, newCount);
	}
	template <typename R = void> R RemoveAutoFarm() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B1E0))(this);
	}
	template <typename R = AutoLockComponent*> R get_autoLock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B1EC))(this);
	}
	template <typename R = bool> R get_hasAutoLock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B274))(this);
	}
	template <typename R = void> R AddAutoLock(int64_t newTime) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8B280))(this, newTime);
	}
	template <typename R = void> R ReplaceAutoLock(int64_t newTime) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8B384))(this, newTime);
	}
	template <typename R = void> R RemoveAutoLock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B488))(this);
	}
	template <typename R = AutoMagicSpawnerComponent*> R get_autoMagicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B494))(this);
	}
	template <typename R = bool> R get_hasAutoMagicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B51C))(this);
	}
	template <typename R = void> R AddAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8B528))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R ReplaceAutoMagicSpawner(Il2CppString* newActivator, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8B66C))(this, newActivator, newName, newNames);
	}
	template <typename R = void> R RemoveAutoMagicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B7B0))(this);
	}
	template <typename R = bool> R get_isAutoMode() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B7BC))(this);
	}
	template <typename R = void> R set_isAutoMode(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF8B7C8))(this, value);
	}
	template <typename R = bool> R get_isAutoOpenDoor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8B8E0))(this);
	}
	template <typename R = void> R set_isAutoOpenDoor(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF8B8EC))(this, value);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BA04))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF8BA10))(this, value);
	}
	template <typename R = BackPointComponent*> R get_backPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BB28))(this);
	}
	template <typename R = bool> R get_hasBackPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BBB0))(this);
	}
	template <typename R = void> R AddBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(GameEntity*, int64_t, float, float))(Il2CppBase() + 0xF8BBBC))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R ReplaceBackPoint(int64_t newBackTick, float newX, float newY) {
		return ((R (*)(GameEntity*, int64_t, float, float))(Il2CppBase() + 0xF8BCD4))(this, newBackTick, newX, newY);
	}
	template <typename R = void> R RemoveBackPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BDEC))(this);
	}
	template <typename R = BackTargetComponent*> R get_backTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BDF8))(this);
	}
	template <typename R = bool> R get_hasBackTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8BE80))(this);
	}
	template <typename R = void> R AddBackTarget(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8BE8C))(this, newId);
	}
	template <typename R = void> R ReplaceBackTarget(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8BF90))(this, newId);
	}
	template <typename R = void> R RemoveBackTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C094))(this);
	}
	template <typename R = BattleIdComponent*> R get_battleId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C0A0))(this);
	}
	template <typename R = bool> R get_hasBattleId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C128))(this);
	}
	template <typename R = void> R AddBattleId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8C134))(this, newId);
	}
	template <typename R = void> R ReplaceBattleId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8C238))(this, newId);
	}
	template <typename R = void> R RemoveBattleId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C33C))(this);
	}
	template <typename R = BattleStatisticTypeComponent*> R get_battleStatisticType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C348))(this);
	}
	template <typename R = bool> R get_hasBattleStatisticType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C3D0))(this);
	}
	template <typename R = void> R AddBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(GameEntity*, BattleStatisticType*))(Il2CppBase() + 0xF8C3DC))(this, newValue);
	}
	template <typename R = void> R ReplaceBattleStatisticType(BattleStatisticType* newValue) {
		return ((R (*)(GameEntity*, BattleStatisticType*))(Il2CppBase() + 0xF8C4E0))(this, newValue);
	}
	template <typename R = void> R RemoveBattleStatisticType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C5E4))(this);
	}
	template <typename R = BawlComponent*> R get_bawl() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C5F0))(this);
	}
	template <typename R = bool> R get_hasBawl() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C678))(this);
	}
	template <typename R = void> R AddBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0xF8C684))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R ReplaceBawl(Il2CppString* newGroup, Il2CppString* newActiveCondition, float newMinRadius, float newRadius, bool newWallTrace, float newCooldown, Il2CppArray<Item*>* newList) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, float, float, bool, float, Il2CppArray<Item*>*))(Il2CppBase() + 0xF8C7F8))(this, newGroup, newActiveCondition, newMinRadius, newRadius, newWallTrace, newCooldown, newList);
	}
	template <typename R = void> R RemoveBawl() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C96C))(this);
	}
	template <typename R = BindComponent*> R get_bind() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8C978))(this);
	}
	template <typename R = bool> R get_hasBind() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CA00))(this);
	}
	template <typename R = void> R AddBind(EntityId* newTarget) {
		return ((R (*)(GameEntity*, EntityId*))(Il2CppBase() + 0xF8CA0C))(this, newTarget);
	}
	template <typename R = void> R ReplaceBind(EntityId* newTarget) {
		return ((R (*)(GameEntity*, EntityId*))(Il2CppBase() + 0xF8CB10))(this, newTarget);
	}
	template <typename R = void> R RemoveBind() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CC14))(this);
	}
	template <typename R = BonusMaxHealthComponent*> R get_bonusMaxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CC20))(this);
	}
	template <typename R = bool> R get_hasBonusMaxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CCA8))(this);
	}
	template <typename R = void> R AddBonusMaxHealth(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF8CCB4))(this, newValue);
	}
	template <typename R = void> R ReplaceBonusMaxHealth(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF8CDB8))(this, newValue);
	}
	template <typename R = void> R RemoveBonusMaxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CEBC))(this);
	}
	template <typename R = BossOpenResourcesComponent*> R get_bossOpenResources() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CEC8))(this);
	}
	template <typename R = bool> R get_hasBossOpenResources() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8CF50))(this);
	}
	template <typename R = void> R AddBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(GameEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0xF8CF5C))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R ReplaceBossOpenResources(CurrencyType* newPersonalReward, int32_t newPointsToOpenPortal, int32_t newSilverToProgress, Il2CppArray<Il2CppString*>* newOpenPortalItems, Il2CppArray<BossResource*>* newBosses) {
		return ((R (*)(GameEntity*, CurrencyType*, int32_t, int32_t, Il2CppArray<Il2CppString*>*, Il2CppArray<BossResource*>*))(Il2CppBase() + 0xF8D0A8))(this, newPersonalReward, newPointsToOpenPortal, newSilverToProgress, newOpenPortalItems, newBosses);
	}
	template <typename R = void> R RemoveBossOpenResources() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D1F4))(this);
	}
	template <typename R = BossOpenStateComponent*> R get_bossOpenState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D200))(this);
	}
	template <typename R = bool> R get_hasBossOpenState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D288))(this);
	}
	template <typename R = void> R AddBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((R (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0xF8D294))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R ReplaceBossOpenState(int32_t newOpenPortalProgress, bool newIsPortalOpen, Il2CppString* newCurrentOpenBoss, Il2CppList<BossState*>* newStates) {
		return ((R (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppList<BossState*>*))(Il2CppBase() + 0xF8D3D8))(this, newOpenPortalProgress, newIsPortalOpen, newCurrentOpenBoss, newStates);
	}
	template <typename R = void> R RemoveBossOpenState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D51C))(this);
	}
	template <typename R = BuildGroupComponent*> R get_buildGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D528))(this);
	}
	template <typename R = bool> R get_hasBuildGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D594))(this);
	}
	template <typename R = void> R AddBuildGroup(Il2CppArray<BuildInstance*>* newList) {
		return ((R (*)(GameEntity*, Il2CppArray<BuildInstance*>*))(Il2CppBase() + 0xF8D5A0))(this, newList);
	}
	template <typename R = void> R ReplaceBuildGroup(Il2CppArray<BuildInstance*>* newList) {
		return ((R (*)(GameEntity*, Il2CppArray<BuildInstance*>*))(Il2CppBase() + 0xF8D698))(this, newList);
	}
	template <typename R = void> R RemoveBuildGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D790))(this);
	}
	template <typename R = BuildPlaceComponent*> R get_buildPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D79C))(this);
	}
	template <typename R = bool> R get_hasBuildPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8D824))(this);
	}
	template <typename R = void> R AddBuildPlace(Fill* newFill) {
		return ((R (*)(GameEntity*, Fill*))(Il2CppBase() + 0xF8D830))(this, newFill);
	}
	template <typename R = void> R ReplaceBuildPlace(Fill* newFill) {
		return ((R (*)(GameEntity*, Fill*))(Il2CppBase() + 0xF8D934))(this, newFill);
	}
	template <typename R = void> R RemoveBuildPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8DA38))(this);
	}
	template <typename R = BuilderComponent*> R get_builder() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8DA44))(this);
	}
	template <typename R = bool> R get_hasBuilder() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8DACC))(this);
	}
	template <typename R = void> R AddBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<Resource*>* newResources) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<Resource*>*))(Il2CppBase() + 0xF8DAD8))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R ReplaceBuilder(Il2CppString* newEntityName, Il2CppString* newGhostEntityName, Il2CppString* newUpgrade, Il2CppString* newDestroyEntityName, Il2CppString* newTakeCondition, uint8_t newOrientation, bool newOnBorder, bool newNoRotation, bool newNoPickup, bool newNoMove, bool newCanDisassemble, bool newOneInCell, bool newOnGround, uint8_t newSizeX, uint8_t newSizeY, bool newCheckerboard, bool newHidden, bool newRepair, bool newMakeEnemy, BuildEntityType* newType, BuilderMode* newBuilderMode, Il2CppArray<Resource*>* newResources) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, uint8_t, bool, bool, bool, bool, bool, bool, bool, uint8_t, uint8_t, bool, bool, bool, bool, BuildEntityType*, BuilderMode*, Il2CppArray<Resource*>*))(Il2CppBase() + 0xF8DD70))(this, newEntityName, newGhostEntityName, newUpgrade, newDestroyEntityName, newTakeCondition, newOrientation, newOnBorder, newNoRotation, newNoPickup, newNoMove, newCanDisassemble, newOneInCell, newOnGround, newSizeX, newSizeY, newCheckerboard, newHidden, newRepair, newMakeEnemy, newType, newBuilderMode, newResources);
	}
	template <typename R = void> R RemoveBuilder() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E008))(this);
	}
	template <typename R = CampBathComponent*> R get_campBath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E014))(this);
	}
	template <typename R = bool> R get_hasCampBath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E09C))(this);
	}
	template <typename R = void> R AddCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(GameEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0xF8E0A8))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R ReplaceCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(GameEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0xF8E1CC))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R RemoveCampBath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E2F0))(this);
	}
	template <typename R = bool> R get_CanTravel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E2FC))(this);
	}
	template <typename R = void> R set_CanTravel(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF8E308))(this, value);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E420))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E4A8))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8E4B4))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF8E5B8))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E6BC))(this);
	}
	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E6C8))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E750))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xF8E75C))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xF8E860))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E964))(this);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E970))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8E9F8))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8EA04))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8EB3C))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8EC74))(this);
	}
	template <typename R = ChestMarkerComponent*> R get_chestMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8EC80))(this);
	}
	template <typename R = bool> R get_hasChestMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8ED08))(this);
	}
	template <typename R = void> R AddChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0xF8ED14))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R ReplaceChestMarker(int32_t newSlotIndex, Il2CppString* newItemName) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*))(Il2CppBase() + 0xF8EE30))(this, newSlotIndex, newItemName);
	}
	template <typename R = void> R RemoveChestMarker() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8EF4C))(this);
	}
	template <typename R = ChestOnDeathComponent*> R get_chestOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8EF58))(this);
	}
	template <typename R = bool> R get_hasChestOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8EFE0))(this);
	}
	template <typename R = void> R AddChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(GameEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0xF8EFEC))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R ReplaceChestOnDeath(float newChance, Il2CppString* newRandomGroup, Il2CppString* newCorpse, Il2CppString* newPersonalCorpse, bool newFromInventory, bool newDrop, PersonalDrop* newAdditionalPersonalDrop) {
		return ((R (*)(GameEntity*, float, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool, PersonalDrop*))(Il2CppBase() + 0xF8F174))(this, newChance, newRandomGroup, newCorpse, newPersonalCorpse, newFromInventory, newDrop, newAdditionalPersonalDrop);
	}
	template <typename R = void> R RemoveChestOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F2FC))(this);
	}
	template <typename R = ChildsComponent*> R get_childs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F308))(this);
	}
	template <typename R = bool> R get_hasChilds() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F390))(this);
	}
	template <typename R = void> R AddChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8F39C))(this, newSlots);
	}
	template <typename R = void> R ReplaceChilds(Il2CppArray<Il2CppString*>* newSlots) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF8F4B0))(this, newSlots);
	}
	template <typename R = void> R RemoveChilds() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F5C4))(this);
	}
	template <typename R = ChooseCreatureComponent*> R get_chooseCreature() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F5D0))(this);
	}
	template <typename R = bool> R get_hasChooseCreature() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F658))(this);
	}
	template <typename R = void> R AddChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0xF8F664))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R ReplaceChooseCreature(Il2CppString* newRandomGroup, bool newForceSpawn) {
		return ((R (*)(GameEntity*, Il2CppString*, bool))(Il2CppBase() + 0xF8F784))(this, newRandomGroup, newForceSpawn);
	}
	template <typename R = void> R RemoveChooseCreature() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F8A4))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F8B0))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8F938))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8F944))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FA48))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FB4C))(this);
	}
	template <typename R = ClanPersonalComponent*> R get_clanPersonal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FB58))(this);
	}
	template <typename R = bool> R get_hasClanPersonal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FBE0))(this);
	}
	template <typename R = void> R AddClanPersonal(int64_t newClanId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FBEC))(this, newClanId);
	}
	template <typename R = void> R ReplaceClanPersonal(int64_t newClanId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF8FCF0))(this, newClanId);
	}
	template <typename R = void> R RemoveClanPersonal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FDF4))(this);
	}
	template <typename R = ClanPersonalGeneratorComponent*> R get_clanPersonalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FE00))(this);
	}
	template <typename R = bool> R get_hasClanPersonalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF8FE88))(this);
	}
	template <typename R = void> R AddClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xF8FE94))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplaceClanPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xF8FFF0))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemoveClanPersonalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9014C))(this);
	}
	template <typename R = bool> R get_isClick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90158))(this);
	}
	template <typename R = void> R set_isClick(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF90164))(this, value);
	}
	template <typename R = ClosedDurationComponent*> R get_closedDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9027C))(this);
	}
	template <typename R = bool> R get_hasClosedDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90304))(this);
	}
	template <typename R = void> R AddClosedDuration(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF90310))(this, newValue);
	}
	template <typename R = void> R ReplaceClosedDuration(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF90414))(this, newValue);
	}
	template <typename R = void> R RemoveClosedDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90518))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90524))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF905AC))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF905B8))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF906BC))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF907C0))(this);
	}
	template <typename R = CorpseDestructionComponent*> R get_corpseDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF907CC))(this);
	}
	template <typename R = bool> R get_hasCorpseDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90854))(this);
	}
	template <typename R = void> R AddCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0xF90860))(this, newValues);
	}
	template <typename R = void> R ReplaceCorpseDestruction(Il2CppArray<LevelTime*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<LevelTime*>*))(Il2CppBase() + 0xF90974))(this, newValues);
	}
	template <typename R = void> R RemoveCorpseDestruction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90A88))(this);
	}
	template <typename R = CostumeChestComponent*> R get_costumeChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90A94))(this);
	}
	template <typename R = bool> R get_hasCostumeChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90B1C))(this);
	}
	template <typename R = void> R AddCostumeChest(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90B28))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeChest(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90C3C))(this, newName);
	}
	template <typename R = void> R RemoveCostumeChest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90D50))(this);
	}
	template <typename R = CostumeHeadComponent*> R get_costumeHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90D5C))(this);
	}
	template <typename R = bool> R get_hasCostumeHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF90DE4))(this);
	}
	template <typename R = void> R AddCostumeHead(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90DF0))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeHead(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF90F04))(this, newName);
	}
	template <typename R = void> R RemoveCostumeHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91018))(this);
	}
	template <typename R = CostumeLegsComponent*> R get_costumeLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91024))(this);
	}
	template <typename R = bool> R get_hasCostumeLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF910AC))(this);
	}
	template <typename R = void> R AddCostumeLegs(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF910B8))(this, newName);
	}
	template <typename R = void> R ReplaceCostumeLegs(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF911CC))(this, newName);
	}
	template <typename R = void> R RemoveCostumeLegs() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF912E0))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF912EC))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91374))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF91380))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF91484))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91588))(this);
	}
	template <typename R = CoverComponent*> R get_cover() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91594))(this);
	}
	template <typename R = bool> R get_hasCover() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9161C))(this);
	}
	template <typename R = void> R AddCover(Il2CppString* newEffectName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF91628))(this, newEffectName);
	}
	template <typename R = void> R ReplaceCover(Il2CppString* newEffectName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9173C))(this, newEffectName);
	}
	template <typename R = void> R RemoveCover() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91850))(this);
	}
	template <typename R = CoverRadiusComponent*> R get_coverRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9185C))(this);
	}
	template <typename R = bool> R get_hasCoverRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF918E4))(this);
	}
	template <typename R = void> R AddCoverRadius(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF918F0))(this, newValue);
	}
	template <typename R = void> R ReplaceCoverRadius(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF919F4))(this, newValue);
	}
	template <typename R = void> R RemoveCoverRadius() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91AF8))(this);
	}
	template <typename R = CraftBoostComponent*> R get_craftBoost() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91B04))(this);
	}
	template <typename R = bool> R get_hasCraftBoost() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91B8C))(this);
	}
	template <typename R = void> R AddCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(GameEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0xF91B98))(this, newList);
	}
	template <typename R = void> R ReplaceCraftBoost(Il2CppList<ConditionBoost*>* newList) {
		return ((R (*)(GameEntity*, Il2CppList<ConditionBoost*>*))(Il2CppBase() + 0xF91CAC))(this, newList);
	}
	template <typename R = void> R RemoveCraftBoost() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91DC0))(this);
	}
	template <typename R = CraftWorkComponent*> R get_craftWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91DCC))(this);
	}
	template <typename R = bool> R get_hasCraftWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF91E54))(this);
	}
	template <typename R = void> R AddCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(GameEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0xF91E60))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R ReplaceCraftWork(Il2CppString* newRecipe, int64_t newTime, Il2CppString* newFuel, int64_t newFuelTime, float newBoost, bool newIsBlocked, int64_t newBlockTime) {
		return ((R (*)(GameEntity*, Il2CppString*, int64_t, Il2CppString*, int64_t, float, bool, int64_t))(Il2CppBase() + 0xF91FCC))(this, newRecipe, newTime, newFuel, newFuelTime, newBoost, newIsBlocked, newBlockTime);
	}
	template <typename R = void> R RemoveCraftWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92138))(this);
	}
	template <typename R = CreateInventoryComponent*> R get_createInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92144))(this);
	}
	template <typename R = bool> R get_hasCreateInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF921CC))(this);
	}
	template <typename R = void> R AddCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF921D8))(this, newRandomGroup);
	}
	template <typename R = void> R ReplaceCreateInventory(Il2CppString* newRandomGroup) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF922EC))(this, newRandomGroup);
	}
	template <typename R = void> R RemoveCreateInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92400))(this);
	}
	template <typename R = CreateUniqueInventoryComponent*> R get_createUniqueInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9240C))(this);
	}
	template <typename R = bool> R get_hasCreateUniqueInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92494))(this);
	}
	template <typename R = void> R AddCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF924A0))(this, newRandomGroups);
	}
	template <typename R = void> R ReplaceCreateUniqueInventory(Il2CppArray<Il2CppString*>* newRandomGroups) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF925B4))(this, newRandomGroups);
	}
	template <typename R = void> R RemoveCreateUniqueInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF926C8))(this);
	}
	template <typename R = CreationTimeComponent*> R get_creationTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF926D4))(this);
	}
	template <typename R = bool> R get_hasCreationTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9275C))(this);
	}
	template <typename R = void> R AddCreationTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF92768))(this, newValue);
	}
	template <typename R = void> R ReplaceCreationTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9286C))(this, newValue);
	}
	template <typename R = void> R RemoveCreationTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92970))(this);
	}
	template <typename R = bool> R get_isCreep() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9297C))(this);
	}
	template <typename R = void> R set_isCreep(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF92988))(this, value);
	}
	template <typename R = CurrentRoofComponent*> R get_currentRoof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92AA0))(this);
	}
	template <typename R = bool> R get_hasCurrentRoof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92B28))(this);
	}
	template <typename R = void> R AddCurrentRoof(int32_t newIndex) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF92B34))(this, newIndex);
	}
	template <typename R = void> R ReplaceCurrentRoof(int32_t newIndex) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF92C38))(this, newIndex);
	}
	template <typename R = void> R RemoveCurrentRoof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92D3C))(this);
	}
	template <typename R = CustomStoreComponent*> R get_customStore() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92D48))(this);
	}
	template <typename R = bool> R get_hasCustomStore() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF92DD0))(this);
	}
	template <typename R = void> R AddCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xF92DDC))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R ReplaceCustomStore(Il2CppString* newNPC_Icon, Il2CppString* newNPC_Name, Il2CppString* newNPC_Icon_Back, Il2CppString* newNPC_Text, Il2CppString* newNPC_Done_Text, Il2CppString* newTracery_Icon, Il2CppString* newLogo_Icon, int32_t newLogo_PosXDelta, Il2CppString* newBackgroundTileImage, bool newRightAlignment, Il2CppString* newTempBuffName, Il2CppString* newMainColor, Il2CppString* newBottomColor, Il2CppString* newProgressColor, Il2CppString* newTextColor, Il2CppString* newLockedTextColor, int32_t newUpdateStorePrice, Il2CppString* newBestRewardsRGNormal, Il2CppString* newBestRewardsRGPremium, Il2CppString* newAnalyticsEventName, StoreCategory* newStoreCategory, Il2CppList<Il2CppString*>* newCurrencies, Il2CppList<Il2CppString*>* newCurrenciesIcon) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, StoreCategory*, Il2CppList<Il2CppString*>*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0xF930E4))(this, newNPC_Icon, newNPC_Name, newNPC_Icon_Back, newNPC_Text, newNPC_Done_Text, newTracery_Icon, newLogo_Icon, newLogo_PosXDelta, newBackgroundTileImage, newRightAlignment, newTempBuffName, newMainColor, newBottomColor, newProgressColor, newTextColor, newLockedTextColor, newUpdateStorePrice, newBestRewardsRGNormal, newBestRewardsRGPremium, newAnalyticsEventName, newStoreCategory, newCurrencies, newCurrenciesIcon);
	}
	template <typename R = void> R RemoveCustomStore() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF933EC))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF933F8))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93480))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9348C))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93590))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93694))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF936A0))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93728))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93734))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93838))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9393C))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93948))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF939D0))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF939DC))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF93AE0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93BE4))(this);
	}
	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93BF0))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93C78))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF93C84))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF93D88))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93E8C))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93E98))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF93F20))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(GameEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF93F2C))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType* newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(GameEntity*, DamageStatType*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0xF940F0))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF942B4))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF942C0))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94348))(this);
	}
	template <typename R = void> R AddDamageType(DamageType* newValue) {
		return ((R (*)(GameEntity*, DamageType*))(Il2CppBase() + 0xF94354))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType* newValue) {
		return ((R (*)(GameEntity*, DamageType*))(Il2CppBase() + 0xF94458))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9455C))(this);
	}
	template <typename R = DefaultGradeComponent*> R get_defaultGrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94568))(this);
	}
	template <typename R = bool> R get_hasDefaultGrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF945F0))(this);
	}
	template <typename R = void> R AddDefaultGrade(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF945FC))(this, newValue);
	}
	template <typename R = void> R ReplaceDefaultGrade(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF94700))(this, newValue);
	}
	template <typename R = void> R RemoveDefaultGrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94804))(this);
	}
	template <typename R = DefaultVectorFieldComponent*> R get_defaultVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94810))(this);
	}
	template <typename R = bool> R get_hasDefaultVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94898))(this);
	}
	template <typename R = void> R AddDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF948A4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceDefaultVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF949D4))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveDefaultVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94B04))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94B10))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94B98))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF94BA4))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF94CA8))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94DAC))(this);
	}
	template <typename R = DescriptionComponent*> R get_description() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94DB8))(this);
	}
	template <typename R = bool> R get_hasDescription() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF94E40))(this);
	}
	template <typename R = void> R AddDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF94E4C))(this, newCaption, newText);
	}
	template <typename R = void> R ReplaceDescription(Il2CppString* newCaption, Il2CppString* newText) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF94F74))(this, newCaption, newText);
	}
	template <typename R = void> R RemoveDescription() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9509C))(this);
	}
	template <typename R = DestroyOnDeathComponent*> R get_destroyOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF950A8))(this);
	}
	template <typename R = bool> R get_hasDestroyOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95130))(this);
	}
	template <typename R = void> R AddDestroyOnDeath(bool newInstantly) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9513C))(this, newInstantly);
	}
	template <typename R = void> R ReplaceDestroyOnDeath(bool newInstantly) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF95244))(this, newInstantly);
	}
	template <typename R = void> R RemoveDestroyOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9534C))(this);
	}
	template <typename R = DifficultyComponent*> R get_difficulty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95358))(this);
	}
	template <typename R = bool> R get_hasDifficulty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF953E0))(this);
	}
	template <typename R = void> R AddDifficulty(Difficulty* newType) {
		return ((R (*)(GameEntity*, Difficulty*))(Il2CppBase() + 0xF953EC))(this, newType);
	}
	template <typename R = void> R ReplaceDifficulty(Difficulty* newType) {
		return ((R (*)(GameEntity*, Difficulty*))(Il2CppBase() + 0xF954F0))(this, newType);
	}
	template <typename R = void> R RemoveDifficulty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF955F4))(this);
	}
	template <typename R = bool> R get_isDisabled() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95600))(this);
	}
	template <typename R = void> R set_isDisabled(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9560C))(this, value);
	}
	template <typename R = DistanceComponent*> R get_distance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95724))(this);
	}
	template <typename R = bool> R get_hasDistance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF957AC))(this);
	}
	template <typename R = void> R AddDistance(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF957B8))(this, newValue);
	}
	template <typename R = void> R ReplaceDistance(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF958BC))(this, newValue);
	}
	template <typename R = void> R RemoveDistance() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF959C0))(this);
	}
	template <typename R = DoorWallComponent*> R get_doorWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF959CC))(this);
	}
	template <typename R = bool> R get_hasDoorWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95A54))(this);
	}
	template <typename R = void> R AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xF95A60))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xF95B88))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R RemoveDoorWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95CB0))(this);
	}
	template <typename R = bool> R get_isDragged() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95CBC))(this);
	}
	template <typename R = void> R set_isDragged(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF95CC8))(this, value);
	}
	template <typename R = DurabilityDamageComponent*> R get_durabilityDamage() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95DE0))(this);
	}
	template <typename R = bool> R get_hasDurabilityDamage() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF95E68))(this);
	}
	template <typename R = void> R AddDurabilityDamage(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF95E74))(this, newValue);
	}
	template <typename R = void> R ReplaceDurabilityDamage(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF95F78))(this, newValue);
	}
	template <typename R = void> R RemoveDurabilityDamage() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9607C))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96088))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96110))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF9611C))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF96220))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96324))(this);
	}
	template <typename R = EndTimeComponent*> R get_endTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96330))(this);
	}
	template <typename R = bool> R get_hasEndTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF963B8))(this);
	}
	template <typename R = void> R AddEndTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF963C4))(this, newValue);
	}
	template <typename R = void> R ReplaceEndTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF964C8))(this, newValue);
	}
	template <typename R = void> R RemoveEndTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF965CC))(this);
	}
	template <typename R = EnergyComponent*> R get_energy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF965D8))(this);
	}
	template <typename R = bool> R get_hasEnergy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96660))(this);
	}
	template <typename R = void> R AddEnergy(int64_t newTick) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9666C))(this, newTick);
	}
	template <typename R = void> R ReplaceEnergy(int64_t newTick) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF96770))(this, newTick);
	}
	template <typename R = void> R RemoveEnergy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96874))(this);
	}
	template <typename R = EnterConditionComponent*> R get_enterCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96880))(this);
	}
	template <typename R = bool> R get_hasEnterCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96908))(this);
	}
	template <typename R = void> R AddEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0xF96914))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceEnterCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0xF96A64))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveEnterCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96BB4))(this);
	}
	template <typename R = EnterQuestsComponent*> R get_enterQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96BC0))(this);
	}
	template <typename R = bool> R get_hasEnterQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96C48))(this);
	}
	template <typename R = void> R AddEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF96C54))(this, newValues);
	}
	template <typename R = void> R ReplaceEnterQuests(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xF96D68))(this, newValues);
	}
	template <typename R = void> R RemoveEnterQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96E7C))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96E88))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF96F10))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF96F1C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97020))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97124))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97130))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF971B8))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF971C4))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF972C8))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF973CC))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF973D8))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97460))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9746C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97570))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97674))(this);
	}
	template <typename R = EventTagComponent*> R get_eventTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97680))(this);
	}
	template <typename R = bool> R get_hasEventTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97708))(this);
	}
	template <typename R = void> R AddEventTag(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF97714))(this, newValue);
	}
	template <typename R = void> R ReplaceEventTag(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF97828))(this, newValue);
	}
	template <typename R = void> R RemoveEventTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9793C))(this);
	}
	template <typename R = ExplodeComponent*> R get_explode() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97948))(this);
	}
	template <typename R = bool> R get_hasExplode() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF979D0))(this);
	}
	template <typename R = void> R AddExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(GameEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0xF979DC))(this, newItem, newType);
	}
	template <typename R = void> R ReplaceExplode(Il2CppString* newItem, ExplodeType* newType) {
		return ((R (*)(GameEntity*, Il2CppString*, ExplodeType*))(Il2CppBase() + 0xF97AF8))(this, newItem, newType);
	}
	template <typename R = void> R RemoveExplode() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97C14))(this);
	}
	template <typename R = bool> R get_isExplodeOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97C20))(this);
	}
	template <typename R = void> R set_isExplodeOnDeath(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF97C2C))(this, value);
	}
	template <typename R = bool> R get_isExternalInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97D44))(this);
	}
	template <typename R = void> R set_isExternalInventory(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF97D50))(this, value);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97E68))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF97EF0))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF97EFC))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF98000))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98104))(this);
	}
	template <typename R = ExtractWorkComponent*> R get_extractWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98110))(this);
	}
	template <typename R = bool> R get_hasExtractWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98198))(this);
	}
	template <typename R = void> R AddExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(GameEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0xF981A4))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R ReplaceExtractWork(int64_t newStartTime, float newRewardCount, int32_t newResourceCount, float newRobbedResult, int64_t newRobbedTime, int64_t newRobberId) {
		return ((R (*)(GameEntity*, int64_t, float, int32_t, float, int64_t, int64_t))(Il2CppBase() + 0xF982DC))(this, newStartTime, newRewardCount, newResourceCount, newRobbedResult, newRobbedTime, newRobberId);
	}
	template <typename R = void> R RemoveExtractWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98414))(this);
	}
	template <typename R = bool> R get_isFakeBase() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98420))(this);
	}
	template <typename R = void> R set_isFakeBase(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9842C))(this, value);
	}
	template <typename R = FakeClanNameComponent*> R get_fakeClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98544))(this);
	}
	template <typename R = bool> R get_hasFakeClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF985CC))(this);
	}
	template <typename R = void> R AddFakeClanName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF985D8))(this, newValue);
	}
	template <typename R = void> R ReplaceFakeClanName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF986EC))(this, newValue);
	}
	template <typename R = void> R RemoveFakeClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98800))(this);
	}
	template <typename R = FloorComponent*> R get_floor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9880C))(this);
	}
	template <typename R = bool> R get_hasFloor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98894))(this);
	}
	template <typename R = void> R AddFloor(Il2CppString* newRoof) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF988A0))(this, newRoof);
	}
	template <typename R = void> R ReplaceFloor(Il2CppString* newRoof) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF989B4))(this, newRoof);
	}
	template <typename R = void> R RemoveFloor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98AC8))(this);
	}
	template <typename R = FogComponent*> R get_fog() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98AD4))(this);
	}
	template <typename R = bool> R get_hasFog() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98B5C))(this);
	}
	template <typename R = void> R AddFog(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF98B68))(this, newName);
	}
	template <typename R = void> R ReplaceFog(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF98C7C))(this, newName);
	}
	template <typename R = void> R RemoveFog() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98D90))(this);
	}
	template <typename R = FollowComponent*> R get_follow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98D9C))(this);
	}
	template <typename R = bool> R get_hasFollow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF98E24))(this);
	}
	template <typename R = void> R AddFollow(float newSpeed) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF98E30))(this, newSpeed);
	}
	template <typename R = void> R ReplaceFollow(float newSpeed) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF98F34))(this, newSpeed);
	}
	template <typename R = void> R RemoveFollow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99038))(this);
	}
	template <typename R = bool> R get_isFollowTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99044))(this);
	}
	template <typename R = void> R set_isFollowTarget(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF99050))(this, value);
	}
	template <typename R = GameDataComponent*> R get_gameData() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF80BD8))(this);
	}
	template <typename R = bool> R get_hasGameData() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF80BCC))(this);
	}
	template <typename R = void> R AddGameData(Il2CppString* newName, GameDataEntity* newDataEntity) {
		return ((R (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF99168))(this, newName, newDataEntity);
	}
	template <typename R = void> R ReplaceGameData(Il2CppString* newName, GameDataEntity* newDataEntity) {
		return ((R (*)(GameEntity*, Il2CppString*, GameDataEntity*))(Il2CppBase() + 0xF80CAC))(this, newName, newDataEntity);
	}
	template <typename R = void> R RemoveGameData() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99290))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9929C))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99324))(this);
	}
	template <typename R = void> R AddGender(Gender* newType) {
		return ((R (*)(GameEntity*, Gender*))(Il2CppBase() + 0xF99330))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender* newType) {
		return ((R (*)(GameEntity*, Gender*))(Il2CppBase() + 0xF99434))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99538))(this);
	}
	template <typename R = GenerateWallComponent*> R get_generateWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99544))(this);
	}
	template <typename R = bool> R get_hasGenerateWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF995CC))(this);
	}
	template <typename R = void> R AddGenerateWall(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF995D8))(this, newName);
	}
	template <typename R = void> R ReplaceGenerateWall(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF996EC))(this, newName);
	}
	template <typename R = void> R RemoveGenerateWall() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99800))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9980C))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99894))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF998A0))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF999A4))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99AA8))(this);
	}
	template <typename R = GradeComponent*> R get_grade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99AB4))(this);
	}
	template <typename R = bool> R get_hasGrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99B3C))(this);
	}
	template <typename R = void> R AddGrade(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99B48))(this, newValue);
	}
	template <typename R = void> R ReplaceGrade(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99C4C))(this, newValue);
	}
	template <typename R = void> R RemoveGrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99D50))(this);
	}
	template <typename R = GradeFromLocationComponent*> R get_gradeFromLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99D5C))(this);
	}
	template <typename R = bool> R get_hasGradeFromLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99DE4))(this);
	}
	template <typename R = void> R AddGradeFromLocation(int32_t newOffset) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99DF0))(this, newOffset);
	}
	template <typename R = void> R ReplaceGradeFromLocation(int32_t newOffset) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF99EF4))(this, newOffset);
	}
	template <typename R = void> R RemoveGradeFromLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF99FF8))(this);
	}
	template <typename R = GradeHideComponent*> R get_gradeHide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A004))(this);
	}
	template <typename R = bool> R get_hasGradeHide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A08C))(this);
	}
	template <typename R = void> R AddGradeHide(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A098))(this, newValue);
	}
	template <typename R = void> R ReplaceGradeHide(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A19C))(this, newValue);
	}
	template <typename R = void> R RemoveGradeHide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A2A0))(this);
	}
	template <typename R = GradeViewComponent*> R get_gradeView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A2AC))(this);
	}
	template <typename R = bool> R get_hasGradeView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A334))(this);
	}
	template <typename R = void> R AddGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF9A340))(this, newValues);
	}
	template <typename R = void> R ReplaceGradeView(Il2CppArray<int32_t>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF9A454))(this, newValues);
	}
	template <typename R = void> R RemoveGradeView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A568))(this);
	}
	template <typename R = GroupChildComponent*> R get_groupChild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A574))(this);
	}
	template <typename R = bool> R get_hasGroupChild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A5FC))(this);
	}
	template <typename R = void> R AddGroupChild(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A608))(this, newId);
	}
	template <typename R = void> R ReplaceGroupChild(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9A70C))(this, newId);
	}
	template <typename R = void> R RemoveGroupChild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A810))(this);
	}
	template <typename R = GroupComponent*> R get_group() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A81C))(this);
	}
	template <typename R = bool> R get_hasGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9A8A4))(this);
	}
	template <typename R = void> R AddGroup(Il2CppArray<Slot*>* newSlots) {
		return ((R (*)(GameEntity*, Il2CppArray<Slot*>*))(Il2CppBase() + 0xF9A8B0))(this, newSlots);
	}
	template <typename R = void> R ReplaceGroup(Il2CppArray<Slot*>* newSlots) {
		return ((R (*)(GameEntity*, Il2CppArray<Slot*>*))(Il2CppBase() + 0xF9A9C4))(this, newSlots);
	}
	template <typename R = void> R RemoveGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AAD8))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AAE4))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AB6C))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AB78))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AC7C))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AD80))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AD8C))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9AE14))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AE20))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9AF24))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B028))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B034))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B0BC))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B0C8))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B1CC))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B2D0))(this);
	}
	template <typename R = GuildTagComponent*> R get_guildTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B2DC))(this);
	}
	template <typename R = bool> R get_hasGuildTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B364))(this);
	}
	template <typename R = void> R AddGuildTag(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9B370))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildTag(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9B484))(this, newValue);
	}
	template <typename R = void> R RemoveGuildTag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B598))(this);
	}
	template <typename R = HashPositionComponent*> R get_hashPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B5A4))(this);
	}
	template <typename R = bool> R get_hasHashPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B62C))(this);
	}
	template <typename R = void> R AddHashPosition(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B638))(this, newValue);
	}
	template <typename R = void> R ReplaceHashPosition(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9B73C))(this, newValue);
	}
	template <typename R = void> R RemoveHashPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B840))(this);
	}
	template <typename R = HealthCoefComponent*> R get_healthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B84C))(this);
	}
	template <typename R = bool> R get_hasHealthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9B8D4))(this);
	}
	template <typename R = void> R AddHealthCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF9B8E0))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF9B9E4))(this, newValue);
	}
	template <typename R = void> R RemoveHealthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BAE8))(this);
	}
	template <typename R = bool> R get_isHideBag() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BAF4))(this);
	}
	template <typename R = void> R set_isHideBag(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BB00))(this, value);
	}
	template <typename R = HideComponent*> R get_hide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BC18))(this);
	}
	template <typename R = bool> R get_hasHide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BCA0))(this);
	}
	template <typename R = void> R AddHide(HIDEFLAG* newFlag) {
		return ((R (*)(GameEntity*, HIDEFLAG*))(Il2CppBase() + 0xF9BCAC))(this, newFlag);
	}
	template <typename R = void> R ReplaceHide(HIDEFLAG* newFlag) {
		return ((R (*)(GameEntity*, HIDEFLAG*))(Il2CppBase() + 0xF9BDB0))(this, newFlag);
	}
	template <typename R = void> R RemoveHide() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BEB4))(this);
	}
	template <typename R = bool> R get_isHideHead() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BEC0))(this);
	}
	template <typename R = void> R set_isHideHead(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BECC))(this, value);
	}
	template <typename R = bool> R get_isHidePet() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9BFE4))(this);
	}
	template <typename R = void> R set_isHidePet(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9BFF0))(this, value);
	}
	template <typename R = IconComponent*> R get_icon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C108))(this);
	}
	template <typename R = bool> R get_hasIcon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C190))(this);
	}
	template <typename R = void> R AddIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9C19C))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R ReplaceIcon(Il2CppString* newAssetPath, Il2CppString* newBackAssetPath, Il2CppString* newOverlayAssetPath, Il2CppString* newOverlay2AssetPath) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9C2F4))(this, newAssetPath, newBackAssetPath, newOverlayAssetPath, newOverlay2AssetPath);
	}
	template <typename R = void> R RemoveIcon() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C44C))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81024))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF81018))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9C458))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9C55C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C660))(this);
	}
	template <typename R = IgnoreDoorVectorFieldComponent*> R get_ignoreDoorVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C66C))(this);
	}
	template <typename R = bool> R get_hasIgnoreDoorVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C6F4))(this);
	}
	template <typename R = void> R AddIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF9C700))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R ReplaceIgnoreDoorVectorField(int32_t newWidth, int32_t newHeight, int32_t newOffsetX, int32_t newOffsetY, bool newIsDirty) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int32_t, int32_t, bool))(Il2CppBase() + 0xF9C830))(this, newWidth, newHeight, newOffsetX, newOffsetY, newIsDirty);
	}
	template <typename R = void> R RemoveIgnoreDoorVectorField() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C960))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C96C))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9C9F4))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9CA00))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9CB04))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CC08))(this);
	}
	template <typename R = InteractTargetComponent*> R get_interactTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CC14))(this);
	}
	template <typename R = bool> R get_hasInteractTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CC9C))(this);
	}
	template <typename R = void> R AddInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(GameEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0xF9CCA8))(this, newId, newPosition);
	}
	template <typename R = void> R ReplaceInteractTarget(int32_t newId, Nullable1Vec2*>* newPosition) {
		return ((R (*)(GameEntity*, int32_t, Nullable1Vec2*>*))(Il2CppBase() + 0xF9CDC4))(this, newId, newPosition);
	}
	template <typename R = void> R RemoveInteractTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CEE0))(this);
	}
	template <typename R = InventoryComponent*> R get_inventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CEEC))(this);
	}
	template <typename R = bool> R get_hasInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9CF74))(this);
	}
	template <typename R = void> R AddInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xF9CF80))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceInventory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xF9D0B8))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveInventory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D1F0))(this);
	}
	template <typename R = InventoryContentComponent*> R get_inventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D1FC))(this);
	}
	template <typename R = bool> R get_hasInventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D284))(this);
	}
	template <typename R = void> R AddInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0xF9D290))(this, newData);
	}
	template <typename R = void> R ReplaceInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0xF9D3A4))(this, newData);
	}
	template <typename R = void> R RemoveInventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D4B8))(this);
	}
	template <typename R = bool> R get_isInventoryLocked() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D4C4))(this);
	}
	template <typename R = void> R set_isInventoryLocked(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xF9D4D0))(this, value);
	}
	template <typename R = KilledByComponent*> R get_killedBy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D5E8))(this);
	}
	template <typename R = bool> R get_hasKilledBy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D670))(this);
	}
	template <typename R = void> R AddKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9D67C))(this, newId, newName, newItemName);
	}
	template <typename R = void> R ReplaceKilledBy(int32_t newId, Il2CppString* newName, Il2CppString* newItemName) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9D7B4))(this, newId, newName, newItemName);
	}
	template <typename R = void> R RemoveKilledBy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D8EC))(this);
	}
	template <typename R = LastActionTickComponent*> R get_lastActionTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D8F8))(this);
	}
	template <typename R = bool> R get_hasLastActionTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9D980))(this);
	}
	template <typename R = void> R AddLastActionTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9D98C))(this, newValue);
	}
	template <typename R = void> R ReplaceLastActionTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xF9DA90))(this, newValue);
	}
	template <typename R = void> R RemoveLastActionTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DB94))(this);
	}
	template <typename R = LastDamagerComponent*> R get_lastDamager() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DBA0))(this);
	}
	template <typename R = bool> R get_hasLastDamager() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DC28))(this);
	}
	template <typename R = void> R AddLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(GameEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0xF9DC34))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R ReplaceLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(GameEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0xF9DD64))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R RemoveLastDamager() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DE94))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DEA0))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9DF28))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF9DF34))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xF9E038))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E13C))(this);
	}
	template <typename R = LobbyTypeComponent*> R get_lobbyType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E148))(this);
	}
	template <typename R = bool> R get_hasLobbyType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E1D0))(this);
	}
	template <typename R = void> R AddLobbyType(LobbyType* newType) {
		return ((R (*)(GameEntity*, LobbyType*))(Il2CppBase() + 0xF9E1DC))(this, newType);
	}
	template <typename R = void> R ReplaceLobbyType(LobbyType* newType) {
		return ((R (*)(GameEntity*, LobbyType*))(Il2CppBase() + 0xF9E2E0))(this, newType);
	}
	template <typename R = void> R RemoveLobbyType() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E3E4))(this);
	}
	template <typename R = LocationRegionComponent*> R get_locationRegion() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E3F0))(this);
	}
	template <typename R = bool> R get_hasLocationRegion() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E478))(this);
	}
	template <typename R = void> R AddLocationRegion(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E484))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegion(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E598))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegion() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E6AC))(this);
	}
	template <typename R = LocationRegionEnterComponent*> R get_locationRegionEnter() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E6B8))(this);
	}
	template <typename R = bool> R get_hasLocationRegionEnter() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E740))(this);
	}
	template <typename R = void> R AddLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E74C))(this, newName);
	}
	template <typename R = void> R ReplaceLocationRegionEnter(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9E860))(this, newName);
	}
	template <typename R = void> R RemoveLocationRegionEnter() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E974))(this);
	}
	template <typename R = LockControllerComponent*> R get_lockController() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9E980))(this);
	}
	template <typename R = bool> R get_hasLockController() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EA08))(this);
	}
	template <typename R = void> R AddLockController(Il2CppString* newActivator) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9EA14))(this, newActivator);
	}
	template <typename R = void> R ReplaceLockController(Il2CppString* newActivator) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xF9EB28))(this, newActivator);
	}
	template <typename R = void> R RemoveLockController() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EC3C))(this);
	}
	template <typename R = LoopSoundComponent*> R get_loopSound() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EC48))(this);
	}
	template <typename R = bool> R get_hasLoopSound() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9ECD0))(this);
	}
	template <typename R = void> R AddLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9ECDC))(this, newWork, newLoop);
	}
	template <typename R = void> R ReplaceLoopSound(Il2CppString* newWork, Il2CppString* newLoop) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9EE04))(this, newWork, newLoop);
	}
	template <typename R = void> R RemoveLoopSound() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EF2C))(this);
	}
	template <typename R = LootStatusComponent*> R get_lootStatus() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EF38))(this);
	}
	template <typename R = bool> R get_hasLootStatus() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9EFC0))(this);
	}
	template <typename R = void> R AddLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xF9EFCC))(this, newTag, newWeight);
	}
	template <typename R = void> R ReplaceLootStatus(Il2CppString* newTag, int32_t newWeight) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xF9F0E8))(this, newTag, newWeight);
	}
	template <typename R = void> R RemoveLootStatus() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F204))(this);
	}
	template <typename R = MagicSaveComponent*> R get_magicSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F210))(this);
	}
	template <typename R = bool> R get_hasMagicSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F298))(this);
	}
	template <typename R = void> R AddMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0xF9F2A4))(this, newItems, newRiding);
	}
	template <typename R = void> R ReplaceMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0xF9F3C4))(this, newItems, newRiding);
	}
	template <typename R = void> R RemoveMagicSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F4E4))(this);
	}
	template <typename R = MagicSpawnerComponent*> R get_magicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F4F0))(this);
	}
	template <typename R = bool> R get_hasMagicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F578))(this);
	}
	template <typename R = void> R AddMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xF9F584))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R ReplaceMagicSpawner(Il2CppString* newCondition, bool newIgnoreActorParent, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newOnce) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xF9F6FC))(this, newCondition, newIgnoreActorParent, newName, newNames, newRandomNames, newOnce);
	}
	template <typename R = void> R RemoveMagicSpawner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F874))(this);
	}
	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F880))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9F908))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9F914))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xF9FA18))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FB1C))(this);
	}
	template <typename R = MapNotifyComponent*> R get_mapNotify() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FB28))(this);
	}
	template <typename R = bool> R get_hasMapNotify() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FBB0))(this);
	}
	template <typename R = void> R AddMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FBBC))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R ReplaceMapNotify(int32_t newMinTimeToEnd, bool newCheckLevel, Il2CppString* newCaption, Il2CppString* newDescription, Il2CppString* newIcon) {
		return ((R (*)(GameEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FD1C))(this, newMinTimeToEnd, newCheckLevel, newCaption, newDescription, newIcon);
	}
	template <typename R = void> R RemoveMapNotify() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FE7C))(this);
	}
	template <typename R = MapPathComponent*> R get_mapPath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FE88))(this);
	}
	template <typename R = bool> R get_hasMapPath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xF9FF10))(this);
	}
	template <typename R = void> R AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xF9FF1C))(this, newStartId, newEndId);
	}
	template <typename R = void> R ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFA0044))(this, newStartId, newEndId);
	}
	template <typename R = void> R RemoveMapPath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA016C))(this);
	}
	template <typename R = MapPathViewComponent*> R get_mapPathView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0178))(this);
	}
	template <typename R = bool> R get_hasMapPathView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0200))(this);
	}
	template <typename R = void> R AddMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA020C))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R ReplaceMapPathView(Il2CppArray<uintptr_t>* newPoints, Il2CppArray<float>* newSegments, Il2CppString* newStartId, Il2CppString* newEndId, float newTotalDistance) {
		return ((R (*)(GameEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<float>*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA0374))(this, newPoints, newSegments, newStartId, newEndId, newTotalDistance);
	}
	template <typename R = void> R RemoveMapPathView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA04DC))(this);
	}
	template <typename R = MapSpeedComponent*> R get_mapSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA04E8))(this);
	}
	template <typename R = bool> R get_hasMapSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0570))(this);
	}
	template <typename R = void> R AddMapSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA057C))(this, newValue);
	}
	template <typename R = void> R ReplaceMapSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA0680))(this, newValue);
	}
	template <typename R = void> R RemoveMapSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0784))(this);
	}
	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0790))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0818))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA0824))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA0928))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0A2C))(this);
	}
	template <typename R = MaxHealthComponent*> R get_maxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0A38))(this);
	}
	template <typename R = bool> R get_hasMaxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0AC0))(this);
	}
	template <typename R = void> R AddMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA0ACC))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R ReplaceMaxHealth(float newValue, float newResurrectValue) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA0BD4))(this, newValue, newResurrectValue);
	}
	template <typename R = void> R RemoveMaxHealth() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0CDC))(this);
	}
	template <typename R = MetabolismSettingComponent*> R get_metabolismSetting() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0CE8))(this);
	}
	template <typename R = bool> R get_hasMetabolismSetting() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0D70))(this);
	}
	template <typename R = void> R AddMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(GameEntity*, float, float, float, float, float))(Il2CppBase() + 0xFA0D7C))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R ReplaceMetabolismSetting(float newHungerSpeed, float newThirstSpeed, float newCriticalValue, float newResurrectValue, float newDamage) {
		return ((R (*)(GameEntity*, float, float, float, float, float))(Il2CppBase() + 0xFA0EA8))(this, newHungerSpeed, newThirstSpeed, newCriticalValue, newResurrectValue, newDamage);
	}
	template <typename R = void> R RemoveMetabolismSetting() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0FD4))(this);
	}
	template <typename R = MinimapArrowComponent*> R get_minimapArrow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA0FE0))(this);
	}
	template <typename R = bool> R get_hasMinimapArrow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1068))(this);
	}
	template <typename R = void> R AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0xFA1074))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0xFA11B0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R RemoveMinimapArrow() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA12EC))(this);
	}
	template <typename R = MinimapComponent*> R get_minimap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA12F8))(this);
	}
	template <typename R = bool> R get_hasMinimap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1380))(this);
	}
	template <typename R = void> R AddMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA138C))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R ReplaceMinimap(Il2CppString* newName, bool newDirected, bool newIgnoreDiplomacy, Il2CppArray<Item*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, bool, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA14D4))(this, newName, newDirected, newIgnoreDiplomacy, newValues);
	}
	template <typename R = void> R RemoveMinimap() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA161C))(this);
	}
	template <typename R = MinimapPingComponent*> R get_minimapPing() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1628))(this);
	}
	template <typename R = bool> R get_hasMinimapPing() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA16B0))(this);
	}
	template <typename R = void> R AddMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA16BC))(this, newLifetime, newRadius);
	}
	template <typename R = void> R ReplaceMinimapPing(float newLifetime, float newRadius) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA17C4))(this, newLifetime, newRadius);
	}
	template <typename R = void> R RemoveMinimapPing() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA18CC))(this);
	}
	template <typename R = MiningComponent*> R get_mining() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA18D8))(this);
	}
	template <typename R = bool> R get_hasMining() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1960))(this);
	}
	template <typename R = void> R AddMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(GameEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA196C))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R ReplaceMining(bool newPerDamage, Il2CppString* newRandomGroup, Il2CppString* newActorCondition, Il2CppArray<Il2CppString*>* newMagics) {
		return ((R (*)(GameEntity*, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA1ABC))(this, newPerDamage, newRandomGroup, newActorCondition, newMagics);
	}
	template <typename R = void> R RemoveMining() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1C0C))(this);
	}
	template <typename R = ModifiersComponent*> R get_modifiers() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1C18))(this);
	}
	template <typename R = bool> R get_hasModifiers() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1CA0))(this);
	}
	template <typename R = void> R AddModifiers(ModifierEntity* newValue) {
		return ((R (*)(GameEntity*, ModifierEntity*))(Il2CppBase() + 0xFA1CAC))(this, newValue);
	}
	template <typename R = void> R ReplaceModifiers(ModifierEntity* newValue) {
		return ((R (*)(GameEntity*, ModifierEntity*))(Il2CppBase() + 0xFA1DC0))(this, newValue);
	}
	template <typename R = void> R RemoveModifiers() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1ED4))(this);
	}
	template <typename R = MountInventoryContentComponent*> R get_mountInventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1EE0))(this);
	}
	template <typename R = bool> R get_hasMountInventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA1F68))(this);
	}
	template <typename R = void> R AddMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA1F74))(this, newData);
	}
	template <typename R = void> R ReplaceMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA2088))(this, newData);
	}
	template <typename R = void> R RemoveMountInventoryContent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA219C))(this);
	}
	template <typename R = MountInventoryIdComponent*> R get_mountInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA21A8))(this);
	}
	template <typename R = bool> R get_hasMountInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2230))(this);
	}
	template <typename R = void> R AddMountInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA223C))(this, newId);
	}
	template <typename R = void> R ReplaceMountInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA2340))(this, newId);
	}
	template <typename R = void> R RemoveMountInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2444))(this);
	}
	template <typename R = MountInvetoryComponent*> R get_mountInvetory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2450))(this);
	}
	template <typename R = bool> R get_hasMountInvetory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA24D8))(this);
	}
	template <typename R = void> R AddMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xFA24E4))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R ReplaceMountInvetory(Il2CppString* newSlotBlueprint, int32_t newMaxCount, InventoryAccess* newAccess, bool newApplyInventoryMagics) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, InventoryAccess*, bool))(Il2CppBase() + 0xFA261C))(this, newSlotBlueprint, newMaxCount, newAccess, newApplyInventoryMagics);
	}
	template <typename R = void> R RemoveMountInvetory() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2754))(this);
	}
	template <typename R = MountTraderComponent*> R get_mountTrader() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2760))(this);
	}
	template <typename R = bool> R get_hasMountTrader() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA27E8))(this);
	}
	template <typename R = void> R AddMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(GameEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0xFA27F4))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R ReplaceMountTrader(Il2CppArray<GradeSetting*>* newGradeSettings, Il2CppArray<TypeRandomGroup*>* newMountsRandomGroupByType) {
		return ((R (*)(GameEntity*, Il2CppArray<GradeSetting*>*, Il2CppArray<TypeRandomGroup*>*))(Il2CppBase() + 0xFA291C))(this, newGradeSettings, newMountsRandomGroupByType);
	}
	template <typename R = void> R RemoveMountTrader() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2A44))(this);
	}
	template <typename R = MoveToTargetComponent*> R get_moveToTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2A50))(this);
	}
	template <typename R = bool> R get_hasMoveToTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2AD8))(this);
	}
	template <typename R = void> R AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(GameEntity*, int32_t, float))(Il2CppBase() + 0xFA2AE4))(this, newId, newMinDistance);
	}
	template <typename R = void> R ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(GameEntity*, int32_t, float))(Il2CppBase() + 0xFA2BF8))(this, newId, newMinDistance);
	}
	template <typename R = void> R RemoveMoveToTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2D0C))(this);
	}
	template <typename R = bool> R get_isMoveToTargetPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2D18))(this);
	}
	template <typename R = void> R set_isMoveToTargetPosition(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA2D24))(this, value);
	}
	template <typename R = NeedQuestsComponent*> R get_needQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2E3C))(this);
	}
	template <typename R = bool> R get_hasNeedQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA2EC4))(this);
	}
	template <typename R = void> R AddNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0xFA2ED0))(this, newValues, newFailMsg);
	}
	template <typename R = void> R ReplaceNeedQuests(Il2CppArray<Il2CppString*>* newValues, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*, Il2CppString*))(Il2CppBase() + 0xFA2FF8))(this, newValues, newFailMsg);
	}
	template <typename R = void> R RemoveNeedQuests() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3120))(this);
	}
	template <typename R = NeedRemoveEmptyComponent*> R get_needRemoveEmpty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA312C))(this);
	}
	template <typename R = bool> R get_hasNeedRemoveEmpty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA31B4))(this);
	}
	template <typename R = void> R AddNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(GameEntity*, bool, Il2CppString*))(Il2CppBase() + 0xFA31C0))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R ReplaceNeedRemoveEmpty(bool newValue, Il2CppString* newSpawnObject) {
		return ((R (*)(GameEntity*, bool, Il2CppString*))(Il2CppBase() + 0xFA32E0))(this, newValue, newSpawnObject);
	}
	template <typename R = void> R RemoveNeedRemoveEmpty() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3400))(this);
	}
	template <typename R = NextWayPointComponent*> R get_nextWayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA340C))(this);
	}
	template <typename R = bool> R get_hasNextWayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3494))(this);
	}
	template <typename R = void> R AddNextWayPoint(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA34A0))(this, newName);
	}
	template <typename R = void> R ReplaceNextWayPoint(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA35B4))(this, newName);
	}
	template <typename R = void> R RemoveNextWayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA36C8))(this);
	}
	template <typename R = bool> R get_isNoAutoMode() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA36D4))(this);
	}
	template <typename R = void> R set_isNoAutoMode(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA36E0))(this, value);
	}
	template <typename R = bool> R get_isNotAggressive() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA37F8))(this);
	}
	template <typename R = void> R set_isNotAggressive(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3804))(this, value);
	}
	template <typename R = bool> R get_isNotInteractable() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA391C))(this);
	}
	template <typename R = void> R set_isNotInteractable(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3928))(this, value);
	}
	template <typename R = bool> R get_isNotPursuitTarget() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3A40))(this);
	}
	template <typename R = void> R set_isNotPursuitTarget(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3A4C))(this, value);
	}
	template <typename R = bool> R get_isNotSelectable() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3B64))(this);
	}
	template <typename R = void> R set_isNotSelectable(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3B70))(this, value);
	}
	template <typename R = ObjectTriggerComponent*> R get_objectTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3C88))(this);
	}
	template <typename R = bool> R get_hasObjectTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3D10))(this);
	}
	template <typename R = void> R AddObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xFA3D1C))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R ReplaceObjectTrigger(bool newAttack, bool newPocket, bool newInteract) {
		return ((R (*)(GameEntity*, bool, bool, bool))(Il2CppBase() + 0xFA3E44))(this, newAttack, newPocket, newInteract);
	}
	template <typename R = void> R RemoveObjectTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3F6C))(this);
	}
	template <typename R = bool> R get_isOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA3F78))(this);
	}
	template <typename R = void> R set_isOnDeath(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA3F84))(this, value);
	}
	template <typename R = OnEmptyWorldComponent*> R get_onEmptyWorld() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA409C))(this);
	}
	template <typename R = bool> R get_hasOnEmptyWorld() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4124))(this);
	}
	template <typename R = void> R AddOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(GameEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0xFA4130))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R ReplaceOnEmptyWorld(Nullable1bool>* newActive, bool newRestore, bool newDestroy) {
		return ((R (*)(GameEntity*, Nullable1bool>*, bool, bool))(Il2CppBase() + 0xFA4254))(this, newActive, newRestore, newDestroy);
	}
	template <typename R = void> R RemoveOnEmptyWorld() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4378))(this);
	}
	template <typename R = OrientationComponent*> R get_orientation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4384))(this);
	}
	template <typename R = bool> R get_hasOrientation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA440C))(this);
	}
	template <typename R = void> R AddOrientation(uint8_t newValue) {
		return ((R (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xFA4418))(this, newValue);
	}
	template <typename R = void> R ReplaceOrientation(uint8_t newValue) {
		return ((R (*)(GameEntity*, uint8_t))(Il2CppBase() + 0xFA451C))(this, newValue);
	}
	template <typename R = void> R RemoveOrientation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4620))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA462C))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA46B4))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA46C0))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA47C4))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA48C8))(this);
	}
	template <typename R = OwnerNameComponent*> R get_ownerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA48D4))(this);
	}
	template <typename R = bool> R get_hasOwnerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA495C))(this);
	}
	template <typename R = void> R AddOwnerName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA4968))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnerName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA4A7C))(this, newValue);
	}
	template <typename R = void> R RemoveOwnerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4B90))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4B9C))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4C24))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA4C30))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA4D34))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4E38))(this);
	}
	template <typename R = PatrolComponent*> R get_patrol() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4E44))(this);
	}
	template <typename R = bool> R get_hasPatrol() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA4ECC))(this);
	}
	template <typename R = void> R AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA4ED8))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0xFA5010))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R RemovePatrol() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5148))(this);
	}
	template <typename R = PeriodComponent*> R get_period() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5154))(this);
	}
	template <typename R = bool> R get_hasPeriod() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA51DC))(this);
	}
	template <typename R = void> R AddPeriod(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA51E8))(this, newValue);
	}
	template <typename R = void> R ReplacePeriod(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA52EC))(this, newValue);
	}
	template <typename R = void> R RemovePeriod() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA53F0))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA53FC))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5484))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA5490))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA5594))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5698))(this);
	}
	template <typename R = PersonalGeneratorComponent*> R get_personalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA56A4))(this);
	}
	template <typename R = bool> R get_hasPersonalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA572C))(this);
	}
	template <typename R = void> R AddPersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xFA5738))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalGenerator(Il2CppString* newKey, Il2CppString* newBlueprintName, bool newSaveInLocation, bool newOnce, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0xFA5894))(this, newKey, newBlueprintName, newSaveInLocation, newOnce, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalGenerator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA59F0))(this);
	}
	template <typename R = PersonalKeyComponent*> R get_personalKey() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA59FC))(this);
	}
	template <typename R = bool> R get_hasPersonalKey() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5A84))(this);
	}
	template <typename R = void> R AddPersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0xFA5A90))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R ReplacePersonalKey(Il2CppString* newValue, bool newSaveInLocation, bool newSaveForOneVersion) {
		return ((R (*)(GameEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0xFA5BC4))(this, newValue, newSaveInLocation, newSaveForOneVersion);
	}
	template <typename R = void> R RemovePersonalKey() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5CF8))(this);
	}
	template <typename R = PetInventoryIdComponent*> R get_petInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5D04))(this);
	}
	template <typename R = bool> R get_hasPetInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5D8C))(this);
	}
	template <typename R = void> R AddPetInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA5D98))(this, newId);
	}
	template <typename R = void> R ReplacePetInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA5E9C))(this, newId);
	}
	template <typename R = void> R RemovePetInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5FA0))(this);
	}
	template <typename R = PhasesComponent*> R get_phases() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA5FAC))(this);
	}
	template <typename R = bool> R get_hasPhases() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6034))(this);
	}
	template <typename R = void> R AddPhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(GameEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0xFA6040))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R ReplacePhases(Il2CppString* newActiveCondition, float newStartOffset, bool newCyclically, Il2CppArray<Phase*>* newPhases) {
		return ((R (*)(GameEntity*, Il2CppString*, float, bool, Il2CppArray<Phase*>*))(Il2CppBase() + 0xFA618C))(this, newActiveCondition, newStartOffset, newCyclically, newPhases);
	}
	template <typename R = void> R RemovePhases() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA62D8))(this);
	}
	template <typename R = PlaceOwnerComponent*> R get_placeOwner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA62E4))(this);
	}
	template <typename R = bool> R get_hasPlaceOwner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA636C))(this);
	}
	template <typename R = void> R AddPlaceOwner(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6378))(this, newId);
	}
	template <typename R = void> R ReplacePlaceOwner(int64_t newId) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA647C))(this, newId);
	}
	template <typename R = void> R RemovePlaceOwner() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6580))(this);
	}
	template <typename R = bool> R get_isPlayer() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA658C))(this);
	}
	template <typename R = void> R set_isPlayer(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA6598))(this, value);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA66B0))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6738))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6744))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFA6848))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA694C))(this);
	}
	template <typename R = bool> R get_isPlayerKill() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6958))(this);
	}
	template <typename R = void> R set_isPlayerKill(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFA6964))(this, value);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6A7C))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6B04))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6B10))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6C24))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6D38))(this);
	}
	template <typename R = PointLabelComponent*> R get_pointLabel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6D44))(this);
	}
	template <typename R = bool> R get_hasPointLabel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA6DCC))(this);
	}
	template <typename R = void> R AddPointLabel(Il2CppString* newCondition) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6DD8))(this, newCondition);
	}
	template <typename R = void> R ReplacePointLabel(Il2CppString* newCondition) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFA6EEC))(this, newCondition);
	}
	template <typename R = void> R RemovePointLabel() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7000))(this);
	}
	template <typename R = PointsComponent*> R get_points() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA700C))(this);
	}
	template <typename R = bool> R get_hasPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7094))(this);
	}
	template <typename R = void> R AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(GameEntity*, float, int32_t, float))(Il2CppBase() + 0xFA70A0))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(GameEntity*, float, int32_t, float))(Il2CppBase() + 0xFA71BC))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R RemovePoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA72D8))(this);
	}
	template <typename R = PortalComponent*> R get_portal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA72E4))(this);
	}
	template <typename R = bool> R get_hasPortal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7350))(this);
	}
	template <typename R = void> R AddPortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL*>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL*>*, int32_t, bool, bool))(Il2CppBase() + 0xFA735C))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplacePortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL*>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL*>*, int32_t, bool, bool))(Il2CppBase() + 0xFA7510))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemovePortal() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA76C4))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA76D0))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7758))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA7764))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFA7868))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA796C))(this);
	}
	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7978))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7A00))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA7A0C))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFA7B14))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7C1C))(this);
	}
	template <typename R = PositionPlaceComponent*> R get_positionPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7C28))(this);
	}
	template <typename R = bool> R get_hasPositionPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7CB0))(this);
	}
	template <typename R = void> R AddPositionPlace(PositionPlace* newType) {
		return ((R (*)(GameEntity*, PositionPlace*))(Il2CppBase() + 0xFA7CBC))(this, newType);
	}
	template <typename R = void> R ReplacePositionPlace(PositionPlace* newType) {
		return ((R (*)(GameEntity*, PositionPlace*))(Il2CppBase() + 0xFA7DC0))(this, newType);
	}
	template <typename R = void> R RemovePositionPlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7EC4))(this);
	}
	template <typename R = PositionTransactionComponent*> R get_positionTransaction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7ED0))(this);
	}
	template <typename R = bool> R get_hasPositionTransaction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA7F58))(this);
	}
	template <typename R = void> R AddPositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((R (*)(GameEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0xFA7F64))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R ReplacePositionTransaction(Ease* newEase, float newDuration, int64_t newStartTime, Vec2* newStartPosition, Vec2* newEndPosition) {
		return ((R (*)(GameEntity*, Ease*, float, int64_t, Vec2*, Vec2*))(Il2CppBase() + 0xFA80A8))(this, newEase, newDuration, newStartTime, newStartPosition, newEndPosition);
	}
	template <typename R = void> R RemovePositionTransaction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA81EC))(this);
	}
	template <typename R = PowerComponent*> R get_power() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA81F8))(this);
	}
	template <typename R = bool> R get_hasPower() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8280))(this);
	}
	template <typename R = void> R AddPower(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA828C))(this, newValue);
	}
	template <typename R = void> R ReplacePower(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFA8390))(this, newValue);
	}
	template <typename R = void> R RemovePower() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8494))(this);
	}
	template <typename R = ProductionComponent*> R get_production() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA84A0))(this);
	}
	template <typename R = bool> R get_hasProduction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8528))(this);
	}
	template <typename R = void> R AddProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint*>* newLeavepoints) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint*>*))(Il2CppBase() + 0xFA8534))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R ReplaceProduction(Il2CppString* newHideMagic, Il2CppString* newLoadedMagic, Il2CppString* newFearMagic, float newBubbleLifetime, bool newCanGoThrowDoors, Il2CppString* newLeavepointBlueprint, Il2CppArray<Leavepoint*>* newLeavepoints) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool, Il2CppString*, Il2CppArray<Leavepoint*>*))(Il2CppBase() + 0xFA86C4))(this, newHideMagic, newLoadedMagic, newFearMagic, newBubbleLifetime, newCanGoThrowDoors, newLeavepointBlueprint, newLeavepoints);
	}
	template <typename R = void> R RemoveProduction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8854))(this);
	}
	template <typename R = ProductionWorkComponent*> R get_productionWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8860))(this);
	}
	template <typename R = bool> R get_hasProductionWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA88E8))(this);
	}
	template <typename R = void> R AddProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0xFA88F4))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R ReplaceProductionWork(Il2CppString* newWorkerUniqueLookup, Il2CppString* newWorkerName, Il2CppString* newKillerName, bool newIsWorkerDead, float newDeathPositionX, float newDeathPositionY) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool, float, float))(Il2CppBase() + 0xFA8A58))(this, newWorkerUniqueLookup, newWorkerName, newKillerName, newIsWorkerDead, newDeathPositionX, newDeathPositionY);
	}
	template <typename R = void> R RemoveProductionWork() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8BBC))(this);
	}
	template <typename R = PursuitComponent*> R get_pursuit() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8BC8))(this);
	}
	template <typename R = bool> R get_hasPursuit() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8C50))(this);
	}
	template <typename R = void> R AddPursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(GameEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0xFA8C5C))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R ReplacePursuit(float newDistance, float newEvadeDistance, float newAngle, float newBackCooldown, bool newPriorityOnPlayers, Il2CppString* newTargetCondition, bool newIgnoreBorder) {
		return ((R (*)(GameEntity*, float, float, float, float, bool, Il2CppString*, bool))(Il2CppBase() + 0xFA8DB8))(this, newDistance, newEvadeDistance, newAngle, newBackCooldown, newPriorityOnPlayers, newTargetCondition, newIgnoreBorder);
	}
	template <typename R = void> R RemovePursuit() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8F14))(this);
	}
	template <typename R = PursuitGroupComponent*> R get_pursuitGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8F20))(this);
	}
	template <typename R = bool> R get_hasPursuitGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA8FA8))(this);
	}
	template <typename R = void> R AddPursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(GameEntity*, float, Il2CppString*))(Il2CppBase() + 0xFA8FB4))(this, newDistance, newGroupName);
	}
	template <typename R = void> R ReplacePursuitGroup(float newDistance, Il2CppString* newGroupName) {
		return ((R (*)(GameEntity*, float, Il2CppString*))(Il2CppBase() + 0xFA90D8))(this, newDistance, newGroupName);
	}
	template <typename R = void> R RemovePursuitGroup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA91FC))(this);
	}
	template <typename R = QuestsSaveComponent*> R get_questsSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9208))(this);
	}
	template <typename R = bool> R get_hasQuestsSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9290))(this);
	}
	template <typename R = void> R AddQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA929C))(this, newVersion, newData);
	}
	template <typename R = void> R ReplaceQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(GameEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0xFA93B8))(this, newVersion, newData);
	}
	template <typename R = void> R RemoveQuestsSave() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA94D4))(this);
	}
	template <typename R = RandomClanNameComponent*> R get_randomClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA94E0))(this);
	}
	template <typename R = bool> R get_hasRandomClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9568))(this);
	}
	template <typename R = void> R AddRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA9574))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomClanName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA9690))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomClanName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA97AC))(this);
	}
	template <typename R = RandomNameComponent*> R get_randomName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA97B8))(this);
	}
	template <typename R = bool> R get_hasRandomName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9840))(this);
	}
	template <typename R = void> R AddRandomName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA984C))(this, newRule, newNames);
	}
	template <typename R = void> R ReplaceRandomName(RandomNameRules* newRule, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, RandomNameRules*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFA9968))(this, newRule, newNames);
	}
	template <typename R = void> R RemoveRandomName() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9A84))(this);
	}
	template <typename R = RarityComponent*> R get_rarity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9A90))(this);
	}
	template <typename R = bool> R get_hasRarity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9B18))(this);
	}
	template <typename R = void> R AddRarity(Rarity* newValue) {
		return ((R (*)(GameEntity*, Rarity*))(Il2CppBase() + 0xFA9B24))(this, newValue);
	}
	template <typename R = void> R ReplaceRarity(Rarity* newValue) {
		return ((R (*)(GameEntity*, Rarity*))(Il2CppBase() + 0xFA9C28))(this, newValue);
	}
	template <typename R = void> R RemoveRarity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9D2C))(this);
	}
	template <typename R = RavenNestComponent*> R get_ravenNest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9D38))(this);
	}
	template <typename R = bool> R get_hasRavenNest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9DC0))(this);
	}
	template <typename R = void> R AddRavenNest(Il2CppArray<FuelItem*>* newFuel) {
		return ((R (*)(GameEntity*, Il2CppArray<FuelItem*>*))(Il2CppBase() + 0xFA9DCC))(this, newFuel);
	}
	template <typename R = void> R ReplaceRavenNest(Il2CppArray<FuelItem*>* newFuel) {
		return ((R (*)(GameEntity*, Il2CppArray<FuelItem*>*))(Il2CppBase() + 0xFA9EE0))(this, newFuel);
	}
	template <typename R = void> R RemoveRavenNest() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFA9FF4))(this);
	}
	template <typename R = RavenNestStatsComponent*> R get_ravenNestStats() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA000))(this);
	}
	template <typename R = bool> R get_hasRavenNestStats() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA088))(this);
	}
	template <typename R = void> R AddRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(GameEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0xFAA094))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R ReplaceRavenNestStats(Il2CppList<Stat*>* newStats, int64_t newLastEndTime, int64_t newLastTime) {
		return ((R (*)(GameEntity*, Il2CppList<Stat*>*, int64_t, int64_t))(Il2CppBase() + 0xFAA1BC))(this, newStats, newLastEndTime, newLastTime);
	}
	template <typename R = void> R RemoveRavenNestStats() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA2E4))(this);
	}
	template <typename R = RequiredComponent*> R get_required() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA2F0))(this);
	}
	template <typename R = bool> R get_hasRequired() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA378))(this);
	}
	template <typename R = void> R AddRequired(int32_t newLevel) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAA384))(this, newLevel);
	}
	template <typename R = void> R ReplaceRequired(int32_t newLevel) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAA488))(this, newLevel);
	}
	template <typename R = void> R RemoveRequired() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA58C))(this);
	}
	template <typename R = ResetTimeComponent*> R get_resetTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA598))(this);
	}
	template <typename R = bool> R get_hasResetTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA620))(this);
	}
	template <typename R = void> R AddResetTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAA62C))(this, newValue);
	}
	template <typename R = void> R ReplaceResetTime(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAA730))(this, newValue);
	}
	template <typename R = void> R RemoveResetTime() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA834))(this);
	}
	template <typename R = RespawnPointComponent*> R get_respawnPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA840))(this);
	}
	template <typename R = bool> R get_hasRespawnPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAA8C8))(this);
	}
	template <typename R = void> R AddRespawnPoint(float newRange) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAA8D4))(this, newRange);
	}
	template <typename R = void> R ReplaceRespawnPoint(float newRange) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAA9D8))(this, newRange);
	}
	template <typename R = void> R RemoveRespawnPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAAADC))(this);
	}
	template <typename R = RewardsComponent*> R get_rewards() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAAAE8))(this);
	}
	template <typename R = bool> R get_hasRewards() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAAB70))(this);
	}
	template <typename R = void> R AddRewards(Il2CppArray<Resource*>* newList, int32_t newProgressionLevel) {
		return ((R (*)(GameEntity*, Il2CppArray<Resource*>*, int32_t))(Il2CppBase() + 0xFAAB7C))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R ReplaceRewards(Il2CppArray<Resource*>* newList, int32_t newProgressionLevel) {
		return ((R (*)(GameEntity*, Il2CppArray<Resource*>*, int32_t))(Il2CppBase() + 0xFAAC98))(this, newList, newProgressionLevel);
	}
	template <typename R = void> R RemoveRewards() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAADB4))(this);
	}
	template <typename R = RoamingComponent*> R get_roaming() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAADC0))(this);
	}
	template <typename R = bool> R get_hasRoaming() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAAE48))(this);
	}
	template <typename R = void> R AddRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(GameEntity*, float, float, float))(Il2CppBase() + 0xFAAE54))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R ReplaceRoaming(float newDistance, float newTime, float newMaxTime) {
		return ((R (*)(GameEntity*, float, float, float))(Il2CppBase() + 0xFAAF6C))(this, newDistance, newTime, newMaxTime);
	}
	template <typename R = void> R RemoveRoaming() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB084))(this);
	}
	template <typename R = RoofComponent*> R get_roof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB090))(this);
	}
	template <typename R = bool> R get_hasRoof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB118))(this);
	}
	template <typename R = void> R AddRoof(int32_t newIndex) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAB124))(this, newIndex);
	}
	template <typename R = void> R ReplaceRoof(int32_t newIndex) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAB228))(this, newIndex);
	}
	template <typename R = void> R RemoveRoof() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB32C))(this);
	}
	template <typename R = RoomComponent*> R get_room() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB338))(this);
	}
	template <typename R = bool> R get_hasRoom() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB3C0))(this);
	}
	template <typename R = void> R AddRoom(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFAB3CC))(this, newName);
	}
	template <typename R = void> R ReplaceRoom(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFAB4E0))(this, newName);
	}
	template <typename R = void> R RemoveRoom() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB5F4))(this);
	}
	template <typename R = RoomsDoorComponent*> R get_roomsDoor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB600))(this);
	}
	template <typename R = bool> R get_hasRoomsDoor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB688))(this);
	}
	template <typename R = void> R AddRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFAB694))(this, newNames);
	}
	template <typename R = void> R ReplaceRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFAB7A8))(this, newNames);
	}
	template <typename R = void> R RemoveRoomsDoor() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB8BC))(this);
	}
	template <typename R = RotateToComponent*> R get_rotateTo() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB8C8))(this);
	}
	template <typename R = bool> R get_hasRotateTo() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAB950))(this);
	}
	template <typename R = void> R AddRotateTo(float newAngle) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAB95C))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotateTo(float newAngle) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFABA60))(this, newAngle);
	}
	template <typename R = void> R RemoveRotateTo() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABB64))(this);
	}
	template <typename R = RotationComponent*> R get_rotation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABB70))(this);
	}
	template <typename R = bool> R get_hasRotation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABBF8))(this);
	}
	template <typename R = void> R AddRotation(float newAngle) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFABC04))(this, newAngle);
	}
	template <typename R = void> R ReplaceRotation(float newAngle) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFABD08))(this, newAngle);
	}
	template <typename R = void> R RemoveRotation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABE0C))(this);
	}
	template <typename R = RuneInventoryIdComponent*> R get_runeInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABE18))(this);
	}
	template <typename R = bool> R get_hasRuneInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFABEA0))(this);
	}
	template <typename R = void> R AddRuneInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFABEAC))(this, newId);
	}
	template <typename R = void> R ReplaceRuneInventoryId(int32_t newId) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFABFB0))(this, newId);
	}
	template <typename R = void> R RemoveRuneInventoryId() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC0B4))(this);
	}
	template <typename R = SaveActionComponent*> R get_saveAction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC0C0))(this);
	}
	template <typename R = bool> R get_hasSaveAction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC148))(this);
	}
	template <typename R = void> R AddSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xFAC154))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R ReplaceSaveAction(Il2CppString* newName, Il2CppString* newItem, Il2CppString* newSaveEffect, bool newLeaveOnDeath) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0xFAC2A4))(this, newName, newItem, newSaveEffect, newLeaveOnDeath);
	}
	template <typename R = void> R RemoveSaveAction() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC3F4))(this);
	}
	template <typename R = bool> R get_isSaveable() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC400))(this);
	}
	template <typename R = void> R set_isSaveable(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFAC40C))(this, value);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC524))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC5AC))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAC5B8))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAC6BC))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC7C0))(this);
	}
	template <typename R = ScoutComponent*> R get_scout() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC7CC))(this);
	}
	template <typename R = bool> R get_hasScout() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAC854))(this);
	}
	template <typename R = void> R AddScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAC860))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceScout(int32_t newMinLevel, float newTax, Il2CppArray<Item*>* newItems, Il2CppString* newCanActivateEffect, Il2CppString* newActiveEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameEntity*, int32_t, float, Il2CppArray<Item*>*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAC9D8))(this, newMinLevel, newTax, newItems, newCanActivateEffect, newActiveEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveScout() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACB50))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACB5C))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACBE4))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFACBF0))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFACCF4))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACDF8))(this);
	}
	template <typename R = ServerPositionComponent*> R get_serverPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACE04))(this);
	}
	template <typename R = bool> R get_hasServerPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFACE8C))(this);
	}
	template <typename R = void> R AddServerPosition(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFACE98))(this, newX, newY);
	}
	template <typename R = void> R ReplaceServerPosition(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFACFA0))(this, newX, newY);
	}
	template <typename R = void> R RemoveServerPosition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD0A8))(this);
	}
	template <typename R = ServerTickComponent*> R get_serverTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD0B4))(this);
	}
	template <typename R = bool> R get_hasServerTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD13C))(this);
	}
	template <typename R = void> R AddServerTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAD148))(this, newValue);
	}
	template <typename R = void> R ReplaceServerTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAD24C))(this, newValue);
	}
	template <typename R = void> R RemoveServerTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD350))(this);
	}
	template <typename R = SharedComponent*> R get_shared() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD35C))(this);
	}
	template <typename R = bool> R get_hasShared() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD3E4))(this);
	}
	template <typename R = void> R AddShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(GameEntity*, bool, bool))(Il2CppBase() + 0xFAD3F0))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R ReplaceShared(bool newValue, bool newCantSwitch) {
		return ((R (*)(GameEntity*, bool, bool))(Il2CppBase() + 0xFAD504))(this, newValue, newCantSwitch);
	}
	template <typename R = void> R RemoveShared() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD618))(this);
	}
	template <typename R = ShowConditionComponent*> R get_showCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD624))(this);
	}
	template <typename R = bool> R get_hasShowCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD6AC))(this);
	}
	template <typename R = void> R AddShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0xFAD6B8))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R ReplaceShowCondition(Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, bool newHasHealthCondition, Il2CppString* newFailMsg) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, bool, Il2CppString*))(Il2CppBase() + 0xFAD808))(this, newName, newNames, newHasHealthCondition, newFailMsg);
	}
	template <typename R = void> R RemoveShowCondition() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD958))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD964))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAD9EC))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAD9F8))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFADAFC))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADC00))(this);
	}
	template <typename R = SinglePlaceComponent*> R get_singlePlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADC0C))(this);
	}
	template <typename R = bool> R get_hasSinglePlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADC94))(this);
	}
	template <typename R = void> R AddSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(GameEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0xFADCA0))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R ReplaceSinglePlace(float newRadius, int32_t newOwnMaxCount, int32_t newGlobalMaxCount, Il2CppString* newName) {
		return ((R (*)(GameEntity*, float, int32_t, int32_t, Il2CppString*))(Il2CppBase() + 0xFADDD8))(this, newRadius, newOwnMaxCount, newGlobalMaxCount, newName);
	}
	template <typename R = void> R RemoveSinglePlace() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADF10))(this);
	}
	template <typename R = SlotCountComponent*> R get_slotCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADF1C))(this);
	}
	template <typename R = bool> R get_hasSlotCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFADFA4))(this);
	}
	template <typename R = void> R AddSlotCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFADFB0))(this, newValue);
	}
	template <typename R = void> R ReplaceSlotCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFAE0B4))(this, newValue);
	}
	template <typename R = void> R RemoveSlotCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE1B8))(this);
	}
	template <typename R = SpawnAndDestroyComponent*> R get_spawnAndDestroy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE1C4))(this);
	}
	template <typename R = bool> R get_hasSpawnAndDestroy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE24C))(this);
	}
	template <typename R = void> R AddSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0xFAE258))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R ReplaceSpawnAndDestroy(Il2CppString* newCreaturesRG, int32_t newMaxCount, Il2CppString* newOverMaxCreaturesRG) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t, Il2CppString*))(Il2CppBase() + 0xFAE390))(this, newCreaturesRG, newMaxCount, newOverMaxCreaturesRG);
	}
	template <typename R = void> R RemoveSpawnAndDestroy() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE4C8))(this);
	}
	template <typename R = SpawnOnDeathComponent*> R get_spawnOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE4D4))(this);
	}
	template <typename R = bool> R get_hasSpawnOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE55C))(this);
	}
	template <typename R = void> R AddSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(GameEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0xFAE568))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R ReplaceSpawnOnDeath(ApplyPlaceParams* newParams, Il2CppArray<ApplyPlaceItem*>* newItems, int32_t newRandomCount) {
		return ((R (*)(GameEntity*, ApplyPlaceParams*, Il2CppArray<ApplyPlaceItem*>*, int32_t))(Il2CppBase() + 0xFAE6A0))(this, newParams, newItems, newRandomCount);
	}
	template <typename R = void> R RemoveSpawnOnDeath() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE7D8))(this);
	}
	template <typename R = SpectatorComponent*> R get_spectator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE7E4))(this);
	}
	template <typename R = bool> R get_hasSpectator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAE86C))(this);
	}
	template <typename R = void> R AddSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(GameEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0xFAE878))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R ReplaceSpectator(float newX, float newY, float newWidth, float newHeight, Il2CppString* newBossTag) {
		return ((R (*)(GameEntity*, float, float, float, float, Il2CppString*))(Il2CppBase() + 0xFAE9B4))(this, newX, newY, newWidth, newHeight, newBossTag);
	}
	template <typename R = void> R RemoveSpectator() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAEAF0))(this);
	}
	template <typename R = SpeedComponent*> R get_speed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAEAFC))(this);
	}
	template <typename R = bool> R get_hasSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAEB84))(this);
	}
	template <typename R = void> R AddSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAEB90))(this, newValue);
	}
	template <typename R = void> R ReplaceSpeed(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAEC94))(this, newValue);
	}
	template <typename R = void> R RemoveSpeed() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAED98))(this);
	}
	template <typename R = StateViewComponent*> R get_stateView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAEDA4))(this);
	}
	template <typename R = bool> R get_hasStateView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAEE2C))(this);
	}
	template <typename R = void> R AddStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0xFAEE38))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R ReplaceStateView(Il2CppArray<Item*>* newValues, Il2CppArray<Item*>* newFirstOfValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Item*>*, Il2CppArray<Item*>*))(Il2CppBase() + 0xFAEF60))(this, newValues, newFirstOfValues);
	}
	template <typename R = void> R RemoveStateView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF088))(this);
	}
	template <typename R = StatueComponent*> R get_statue() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF094))(this);
	}
	template <typename R = bool> R get_hasStatue() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF11C))(this);
	}
	template <typename R = void> R AddStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAF128))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R ReplaceStatue(int32_t newMinLevel, Il2CppString* newActiveEffect, Il2CppString* newCanActivateEffect, Il2CppString* newCooldownEffect) {
		return ((R (*)(GameEntity*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xFAF274))(this, newMinLevel, newActiveEffect, newCanActivateEffect, newCooldownEffect);
	}
	template <typename R = void> R RemoveStatue() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF3C0))(this);
	}
	template <typename R = StatusBarViewComponent*> R get_statusBarView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF3CC))(this);
	}
	template <typename R = bool> R get_hasStatusBarView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF454))(this);
	}
	template <typename R = void> R AddStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0xFAF460))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R ReplaceStatusBarView(StatusNameShow* newStatusNameShow, Il2CppString* newNameFormat, float newHPBarShowDuration, bool newDontShowInfo, bool newDontShowHealthCount, bool newShowDPS, Il2CppString* newHexColor) {
		return ((R (*)(GameEntity*, StatusNameShow*, Il2CppString*, float, bool, bool, bool, Il2CppString*))(Il2CppBase() + 0xFAF5D4))(this, newStatusNameShow, newNameFormat, newHPBarShowDuration, newDontShowInfo, newDontShowHealthCount, newShowDPS, newHexColor);
	}
	template <typename R = void> R RemoveStatusBarView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF748))(this);
	}
	template <typename R = TeamComponent*> R get_team() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF754))(this);
	}
	template <typename R = bool> R get_hasTeam() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAF7DC))(this);
	}
	template <typename R = void> R AddTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(GameEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0xFAF7E8))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R ReplaceTeam(uint8_t newId, bool newSource, Il2CppString* newRandomByTag, HashSet1int64_t>* newClanIds) {
		return ((R (*)(GameEntity*, uint8_t, bool, Il2CppString*, HashSet1int64_t>*))(Il2CppBase() + 0xFAF92C))(this, newId, newSource, newRandomByTag, newClanIds);
	}
	template <typename R = void> R RemoveTeam() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFA70))(this);
	}
	template <typename R = TenacityCoefComponent*> R get_tenacityCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFA7C))(this);
	}
	template <typename R = bool> R get_hasTenacityCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFB04))(this);
	}
	template <typename R = void> R AddTenacityCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAFB10))(this, newValue);
	}
	template <typename R = void> R ReplaceTenacityCoef(float newValue) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFAFC14))(this, newValue);
	}
	template <typename R = void> R RemoveTenacityCoef() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFD18))(this);
	}
	template <typename R = TickComponent*> R get_tick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFD24))(this);
	}
	template <typename R = bool> R get_hasTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFDAC))(this);
	}
	template <typename R = void> R AddTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAFDB8))(this, newValue);
	}
	template <typename R = void> R ReplaceTick(int64_t newValue) {
		return ((R (*)(GameEntity*, int64_t))(Il2CppBase() + 0xFAFEBC))(this, newValue);
	}
	template <typename R = void> R RemoveTick() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFFC0))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFAFFCC))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0054))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0060))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0164))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0268))(this);
	}
	template <typename R = TicksCountComponent*> R get_ticksCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0274))(this);
	}
	template <typename R = bool> R get_hasTicksCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB02FC))(this);
	}
	template <typename R = void> R AddTicksCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB0308))(this, newValue);
	}
	template <typename R = void> R ReplaceTicksCount(int32_t newValue) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB040C))(this, newValue);
	}
	template <typename R = void> R RemoveTicksCount() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0510))(this);
	}
	template <typename R = TimeTriggerComponent*> R get_timeTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB051C))(this);
	}
	template <typename R = bool> R get_hasTimeTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB05A4))(this);
	}
	template <typename R = void> R AddTimeTrigger(float newBeforeEnd) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFB05B0))(this, newBeforeEnd);
	}
	template <typename R = void> R ReplaceTimeTrigger(float newBeforeEnd) {
		return ((R (*)(GameEntity*, float))(Il2CppBase() + 0xFB06B4))(this, newBeforeEnd);
	}
	template <typename R = void> R RemoveTimeTrigger() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB07B8))(this);
	}
	template <typename R = TimerEffectComponent*> R get_timerEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB07C4))(this);
	}
	template <typename R = bool> R get_hasTimerEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB084C))(this);
	}
	template <typename R = void> R AddTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB0858))(this, newName, newMinGrade);
	}
	template <typename R = void> R ReplaceTimerEffect(Il2CppString* newName, int32_t newMinGrade) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB0974))(this, newName, newMinGrade);
	}
	template <typename R = void> R RemoveTimerEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0A90))(this);
	}
	template <typename R = ToLocationComponent*> R get_toLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0A9C))(this);
	}
	template <typename R = bool> R get_hasToLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0B24))(this);
	}
	template <typename R = void> R AddToLocation(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB0B30))(this, newName);
	}
	template <typename R = void> R ReplaceToLocation(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB0C44))(this, newName);
	}
	template <typename R = void> R RemoveToLocation() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0D58))(this);
	}
	template <typename R = TransportComponent*> R get_transport() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0D64))(this);
	}
	template <typename R = bool> R get_hasTransport() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB0DEC))(this);
	}
	template <typename R = void> R AddTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFB0DF8))(this, newValues);
	}
	template <typename R = void> R ReplaceTransport(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFB0F0C))(this, newValues);
	}
	template <typename R = void> R RemoveTransport() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1020))(this);
	}
	template <typename R = TriggerViewComponent*> R get_triggerView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB102C))(this);
	}
	template <typename R = bool> R get_hasTriggerView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB10B4))(this);
	}
	template <typename R = void> R AddTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0xFB10C0))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R ReplaceTriggerView(Il2CppString* newActiveCondition, Il2CppString* newTargetCondition, Il2CppString* newInEffect, Il2CppString* newOutEffect, float newRadius, bool newWallTrace) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, float, bool))(Il2CppBase() + 0xFB123C))(this, newActiveCondition, newTargetCondition, newInEffect, newOutEffect, newRadius, newWallTrace);
	}
	template <typename R = void> R RemoveTriggerView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB13B8))(this);
	}
	template <typename R = UniqueLookupComponent*> R get_uniqueLookup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB13C4))(this);
	}
	template <typename R = bool> R get_hasUniqueLookup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB144C))(this);
	}
	template <typename R = void> R AddUniqueLookup(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1458))(this, newName);
	}
	template <typename R = void> R ReplaceUniqueLookup(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB156C))(this, newName);
	}
	template <typename R = void> R RemoveUniqueLookup() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1680))(this);
	}
	template <typename R = UnlockComponent*> R get_unlock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB168C))(this);
	}
	template <typename R = bool> R get_hasUnlock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1714))(this);
	}
	template <typename R = void> R AddUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFB1720))(this, newNames);
	}
	template <typename R = void> R ReplaceUnlock(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(GameEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0xFB1834))(this, newNames);
	}
	template <typename R = void> R RemoveUnlock() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1948))(this);
	}
	template <typename R = UnlockDurationComponent*> R get_unlockDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1954))(this);
	}
	template <typename R = bool> R get_hasUnlockDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB19DC))(this);
	}
	template <typename R = void> R AddUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB19E8))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R ReplaceUnlockDuration(Il2CppString* newUnlockedEffect, float newDuration) {
		return ((R (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB1B0C))(this, newUnlockedEffect, newDuration);
	}
	template <typename R = void> R RemoveUnlockDuration() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1C30))(this);
	}
	template <typename R = bool> R get_isUnlocked() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1C3C))(this);
	}
	template <typename R = void> R set_isUnlocked(bool value) {
		return ((R (*)(GameEntity*, bool))(Il2CppBase() + 0xFB1C48))(this, value);
	}
	template <typename R = UpgradeComponent*> R get_upgrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1D60))(this);
	}
	template <typename R = bool> R get_hasUpgrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB1DE8))(this);
	}
	template <typename R = void> R AddUpgrade(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1DF4))(this, newName);
	}
	template <typename R = void> R ReplaceUpgrade(Il2CppString* newName) {
		return ((R (*)(GameEntity*, Il2CppString*))(Il2CppBase() + 0xFB1F08))(this, newName);
	}
	template <typename R = void> R RemoveUpgrade() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB201C))(this);
	}
	template <typename R = UpgradeEffectComponent*> R get_upgradeEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2028))(this);
	}
	template <typename R = bool> R get_hasUpgradeEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB20B0))(this);
	}
	template <typename R = void> R AddUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xFB20BC))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R ReplaceUpgradeEffect(Il2CppString* newText, Il2CppString* newNotification, Il2CppArray<Il2CppString*>* newRandomTexts, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames, Il2CppArray<Il2CppString*>* newRandomNames, bool newPersonal) {
		return ((R (*)(GameEntity*, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, bool))(Il2CppBase() + 0xFB2258))(this, newText, newNotification, newRandomTexts, newName, newNames, newRandomNames, newPersonal);
	}
	template <typename R = void> R RemoveUpgradeEffect() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB23F4))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2400))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2488))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB2494))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(GameEntity*, int32_t))(Il2CppBase() + 0xFB2598))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB269C))(this);
	}
	template <typename R = VelocityComponent*> R get_velocity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB26A8))(this);
	}
	template <typename R = bool> R get_hasVelocity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2730))(this);
	}
	template <typename R = void> R AddVelocity(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFB273C))(this, newX, newY);
	}
	template <typename R = void> R ReplaceVelocity(float newX, float newY) {
		return ((R (*)(GameEntity*, float, float))(Il2CppBase() + 0xFB2844))(this, newX, newY);
	}
	template <typename R = void> R RemoveVelocity() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB294C))(this);
	}
	template <typename R = ViewComponent*> R get_view() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2958))(this);
	}
	template <typename R = bool> R get_hasView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB29E0))(this);
	}
	template <typename R = void> R AddView(IEntityView* newValue) {
		return ((R (*)(GameEntity*, IEntityView*))(Il2CppBase() + 0xFB29EC))(this, newValue);
	}
	template <typename R = void> R ReplaceView(IEntityView* newValue) {
		return ((R (*)(GameEntity*, IEntityView*))(Il2CppBase() + 0xFB2B00))(this, newValue);
	}
	template <typename R = void> R RemoveView() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2C14))(this);
	}
	template <typename R = WaveIndexComponent*> R get_waveIndex() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2C20))(this);
	}
	template <typename R = bool> R get_hasWaveIndex() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2CA8))(this);
	}
	template <typename R = void> R AddWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(GameEntity*, int32_t, int32_t))(Il2CppBase() + 0xFB2CB4))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R ReplaceWaveIndex(int32_t newIndex, int32_t newWavesCount) {
		return ((R (*)(GameEntity*, int32_t, int32_t))(Il2CppBase() + 0xFB2DBC))(this, newIndex, newWavesCount);
	}
	template <typename R = void> R RemoveWaveIndex() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2EC4))(this);
	}
	template <typename R = WaveItemComponent*> R get_waveItem() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2ED0))(this);
	}
	template <typename R = bool> R get_hasWaveItem() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB2F58))(this);
	}
	template <typename R = void> R AddWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB2F64))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R ReplaceWaveItem(Il2CppString* newEventName, int32_t newWaveIndex) {
		return ((R (*)(GameEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0xFB3080))(this, newEventName, newWaveIndex);
	}
	template <typename R = void> R RemoveWaveItem() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB319C))(this);
	}
	template <typename R = WaveStateComponent*> R get_waveState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB31A8))(this);
	}
	template <typename R = bool> R get_hasWaveState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3230))(this);
	}
	template <typename R = void> R AddWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0xFB323C))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R ReplaceWaveState(int32_t newCount, int32_t newTotalCount, int64_t newStartTime) {
		return ((R (*)(GameEntity*, int32_t, int32_t, int64_t))(Il2CppBase() + 0xFB3354))(this, newCount, newTotalCount, newStartTime);
	}
	template <typename R = void> R RemoveWaveState() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB346C))(this);
	}
	template <typename R = WavesEventComponent*> R get_wavesEvent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3478))(this);
	}
	template <typename R = bool> R get_hasWavesEvent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3500))(this);
	}
	template <typename R = void> R AddWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(GameEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0xFB350C))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R ReplaceWavesEvent(Il2CppString* newActivator, float newSpawnDelay, float newWaveDelay, bool newRepeat, bool newLocal, Il2CppString* newUseOnEnd, Il2CppString* newNewStageText, Il2CppString* newCompletedCaption, Il2CppString* newCompletedText, Il2CppArray<Wave*>* newWaves) {
		return ((R (*)(GameEntity*, Il2CppString*, float, float, bool, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<Wave*>*))(Il2CppBase() + 0xFB36C8))(this, newActivator, newSpawnDelay, newWaveDelay, newRepeat, newLocal, newUseOnEnd, newNewStageText, newCompletedCaption, newCompletedText, newWaves);
	}
	template <typename R = void> R RemoveWavesEvent() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3884))(this);
	}
	template <typename R = WayPointComponent*> R get_wayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3890))(this);
	}
	template <typename R = bool> R get_hasWayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3918))(this);
	}
	template <typename R = void> R AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB3924))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(GameEntity*, Il2CppString*, float))(Il2CppBase() + 0xFB3A48))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R RemoveWayPoint() {
		return ((R (*)(GameEntity*))(Il2CppBase() + 0xFB3B6C))(this);
	}

};

