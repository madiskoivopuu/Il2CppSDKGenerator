#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionEntity"));
	}

	template <typename T = FailComponent*> static T& failComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE410))(this);
	}
	template <typename T = ActiveComponent*> T get_active() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE518))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE5A0))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AE5AC))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AE6B4))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE7BC))(this);
	}
	template <typename T = ActorMagicsConditionComponent*> T get_actorMagicsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE7C8))(this);
	}
	template <typename T = bool> T get_hasActorMagicsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE850))(this);
	}
	template <typename T = void> T AddActorMagicsCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20AE85C))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T ReplaceActorMagicsCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20AE9C4))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T RemoveActorMagicsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEB2C))(this);
	}
	template <typename T = AggroTargetConditionComponent*> T get_aggroTargetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEB38))(this);
	}
	template <typename T = bool> T get_hasAggroTargetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEBC0))(this);
	}
	template <typename T = void> T AddAggroTargetCondition(Il2CppString* newTargetCondition, Il2CppArray<uintptr_t>* newTargetConditions) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20AEBCC))(this, newTargetCondition, newTargetConditions);
	}
	template <typename T = void> T ReplaceAggroTargetCondition(Il2CppString* newTargetCondition, Il2CppArray<uintptr_t>* newTargetConditions) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20AECF4))(this, newTargetCondition, newTargetConditions);
	}
	template <typename T = void> T RemoveAggroTargetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEE1C))(this);
	}
	template <typename T = AllyConditionComponent*> T get_allyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEE28))(this);
	}
	template <typename T = bool> T get_hasAllyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AEEB0))(this);
	}
	template <typename T = void> T AddAllyCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AEEBC))(this, newValue);
	}
	template <typename T = void> T ReplaceAllyCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AEFC4))(this, newValue);
	}
	template <typename T = void> T RemoveAllyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF0CC))(this);
	}
	template <typename T = AndComponent*> T get_and() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20ADE8C))(this);
	}
	template <typename T = bool> T get_hasAnd() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF0D8))(this);
	}
	template <typename T = void> T AddAnd(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20AF0E4))(this, newNames);
	}
	template <typename T = void> T ReplaceAnd(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20AF1F8))(this, newNames);
	}
	template <typename T = void> T RemoveAnd() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF30C))(this);
	}
	template <typename T = AoeConditionComponent*> T get_aoeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF318))(this);
	}
	template <typename T = bool> T get_hasAoeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF3A0))(this);
	}
	template <typename T = void> T AddAoeCondition(TargetsSelector* newSelector, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount) {
		return ((T (*)(ConditionEntity*, TargetsSelector*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20AF3AC))(this, newSelector, newMinCount, newMaxCount);
	}
	template <typename T = void> T ReplaceAoeCondition(TargetsSelector* newSelector, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount) {
		return ((T (*)(ConditionEntity*, TargetsSelector*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20AF4D4))(this, newSelector, newMinCount, newMaxCount);
	}
	template <typename T = void> T RemoveAoeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF5FC))(this);
	}
	template <typename T = BattlePassConditionComponent*> T get_battlePassCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF608))(this);
	}
	template <typename T = bool> T get_hasBattlePassCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF690))(this);
	}
	template <typename T = void> T AddBattlePassCondition(CurrencyType* newCurrency, Nullable1bool>* newHasReward, Nullable1bool>* newNeedClaimReward, Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newNeedReset) {
		return ((T (*)(ConditionEntity*, CurrencyType*, Nullable1bool>*, Nullable1bool>*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20AF69C))(this, newCurrency, newHasReward, newNeedClaimReward, newMinLevel, newMaxLevel, newNeedReset);
	}
	template <typename T = void> T ReplaceBattlePassCondition(CurrencyType* newCurrency, Nullable1bool>* newHasReward, Nullable1bool>* newNeedClaimReward, Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newNeedReset) {
		return ((T (*)(ConditionEntity*, CurrencyType*, Nullable1bool>*, Nullable1bool>*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20AF7D4))(this, newCurrency, newHasReward, newNeedClaimReward, newMinLevel, newMaxLevel, newNeedReset);
	}
	template <typename T = void> T RemoveBattlePassCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AF90C))(this);
	}
	template <typename T = BlueprintComponent*> T get_blueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE490))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE484))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20AF918))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20AFA2C))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFB40))(this);
	}
	template <typename T = BossPortalConditionComponent*> T get_bossPortalCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFB4C))(this);
	}
	template <typename T = bool> T get_hasBossPortalCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFBD4))(this);
	}
	template <typename T = void> T AddBossPortalCondition(bool newIsOpen) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AFBE0))(this, newIsOpen);
	}
	template <typename T = void> T ReplaceBossPortalCondition(bool newIsOpen) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AFCE8))(this, newIsOpen);
	}
	template <typename T = void> T RemoveBossPortalCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFDF0))(this);
	}
	template <typename T = BusyByConditionComponent*> T get_busyByCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFDFC))(this);
	}
	template <typename T = bool> T get_hasBusyByCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AFE84))(this);
	}
	template <typename T = void> T AddBusyByCondition(bool newByOther, bool newValue) {
		return ((T (*)(ConditionEntity*, bool, bool))(Il2CppBase() + 0x20AFE90))(this, newByOther, newValue);
	}
	template <typename T = void> T ReplaceBusyByCondition(bool newByOther, bool newValue) {
		return ((T (*)(ConditionEntity*, bool, bool))(Il2CppBase() + 0x20AFFA4))(this, newByOther, newValue);
	}
	template <typename T = void> T RemoveBusyByCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B00B8))(this);
	}
	template <typename T = BusyConditionComponent*> T get_busyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B00C4))(this);
	}
	template <typename T = bool> T get_hasBusyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B014C))(this);
	}
	template <typename T = void> T AddBusyCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0158))(this, newValue);
	}
	template <typename T = void> T ReplaceBusyCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0260))(this, newValue);
	}
	template <typename T = void> T RemoveBusyCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0368))(this);
	}
	template <typename T = CanSneakComponent*> T get_canSneak() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0374))(this);
	}
	template <typename T = bool> T get_hasCanSneak() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B03FC))(this);
	}
	template <typename T = void> T AddCanSneak(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0408))(this, newValue);
	}
	template <typename T = void> T ReplaceCanSneak(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0510))(this, newValue);
	}
	template <typename T = void> T RemoveCanSneak() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0618))(this);
	}
	template <typename T = ChildrenConditionComponent*> T get_childrenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0624))(this);
	}
	template <typename T = bool> T get_hasChildrenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B06AC))(this);
	}
	template <typename T = void> T AddChildrenCondition(Il2CppString* newTargetCondition, Il2CppArray<uintptr_t>* newTargetConditions) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B06B8))(this, newTargetCondition, newTargetConditions);
	}
	template <typename T = void> T ReplaceChildrenCondition(Il2CppString* newTargetCondition, Il2CppArray<uintptr_t>* newTargetConditions) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B07E0))(this, newTargetCondition, newTargetConditions);
	}
	template <typename T = void> T RemoveChildrenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0908))(this);
	}
	template <typename T = ClanInTeamConditionComponent*> T get_clanInTeamCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0914))(this);
	}
	template <typename T = bool> T get_hasClanInTeamCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B099C))(this);
	}
	template <typename T = void> T AddClanInTeamCondition(bool newContains) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B09A8))(this, newContains);
	}
	template <typename T = void> T ReplaceClanInTeamCondition(bool newContains) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0AB0))(this, newContains);
	}
	template <typename T = void> T RemoveClanInTeamCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0BB8))(this);
	}
	template <typename T = ClanRoleComponent*> T get_clanRole() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0BC4))(this);
	}
	template <typename T = bool> T get_hasClanRole() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0C4C))(this);
	}
	template <typename T = void> T AddClanRole(bool newIsLeader) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0C58))(this, newIsLeader);
	}
	template <typename T = void> T ReplaceClanRole(bool newIsLeader) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0D60))(this, newIsLeader);
	}
	template <typename T = void> T RemoveClanRole() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0E68))(this);
	}
	template <typename T = ClassConditionComponent*> T get_classCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0E74))(this);
	}
	template <typename T = bool> T get_hasClassCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B0EFC))(this);
	}
	template <typename T = void> T AddClassCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B0F08))(this, newName);
	}
	template <typename T = void> T ReplaceClassCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B101C))(this, newName);
	}
	template <typename T = void> T RemoveClassCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1130))(this);
	}
	template <typename T = CollisionConditionComponent*> T get_collisionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B113C))(this);
	}
	template <typename T = bool> T get_hasCollisionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B11C4))(this);
	}
	template <typename T = void> T AddCollisionCondition(bool newHas, float newOffsetX, float newOffsetY, Nullable1float>* newRadius, Nullable1bool>* newOnBorder) {
		return ((T (*)(ConditionEntity*, bool, float, float, Nullable1float>*, Nullable1bool>*))(Il2CppBase() + 0x20B11D0))(this, newHas, newOffsetX, newOffsetY, newRadius, newOnBorder);
	}
	template <typename T = void> T ReplaceCollisionCondition(bool newHas, float newOffsetX, float newOffsetY, Nullable1float>* newRadius, Nullable1bool>* newOnBorder) {
		return ((T (*)(ConditionEntity*, bool, float, float, Nullable1float>*, Nullable1bool>*))(Il2CppBase() + 0x20B1304))(this, newHas, newOffsetX, newOffsetY, newRadius, newOnBorder);
	}
	template <typename T = void> T RemoveCollisionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1438))(this);
	}
	template <typename T = ControlsConditionComponent*> T get_controlsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1444))(this);
	}
	template <typename T = bool> T get_hasControlsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B14CC))(this);
	}
	template <typename T = void> T AddControlsCondition(Nullable1bool>* newStunned, Nullable1bool>* newRooted) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B14D8))(this, newStunned, newRooted);
	}
	template <typename T = void> T ReplaceControlsCondition(Nullable1bool>* newStunned, Nullable1bool>* newRooted) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B15E4))(this, newStunned, newRooted);
	}
	template <typename T = void> T RemoveControlsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B16F0))(this);
	}
	template <typename T = CooldownConditionComponent*> T get_cooldownCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B16FC))(this);
	}
	template <typename T = bool> T get_hasCooldownCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1784))(this);
	}
	template <typename T = void> T AddCooldownCondition(bool newHas, Il2CppString* newName, Il2CppString* newTag, Nullable1int32_t>* newArmingIndex) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x20B1790))(this, newHas, newName, newTag, newArmingIndex);
	}
	template <typename T = void> T ReplaceCooldownCondition(bool newHas, Il2CppString* newName, Il2CppString* newTag, Nullable1int32_t>* newArmingIndex) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x20B18D4))(this, newHas, newName, newTag, newArmingIndex);
	}
	template <typename T = void> T RemoveCooldownCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1A18))(this);
	}
	template <typename T = CraftConditionComponent*> T get_craftCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1A24))(this);
	}
	template <typename T = bool> T get_hasCraftCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1AAC))(this);
	}
	template <typename T = void> T AddCraftCondition(Nullable1bool>* newOutputSlotsEmpty) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*))(Il2CppBase() + 0x20B1AB8))(this, newOutputSlotsEmpty);
	}
	template <typename T = void> T ReplaceCraftCondition(Nullable1bool>* newOutputSlotsEmpty) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*))(Il2CppBase() + 0x20B1BBC))(this, newOutputSlotsEmpty);
	}
	template <typename T = void> T RemoveCraftCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1CC0))(this);
	}
	template <typename T = DamagedSourceConditionComponent*> T get_damagedSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1CCC))(this);
	}
	template <typename T = bool> T get_hasDamagedSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1D54))(this);
	}
	template <typename T = void> T AddDamagedSourceCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B1D60))(this, newValue);
	}
	template <typename T = void> T ReplaceDamagedSourceCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B1E68))(this, newValue);
	}
	template <typename T = void> T RemoveDamagedSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1F70))(this);
	}
	template <typename T = DistrictLevelRangeComponent*> T get_districtLevelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B1F7C))(this);
	}
	template <typename T = bool> T get_hasDistrictLevelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2004))(this);
	}
	template <typename T = void> T AddDistrictLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax, Nullable1bool>* newCompleted, Nullable1bool>* newReadyToBuild) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B2010))(this, newMin, newMax, newCompleted, newReadyToBuild);
	}
	template <typename T = void> T ReplaceDistrictLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax, Nullable1bool>* newCompleted, Nullable1bool>* newReadyToBuild) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B2130))(this, newMin, newMax, newCompleted, newReadyToBuild);
	}
	template <typename T = void> T RemoveDistrictLevelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2250))(this);
	}
	template <typename T = DungeonEnterConditionComponent*> T get_dungeonEnterCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B225C))(this);
	}
	template <typename T = bool> T get_hasDungeonEnterCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B22E4))(this);
	}
	template <typename T = void> T AddDungeonEnterCondition(bool newCanEnter) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B22F0))(this, newCanEnter);
	}
	template <typename T = void> T ReplaceDungeonEnterCondition(bool newCanEnter) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B23F8))(this, newCanEnter);
	}
	template <typename T = void> T RemoveDungeonEnterCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2500))(this);
	}
	template <typename T = EndTimeConditionComponent*> T get_endTimeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B250C))(this);
	}
	template <typename T = bool> T get_hasEndTimeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2594))(this);
	}
	template <typename T = void> T AddEndTimeCondition(bool newValue, bool newFailNotHaveEndTime, float newTimeOffset, bool newCheckGroupChild) {
		return ((T (*)(ConditionEntity*, bool, bool, float, bool))(Il2CppBase() + 0x20B25A0))(this, newValue, newFailNotHaveEndTime, newTimeOffset, newCheckGroupChild);
	}
	template <typename T = void> T ReplaceEndTimeCondition(bool newValue, bool newFailNotHaveEndTime, float newTimeOffset, bool newCheckGroupChild) {
		return ((T (*)(ConditionEntity*, bool, bool, float, bool))(Il2CppBase() + 0x20B26D8))(this, newValue, newFailNotHaveEndTime, newTimeOffset, newCheckGroupChild);
	}
	template <typename T = void> T RemoveEndTimeCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2810))(this);
	}
	template <typename T = EquipTagsConditionComponent*> T get_equipTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B281C))(this);
	}
	template <typename T = bool> T get_hasEquipTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B28A4))(this);
	}
	template <typename T = void> T AddEquipTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B28B0))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T ReplaceEquipTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B2A08))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T RemoveEquipTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2B60))(this);
	}
	template <typename T = bool> T get_isFail() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2B6C))(this);
	}
	template <typename T = void> T set_isFail(bool value) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B2B78))(this, value);
	}
	template <typename T = FailMessageComponent*> T get_failMessage() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2C90))(this);
	}
	template <typename T = bool> T get_hasFailMessage() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20ADE80))(this);
	}
	template <typename T = void> T AddFailMessage(Il2CppString* newText) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B2D18))(this, newText);
	}
	template <typename T = void> T ReplaceFailMessage(Il2CppString* newText) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B2E2C))(this, newText);
	}
	template <typename T = void> T RemoveFailMessage() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2F40))(this);
	}
	template <typename T = FontanelGradeRangeComponent*> T get_fontanelGradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2F4C))(this);
	}
	template <typename T = bool> T get_hasFontanelGradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B2FD4))(this);
	}
	template <typename T = void> T AddFontanelGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B2FE0))(this, newMin, newMax);
	}
	template <typename T = void> T ReplaceFontanelGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B30E8))(this, newMin, newMax);
	}
	template <typename T = void> T RemoveFontanelGradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B31F0))(this);
	}
	template <typename T = FurnitureConditionComponent*> T get_furnitureCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE190))(this);
	}
	template <typename T = bool> T get_hasFurnitureCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B31FC))(this);
	}
	template <typename T = void> T AddFurnitureCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3208))(this, newName);
	}
	template <typename T = void> T ReplaceFurnitureCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B331C))(this, newName);
	}
	template <typename T = void> T RemoveFurnitureCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3430))(this);
	}
	template <typename T = FurnitureEmptyUnlockedSlotConditionComponent*> T get_furnitureEmptyUnlockedSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AE218))(this);
	}
	template <typename T = bool> T get_hasFurnitureEmptyUnlockedSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B343C))(this);
	}
	template <typename T = void> T AddFurnitureEmptyUnlockedSlotCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3448))(this, newName);
	}
	template <typename T = void> T ReplaceFurnitureEmptyUnlockedSlotCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B355C))(this, newName);
	}
	template <typename T = void> T RemoveFurnitureEmptyUnlockedSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3670))(this);
	}
	template <typename T = GameObjectsSaveConditionComponent*> T get_gameObjectsSaveCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B367C))(this);
	}
	template <typename T = bool> T get_hasGameObjectsSaveCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3704))(this);
	}
	template <typename T = void> T AddGameObjectsSaveCondition(Il2CppString* newName, bool newHas) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20B3710))(this, newName, newHas);
	}
	template <typename T = void> T ReplaceGameObjectsSaveCondition(Il2CppString* newName, bool newHas) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20B3830))(this, newName, newHas);
	}
	template <typename T = void> T RemoveGameObjectsSaveCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3950))(this);
	}
	template <typename T = GlobalMapConditionComponent*> T get_globalMapCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B395C))(this);
	}
	template <typename T = bool> T get_hasGlobalMapCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B39E4))(this);
	}
	template <typename T = void> T AddGlobalMapCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B39F0))(this, newValue);
	}
	template <typename T = void> T ReplaceGlobalMapCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B3AF8))(this, newValue);
	}
	template <typename T = void> T RemoveGlobalMapCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C00))(this);
	}
	template <typename T = GradeRangeComponent*> T get_gradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C0C))(this);
	}
	template <typename T = bool> T get_hasGradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C94))(this);
	}
	template <typename T = void> T AddGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B3CA0))(this, newMin, newMax);
	}
	template <typename T = void> T ReplaceGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B3DA8))(this, newMin, newMax);
	}
	template <typename T = void> T RemoveGradeRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3EB0))(this);
	}
	template <typename T = GuildBossKilledConditionComponent*> T get_guildBossKilledCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3EBC))(this);
	}
	template <typename T = bool> T get_hasGuildBossKilledCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B3F44))(this);
	}
	template <typename T = void> T AddGuildBossKilledCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3F50))(this, newName);
	}
	template <typename T = void> T ReplaceGuildBossKilledCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B4064))(this, newName);
	}
	template <typename T = void> T RemoveGuildBossKilledCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4178))(this);
	}
	template <typename T = GuildConditionComponent*> T get_guildCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4184))(this);
	}
	template <typename T = bool> T get_hasGuildCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B420C))(this);
	}
	template <typename T = void> T AddGuildCondition(bool newHasGuild) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4218))(this, newHasGuild);
	}
	template <typename T = void> T ReplaceGuildCondition(bool newHasGuild) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4320))(this, newHasGuild);
	}
	template <typename T = void> T RemoveGuildCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4428))(this);
	}
	template <typename T = HealthConditionComponent*> T get_healthCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4434))(this);
	}
	template <typename T = bool> T get_hasHealthCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B44BC))(this);
	}
	template <typename T = void> T AddHealthCondition(Nullable1bool>* newFull, Nullable1float>* newMinCoef, Nullable1float>* newMaxCoef, Nullable1float>* newMinValue, Nullable1float>* newMaxValue) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1float>*, Nullable1float>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B44C8))(this, newFull, newMinCoef, newMaxCoef, newMinValue, newMaxValue);
	}
	template <typename T = void> T ReplaceHealthCondition(Nullable1bool>* newFull, Nullable1float>* newMinCoef, Nullable1float>* newMaxCoef, Nullable1float>* newMinValue, Nullable1float>* newMaxValue) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1float>*, Nullable1float>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B45FC))(this, newFull, newMinCoef, newMaxCoef, newMinValue, newMaxValue);
	}
	template <typename T = void> T RemoveHealthCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4730))(this);
	}
	template <typename T = HidePetConditionComponent*> T get_hidePetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B473C))(this);
	}
	template <typename T = bool> T get_hasHidePetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B47C4))(this);
	}
	template <typename T = void> T AddHidePetCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B47D0))(this, newValue);
	}
	template <typename T = void> T ReplaceHidePetCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B48D8))(this, newValue);
	}
	template <typename T = void> T RemoveHidePetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B49E0))(this);
	}
	template <typename T = ImmobilizedConditionComponent*> T get_immobilizedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B49EC))(this);
	}
	template <typename T = bool> T get_hasImmobilizedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4A74))(this);
	}
	template <typename T = void> T AddImmobilizedCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4A80))(this, newValue);
	}
	template <typename T = void> T ReplaceImmobilizedCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4B88))(this, newValue);
	}
	template <typename T = void> T RemoveImmobilizedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4C90))(this);
	}
	template <typename T = ImmuneConditionComponent*> T get_immuneCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4C9C))(this);
	}
	template <typename T = bool> T get_hasImmuneCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4D24))(this);
	}
	template <typename T = void> T AddImmuneCondition(Nullable1bool>* newUnstopable, Nullable1bool>* newDebuffImmune) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B4D30))(this, newUnstopable, newDebuffImmune);
	}
	template <typename T = void> T ReplaceImmuneCondition(Nullable1bool>* newUnstopable, Nullable1bool>* newDebuffImmune) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B4E3C))(this, newUnstopable, newDebuffImmune);
	}
	template <typename T = void> T RemoveImmuneCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4F48))(this);
	}
	template <typename T = InteractionConditionComponent*> T get_interactionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4F54))(this);
	}
	template <typename T = bool> T get_hasInteractionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B4FDC))(this);
	}
	template <typename T = void> T AddInteractionCondition(bool newValue, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x20B4FE8))(this, newValue, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T ReplaceInteractionCondition(bool newValue, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x20B5160))(this, newValue, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename T = void> T RemoveInteractionCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B52D8))(this);
	}
	template <typename T = InventoryConditionComponent*> T get_inventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B52E4))(this);
	}
	template <typename T = bool> T get_hasInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B536C))(this);
	}
	template <typename T = void> T AddInventoryCondition(bool newIsEmpty, Nullable1int32_t>* newMinCount, bool newCountArming) {
		return ((T (*)(ConditionEntity*, bool, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20B5378))(this, newIsEmpty, newMinCount, newCountArming);
	}
	template <typename T = void> T ReplaceInventoryCondition(bool newIsEmpty, Nullable1int32_t>* newMinCount, bool newCountArming) {
		return ((T (*)(ConditionEntity*, bool, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20B549C))(this, newIsEmpty, newMinCount, newCountArming);
	}
	template <typename T = void> T RemoveInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B55C0))(this);
	}
	template <typename T = ItemCraftActiveComponent*> T get_itemCraftActive() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B55CC))(this);
	}
	template <typename T = bool> T get_hasItemCraftActive() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5654))(this);
	}
	template <typename T = void> T AddItemCraftActive(Il2CppString* newTargetCraftFurniture, Il2CppString* newTargetRecipe, bool newValue) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B5660))(this, newTargetCraftFurniture, newTargetRecipe, newValue);
	}
	template <typename T = void> T ReplaceItemCraftActive(Il2CppString* newTargetCraftFurniture, Il2CppString* newTargetRecipe, bool newValue) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B579C))(this, newTargetCraftFurniture, newTargetRecipe, newValue);
	}
	template <typename T = void> T RemoveItemCraftActive() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B58D8))(this);
	}
	template <typename T = ItemInSlotConditionComponent*> T get_itemInSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B58E4))(this);
	}
	template <typename T = bool> T get_hasItemInSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B596C))(this);
	}
	template <typename T = void> T AddItemInSlotCondition(int32_t newSlotIndex, bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((T (*)(ConditionEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x20B5978))(this, newSlotIndex, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T ReplaceItemInSlotCondition(int32_t newSlotIndex, bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<uintptr_t>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((T (*)(ConditionEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x20B5AFC))(this, newSlotIndex, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename T = void> T RemoveItemInSlotCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5C80))(this);
	}
	template <typename T = LevelRangeComponent*> T get_levelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5C8C))(this);
	}
	template <typename T = bool> T get_hasLevelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5D14))(this);
	}
	template <typename T = void> T AddLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B5D20))(this, newMin, newMax);
	}
	template <typename T = void> T ReplaceLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B5E28))(this, newMin, newMax);
	}
	template <typename T = void> T RemoveLevelRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5F30))(this);
	}
	template <typename T = LocationGeneratorConditionComponent*> T get_locationGeneratorCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5F3C))(this);
	}
	template <typename T = bool> T get_hasLocationGeneratorCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B5FC4))(this);
	}
	template <typename T = void> T AddLocationGeneratorCondition(Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newLooseStreak) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B5FD0))(this, newMinLevel, newMaxLevel, newLooseStreak);
	}
	template <typename T = void> T ReplaceLocationGeneratorCondition(Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newLooseStreak) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B60E8))(this, newMinLevel, newMaxLevel, newLooseStreak);
	}
	template <typename T = void> T RemoveLocationGeneratorCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6200))(this);
	}
	template <typename T = LocationObjectsConditionComponent*> T get_locationObjectsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B620C))(this);
	}
	template <typename T = bool> T get_hasLocationObjectsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6294))(this);
	}
	template <typename T = void> T AddLocationObjectsCondition(Il2CppString* newBlueprintName, Il2CppString* newUniqueName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, Nullable1bool>* newPlaceOwner) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B62A0))(this, newBlueprintName, newUniqueName, newMinCount, newMaxCount, newPlaceOwner);
	}
	template <typename T = void> T ReplaceLocationObjectsCondition(Il2CppString* newBlueprintName, Il2CppString* newUniqueName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, Nullable1bool>* newPlaceOwner) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B63EC))(this, newBlueprintName, newUniqueName, newMinCount, newMaxCount, newPlaceOwner);
	}
	template <typename T = void> T RemoveLocationObjectsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6538))(this);
	}
	template <typename T = LocationTagsConditionComponent*> T get_locationTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6544))(this);
	}
	template <typename T = bool> T get_hasLocationTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B65CC))(this);
	}
	template <typename T = void> T AddLocationTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B65D8))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T ReplaceLocationTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B6730))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T RemoveLocationTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6888))(this);
	}
	template <typename T = MagicConditionComponent*> T get_magicCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6894))(this);
	}
	template <typename T = bool> T get_hasMagicCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B691C))(this);
	}
	template <typename T = void> T AddMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6928))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T ReplaceMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6A90))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename T = void> T RemoveMagicCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6BF8))(this);
	}
	template <typename T = MapPointConditionComponent*> T get_mapPointCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6C04))(this);
	}
	template <typename T = bool> T get_hasMapPointCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6C8C))(this);
	}
	template <typename T = void> T AddMapPointCondition(Il2CppString* newName, Il2CppString* newTag, bool newActive) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6C98))(this, newName, newTag, newActive);
	}
	template <typename T = void> T ReplaceMapPointCondition(Il2CppString* newName, Il2CppString* newTag, bool newActive) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6DD4))(this, newName, newTag, newActive);
	}
	template <typename T = void> T RemoveMapPointCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6F10))(this);
	}
	template <typename T = MountInventoryConditionComponent*> T get_mountInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6F1C))(this);
	}
	template <typename T = bool> T get_hasMountInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B6FA4))(this);
	}
	template <typename T = void> T AddMountInventoryCondition(int32_t newEmptySlots, Il2CppString* newHasMount, Il2CppString* newHastMount) {
		return ((T (*)(ConditionEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x20B6FB0))(this, newEmptySlots, newHasMount, newHastMount);
	}
	template <typename T = void> T ReplaceMountInventoryCondition(int32_t newEmptySlots, Il2CppString* newHasMount, Il2CppString* newHastMount) {
		return ((T (*)(ConditionEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x20B70E8))(this, newEmptySlots, newHasMount, newHastMount);
	}
	template <typename T = void> T RemoveMountInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7220))(this);
	}
	template <typename T = MoveToConditionComponent*> T get_moveToCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B722C))(this);
	}
	template <typename T = bool> T get_hasMoveToCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B72B4))(this);
	}
	template <typename T = void> T AddMoveToCondition(bool newValid) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B72C0))(this, newValid);
	}
	template <typename T = void> T ReplaceMoveToCondition(bool newValid) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B73C8))(this, newValid);
	}
	template <typename T = void> T RemoveMoveToCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B74D0))(this);
	}
	template <typename T = MovingConditionComponent*> T get_movingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B74DC))(this);
	}
	template <typename T = bool> T get_hasMovingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7564))(this);
	}
	template <typename T = void> T AddMovingCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7570))(this, newValue);
	}
	template <typename T = void> T ReplaceMovingCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7678))(this, newValue);
	}
	template <typename T = void> T RemoveMovingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7780))(this);
	}
	template <typename T = OldBlueprintComponent*> T get_oldBlueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B778C))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7814))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B7820))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B7934))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7A48))(this);
	}
	template <typename T = OrComponent*> T get_or() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20ADF14))(this);
	}
	template <typename T = bool> T get_hasOr() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7A54))(this);
	}
	template <typename T = void> T AddOr(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B7A60))(this, newNames);
	}
	template <typename T = void> T ReplaceOr(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B7B74))(this, newNames);
	}
	template <typename T = void> T RemoveOr() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7C88))(this);
	}
	template <typename T = OwnConditionComponent*> T get_ownCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7C94))(this);
	}
	template <typename T = bool> T get_hasOwnCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7D1C))(this);
	}
	template <typename T = void> T AddOwnCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7D28))(this, newValue);
	}
	template <typename T = void> T ReplaceOwnCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7E30))(this, newValue);
	}
	template <typename T = void> T RemoveOwnCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7F38))(this);
	}
	template <typename T = OwnerConditionComponent*> T get_ownerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7F44))(this);
	}
	template <typename T = bool> T get_hasOwnerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B7FCC))(this);
	}
	template <typename T = void> T AddOwnerCondition(bool newPresent, Il2CppString* newTargetCondition) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*))(Il2CppBase() + 0x20B7FD8))(this, newPresent, newTargetCondition);
	}
	template <typename T = void> T ReplaceOwnerCondition(bool newPresent, Il2CppString* newTargetCondition) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*))(Il2CppBase() + 0x20B80F8))(this, newPresent, newTargetCondition);
	}
	template <typename T = void> T RemoveOwnerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8218))(this);
	}
	template <typename T = ParentConditionComponent*> T get_parentCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8224))(this);
	}
	template <typename T = bool> T get_hasParentCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B82AC))(this);
	}
	template <typename T = void> T AddParentCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B82B8))(this, newValue);
	}
	template <typename T = void> T ReplaceParentCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B83C0))(this, newValue);
	}
	template <typename T = void> T RemoveParentCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B84C8))(this);
	}
	template <typename T = PetConditionComponent*> T get_petCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B84D4))(this);
	}
	template <typename T = bool> T get_hasPetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B855C))(this);
	}
	template <typename T = void> T AddPetCondition(Il2CppString* newType, Nullable1bool>* newCanAddExp) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Nullable1bool>*))(Il2CppBase() + 0x20B8568))(this, newType, newCanAddExp);
	}
	template <typename T = void> T ReplacePetCondition(Il2CppString* newType, Nullable1bool>* newCanAddExp) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Nullable1bool>*))(Il2CppBase() + 0x20B8684))(this, newType, newCanAddExp);
	}
	template <typename T = void> T RemovePetCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B87A0))(this);
	}
	template <typename T = PetInventoryConditionComponent*> T get_petInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B87AC))(this);
	}
	template <typename T = bool> T get_hasPetInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8834))(this);
	}
	template <typename T = void> T AddPetInventoryCondition(bool newHas, Il2CppString* newPetType, int32_t newMinGrade) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, int32_t))(Il2CppBase() + 0x20B8840))(this, newHas, newPetType, newMinGrade);
	}
	template <typename T = void> T ReplacePetInventoryCondition(bool newHas, Il2CppString* newPetType, int32_t newMinGrade) {
		return ((T (*)(ConditionEntity*, bool, Il2CppString*, int32_t))(Il2CppBase() + 0x20B8970))(this, newHas, newPetType, newMinGrade);
	}
	template <typename T = void> T RemovePetInventoryCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8AA0))(this);
	}
	template <typename T = PlayerConditionComponent*> T get_playerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8AAC))(this);
	}
	template <typename T = bool> T get_hasPlayerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8B34))(this);
	}
	template <typename T = void> T AddPlayerCondition(Nullable1bool>* newReal, bool newValue) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, bool))(Il2CppBase() + 0x20B8B40))(this, newReal, newValue);
	}
	template <typename T = void> T ReplacePlayerCondition(Nullable1bool>* newReal, bool newValue) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, bool))(Il2CppBase() + 0x20B8C50))(this, newReal, newValue);
	}
	template <typename T = void> T RemovePlayerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8D60))(this);
	}
	template <typename T = PlayersCountConditionComponent*> T get_playersCountCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8D6C))(this);
	}
	template <typename T = bool> T get_hasPlayersCountCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B8DF4))(this);
	}
	template <typename T = void> T AddPlayersCountCondition(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B8E00))(this, newMin, newMax);
	}
	template <typename T = void> T ReplacePlayersCountCondition(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B8F08))(this, newMin, newMax);
	}
	template <typename T = void> T RemovePlayersCountCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9010))(this);
	}
	template <typename T = PointComponent*> T get_point() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B901C))(this);
	}
	template <typename T = bool> T get_hasPoint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B90A4))(this);
	}
	template <typename T = void> T AddPoint(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B90B0))(this, newName);
	}
	template <typename T = void> T ReplacePoint(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B91C4))(this, newName);
	}
	template <typename T = void> T RemovePoint() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B92D8))(this);
	}
	template <typename T = PortalOpenConditionComponent*> T get_portalOpenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B92E4))(this);
	}
	template <typename T = bool> T get_hasPortalOpenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B936C))(this);
	}
	template <typename T = void> T AddPortalOpenCondition(LobbyType* newType, bool newIsOpen) {
		return ((T (*)(ConditionEntity*, LobbyType*, bool))(Il2CppBase() + 0x20B9378))(this, newType, newIsOpen);
	}
	template <typename T = void> T ReplacePortalOpenCondition(LobbyType* newType, bool newIsOpen) {
		return ((T (*)(ConditionEntity*, LobbyType*, bool))(Il2CppBase() + 0x20B9488))(this, newType, newIsOpen);
	}
	template <typename T = void> T RemovePortalOpenCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9598))(this);
	}
	template <typename T = PowerRangeComponent*> T get_powerRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B95A4))(this);
	}
	template <typename T = bool> T get_hasPowerRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B962C))(this);
	}
	template <typename T = void> T AddPowerRange(Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B9638))(this, newMin, newMax);
	}
	template <typename T = void> T ReplacePowerRange(Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((T (*)(ConditionEntity*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B9740))(this, newMin, newMax);
	}
	template <typename T = void> T RemovePowerRange() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9848))(this);
	}
	template <typename T = ProductConditionComponent*> T get_productCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9854))(this);
	}
	template <typename T = bool> T get_hasProductCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B98DC))(this);
	}
	template <typename T = void> T AddProductCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B98E8))(this, newName);
	}
	template <typename T = void> T ReplaceProductCondition(Il2CppString* newName) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B99FC))(this, newName);
	}
	template <typename T = void> T RemoveProductCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9B10))(this);
	}
	template <typename T = PvPStateConditionComponent*> T get_pvPStateCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9B1C))(this);
	}
	template <typename T = bool> T get_hasPvPStateCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9BA4))(this);
	}
	template <typename T = void> T AddPvPStateCondition(Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B9BB0))(this, newAny, newNot);
	}
	template <typename T = void> T ReplacePvPStateCondition(Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20B9CD8))(this, newAny, newNot);
	}
	template <typename T = void> T RemovePvPStateCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9E00))(this);
	}
	template <typename T = QuestConditionComponent*> T get_questCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20AAF74))(this);
	}
	template <typename T = bool> T get_hasQuestCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20B9E0C))(this);
	}
	template <typename T = void> T AddQuestCondition(Il2CppString* newName, Il2CppString* newAllWithTag, Il2CppString* newAnyWithTag, QuestStatus* newStatus) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0x20B9E18))(this, newName, newAllWithTag, newAnyWithTag, newStatus);
	}
	template <typename T = void> T ReplaceQuestCondition(Il2CppString* newName, Il2CppString* newAllWithTag, Il2CppString* newAnyWithTag, QuestStatus* newStatus) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0x20B9F64))(this, newName, newAllWithTag, newAnyWithTag, newStatus);
	}
	template <typename T = void> T RemoveQuestCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA0B0))(this);
	}
	template <typename T = RGConditionComponent*> T get_rGCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA0BC))(this);
	}
	template <typename T = bool> T get_hasRGCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA144))(this);
	}
	template <typename T = void> T AddRGCondition(Il2CppString* newName, bool newLimited) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20BA150))(this, newName, newLimited);
	}
	template <typename T = void> T ReplaceRGCondition(Il2CppString* newName, bool newLimited) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20BA270))(this, newName, newLimited);
	}
	template <typename T = void> T RemoveRGCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA390))(this);
	}
	template <typename T = ResourceConditionComponent*> T get_resourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA39C))(this);
	}
	template <typename T = bool> T get_hasResourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA424))(this);
	}
	template <typename T = void> T AddResourceCondition(Il2CppString* newName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, bool newWithExternal) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20BA430))(this, newName, newMinCount, newMaxCount, newWithExternal);
	}
	template <typename T = void> T ReplaceResourceCondition(Il2CppString* newName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, bool newWithExternal) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20BA564))(this, newName, newMinCount, newMaxCount, newWithExternal);
	}
	template <typename T = void> T RemoveResourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA698))(this);
	}
	template <typename T = RewardsConditionComponent*> T get_rewardsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA6A4))(this);
	}
	template <typename T = bool> T get_hasRewardsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA72C))(this);
	}
	template <typename T = void> T AddRewardsCondition(bool newExist) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA738))(this, newExist);
	}
	template <typename T = void> T ReplaceRewardsCondition(bool newExist) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA840))(this, newExist);
	}
	template <typename T = void> T RemoveRewardsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA948))(this);
	}
	template <typename T = RidingConditionComponent*> T get_ridingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA954))(this);
	}
	template <typename T = bool> T get_hasRidingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BA9DC))(this);
	}
	template <typename T = void> T AddRidingCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA9E8))(this, newValue);
	}
	template <typename T = void> T ReplaceRidingCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BAAF0))(this, newValue);
	}
	template <typename T = void> T RemoveRidingCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BABF8))(this);
	}
	template <typename T = SaveSourceConditionComponent*> T get_saveSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BAC04))(this);
	}
	template <typename T = bool> T get_hasSaveSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BAC8C))(this);
	}
	template <typename T = void> T AddSaveSourceCondition(bool newCan) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BAC98))(this, newCan);
	}
	template <typename T = void> T ReplaceSaveSourceCondition(bool newCan) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BADA0))(this, newCan);
	}
	template <typename T = void> T RemoveSaveSourceCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BAEA8))(this);
	}
	template <typename T = ScoutConditionComponent*> T get_scoutCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BAEB4))(this);
	}
	template <typename T = bool> T get_hasScoutCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BAF3C))(this);
	}
	template <typename T = void> T AddScoutCondition(ScoutStatus* newStatus) {
		return ((T (*)(ConditionEntity*, ScoutStatus*))(Il2CppBase() + 0x20BAF48))(this, newStatus);
	}
	template <typename T = void> T ReplaceScoutCondition(ScoutStatus* newStatus) {
		return ((T (*)(ConditionEntity*, ScoutStatus*))(Il2CppBase() + 0x20BB04C))(this, newStatus);
	}
	template <typename T = void> T RemoveScoutCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB150))(this);
	}
	template <typename T = SeasonConditionComponent*> T get_seasonCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB15C))(this);
	}
	template <typename T = bool> T get_hasSeasonCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB1E4))(this);
	}
	template <typename T = void> T AddSeasonCondition(int32_t newOrder, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((T (*)(ConditionEntity*, int32_t, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BB1F0))(this, newOrder, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename T = void> T ReplaceSeasonCondition(int32_t newOrder, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((T (*)(ConditionEntity*, int32_t, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BB314))(this, newOrder, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename T = void> T RemoveSeasonCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB438))(this);
	}
	template <typename T = ServerConditionComponent*> T get_serverCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB444))(this);
	}
	template <typename T = bool> T get_hasServerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB4CC))(this);
	}
	template <typename T = void> T AddServerCondition(Nullable1bool>* newIsCyclic, Nullable1bool>* newIsOBT, Nullable1bool>* newIsQA) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20BB4D8))(this, newIsCyclic, newIsOBT, newIsQA);
	}
	template <typename T = void> T ReplaceServerCondition(Nullable1bool>* newIsCyclic, Nullable1bool>* newIsOBT, Nullable1bool>* newIsQA) {
		return ((T (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20BB5F4))(this, newIsCyclic, newIsOBT, newIsQA);
	}
	template <typename T = void> T RemoveServerCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB710))(this);
	}
	template <typename T = SharedConditionComponent*> T get_sharedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB71C))(this);
	}
	template <typename T = bool> T get_hasSharedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BB7A4))(this);
	}
	template <typename T = void> T AddSharedCondition(Il2CppString* newCheckGroupSlot, bool newValue, bool newGetFromParent) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x20BB7B0))(this, newCheckGroupSlot, newValue, newGetFromParent);
	}
	template <typename T = void> T ReplaceSharedCondition(Il2CppString* newCheckGroupSlot, bool newValue, bool newGetFromParent) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x20BB8E4))(this, newCheckGroupSlot, newValue, newGetFromParent);
	}
	template <typename T = void> T RemoveSharedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBA18))(this);
	}
	template <typename T = SneakConditionComponent*> T get_sneakCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBA24))(this);
	}
	template <typename T = bool> T get_hasSneakCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBAAC))(this);
	}
	template <typename T = void> T AddSneakCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BBAB8))(this, newValue);
	}
	template <typename T = void> T ReplaceSneakCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BBBC0))(this, newValue);
	}
	template <typename T = void> T RemoveSneakCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBCC8))(this);
	}
	template <typename T = SpeedConditionComponent*> T get_speedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBCD4))(this);
	}
	template <typename T = bool> T get_hasSpeedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBD5C))(this);
	}
	template <typename T = void> T AddSpeedCondition(bool newHas, Nullable1bool>* newBaseNotZero, Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((T (*)(ConditionEntity*, bool, Nullable1bool>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20BBD68))(this, newHas, newBaseNotZero, newMin, newMax);
	}
	template <typename T = void> T ReplaceSpeedCondition(bool newHas, Nullable1bool>* newBaseNotZero, Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((T (*)(ConditionEntity*, bool, Nullable1bool>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20BBE90))(this, newHas, newBaseNotZero, newMin, newMax);
	}
	template <typename T = void> T RemoveSpeedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBFB8))(this);
	}
	template <typename T = StatueConditionComponent*> T get_statueCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BBFC4))(this);
	}
	template <typename T = bool> T get_hasStatueCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC04C))(this);
	}
	template <typename T = void> T AddStatueCondition(StatueStatus* newStatus) {
		return ((T (*)(ConditionEntity*, StatueStatus*))(Il2CppBase() + 0x20BC058))(this, newStatus);
	}
	template <typename T = void> T ReplaceStatueCondition(StatueStatus* newStatus) {
		return ((T (*)(ConditionEntity*, StatueStatus*))(Il2CppBase() + 0x20BC15C))(this, newStatus);
	}
	template <typename T = void> T RemoveStatueCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC260))(this);
	}
	template <typename T = TagsConditionComponent*> T get_tagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC26C))(this);
	}
	template <typename T = bool> T get_hasTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC2F4))(this);
	}
	template <typename T = void> T AddTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20BC300))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T ReplaceTagsCondition(Il2CppString* newValue, Il2CppArray<uintptr_t>* newAll, Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20BC458))(this, newValue, newAll, newAny, newNot);
	}
	template <typename T = void> T RemoveTagsCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC5B0))(this);
	}
	template <typename T = TavernBoardConditionComponent*> T get_tavernBoardCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC5BC))(this);
	}
	template <typename T = bool> T get_hasTavernBoardCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC644))(this);
	}
	template <typename T = void> T AddTavernBoardCondition(bool newCanClaim) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BC650))(this, newCanClaim);
	}
	template <typename T = void> T ReplaceTavernBoardCondition(bool newCanClaim) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BC758))(this, newCanClaim);
	}
	template <typename T = void> T RemoveTavernBoardCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC860))(this);
	}
	template <typename T = TempBuffConditionComponent*> T get_tempBuffCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC86C))(this);
	}
	template <typename T = bool> T get_hasTempBuffCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BC8F4))(this);
	}
	template <typename T = void> T AddTempBuffCondition(Il2CppString* newName, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BC900))(this, newName, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename T = void> T ReplaceTempBuffCondition(Il2CppString* newName, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((T (*)(ConditionEntity*, Il2CppString*, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BCA38))(this, newName, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename T = void> T RemoveTempBuffCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCB70))(this);
	}
	template <typename T = UnlockedConditionComponent*> T get_unlockedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCB7C))(this);
	}
	template <typename T = bool> T get_hasUnlockedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCC04))(this);
	}
	template <typename T = void> T AddUnlockedCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BCC10))(this, newValue);
	}
	template <typename T = void> T ReplaceUnlockedCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BCD18))(this, newValue);
	}
	template <typename T = void> T RemoveUnlockedCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCE20))(this);
	}
	template <typename T = ViewConditionComponent*> T get_viewCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCE2C))(this);
	}
	template <typename T = bool> T get_hasViewCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BCEB4))(this);
	}
	template <typename T = void> T AddViewCondition(Il2CppString* newContains) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20BCEC0))(this, newContains);
	}
	template <typename T = void> T ReplaceViewCondition(Il2CppString* newContains) {
		return ((T (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20BCFD4))(this, newContains);
	}
	template <typename T = void> T RemoveViewCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD0E8))(this);
	}
	template <typename T = VisibleConditionComponent*> T get_visibleCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD0F4))(this);
	}
	template <typename T = bool> T get_hasVisibleCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD17C))(this);
	}
	template <typename T = void> T AddVisibleCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BD188))(this, newValue);
	}
	template <typename T = void> T ReplaceVisibleCondition(bool newValue) {
		return ((T (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BD290))(this, newValue);
	}
	template <typename T = void> T RemoveVisibleCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD398))(this);
	}
	template <typename T = WorldStatusConditionComponent*> T get_worldStatusCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD3A4))(this);
	}
	template <typename T = bool> T get_hasWorldStatusCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD42C))(this);
	}
	template <typename T = void> T AddWorldStatusCondition(Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20BD438))(this, newAny, newNot);
	}
	template <typename T = void> T ReplaceWorldStatusCondition(Il2CppArray<uintptr_t>* newAny, Il2CppArray<uintptr_t>* newNot) {
		return ((T (*)(ConditionEntity*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20BD560))(this, newAny, newNot);
	}
	template <typename T = void> T RemoveWorldStatusCondition() {
		return ((T (*)(ConditionEntity*))(Il2CppBase() + 0x20BD688))(this);
	}

};

