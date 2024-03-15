#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionEntity"));
	}

	template <typename R = FailComponent*> static R& failComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE410))(this);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE518))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE5A0))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AE5AC))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AE6B4))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE7BC))(this);
	}
	template <typename R = ActorMagicsConditionComponent*> R get_actorMagicsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE7C8))(this);
	}
	template <typename R = bool> R get_hasActorMagicsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE850))(this);
	}
	template <typename R = void> R AddActorMagicsCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20AE85C))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R ReplaceActorMagicsCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20AE9C4))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R RemoveActorMagicsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEB2C))(this);
	}
	template <typename R = AggroTargetConditionComponent*> R get_aggroTargetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEB38))(this);
	}
	template <typename R = bool> R get_hasAggroTargetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEBC0))(this);
	}
	template <typename R = void> R AddAggroTargetCondition(Il2CppString* newTargetCondition, Il2CppArray<Il2CppString*>* newTargetConditions) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20AEBCC))(this, newTargetCondition, newTargetConditions);
	}
	template <typename R = void> R ReplaceAggroTargetCondition(Il2CppString* newTargetCondition, Il2CppArray<Il2CppString*>* newTargetConditions) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20AECF4))(this, newTargetCondition, newTargetConditions);
	}
	template <typename R = void> R RemoveAggroTargetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEE1C))(this);
	}
	template <typename R = AllyConditionComponent*> R get_allyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEE28))(this);
	}
	template <typename R = bool> R get_hasAllyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AEEB0))(this);
	}
	template <typename R = void> R AddAllyCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AEEBC))(this, newValue);
	}
	template <typename R = void> R ReplaceAllyCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AEFC4))(this, newValue);
	}
	template <typename R = void> R RemoveAllyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF0CC))(this);
	}
	template <typename R = AndComponent*> R get_and() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20ADE8C))(this);
	}
	template <typename R = bool> R get_hasAnd() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF0D8))(this);
	}
	template <typename R = void> R AddAnd(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20AF0E4))(this, newNames);
	}
	template <typename R = void> R ReplaceAnd(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20AF1F8))(this, newNames);
	}
	template <typename R = void> R RemoveAnd() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF30C))(this);
	}
	template <typename R = AoeConditionComponent*> R get_aoeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF318))(this);
	}
	template <typename R = bool> R get_hasAoeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF3A0))(this);
	}
	template <typename R = void> R AddAoeCondition(TargetsSelector* newSelector, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount) {
		return ((R (*)(ConditionEntity*, TargetsSelector*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20AF3AC))(this, newSelector, newMinCount, newMaxCount);
	}
	template <typename R = void> R ReplaceAoeCondition(TargetsSelector* newSelector, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount) {
		return ((R (*)(ConditionEntity*, TargetsSelector*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20AF4D4))(this, newSelector, newMinCount, newMaxCount);
	}
	template <typename R = void> R RemoveAoeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF5FC))(this);
	}
	template <typename R = BattlePassConditionComponent*> R get_battlePassCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF608))(this);
	}
	template <typename R = bool> R get_hasBattlePassCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF690))(this);
	}
	template <typename R = void> R AddBattlePassCondition(CurrencyType* newCurrency, Nullable1bool>* newHasReward, Nullable1bool>* newNeedClaimReward, Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newNeedReset) {
		return ((R (*)(ConditionEntity*, CurrencyType*, Nullable1bool>*, Nullable1bool>*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20AF69C))(this, newCurrency, newHasReward, newNeedClaimReward, newMinLevel, newMaxLevel, newNeedReset);
	}
	template <typename R = void> R ReplaceBattlePassCondition(CurrencyType* newCurrency, Nullable1bool>* newHasReward, Nullable1bool>* newNeedClaimReward, Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newNeedReset) {
		return ((R (*)(ConditionEntity*, CurrencyType*, Nullable1bool>*, Nullable1bool>*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20AF7D4))(this, newCurrency, newHasReward, newNeedClaimReward, newMinLevel, newMaxLevel, newNeedReset);
	}
	template <typename R = void> R RemoveBattlePassCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AF90C))(this);
	}
	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE490))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE484))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20AF918))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20AFA2C))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFB40))(this);
	}
	template <typename R = BossPortalConditionComponent*> R get_bossPortalCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFB4C))(this);
	}
	template <typename R = bool> R get_hasBossPortalCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFBD4))(this);
	}
	template <typename R = void> R AddBossPortalCondition(bool newIsOpen) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AFBE0))(this, newIsOpen);
	}
	template <typename R = void> R ReplaceBossPortalCondition(bool newIsOpen) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20AFCE8))(this, newIsOpen);
	}
	template <typename R = void> R RemoveBossPortalCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFDF0))(this);
	}
	template <typename R = BusyByConditionComponent*> R get_busyByCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFDFC))(this);
	}
	template <typename R = bool> R get_hasBusyByCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AFE84))(this);
	}
	template <typename R = void> R AddBusyByCondition(bool newByOther, bool newValue) {
		return ((R (*)(ConditionEntity*, bool, bool))(Il2CppBase() + 0x20AFE90))(this, newByOther, newValue);
	}
	template <typename R = void> R ReplaceBusyByCondition(bool newByOther, bool newValue) {
		return ((R (*)(ConditionEntity*, bool, bool))(Il2CppBase() + 0x20AFFA4))(this, newByOther, newValue);
	}
	template <typename R = void> R RemoveBusyByCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B00B8))(this);
	}
	template <typename R = BusyConditionComponent*> R get_busyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B00C4))(this);
	}
	template <typename R = bool> R get_hasBusyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B014C))(this);
	}
	template <typename R = void> R AddBusyCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0158))(this, newValue);
	}
	template <typename R = void> R ReplaceBusyCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0260))(this, newValue);
	}
	template <typename R = void> R RemoveBusyCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0368))(this);
	}
	template <typename R = CanSneakComponent*> R get_canSneak() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0374))(this);
	}
	template <typename R = bool> R get_hasCanSneak() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B03FC))(this);
	}
	template <typename R = void> R AddCanSneak(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0408))(this, newValue);
	}
	template <typename R = void> R ReplaceCanSneak(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0510))(this, newValue);
	}
	template <typename R = void> R RemoveCanSneak() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0618))(this);
	}
	template <typename R = ChildrenConditionComponent*> R get_childrenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0624))(this);
	}
	template <typename R = bool> R get_hasChildrenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B06AC))(this);
	}
	template <typename R = void> R AddChildrenCondition(Il2CppString* newTargetCondition, Il2CppArray<Il2CppString*>* newTargetConditions) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B06B8))(this, newTargetCondition, newTargetConditions);
	}
	template <typename R = void> R ReplaceChildrenCondition(Il2CppString* newTargetCondition, Il2CppArray<Il2CppString*>* newTargetConditions) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B07E0))(this, newTargetCondition, newTargetConditions);
	}
	template <typename R = void> R RemoveChildrenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0908))(this);
	}
	template <typename R = ClanInTeamConditionComponent*> R get_clanInTeamCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0914))(this);
	}
	template <typename R = bool> R get_hasClanInTeamCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B099C))(this);
	}
	template <typename R = void> R AddClanInTeamCondition(bool newContains) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B09A8))(this, newContains);
	}
	template <typename R = void> R ReplaceClanInTeamCondition(bool newContains) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0AB0))(this, newContains);
	}
	template <typename R = void> R RemoveClanInTeamCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0BB8))(this);
	}
	template <typename R = ClanRoleComponent*> R get_clanRole() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0BC4))(this);
	}
	template <typename R = bool> R get_hasClanRole() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0C4C))(this);
	}
	template <typename R = void> R AddClanRole(bool newIsLeader) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0C58))(this, newIsLeader);
	}
	template <typename R = void> R ReplaceClanRole(bool newIsLeader) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B0D60))(this, newIsLeader);
	}
	template <typename R = void> R RemoveClanRole() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0E68))(this);
	}
	template <typename R = ClassConditionComponent*> R get_classCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0E74))(this);
	}
	template <typename R = bool> R get_hasClassCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B0EFC))(this);
	}
	template <typename R = void> R AddClassCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B0F08))(this, newName);
	}
	template <typename R = void> R ReplaceClassCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B101C))(this, newName);
	}
	template <typename R = void> R RemoveClassCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1130))(this);
	}
	template <typename R = CollisionConditionComponent*> R get_collisionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B113C))(this);
	}
	template <typename R = bool> R get_hasCollisionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B11C4))(this);
	}
	template <typename R = void> R AddCollisionCondition(bool newHas, float newOffsetX, float newOffsetY, Nullable1float>* newRadius, Nullable1bool>* newOnBorder) {
		return ((R (*)(ConditionEntity*, bool, float, float, Nullable1float>*, Nullable1bool>*))(Il2CppBase() + 0x20B11D0))(this, newHas, newOffsetX, newOffsetY, newRadius, newOnBorder);
	}
	template <typename R = void> R ReplaceCollisionCondition(bool newHas, float newOffsetX, float newOffsetY, Nullable1float>* newRadius, Nullable1bool>* newOnBorder) {
		return ((R (*)(ConditionEntity*, bool, float, float, Nullable1float>*, Nullable1bool>*))(Il2CppBase() + 0x20B1304))(this, newHas, newOffsetX, newOffsetY, newRadius, newOnBorder);
	}
	template <typename R = void> R RemoveCollisionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1438))(this);
	}
	template <typename R = ControlsConditionComponent*> R get_controlsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1444))(this);
	}
	template <typename R = bool> R get_hasControlsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B14CC))(this);
	}
	template <typename R = void> R AddControlsCondition(Nullable1bool>* newStunned, Nullable1bool>* newRooted) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B14D8))(this, newStunned, newRooted);
	}
	template <typename R = void> R ReplaceControlsCondition(Nullable1bool>* newStunned, Nullable1bool>* newRooted) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B15E4))(this, newStunned, newRooted);
	}
	template <typename R = void> R RemoveControlsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B16F0))(this);
	}
	template <typename R = CooldownConditionComponent*> R get_cooldownCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B16FC))(this);
	}
	template <typename R = bool> R get_hasCooldownCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1784))(this);
	}
	template <typename R = void> R AddCooldownCondition(bool newHas, Il2CppString* newName, Il2CppString* newTag, Nullable1int32_t>* newArmingIndex) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x20B1790))(this, newHas, newName, newTag, newArmingIndex);
	}
	template <typename R = void> R ReplaceCooldownCondition(bool newHas, Il2CppString* newName, Il2CppString* newTag, Nullable1int32_t>* newArmingIndex) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Nullable1int32_t>*))(Il2CppBase() + 0x20B18D4))(this, newHas, newName, newTag, newArmingIndex);
	}
	template <typename R = void> R RemoveCooldownCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1A18))(this);
	}
	template <typename R = CraftConditionComponent*> R get_craftCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1A24))(this);
	}
	template <typename R = bool> R get_hasCraftCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1AAC))(this);
	}
	template <typename R = void> R AddCraftCondition(Nullable1bool>* newOutputSlotsEmpty) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*))(Il2CppBase() + 0x20B1AB8))(this, newOutputSlotsEmpty);
	}
	template <typename R = void> R ReplaceCraftCondition(Nullable1bool>* newOutputSlotsEmpty) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*))(Il2CppBase() + 0x20B1BBC))(this, newOutputSlotsEmpty);
	}
	template <typename R = void> R RemoveCraftCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1CC0))(this);
	}
	template <typename R = DamagedSourceConditionComponent*> R get_damagedSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1CCC))(this);
	}
	template <typename R = bool> R get_hasDamagedSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1D54))(this);
	}
	template <typename R = void> R AddDamagedSourceCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B1D60))(this, newValue);
	}
	template <typename R = void> R ReplaceDamagedSourceCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B1E68))(this, newValue);
	}
	template <typename R = void> R RemoveDamagedSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1F70))(this);
	}
	template <typename R = DistrictLevelRangeComponent*> R get_districtLevelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B1F7C))(this);
	}
	template <typename R = bool> R get_hasDistrictLevelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2004))(this);
	}
	template <typename R = void> R AddDistrictLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax, Nullable1bool>* newCompleted, Nullable1bool>* newReadyToBuild) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B2010))(this, newMin, newMax, newCompleted, newReadyToBuild);
	}
	template <typename R = void> R ReplaceDistrictLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax, Nullable1bool>* newCompleted, Nullable1bool>* newReadyToBuild) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B2130))(this, newMin, newMax, newCompleted, newReadyToBuild);
	}
	template <typename R = void> R RemoveDistrictLevelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2250))(this);
	}
	template <typename R = DungeonEnterConditionComponent*> R get_dungeonEnterCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B225C))(this);
	}
	template <typename R = bool> R get_hasDungeonEnterCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B22E4))(this);
	}
	template <typename R = void> R AddDungeonEnterCondition(bool newCanEnter) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B22F0))(this, newCanEnter);
	}
	template <typename R = void> R ReplaceDungeonEnterCondition(bool newCanEnter) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B23F8))(this, newCanEnter);
	}
	template <typename R = void> R RemoveDungeonEnterCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2500))(this);
	}
	template <typename R = EndTimeConditionComponent*> R get_endTimeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B250C))(this);
	}
	template <typename R = bool> R get_hasEndTimeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2594))(this);
	}
	template <typename R = void> R AddEndTimeCondition(bool newValue, bool newFailNotHaveEndTime, float newTimeOffset, bool newCheckGroupChild) {
		return ((R (*)(ConditionEntity*, bool, bool, float, bool))(Il2CppBase() + 0x20B25A0))(this, newValue, newFailNotHaveEndTime, newTimeOffset, newCheckGroupChild);
	}
	template <typename R = void> R ReplaceEndTimeCondition(bool newValue, bool newFailNotHaveEndTime, float newTimeOffset, bool newCheckGroupChild) {
		return ((R (*)(ConditionEntity*, bool, bool, float, bool))(Il2CppBase() + 0x20B26D8))(this, newValue, newFailNotHaveEndTime, newTimeOffset, newCheckGroupChild);
	}
	template <typename R = void> R RemoveEndTimeCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2810))(this);
	}
	template <typename R = EquipTagsConditionComponent*> R get_equipTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B281C))(this);
	}
	template <typename R = bool> R get_hasEquipTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B28A4))(this);
	}
	template <typename R = void> R AddEquipTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B28B0))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R ReplaceEquipTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B2A08))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R RemoveEquipTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2B60))(this);
	}
	template <typename R = bool> R get_isFail() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2B6C))(this);
	}
	template <typename R = void> R set_isFail(bool value) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B2B78))(this, value);
	}
	template <typename R = FailMessageComponent*> R get_failMessage() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2C90))(this);
	}
	template <typename R = bool> R get_hasFailMessage() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20ADE80))(this);
	}
	template <typename R = void> R AddFailMessage(Il2CppString* newText) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B2D18))(this, newText);
	}
	template <typename R = void> R ReplaceFailMessage(Il2CppString* newText) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B2E2C))(this, newText);
	}
	template <typename R = void> R RemoveFailMessage() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2F40))(this);
	}
	template <typename R = FontanelGradeRangeComponent*> R get_fontanelGradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2F4C))(this);
	}
	template <typename R = bool> R get_hasFontanelGradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B2FD4))(this);
	}
	template <typename R = void> R AddFontanelGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B2FE0))(this, newMin, newMax);
	}
	template <typename R = void> R ReplaceFontanelGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B30E8))(this, newMin, newMax);
	}
	template <typename R = void> R RemoveFontanelGradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B31F0))(this);
	}
	template <typename R = FurnitureConditionComponent*> R get_furnitureCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE190))(this);
	}
	template <typename R = bool> R get_hasFurnitureCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B31FC))(this);
	}
	template <typename R = void> R AddFurnitureCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3208))(this, newName);
	}
	template <typename R = void> R ReplaceFurnitureCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B331C))(this, newName);
	}
	template <typename R = void> R RemoveFurnitureCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3430))(this);
	}
	template <typename R = FurnitureEmptyUnlockedSlotConditionComponent*> R get_furnitureEmptyUnlockedSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AE218))(this);
	}
	template <typename R = bool> R get_hasFurnitureEmptyUnlockedSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B343C))(this);
	}
	template <typename R = void> R AddFurnitureEmptyUnlockedSlotCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3448))(this, newName);
	}
	template <typename R = void> R ReplaceFurnitureEmptyUnlockedSlotCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B355C))(this, newName);
	}
	template <typename R = void> R RemoveFurnitureEmptyUnlockedSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3670))(this);
	}
	template <typename R = GameObjectsSaveConditionComponent*> R get_gameObjectsSaveCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B367C))(this);
	}
	template <typename R = bool> R get_hasGameObjectsSaveCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3704))(this);
	}
	template <typename R = void> R AddGameObjectsSaveCondition(Il2CppString* newName, bool newHas) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20B3710))(this, newName, newHas);
	}
	template <typename R = void> R ReplaceGameObjectsSaveCondition(Il2CppString* newName, bool newHas) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20B3830))(this, newName, newHas);
	}
	template <typename R = void> R RemoveGameObjectsSaveCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3950))(this);
	}
	template <typename R = GlobalMapConditionComponent*> R get_globalMapCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B395C))(this);
	}
	template <typename R = bool> R get_hasGlobalMapCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B39E4))(this);
	}
	template <typename R = void> R AddGlobalMapCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B39F0))(this, newValue);
	}
	template <typename R = void> R ReplaceGlobalMapCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B3AF8))(this, newValue);
	}
	template <typename R = void> R RemoveGlobalMapCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C00))(this);
	}
	template <typename R = GradeRangeComponent*> R get_gradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C0C))(this);
	}
	template <typename R = bool> R get_hasGradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3C94))(this);
	}
	template <typename R = void> R AddGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B3CA0))(this, newMin, newMax);
	}
	template <typename R = void> R ReplaceGradeRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B3DA8))(this, newMin, newMax);
	}
	template <typename R = void> R RemoveGradeRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3EB0))(this);
	}
	template <typename R = GuildBossKilledConditionComponent*> R get_guildBossKilledCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3EBC))(this);
	}
	template <typename R = bool> R get_hasGuildBossKilledCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B3F44))(this);
	}
	template <typename R = void> R AddGuildBossKilledCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B3F50))(this, newName);
	}
	template <typename R = void> R ReplaceGuildBossKilledCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B4064))(this, newName);
	}
	template <typename R = void> R RemoveGuildBossKilledCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4178))(this);
	}
	template <typename R = GuildConditionComponent*> R get_guildCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4184))(this);
	}
	template <typename R = bool> R get_hasGuildCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B420C))(this);
	}
	template <typename R = void> R AddGuildCondition(bool newHasGuild) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4218))(this, newHasGuild);
	}
	template <typename R = void> R ReplaceGuildCondition(bool newHasGuild) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4320))(this, newHasGuild);
	}
	template <typename R = void> R RemoveGuildCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4428))(this);
	}
	template <typename R = HealthConditionComponent*> R get_healthCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4434))(this);
	}
	template <typename R = bool> R get_hasHealthCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B44BC))(this);
	}
	template <typename R = void> R AddHealthCondition(Nullable1bool>* newFull, Nullable1float>* newMinCoef, Nullable1float>* newMaxCoef, Nullable1float>* newMinValue, Nullable1float>* newMaxValue) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1float>*, Nullable1float>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B44C8))(this, newFull, newMinCoef, newMaxCoef, newMinValue, newMaxValue);
	}
	template <typename R = void> R ReplaceHealthCondition(Nullable1bool>* newFull, Nullable1float>* newMinCoef, Nullable1float>* newMaxCoef, Nullable1float>* newMinValue, Nullable1float>* newMaxValue) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1float>*, Nullable1float>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B45FC))(this, newFull, newMinCoef, newMaxCoef, newMinValue, newMaxValue);
	}
	template <typename R = void> R RemoveHealthCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4730))(this);
	}
	template <typename R = HidePetConditionComponent*> R get_hidePetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B473C))(this);
	}
	template <typename R = bool> R get_hasHidePetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B47C4))(this);
	}
	template <typename R = void> R AddHidePetCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B47D0))(this, newValue);
	}
	template <typename R = void> R ReplaceHidePetCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B48D8))(this, newValue);
	}
	template <typename R = void> R RemoveHidePetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B49E0))(this);
	}
	template <typename R = ImmobilizedConditionComponent*> R get_immobilizedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B49EC))(this);
	}
	template <typename R = bool> R get_hasImmobilizedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4A74))(this);
	}
	template <typename R = void> R AddImmobilizedCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4A80))(this, newValue);
	}
	template <typename R = void> R ReplaceImmobilizedCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B4B88))(this, newValue);
	}
	template <typename R = void> R RemoveImmobilizedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4C90))(this);
	}
	template <typename R = ImmuneConditionComponent*> R get_immuneCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4C9C))(this);
	}
	template <typename R = bool> R get_hasImmuneCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4D24))(this);
	}
	template <typename R = void> R AddImmuneCondition(Nullable1bool>* newUnstopable, Nullable1bool>* newDebuffImmune) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B4D30))(this, newUnstopable, newDebuffImmune);
	}
	template <typename R = void> R ReplaceImmuneCondition(Nullable1bool>* newUnstopable, Nullable1bool>* newDebuffImmune) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20B4E3C))(this, newUnstopable, newDebuffImmune);
	}
	template <typename R = void> R RemoveImmuneCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4F48))(this);
	}
	template <typename R = InteractionConditionComponent*> R get_interactionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4F54))(this);
	}
	template <typename R = bool> R get_hasInteractionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B4FDC))(this);
	}
	template <typename R = void> R AddInteractionCondition(bool newValue, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x20B4FE8))(this, newValue, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R ReplaceInteractionCondition(bool newValue, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, ActionType* newType, ActionType* newNoType, Nullable1bool>* newInstant) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, ActionType*, ActionType*, Nullable1bool>*))(Il2CppBase() + 0x20B5160))(this, newValue, newName, newTag, newNoTag, newType, newNoType, newInstant);
	}
	template <typename R = void> R RemoveInteractionCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B52D8))(this);
	}
	template <typename R = InventoryConditionComponent*> R get_inventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B52E4))(this);
	}
	template <typename R = bool> R get_hasInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B536C))(this);
	}
	template <typename R = void> R AddInventoryCondition(bool newIsEmpty, Nullable1int32_t>* newMinCount, bool newCountArming) {
		return ((R (*)(ConditionEntity*, bool, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20B5378))(this, newIsEmpty, newMinCount, newCountArming);
	}
	template <typename R = void> R ReplaceInventoryCondition(bool newIsEmpty, Nullable1int32_t>* newMinCount, bool newCountArming) {
		return ((R (*)(ConditionEntity*, bool, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20B549C))(this, newIsEmpty, newMinCount, newCountArming);
	}
	template <typename R = void> R RemoveInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B55C0))(this);
	}
	template <typename R = ItemCraftActiveComponent*> R get_itemCraftActive() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B55CC))(this);
	}
	template <typename R = bool> R get_hasItemCraftActive() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5654))(this);
	}
	template <typename R = void> R AddItemCraftActive(Il2CppString* newTargetCraftFurniture, Il2CppString* newTargetRecipe, bool newValue) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B5660))(this, newTargetCraftFurniture, newTargetRecipe, newValue);
	}
	template <typename R = void> R ReplaceItemCraftActive(Il2CppString* newTargetCraftFurniture, Il2CppString* newTargetRecipe, bool newValue) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B579C))(this, newTargetCraftFurniture, newTargetRecipe, newValue);
	}
	template <typename R = void> R RemoveItemCraftActive() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B58D8))(this);
	}
	template <typename R = ItemInSlotConditionComponent*> R get_itemInSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B58E4))(this);
	}
	template <typename R = bool> R get_hasItemInSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B596C))(this);
	}
	template <typename R = void> R AddItemInSlotCondition(int32_t newSlotIndex, bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(ConditionEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x20B5978))(this, newSlotIndex, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R ReplaceItemInSlotCondition(int32_t newSlotIndex, bool newOrEmpty, Il2CppString* newName, Il2CppString* newTag, Il2CppArray<Il2CppString*>* newAnyTags, Il2CppString* newNoTag, EquipmentType* newEquipmentType) {
		return ((R (*)(ConditionEntity*, int32_t, bool, Il2CppString*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, EquipmentType*))(Il2CppBase() + 0x20B5AFC))(this, newSlotIndex, newOrEmpty, newName, newTag, newAnyTags, newNoTag, newEquipmentType);
	}
	template <typename R = void> R RemoveItemInSlotCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5C80))(this);
	}
	template <typename R = LevelRangeComponent*> R get_levelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5C8C))(this);
	}
	template <typename R = bool> R get_hasLevelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5D14))(this);
	}
	template <typename R = void> R AddLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B5D20))(this, newMin, newMax);
	}
	template <typename R = void> R ReplaceLevelRange(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B5E28))(this, newMin, newMax);
	}
	template <typename R = void> R RemoveLevelRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5F30))(this);
	}
	template <typename R = LocationGeneratorConditionComponent*> R get_locationGeneratorCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5F3C))(this);
	}
	template <typename R = bool> R get_hasLocationGeneratorCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B5FC4))(this);
	}
	template <typename R = void> R AddLocationGeneratorCondition(Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newLooseStreak) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B5FD0))(this, newMinLevel, newMaxLevel, newLooseStreak);
	}
	template <typename R = void> R ReplaceLocationGeneratorCondition(Nullable1int32_t>* newMinLevel, Nullable1int32_t>* newMaxLevel, Nullable1bool>* newLooseStreak) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B60E8))(this, newMinLevel, newMaxLevel, newLooseStreak);
	}
	template <typename R = void> R RemoveLocationGeneratorCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6200))(this);
	}
	template <typename R = LocationObjectsConditionComponent*> R get_locationObjectsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B620C))(this);
	}
	template <typename R = bool> R get_hasLocationObjectsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6294))(this);
	}
	template <typename R = void> R AddLocationObjectsCondition(Il2CppString* newBlueprintName, Il2CppString* newUniqueName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, Nullable1bool>* newPlaceOwner) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B62A0))(this, newBlueprintName, newUniqueName, newMinCount, newMaxCount, newPlaceOwner);
	}
	template <typename R = void> R ReplaceLocationObjectsCondition(Il2CppString* newBlueprintName, Il2CppString* newUniqueName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, Nullable1bool>* newPlaceOwner) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, Nullable1bool>*))(Il2CppBase() + 0x20B63EC))(this, newBlueprintName, newUniqueName, newMinCount, newMaxCount, newPlaceOwner);
	}
	template <typename R = void> R RemoveLocationObjectsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6538))(this);
	}
	template <typename R = LocationTagsConditionComponent*> R get_locationTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6544))(this);
	}
	template <typename R = bool> R get_hasLocationTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B65CC))(this);
	}
	template <typename R = void> R AddLocationTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B65D8))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R ReplaceLocationTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B6730))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R RemoveLocationTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6888))(this);
	}
	template <typename R = MagicConditionComponent*> R get_magicCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6894))(this);
	}
	template <typename R = bool> R get_hasMagicCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B691C))(this);
	}
	template <typename R = void> R AddMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6928))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R ReplaceMagicCondition(Nullable1int32_t>* newMaxCount, Nullable1int32_t>* newMinCount, Il2CppString* newName, Il2CppString* newTag, Il2CppString* newNoTag, bool newSourceOwns) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6A90))(this, newMaxCount, newMinCount, newName, newTag, newNoTag, newSourceOwns);
	}
	template <typename R = void> R RemoveMagicCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6BF8))(this);
	}
	template <typename R = MapPointConditionComponent*> R get_mapPointCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6C04))(this);
	}
	template <typename R = bool> R get_hasMapPointCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6C8C))(this);
	}
	template <typename R = void> R AddMapPointCondition(Il2CppString* newName, Il2CppString* newTag, bool newActive) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6C98))(this, newName, newTag, newActive);
	}
	template <typename R = void> R ReplaceMapPointCondition(Il2CppString* newName, Il2CppString* newTag, bool newActive) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x20B6DD4))(this, newName, newTag, newActive);
	}
	template <typename R = void> R RemoveMapPointCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6F10))(this);
	}
	template <typename R = MountInventoryConditionComponent*> R get_mountInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6F1C))(this);
	}
	template <typename R = bool> R get_hasMountInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B6FA4))(this);
	}
	template <typename R = void> R AddMountInventoryCondition(int32_t newEmptySlots, Il2CppString* newHasMount, Il2CppString* newHastMount) {
		return ((R (*)(ConditionEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x20B6FB0))(this, newEmptySlots, newHasMount, newHastMount);
	}
	template <typename R = void> R ReplaceMountInventoryCondition(int32_t newEmptySlots, Il2CppString* newHasMount, Il2CppString* newHastMount) {
		return ((R (*)(ConditionEntity*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x20B70E8))(this, newEmptySlots, newHasMount, newHastMount);
	}
	template <typename R = void> R RemoveMountInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7220))(this);
	}
	template <typename R = MoveToConditionComponent*> R get_moveToCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B722C))(this);
	}
	template <typename R = bool> R get_hasMoveToCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B72B4))(this);
	}
	template <typename R = void> R AddMoveToCondition(bool newValid) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B72C0))(this, newValid);
	}
	template <typename R = void> R ReplaceMoveToCondition(bool newValid) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B73C8))(this, newValid);
	}
	template <typename R = void> R RemoveMoveToCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B74D0))(this);
	}
	template <typename R = MovingConditionComponent*> R get_movingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B74DC))(this);
	}
	template <typename R = bool> R get_hasMovingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7564))(this);
	}
	template <typename R = void> R AddMovingCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7570))(this, newValue);
	}
	template <typename R = void> R ReplaceMovingCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7678))(this, newValue);
	}
	template <typename R = void> R RemoveMovingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7780))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B778C))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7814))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B7820))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B7934))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7A48))(this);
	}
	template <typename R = OrComponent*> R get_or() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20ADF14))(this);
	}
	template <typename R = bool> R get_hasOr() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7A54))(this);
	}
	template <typename R = void> R AddOr(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B7A60))(this, newNames);
	}
	template <typename R = void> R ReplaceOr(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(ConditionEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20B7B74))(this, newNames);
	}
	template <typename R = void> R RemoveOr() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7C88))(this);
	}
	template <typename R = OwnConditionComponent*> R get_ownCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7C94))(this);
	}
	template <typename R = bool> R get_hasOwnCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7D1C))(this);
	}
	template <typename R = void> R AddOwnCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7D28))(this, newValue);
	}
	template <typename R = void> R ReplaceOwnCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B7E30))(this, newValue);
	}
	template <typename R = void> R RemoveOwnCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7F38))(this);
	}
	template <typename R = OwnerConditionComponent*> R get_ownerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7F44))(this);
	}
	template <typename R = bool> R get_hasOwnerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B7FCC))(this);
	}
	template <typename R = void> R AddOwnerCondition(bool newPresent, Il2CppString* newTargetCondition) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*))(Il2CppBase() + 0x20B7FD8))(this, newPresent, newTargetCondition);
	}
	template <typename R = void> R ReplaceOwnerCondition(bool newPresent, Il2CppString* newTargetCondition) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*))(Il2CppBase() + 0x20B80F8))(this, newPresent, newTargetCondition);
	}
	template <typename R = void> R RemoveOwnerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8218))(this);
	}
	template <typename R = ParentConditionComponent*> R get_parentCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8224))(this);
	}
	template <typename R = bool> R get_hasParentCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B82AC))(this);
	}
	template <typename R = void> R AddParentCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B82B8))(this, newValue);
	}
	template <typename R = void> R ReplaceParentCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20B83C0))(this, newValue);
	}
	template <typename R = void> R RemoveParentCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B84C8))(this);
	}
	template <typename R = PetConditionComponent*> R get_petCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B84D4))(this);
	}
	template <typename R = bool> R get_hasPetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B855C))(this);
	}
	template <typename R = void> R AddPetCondition(Il2CppString* newType, Nullable1bool>* newCanAddExp) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Nullable1bool>*))(Il2CppBase() + 0x20B8568))(this, newType, newCanAddExp);
	}
	template <typename R = void> R ReplacePetCondition(Il2CppString* newType, Nullable1bool>* newCanAddExp) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Nullable1bool>*))(Il2CppBase() + 0x20B8684))(this, newType, newCanAddExp);
	}
	template <typename R = void> R RemovePetCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B87A0))(this);
	}
	template <typename R = PetInventoryConditionComponent*> R get_petInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B87AC))(this);
	}
	template <typename R = bool> R get_hasPetInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8834))(this);
	}
	template <typename R = void> R AddPetInventoryCondition(bool newHas, Il2CppString* newPetType, int32_t newMinGrade) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, int32_t))(Il2CppBase() + 0x20B8840))(this, newHas, newPetType, newMinGrade);
	}
	template <typename R = void> R ReplacePetInventoryCondition(bool newHas, Il2CppString* newPetType, int32_t newMinGrade) {
		return ((R (*)(ConditionEntity*, bool, Il2CppString*, int32_t))(Il2CppBase() + 0x20B8970))(this, newHas, newPetType, newMinGrade);
	}
	template <typename R = void> R RemovePetInventoryCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8AA0))(this);
	}
	template <typename R = PlayerConditionComponent*> R get_playerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8AAC))(this);
	}
	template <typename R = bool> R get_hasPlayerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8B34))(this);
	}
	template <typename R = void> R AddPlayerCondition(Nullable1bool>* newReal, bool newValue) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, bool))(Il2CppBase() + 0x20B8B40))(this, newReal, newValue);
	}
	template <typename R = void> R ReplacePlayerCondition(Nullable1bool>* newReal, bool newValue) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, bool))(Il2CppBase() + 0x20B8C50))(this, newReal, newValue);
	}
	template <typename R = void> R RemovePlayerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8D60))(this);
	}
	template <typename R = PlayersCountConditionComponent*> R get_playersCountCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8D6C))(this);
	}
	template <typename R = bool> R get_hasPlayersCountCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B8DF4))(this);
	}
	template <typename R = void> R AddPlayersCountCondition(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B8E00))(this, newMin, newMax);
	}
	template <typename R = void> R ReplacePlayersCountCondition(Nullable1int32_t>* newMin, Nullable1int32_t>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20B8F08))(this, newMin, newMax);
	}
	template <typename R = void> R RemovePlayersCountCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9010))(this);
	}
	template <typename R = PointComponent*> R get_point() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B901C))(this);
	}
	template <typename R = bool> R get_hasPoint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B90A4))(this);
	}
	template <typename R = void> R AddPoint(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B90B0))(this, newName);
	}
	template <typename R = void> R ReplacePoint(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B91C4))(this, newName);
	}
	template <typename R = void> R RemovePoint() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B92D8))(this);
	}
	template <typename R = PortalOpenConditionComponent*> R get_portalOpenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B92E4))(this);
	}
	template <typename R = bool> R get_hasPortalOpenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B936C))(this);
	}
	template <typename R = void> R AddPortalOpenCondition(LobbyType* newType, bool newIsOpen) {
		return ((R (*)(ConditionEntity*, LobbyType*, bool))(Il2CppBase() + 0x20B9378))(this, newType, newIsOpen);
	}
	template <typename R = void> R ReplacePortalOpenCondition(LobbyType* newType, bool newIsOpen) {
		return ((R (*)(ConditionEntity*, LobbyType*, bool))(Il2CppBase() + 0x20B9488))(this, newType, newIsOpen);
	}
	template <typename R = void> R RemovePortalOpenCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9598))(this);
	}
	template <typename R = PowerRangeComponent*> R get_powerRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B95A4))(this);
	}
	template <typename R = bool> R get_hasPowerRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B962C))(this);
	}
	template <typename R = void> R AddPowerRange(Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B9638))(this, newMin, newMax);
	}
	template <typename R = void> R ReplacePowerRange(Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((R (*)(ConditionEntity*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20B9740))(this, newMin, newMax);
	}
	template <typename R = void> R RemovePowerRange() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9848))(this);
	}
	template <typename R = ProductConditionComponent*> R get_productCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9854))(this);
	}
	template <typename R = bool> R get_hasProductCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B98DC))(this);
	}
	template <typename R = void> R AddProductCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B98E8))(this, newName);
	}
	template <typename R = void> R ReplaceProductCondition(Il2CppString* newName) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20B99FC))(this, newName);
	}
	template <typename R = void> R RemoveProductCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9B10))(this);
	}
	template <typename R = PvPStateConditionComponent*> R get_pvPStateCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9B1C))(this);
	}
	template <typename R = bool> R get_hasPvPStateCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9BA4))(this);
	}
	template <typename R = void> R AddPvPStateCondition(Il2CppArray<PvPState*>* newAny, Il2CppArray<PvPState*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppArray<PvPState*>*, Il2CppArray<PvPState*>*))(Il2CppBase() + 0x20B9BB0))(this, newAny, newNot);
	}
	template <typename R = void> R ReplacePvPStateCondition(Il2CppArray<PvPState*>* newAny, Il2CppArray<PvPState*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppArray<PvPState*>*, Il2CppArray<PvPState*>*))(Il2CppBase() + 0x20B9CD8))(this, newAny, newNot);
	}
	template <typename R = void> R RemovePvPStateCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9E00))(this);
	}
	template <typename R = QuestConditionComponent*> R get_questCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20AAF74))(this);
	}
	template <typename R = bool> R get_hasQuestCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20B9E0C))(this);
	}
	template <typename R = void> R AddQuestCondition(Il2CppString* newName, Il2CppString* newAllWithTag, Il2CppString* newAnyWithTag, QuestStatus* newStatus) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0x20B9E18))(this, newName, newAllWithTag, newAnyWithTag, newStatus);
	}
	template <typename R = void> R ReplaceQuestCondition(Il2CppString* newName, Il2CppString* newAllWithTag, Il2CppString* newAnyWithTag, QuestStatus* newStatus) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppString*, Il2CppString*, QuestStatus*))(Il2CppBase() + 0x20B9F64))(this, newName, newAllWithTag, newAnyWithTag, newStatus);
	}
	template <typename R = void> R RemoveQuestCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA0B0))(this);
	}
	template <typename R = RGConditionComponent*> R get_rGCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA0BC))(this);
	}
	template <typename R = bool> R get_hasRGCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA144))(this);
	}
	template <typename R = void> R AddRGCondition(Il2CppString* newName, bool newLimited) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20BA150))(this, newName, newLimited);
	}
	template <typename R = void> R ReplaceRGCondition(Il2CppString* newName, bool newLimited) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool))(Il2CppBase() + 0x20BA270))(this, newName, newLimited);
	}
	template <typename R = void> R RemoveRGCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA390))(this);
	}
	template <typename R = ResourceConditionComponent*> R get_resourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA39C))(this);
	}
	template <typename R = bool> R get_hasResourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA424))(this);
	}
	template <typename R = void> R AddResourceCondition(Il2CppString* newName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, bool newWithExternal) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20BA430))(this, newName, newMinCount, newMaxCount, newWithExternal);
	}
	template <typename R = void> R ReplaceResourceCondition(Il2CppString* newName, Nullable1int32_t>* newMinCount, Nullable1int32_t>* newMaxCount, bool newWithExternal) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Nullable1int32_t>*, Nullable1int32_t>*, bool))(Il2CppBase() + 0x20BA564))(this, newName, newMinCount, newMaxCount, newWithExternal);
	}
	template <typename R = void> R RemoveResourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA698))(this);
	}
	template <typename R = RewardsConditionComponent*> R get_rewardsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA6A4))(this);
	}
	template <typename R = bool> R get_hasRewardsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA72C))(this);
	}
	template <typename R = void> R AddRewardsCondition(bool newExist) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA738))(this, newExist);
	}
	template <typename R = void> R ReplaceRewardsCondition(bool newExist) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA840))(this, newExist);
	}
	template <typename R = void> R RemoveRewardsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA948))(this);
	}
	template <typename R = RidingConditionComponent*> R get_ridingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA954))(this);
	}
	template <typename R = bool> R get_hasRidingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BA9DC))(this);
	}
	template <typename R = void> R AddRidingCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BA9E8))(this, newValue);
	}
	template <typename R = void> R ReplaceRidingCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BAAF0))(this, newValue);
	}
	template <typename R = void> R RemoveRidingCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BABF8))(this);
	}
	template <typename R = SaveSourceConditionComponent*> R get_saveSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BAC04))(this);
	}
	template <typename R = bool> R get_hasSaveSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BAC8C))(this);
	}
	template <typename R = void> R AddSaveSourceCondition(bool newCan) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BAC98))(this, newCan);
	}
	template <typename R = void> R ReplaceSaveSourceCondition(bool newCan) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BADA0))(this, newCan);
	}
	template <typename R = void> R RemoveSaveSourceCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BAEA8))(this);
	}
	template <typename R = ScoutConditionComponent*> R get_scoutCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BAEB4))(this);
	}
	template <typename R = bool> R get_hasScoutCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BAF3C))(this);
	}
	template <typename R = void> R AddScoutCondition(ScoutStatus* newStatus) {
		return ((R (*)(ConditionEntity*, ScoutStatus*))(Il2CppBase() + 0x20BAF48))(this, newStatus);
	}
	template <typename R = void> R ReplaceScoutCondition(ScoutStatus* newStatus) {
		return ((R (*)(ConditionEntity*, ScoutStatus*))(Il2CppBase() + 0x20BB04C))(this, newStatus);
	}
	template <typename R = void> R RemoveScoutCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB150))(this);
	}
	template <typename R = SeasonConditionComponent*> R get_seasonCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB15C))(this);
	}
	template <typename R = bool> R get_hasSeasonCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB1E4))(this);
	}
	template <typename R = void> R AddSeasonCondition(int32_t newOrder, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((R (*)(ConditionEntity*, int32_t, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BB1F0))(this, newOrder, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename R = void> R ReplaceSeasonCondition(int32_t newOrder, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((R (*)(ConditionEntity*, int32_t, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BB314))(this, newOrder, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename R = void> R RemoveSeasonCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB438))(this);
	}
	template <typename R = ServerConditionComponent*> R get_serverCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB444))(this);
	}
	template <typename R = bool> R get_hasServerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB4CC))(this);
	}
	template <typename R = void> R AddServerCondition(Nullable1bool>* newIsCyclic, Nullable1bool>* newIsOBT, Nullable1bool>* newIsQA) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20BB4D8))(this, newIsCyclic, newIsOBT, newIsQA);
	}
	template <typename R = void> R ReplaceServerCondition(Nullable1bool>* newIsCyclic, Nullable1bool>* newIsOBT, Nullable1bool>* newIsQA) {
		return ((R (*)(ConditionEntity*, Nullable1bool>*, Nullable1bool>*, Nullable1bool>*))(Il2CppBase() + 0x20BB5F4))(this, newIsCyclic, newIsOBT, newIsQA);
	}
	template <typename R = void> R RemoveServerCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB710))(this);
	}
	template <typename R = SharedConditionComponent*> R get_sharedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB71C))(this);
	}
	template <typename R = bool> R get_hasSharedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BB7A4))(this);
	}
	template <typename R = void> R AddSharedCondition(Il2CppString* newCheckGroupSlot, bool newValue, bool newGetFromParent) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x20BB7B0))(this, newCheckGroupSlot, newValue, newGetFromParent);
	}
	template <typename R = void> R ReplaceSharedCondition(Il2CppString* newCheckGroupSlot, bool newValue, bool newGetFromParent) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool, bool))(Il2CppBase() + 0x20BB8E4))(this, newCheckGroupSlot, newValue, newGetFromParent);
	}
	template <typename R = void> R RemoveSharedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBA18))(this);
	}
	template <typename R = SneakConditionComponent*> R get_sneakCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBA24))(this);
	}
	template <typename R = bool> R get_hasSneakCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBAAC))(this);
	}
	template <typename R = void> R AddSneakCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BBAB8))(this, newValue);
	}
	template <typename R = void> R ReplaceSneakCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BBBC0))(this, newValue);
	}
	template <typename R = void> R RemoveSneakCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBCC8))(this);
	}
	template <typename R = SpeedConditionComponent*> R get_speedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBCD4))(this);
	}
	template <typename R = bool> R get_hasSpeedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBD5C))(this);
	}
	template <typename R = void> R AddSpeedCondition(bool newHas, Nullable1bool>* newBaseNotZero, Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((R (*)(ConditionEntity*, bool, Nullable1bool>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20BBD68))(this, newHas, newBaseNotZero, newMin, newMax);
	}
	template <typename R = void> R ReplaceSpeedCondition(bool newHas, Nullable1bool>* newBaseNotZero, Nullable1float>* newMin, Nullable1float>* newMax) {
		return ((R (*)(ConditionEntity*, bool, Nullable1bool>*, Nullable1float>*, Nullable1float>*))(Il2CppBase() + 0x20BBE90))(this, newHas, newBaseNotZero, newMin, newMax);
	}
	template <typename R = void> R RemoveSpeedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBFB8))(this);
	}
	template <typename R = StatueConditionComponent*> R get_statueCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BBFC4))(this);
	}
	template <typename R = bool> R get_hasStatueCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC04C))(this);
	}
	template <typename R = void> R AddStatueCondition(StatueStatus* newStatus) {
		return ((R (*)(ConditionEntity*, StatueStatus*))(Il2CppBase() + 0x20BC058))(this, newStatus);
	}
	template <typename R = void> R ReplaceStatueCondition(StatueStatus* newStatus) {
		return ((R (*)(ConditionEntity*, StatueStatus*))(Il2CppBase() + 0x20BC15C))(this, newStatus);
	}
	template <typename R = void> R RemoveStatueCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC260))(this);
	}
	template <typename R = TagsConditionComponent*> R get_tagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC26C))(this);
	}
	template <typename R = bool> R get_hasTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC2F4))(this);
	}
	template <typename R = void> R AddTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20BC300))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R ReplaceTagsCondition(Il2CppString* newValue, Il2CppArray<Il2CppString*>* newAll, Il2CppArray<Il2CppString*>* newAny, Il2CppArray<Il2CppString*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x20BC458))(this, newValue, newAll, newAny, newNot);
	}
	template <typename R = void> R RemoveTagsCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC5B0))(this);
	}
	template <typename R = TavernBoardConditionComponent*> R get_tavernBoardCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC5BC))(this);
	}
	template <typename R = bool> R get_hasTavernBoardCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC644))(this);
	}
	template <typename R = void> R AddTavernBoardCondition(bool newCanClaim) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BC650))(this, newCanClaim);
	}
	template <typename R = void> R ReplaceTavernBoardCondition(bool newCanClaim) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BC758))(this, newCanClaim);
	}
	template <typename R = void> R RemoveTavernBoardCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC860))(this);
	}
	template <typename R = TempBuffConditionComponent*> R get_tempBuffCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC86C))(this);
	}
	template <typename R = bool> R get_hasTempBuffCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BC8F4))(this);
	}
	template <typename R = void> R AddTempBuffCondition(Il2CppString* newName, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BC900))(this, newName, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename R = void> R ReplaceTempBuffCondition(Il2CppString* newName, bool newActive, Nullable1int32_t>* newMinDayIndex, Nullable1int32_t>* newMaxDayIndex) {
		return ((R (*)(ConditionEntity*, Il2CppString*, bool, Nullable1int32_t>*, Nullable1int32_t>*))(Il2CppBase() + 0x20BCA38))(this, newName, newActive, newMinDayIndex, newMaxDayIndex);
	}
	template <typename R = void> R RemoveTempBuffCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCB70))(this);
	}
	template <typename R = UnlockedConditionComponent*> R get_unlockedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCB7C))(this);
	}
	template <typename R = bool> R get_hasUnlockedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCC04))(this);
	}
	template <typename R = void> R AddUnlockedCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BCC10))(this, newValue);
	}
	template <typename R = void> R ReplaceUnlockedCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BCD18))(this, newValue);
	}
	template <typename R = void> R RemoveUnlockedCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCE20))(this);
	}
	template <typename R = ViewConditionComponent*> R get_viewCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCE2C))(this);
	}
	template <typename R = bool> R get_hasViewCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BCEB4))(this);
	}
	template <typename R = void> R AddViewCondition(Il2CppString* newContains) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20BCEC0))(this, newContains);
	}
	template <typename R = void> R ReplaceViewCondition(Il2CppString* newContains) {
		return ((R (*)(ConditionEntity*, Il2CppString*))(Il2CppBase() + 0x20BCFD4))(this, newContains);
	}
	template <typename R = void> R RemoveViewCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD0E8))(this);
	}
	template <typename R = VisibleConditionComponent*> R get_visibleCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD0F4))(this);
	}
	template <typename R = bool> R get_hasVisibleCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD17C))(this);
	}
	template <typename R = void> R AddVisibleCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BD188))(this, newValue);
	}
	template <typename R = void> R ReplaceVisibleCondition(bool newValue) {
		return ((R (*)(ConditionEntity*, bool))(Il2CppBase() + 0x20BD290))(this, newValue);
	}
	template <typename R = void> R RemoveVisibleCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD398))(this);
	}
	template <typename R = WorldStatusConditionComponent*> R get_worldStatusCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD3A4))(this);
	}
	template <typename R = bool> R get_hasWorldStatusCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD42C))(this);
	}
	template <typename R = void> R AddWorldStatusCondition(Il2CppArray<ProtoModels::WorldStatusType*>* newAny, Il2CppArray<ProtoModels::WorldStatusType*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppArray<ProtoModels::WorldStatusType*>*, Il2CppArray<ProtoModels::WorldStatusType*>*))(Il2CppBase() + 0x20BD438))(this, newAny, newNot);
	}
	template <typename R = void> R ReplaceWorldStatusCondition(Il2CppArray<ProtoModels::WorldStatusType*>* newAny, Il2CppArray<ProtoModels::WorldStatusType*>* newNot) {
		return ((R (*)(ConditionEntity*, Il2CppArray<ProtoModels::WorldStatusType*>*, Il2CppArray<ProtoModels::WorldStatusType*>*))(Il2CppBase() + 0x20BD560))(this, newAny, newNot);
	}
	template <typename R = void> R RemoveWorldStatusCondition() {
		return ((R (*)(ConditionEntity*))(Il2CppBase() + 0x20BD688))(this);
	}

};

