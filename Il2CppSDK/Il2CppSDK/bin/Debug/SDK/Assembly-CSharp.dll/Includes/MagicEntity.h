#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicEntity"));
	}

	template <typename R = AliveComponent*> static R& aliveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = AttractorStateComponent*> static R& attractorStateComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = DestroyingComponent*> static R& destroyingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DurationPredictionComponent*> static R& durationPredictionComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = ProcessingComponent*> static R& processingComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = RemoveOnMoveComponent*> static R& removeOnMoveComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = ReplicatedComponent*> static R& replicatedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = SneakComponent*> static R& sneakComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename R = Il2CppString*> R get_DataName() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACEB58))(this);
	}
	template <typename R = MagicDataEntity*> R get_Data() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD07C))(this);
	}
	template <typename R = void> R AddData(Il2CppString* name, MagicDataEntity* data) {
		return ((R (*)(MagicEntity*, Il2CppString*, MagicDataEntity*))(Il2CppBase() + 0x1ACEC34))(this, name, data);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACED60))(this);
	}
	template <typename R = AIBattleStateComponent*> R get_aIBattleState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACEFB0))(this);
	}
	template <typename R = bool> R get_hasAIBattleState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF038))(this);
	}
	template <typename R = void> R AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(MagicEntity*, int32_t, int64_t))(Il2CppBase() + 0x1ACF044))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((R (*)(MagicEntity*, int32_t, int64_t))(Il2CppBase() + 0x1ACF150))(this, newPhaseIndex, newStartTime);
	}
	template <typename R = void> R RemoveAIBattleState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF25C))(this);
	}
	template <typename R = ActionIdComponent*> R get_actionId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD694))(this);
	}
	template <typename R = bool> R get_hasActionId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD688))(this);
	}
	template <typename R = void> R AddActionId(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACF268))(this, newId);
	}
	template <typename R = void> R ReplaceActionId(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACF36C))(this, newId);
	}
	template <typename R = void> R RemoveActionId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF470))(this);
	}
	template <typename R = ActivationStateComponent*> R get_activationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF47C))(this);
	}
	template <typename R = bool> R get_hasActivationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF504))(this);
	}
	template <typename R = void> R AddActivationState(Nullable1<int64_t>* newTime) {
		return ((R (*)(MagicEntity*, Nullable1<int64_t>*))(Il2CppBase() + 0x1ACF510))(this, newTime);
	}
	template <typename R = void> R ReplaceActivationState(Nullable1<int64_t>* newTime) {
		return ((R (*)(MagicEntity*, Nullable1<int64_t>*))(Il2CppBase() + 0x1ACF618))(this, newTime);
	}
	template <typename R = void> R RemoveActivationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF720))(this);
	}
	template <typename R = ActiveComponent*> R get_active() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF72C))(this);
	}
	template <typename R = bool> R get_hasActive() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF7B4))(this);
	}
	template <typename R = void> R AddActive(bool newValue) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACF7C0))(this, newValue);
	}
	template <typename R = void> R ReplaceActive(bool newValue) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACF8C8))(this, newValue);
	}
	template <typename R = void> R RemoveActive() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF9D0))(this);
	}
	template <typename R = ActorComponent*> R get_actor() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACF9DC))(this);
	}
	template <typename R = bool> R get_hasActor() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFA64))(this);
	}
	template <typename R = void> R AddActor(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFA70))(this, newId);
	}
	template <typename R = void> R ReplaceActor(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFB74))(this, newId);
	}
	template <typename R = void> R RemoveActor() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFC78))(this);
	}
	template <typename R = ActorParentComponent*> R get_actorParent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFC84))(this);
	}
	template <typename R = bool> R get_hasActorParent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFD0C))(this);
	}
	template <typename R = void> R AddActorParent(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFD18))(this, newId);
	}
	template <typename R = void> R ReplaceActorParent(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFE1C))(this, newId);
	}
	template <typename R = void> R RemoveActorParent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFF20))(this);
	}
	template <typename R = bool> R get_isAlive() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACE91C))(this);
	}
	template <typename R = void> R set_isAlive(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACE928))(this, value);
	}
	template <typename R = bool> R get_isAttractorState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACFF2C))(this);
	}
	template <typename R = void> R set_isAttractorState(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACFF38))(this, value);
	}
	template <typename R = AutoRotationStateComponent*> R get_autoRotationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0050))(this);
	}
	template <typename R = bool> R get_hasAutoRotationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD00D8))(this);
	}
	template <typename R = void> R AddAutoRotationState(float newStartAngle, float newOffsetX, float newOffsetY) {
		return ((R (*)(MagicEntity*, float, float, float))(Il2CppBase() + 0x1AD00E4))(this, newStartAngle, newOffsetX, newOffsetY);
	}
	template <typename R = void> R ReplaceAutoRotationState(float newStartAngle, float newOffsetX, float newOffsetY) {
		return ((R (*)(MagicEntity*, float, float, float))(Il2CppBase() + 0x1AD01FC))(this, newStartAngle, newOffsetX, newOffsetY);
	}
	template <typename R = void> R RemoveAutoRotationState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0314))(this);
	}
	template <typename R = ChanceComponent*> R get_chance() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0320))(this);
	}
	template <typename R = bool> R get_hasChance() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD03A8))(this);
	}
	template <typename R = void> R AddChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AD03B4))(this, newValue, newName, newNames);
	}
	template <typename R = void> R ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicEntity*, float, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AD04EC))(this, newValue, newName, newNames);
	}
	template <typename R = void> R RemoveChance() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0624))(this);
	}
	template <typename R = ChangeDurationByLostHpComponent*> R get_changeDurationByLostHp() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0630))(this);
	}
	template <typename R = bool> R get_hasChangeDurationByLostHp() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD06B8))(this);
	}
	template <typename R = void> R AddChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicEntity*, DamageCondition*, float))(Il2CppBase() + 0x1AD06C4))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R ReplaceChangeDurationByLostHp(DamageCondition* newDamageCondition, float newSecondsByPercent) {
		return ((R (*)(MagicEntity*, DamageCondition*, float))(Il2CppBase() + 0x1AD07E8))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename R = void> R RemoveChangeDurationByLostHp() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD090C))(this);
	}
	template <typename R = ChildrenComponent*> R get_children() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0918))(this);
	}
	template <typename R = bool> R get_hasChildren() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD09A0))(this);
	}
	template <typename R = void> R AddChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AD09AC))(this, newNames);
	}
	template <typename R = void> R ReplaceChildren(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(MagicEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1AD0AC0))(this, newNames);
	}
	template <typename R = void> R RemoveChildren() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0BD4))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0BE0))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0C68))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD0C74))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD0D78))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0E7C))(this);
	}
	template <typename R = CollisionMagicStateComponent*> R get_collisionMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0E88))(this);
	}
	template <typename R = bool> R get_hasCollisionMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD0F10))(this);
	}
	template <typename R = void> R AddCollisionMagicState(Il2CppDictionary<int32_t, int64_t>* newTargets) {
		return ((R (*)(MagicEntity*, Il2CppDictionary<int32_t, int64_t>*))(Il2CppBase() + 0x1AD0F1C))(this, newTargets);
	}
	template <typename R = void> R ReplaceCollisionMagicState(Il2CppDictionary<int32_t, int64_t>* newTargets) {
		return ((R (*)(MagicEntity*, Il2CppDictionary<int32_t, int64_t>*))(Il2CppBase() + 0x1AD1030))(this, newTargets);
	}
	template <typename R = void> R RemoveCollisionMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1144))(this);
	}
	template <typename R = CountComponent*> R get_count() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1150))(this);
	}
	template <typename R = bool> R get_hasCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD11D8))(this);
	}
	template <typename R = void> R AddCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD11E4))(this, newValue);
	}
	template <typename R = void> R ReplaceCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD12E8))(this, newValue);
	}
	template <typename R = void> R RemoveCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD13EC))(this);
	}
	template <typename R = DamageCoefComponent*> R get_damageCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD13F8))(this);
	}
	template <typename R = bool> R get_hasDamageCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1480))(this);
	}
	template <typename R = void> R AddDamageCoef(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD148C))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageCoef(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1590))(this, newValue);
	}
	template <typename R = void> R RemoveDamageCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1694))(this);
	}
	template <typename R = DamageComponent*> R get_damage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD16A0))(this);
	}
	template <typename R = bool> R get_hasDamage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1728))(this);
	}
	template <typename R = void> R AddDamage(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1734))(this, newValue);
	}
	template <typename R = void> R ReplaceDamage(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1838))(this, newValue);
	}
	template <typename R = void> R RemoveDamage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD193C))(this);
	}
	template <typename R = DamageShieldComponent*> R get_damageShield() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1948))(this);
	}
	template <typename R = bool> R get_hasDamageShield() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD19D0))(this);
	}
	template <typename R = void> R AddDamageShield(DamageShieldDepends newDepends, float newValue) {
		return ((R (*)(MagicEntity*, DamageShieldDepends, float))(Il2CppBase() + 0x1AD19DC))(this, newDepends, newValue);
	}
	template <typename R = void> R ReplaceDamageShield(DamageShieldDepends newDepends, float newValue) {
		return ((R (*)(MagicEntity*, DamageShieldDepends, float))(Il2CppBase() + 0x1AD1AF0))(this, newDepends, newValue);
	}
	template <typename R = void> R RemoveDamageShield() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C04))(this);
	}
	template <typename R = DamageStatComponent*> R get_damageStat() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C10))(this);
	}
	template <typename R = bool> R get_hasDamageStat() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C98))(this);
	}
	template <typename R = void> R AddDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(MagicEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1AD1CA4))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R ReplaceDamageStat(DamageStatType newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((R (*)(MagicEntity*, DamageStatType, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1AD1E68))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename R = void> R RemoveDamageStat() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD202C))(this);
	}
	template <typename R = DamageTypeComponent*> R get_damageType() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2038))(this);
	}
	template <typename R = bool> R get_hasDamageType() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD20C0))(this);
	}
	template <typename R = void> R AddDamageType(DamageType newValue) {
		return ((R (*)(MagicEntity*, DamageType))(Il2CppBase() + 0x1AD20CC))(this, newValue);
	}
	template <typename R = void> R ReplaceDamageType(DamageType newValue) {
		return ((R (*)(MagicEntity*, DamageType))(Il2CppBase() + 0x1AD21D0))(this, newValue);
	}
	template <typename R = void> R RemoveDamageType() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD22D4))(this);
	}
	template <typename R = DelayComponent*> R get_delay() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD22E0))(this);
	}
	template <typename R = bool> R get_hasDelay() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2368))(this);
	}
	template <typename R = void> R AddDelay(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2374))(this, newValue);
	}
	template <typename R = void> R ReplaceDelay(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2478))(this, newValue);
	}
	template <typename R = void> R RemoveDelay() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD257C))(this);
	}
	template <typename R = bool> R get_isDestroying() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACDDCC))(this);
	}
	template <typename R = void> R set_isDestroying(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACEA40))(this, value);
	}
	template <typename R = DotComponent*> R get_dot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2588))(this);
	}
	template <typename R = bool> R get_hasDot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2610))(this);
	}
	template <typename R = void> R AddDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD261C))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD2730))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveDot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2844))(this);
	}
	template <typename R = DurationComponent*> R get_duration() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2850))(this);
	}
	template <typename R = bool> R get_hasDuration() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD5F4))(this);
	}
	template <typename R = void> R AddDuration(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD28D8))(this, newValue);
	}
	template <typename R = void> R ReplaceDuration(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD29DC))(this, newValue);
	}
	template <typename R = void> R RemoveDuration() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2AE0))(this);
	}
	template <typename R = bool> R get_isDurationPrediction() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2AEC))(this);
	}
	template <typename R = void> R set_isDurationPrediction(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD2AF8))(this, value);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2C10))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2C98))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD2CA4))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD2DA8))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2EAC))(this);
	}
	template <typename R = HealComponent*> R get_heal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2EB8))(this);
	}
	template <typename R = bool> R get_hasHeal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD2F40))(this);
	}
	template <typename R = void> R AddHeal(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2F4C))(this, newValue);
	}
	template <typename R = void> R ReplaceHeal(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD3050))(this, newValue);
	}
	template <typename R = void> R RemoveHeal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3154))(this);
	}
	template <typename R = HotComponent*> R get_hot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3160))(this);
	}
	template <typename R = bool> R get_hasHot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD31E8))(this);
	}
	template <typename R = void> R AddHot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD31F4))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceHot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD3308))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveHot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD341C))(this);
	}
	template <typename R = IdComponent*> R get_id() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACCFF4))(this);
	}
	template <typename R = bool> R get_hasId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACEFA4))(this);
	}
	template <typename R = void> R AddId(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3428))(this, newValue);
	}
	template <typename R = void> R ReplaceId(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD352C))(this, newValue);
	}
	template <typename R = void> R RemoveId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3630))(this);
	}
	template <typename R = InventoryIndexComponent*> R get_inventoryIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD363C))(this);
	}
	template <typename R = bool> R get_hasInventoryIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD36C4))(this);
	}
	template <typename R = void> R AddInventoryIndex(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD36D0))(this, newValue);
	}
	template <typename R = void> R ReplaceInventoryIndex(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD37D4))(this, newValue);
	}
	template <typename R = void> R RemoveInventoryIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD38D8))(this);
	}
	template <typename R = ItemComponent*> R get_item() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD38E4))(this);
	}
	template <typename R = bool> R get_hasItem() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD396C))(this);
	}
	template <typename R = void> R AddItem(Il2CppString* newName) {
		return ((R (*)(MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1AD3978))(this, newName);
	}
	template <typename R = void> R ReplaceItem(Il2CppString* newName) {
		return ((R (*)(MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1AD3A8C))(this, newName);
	}
	template <typename R = void> R RemoveItem() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3BA0))(this);
	}
	template <typename R = MagicDataComponent*> R get_magicData() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACEBAC))(this);
	}
	template <typename R = bool> R get_hasMagicData() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACEBA0))(this);
	}
	template <typename R = void> R AddMagicData(Il2CppString* newName, MagicDataEntity* newDataEntity) {
		return ((R (*)(MagicEntity*, Il2CppString*, MagicDataEntity*))(Il2CppBase() + 0x1AD3BAC))(this, newName, newDataEntity);
	}
	template <typename R = void> R ReplaceMagicData(Il2CppString* newName, MagicDataEntity* newDataEntity) {
		return ((R (*)(MagicEntity*, Il2CppString*, MagicDataEntity*))(Il2CppBase() + 0x1ACEC38))(this, newName, newDataEntity);
	}
	template <typename R = void> R RemoveMagicData() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3CD4))(this);
	}
	template <typename R = MagicTriggerIdComponent*> R get_magicTriggerId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3CE0))(this);
	}
	template <typename R = bool> R get_hasMagicTriggerId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3D68))(this);
	}
	template <typename R = void> R AddMagicTriggerId(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3D74))(this, newId);
	}
	template <typename R = void> R ReplaceMagicTriggerId(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3E78))(this, newId);
	}
	template <typename R = void> R RemoveMagicTriggerId() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3F7C))(this);
	}
	template <typename R = MaxHealthCoefComponent*> R get_maxHealthCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD3F88))(this);
	}
	template <typename R = bool> R get_hasMaxHealthCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4010))(this);
	}
	template <typename R = void> R AddMaxHealthCoef(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD401C))(this, newValue);
	}
	template <typename R = void> R ReplaceMaxHealthCoef(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD4120))(this, newValue);
	}
	template <typename R = void> R RemoveMaxHealthCoef() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4224))(this);
	}
	template <typename R = OnDurationEndCountComponent*> R get_onDurationEndCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4230))(this);
	}
	template <typename R = bool> R get_hasOnDurationEndCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD42B8))(this);
	}
	template <typename R = void> R AddOnDurationEndCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD42C4))(this, newValue);
	}
	template <typename R = void> R ReplaceOnDurationEndCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD43C8))(this, newValue);
	}
	template <typename R = void> R RemoveOnDurationEndCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD44CC))(this);
	}
	template <typename R = OwnerComponent*> R get_owner() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD44D8))(this);
	}
	template <typename R = bool> R get_hasOwner() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4560))(this);
	}
	template <typename R = void> R AddOwner(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD456C))(this, newId);
	}
	template <typename R = void> R ReplaceOwner(int64_t newId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4670))(this, newId);
	}
	template <typename R = void> R RemoveOwner() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4774))(this);
	}
	template <typename R = ParentComponent*> R get_parent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD560))(this);
	}
	template <typename R = bool> R get_hasParent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD554))(this);
	}
	template <typename R = void> R AddParent(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD4780))(this, newId);
	}
	template <typename R = void> R ReplaceParent(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD4884))(this, newId);
	}
	template <typename R = void> R RemoveParent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4988))(this);
	}
	template <typename R = PermanentComponent*> R get_permanent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4994))(this);
	}
	template <typename R = bool> R get_hasPermanent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4A1C))(this);
	}
	template <typename R = void> R AddPermanent(bool newSaveOnDeath) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4A28))(this, newSaveOnDeath);
	}
	template <typename R = void> R ReplacePermanent(bool newSaveOnDeath) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4B30))(this, newSaveOnDeath);
	}
	template <typename R = void> R RemovePermanent() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4C38))(this);
	}
	template <typename R = PersonalComponent*> R get_personal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4C44))(this);
	}
	template <typename R = bool> R get_hasPersonal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4CCC))(this);
	}
	template <typename R = void> R AddPersonal(int64_t newPlayerId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4CD8))(this, newPlayerId);
	}
	template <typename R = void> R ReplacePersonal(int64_t newPlayerId) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4DDC))(this, newPlayerId);
	}
	template <typename R = void> R RemovePersonal() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4EE0))(this);
	}
	template <typename R = bool> R get_isProcessing() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD4EEC))(this);
	}
	template <typename R = void> R set_isProcessing(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4EF8))(this, value);
	}
	template <typename R = bool> R get_isRemoveOnMove() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5010))(this);
	}
	template <typename R = void> R set_isRemoveOnMove(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD501C))(this, value);
	}
	template <typename R = RepeatMagicStateComponent*> R get_repeatMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5134))(this);
	}
	template <typename R = bool> R get_hasRepeatMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD51BC))(this);
	}
	template <typename R = void> R AddRepeatMagicState(int64_t newNextTime) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD51C8))(this, newNextTime);
	}
	template <typename R = void> R ReplaceRepeatMagicState(int64_t newNextTime) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD52CC))(this, newNextTime);
	}
	template <typename R = void> R RemoveRepeatMagicState() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD53D0))(this);
	}
	template <typename R = bool> R get_isReplicated() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACDDD8))(this);
	}
	template <typename R = void> R set_isReplicated(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD53DC))(this, value);
	}
	template <typename R = SequenceIndexComponent*> R get_sequenceIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD54F4))(this);
	}
	template <typename R = bool> R get_hasSequenceIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD557C))(this);
	}
	template <typename R = void> R AddSequenceIndex(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5588))(this, newValue);
	}
	template <typename R = void> R ReplaceSequenceIndex(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD568C))(this, newValue);
	}
	template <typename R = void> R RemoveSequenceIndex() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5790))(this);
	}
	template <typename R = bool> R get_isSneak() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD579C))(this);
	}
	template <typename R = void> R set_isSneak(bool value) {
		return ((R (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD57A8))(this, value);
	}
	template <typename R = SourceComponent*> R get_source() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD58C0))(this);
	}
	template <typename R = bool> R get_hasSource() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5948))(this);
	}
	template <typename R = void> R AddSource(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5954))(this, newId);
	}
	template <typename R = void> R ReplaceSource(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5A58))(this, newId);
	}
	template <typename R = void> R RemoveSource() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5B5C))(this);
	}
	template <typename R = SourceDamageComponent*> R get_sourceDamage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5B68))(this);
	}
	template <typename R = bool> R get_hasSourceDamage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5BF0))(this);
	}
	template <typename R = void> R AddSourceDamage(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD5BFC))(this, newValue);
	}
	template <typename R = void> R ReplaceSourceDamage(float newValue) {
		return ((R (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD5D00))(this, newValue);
	}
	template <typename R = void> R RemoveSourceDamage() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD5E04))(this);
	}
	template <typename R = StartTimeComponent*> R get_startTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD600))(this);
	}
	template <typename R = bool> R get_hasStartTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1ACD5E8))(this);
	}
	template <typename R = void> R AddStartTime(int64_t newValue) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD5E10))(this, newValue);
	}
	template <typename R = void> R ReplaceStartTime(int64_t newValue) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD5F14))(this, newValue);
	}
	template <typename R = void> R RemoveStartTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6018))(this);
	}
	template <typename R = TargetComponent*> R get_target() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6024))(this);
	}
	template <typename R = bool> R get_hasTarget() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD60AC))(this);
	}
	template <typename R = void> R AddTarget(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD60B8))(this, newId);
	}
	template <typename R = void> R ReplaceTarget(int32_t newId) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD61BC))(this, newId);
	}
	template <typename R = void> R RemoveTarget() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD62C0))(this);
	}
	template <typename R = TicksCountComponent*> R get_ticksCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD62CC))(this);
	}
	template <typename R = bool> R get_hasTicksCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6354))(this);
	}
	template <typename R = void> R AddTicksCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6360))(this, newValue);
	}
	template <typename R = void> R ReplaceTicksCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6464))(this, newValue);
	}
	template <typename R = void> R RemoveTicksCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6568))(this);
	}
	template <typename R = TotComponent*> R get_tot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6574))(this);
	}
	template <typename R = bool> R get_hasTot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD65FC))(this);
	}
	template <typename R = void> R AddTot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD6608))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceTot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD671C))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveTot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6830))(this);
	}
	template <typename R = UpdateTimeComponent*> R get_updateTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD683C))(this);
	}
	template <typename R = bool> R get_hasUpdateTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD68C4))(this);
	}
	template <typename R = void> R AddUpdateTime(int64_t newValue) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD68D0))(this, newValue);
	}
	template <typename R = void> R ReplaceUpdateTime(int64_t newValue) {
		return ((R (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD69D4))(this, newValue);
	}
	template <typename R = void> R RemoveUpdateTime() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6AD8))(this);
	}
	template <typename R = UseCountComponent*> R get_useCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6AE4))(this);
	}
	template <typename R = bool> R get_hasUseCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6B6C))(this);
	}
	template <typename R = void> R AddUseCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6B78))(this, newValue);
	}
	template <typename R = void> R ReplaceUseCount(int32_t newValue) {
		return ((R (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6C7C))(this, newValue);
	}
	template <typename R = void> R RemoveUseCount() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6D80))(this);
	}
	template <typename R = VipMagicComponent*> R get_vipMagic() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6D8C))(this);
	}
	template <typename R = bool> R get_hasVipMagic() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD6E14))(this);
	}
	template <typename R = void> R AddVipMagic(VipBonusType newType) {
		return ((R (*)(MagicEntity*, VipBonusType))(Il2CppBase() + 0x1AD6E20))(this, newType);
	}
	template <typename R = void> R ReplaceVipMagic(VipBonusType newType) {
		return ((R (*)(MagicEntity*, VipBonusType))(Il2CppBase() + 0x1AD6F24))(this, newType);
	}
	template <typename R = void> R RemoveVipMagic() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD7028))(this);
	}
	template <typename R = WeaponDotComponent*> R get_weaponDot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD7034))(this);
	}
	template <typename R = bool> R get_hasWeaponDot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD70BC))(this);
	}
	template <typename R = void> R AddWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD70C8))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceWeaponDot(float newValue, ModifierGroup newGroup) {
		return ((R (*)(MagicEntity*, float, ModifierGroup))(Il2CppBase() + 0x1AD71DC))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveWeaponDot() {
		return ((R (*)(MagicEntity*))(Il2CppBase() + 0x1AD72F0))(this);
	}

};

