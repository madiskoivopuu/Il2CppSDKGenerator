#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicEntity"));
	}

	template <typename T = uintptr_t> static T& aliveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& attractorStateComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& destroyingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& durationPredictionComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& processingComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& removeOnMoveComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& replicatedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& sneakComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = Il2CppString*> T get_DataName() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACEB58))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD07C))(this);
	}
	template <typename T = void> T AddData(Il2CppString* name, uintptr_t data) {
		return ((T (*)(MagicEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1ACEC34))(this, name, data);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACED60))(this);
	}
	template <typename T = uintptr_t> T get_aIBattleState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACEFB0))(this);
	}
	template <typename T = bool> T get_hasAIBattleState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF038))(this);
	}
	template <typename T = void> T AddAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(MagicEntity*, int32_t, int64_t))(Il2CppBase() + 0x1ACF044))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T ReplaceAIBattleState(int32_t newPhaseIndex, int64_t newStartTime) {
		return ((T (*)(MagicEntity*, int32_t, int64_t))(Il2CppBase() + 0x1ACF150))(this, newPhaseIndex, newStartTime);
	}
	template <typename T = void> T RemoveAIBattleState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF25C))(this);
	}
	template <typename T = uintptr_t> T get_actionId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD694))(this);
	}
	template <typename T = bool> T get_hasActionId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD688))(this);
	}
	template <typename T = void> T AddActionId(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACF268))(this, newId);
	}
	template <typename T = void> T ReplaceActionId(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACF36C))(this, newId);
	}
	template <typename T = void> T RemoveActionId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF470))(this);
	}
	template <typename T = uintptr_t> T get_activationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF47C))(this);
	}
	template <typename T = bool> T get_hasActivationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF504))(this);
	}
	template <typename T = void> T AddActivationState(void* newTime) {
		return ((T (*)(MagicEntity*, void*))(Il2CppBase() + 0x1ACF510))(this, newTime);
	}
	template <typename T = void> T ReplaceActivationState(void* newTime) {
		return ((T (*)(MagicEntity*, void*))(Il2CppBase() + 0x1ACF618))(this, newTime);
	}
	template <typename T = void> T RemoveActivationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF720))(this);
	}
	template <typename T = uintptr_t> T get_active() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF72C))(this);
	}
	template <typename T = bool> T get_hasActive() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF7B4))(this);
	}
	template <typename T = void> T AddActive(bool newValue) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACF7C0))(this, newValue);
	}
	template <typename T = void> T ReplaceActive(bool newValue) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACF8C8))(this, newValue);
	}
	template <typename T = void> T RemoveActive() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF9D0))(this);
	}
	template <typename T = uintptr_t> T get_actor() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACF9DC))(this);
	}
	template <typename T = bool> T get_hasActor() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFA64))(this);
	}
	template <typename T = void> T AddActor(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFA70))(this, newId);
	}
	template <typename T = void> T ReplaceActor(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFB74))(this, newId);
	}
	template <typename T = void> T RemoveActor() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFC78))(this);
	}
	template <typename T = uintptr_t> T get_actorParent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFC84))(this);
	}
	template <typename T = bool> T get_hasActorParent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFD0C))(this);
	}
	template <typename T = void> T AddActorParent(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFD18))(this, newId);
	}
	template <typename T = void> T ReplaceActorParent(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1ACFE1C))(this, newId);
	}
	template <typename T = void> T RemoveActorParent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFF20))(this);
	}
	template <typename T = bool> T get_isAlive() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACE91C))(this);
	}
	template <typename T = void> T set_isAlive(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACE928))(this, value);
	}
	template <typename T = bool> T get_isAttractorState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACFF2C))(this);
	}
	template <typename T = void> T set_isAttractorState(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACFF38))(this, value);
	}
	template <typename T = uintptr_t> T get_autoRotationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0050))(this);
	}
	template <typename T = bool> T get_hasAutoRotationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD00D8))(this);
	}
	template <typename T = void> T AddAutoRotationState(float newStartAngle, float newOffsetX, float newOffsetY) {
		return ((T (*)(MagicEntity*, float, float, float))(Il2CppBase() + 0x1AD00E4))(this, newStartAngle, newOffsetX, newOffsetY);
	}
	template <typename T = void> T ReplaceAutoRotationState(float newStartAngle, float newOffsetX, float newOffsetY) {
		return ((T (*)(MagicEntity*, float, float, float))(Il2CppBase() + 0x1AD01FC))(this, newStartAngle, newOffsetX, newOffsetY);
	}
	template <typename T = void> T RemoveAutoRotationState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0314))(this);
	}
	template <typename T = uintptr_t> T get_chance() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0320))(this);
	}
	template <typename T = bool> T get_hasChance() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD03A8))(this);
	}
	template <typename T = void> T AddChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD03B4))(this, newValue, newName, newNames);
	}
	template <typename T = void> T ReplaceChance(float newValue, Il2CppString* newName, Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicEntity*, float, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD04EC))(this, newValue, newName, newNames);
	}
	template <typename T = void> T RemoveChance() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0624))(this);
	}
	template <typename T = uintptr_t> T get_changeDurationByLostHp() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0630))(this);
	}
	template <typename T = bool> T get_hasChangeDurationByLostHp() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD06B8))(this);
	}
	template <typename T = void> T AddChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicEntity*, uintptr_t, float))(Il2CppBase() + 0x1AD06C4))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T ReplaceChangeDurationByLostHp(uintptr_t newDamageCondition, float newSecondsByPercent) {
		return ((T (*)(MagicEntity*, uintptr_t, float))(Il2CppBase() + 0x1AD07E8))(this, newDamageCondition, newSecondsByPercent);
	}
	template <typename T = void> T RemoveChangeDurationByLostHp() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD090C))(this);
	}
	template <typename T = uintptr_t> T get_children() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0918))(this);
	}
	template <typename T = bool> T get_hasChildren() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD09A0))(this);
	}
	template <typename T = void> T AddChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD09AC))(this, newNames);
	}
	template <typename T = void> T ReplaceChildren(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(MagicEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1AD0AC0))(this, newNames);
	}
	template <typename T = void> T RemoveChildren() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0BD4))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0BE0))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0C68))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD0C74))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD0D78))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0E7C))(this);
	}
	template <typename T = uintptr_t> T get_collisionMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0E88))(this);
	}
	template <typename T = bool> T get_hasCollisionMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD0F10))(this);
	}
	template <typename T = void> T AddCollisionMagicState(Il2CppDictionary<int32_t, int64_t>* newTargets) {
		return ((T (*)(MagicEntity*, Il2CppDictionary<int32_t, int64_t>*))(Il2CppBase() + 0x1AD0F1C))(this, newTargets);
	}
	template <typename T = void> T ReplaceCollisionMagicState(Il2CppDictionary<int32_t, int64_t>* newTargets) {
		return ((T (*)(MagicEntity*, Il2CppDictionary<int32_t, int64_t>*))(Il2CppBase() + 0x1AD1030))(this, newTargets);
	}
	template <typename T = void> T RemoveCollisionMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1144))(this);
	}
	template <typename T = uintptr_t> T get_count() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1150))(this);
	}
	template <typename T = bool> T get_hasCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD11D8))(this);
	}
	template <typename T = void> T AddCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD11E4))(this, newValue);
	}
	template <typename T = void> T ReplaceCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD12E8))(this, newValue);
	}
	template <typename T = void> T RemoveCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD13EC))(this);
	}
	template <typename T = uintptr_t> T get_damageCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD13F8))(this);
	}
	template <typename T = bool> T get_hasDamageCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1480))(this);
	}
	template <typename T = void> T AddDamageCoef(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD148C))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageCoef(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1590))(this, newValue);
	}
	template <typename T = void> T RemoveDamageCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1694))(this);
	}
	template <typename T = uintptr_t> T get_damage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD16A0))(this);
	}
	template <typename T = bool> T get_hasDamage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1728))(this);
	}
	template <typename T = void> T AddDamage(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1734))(this, newValue);
	}
	template <typename T = void> T ReplaceDamage(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD1838))(this, newValue);
	}
	template <typename T = void> T RemoveDamage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD193C))(this);
	}
	template <typename T = uintptr_t> T get_damageShield() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1948))(this);
	}
	template <typename T = bool> T get_hasDamageShield() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD19D0))(this);
	}
	template <typename T = void> T AddDamageShield(uintptr_t newDepends, float newValue) {
		return ((T (*)(MagicEntity*, uintptr_t, float))(Il2CppBase() + 0x1AD19DC))(this, newDepends, newValue);
	}
	template <typename T = void> T ReplaceDamageShield(uintptr_t newDepends, float newValue) {
		return ((T (*)(MagicEntity*, uintptr_t, float))(Il2CppBase() + 0x1AD1AF0))(this, newDepends, newValue);
	}
	template <typename T = void> T RemoveDamageShield() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C04))(this);
	}
	template <typename T = uintptr_t> T get_damageStat() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C10))(this);
	}
	template <typename T = bool> T get_hasDamageStat() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD1C98))(this);
	}
	template <typename T = void> T AddDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(MagicEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1AD1CA4))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T ReplaceDamageStat(uintptr_t newType, int32_t newId, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newClanName, Il2CppString* newGuildTag, Il2CppString* newClass, int64_t newPlayerId, Il2CppString* newItem, int32_t newBattleId) {
		return ((T (*)(MagicEntity*, uintptr_t, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1AD1E68))(this, newType, newId, newName, newBlueprint, newClanName, newGuildTag, newClass, newPlayerId, newItem, newBattleId);
	}
	template <typename T = void> T RemoveDamageStat() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD202C))(this);
	}
	template <typename T = uintptr_t> T get_damageType() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2038))(this);
	}
	template <typename T = bool> T get_hasDamageType() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD20C0))(this);
	}
	template <typename T = void> T AddDamageType(uintptr_t newValue) {
		return ((T (*)(MagicEntity*, uintptr_t))(Il2CppBase() + 0x1AD20CC))(this, newValue);
	}
	template <typename T = void> T ReplaceDamageType(uintptr_t newValue) {
		return ((T (*)(MagicEntity*, uintptr_t))(Il2CppBase() + 0x1AD21D0))(this, newValue);
	}
	template <typename T = void> T RemoveDamageType() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD22D4))(this);
	}
	template <typename T = uintptr_t> T get_delay() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD22E0))(this);
	}
	template <typename T = bool> T get_hasDelay() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2368))(this);
	}
	template <typename T = void> T AddDelay(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2374))(this, newValue);
	}
	template <typename T = void> T ReplaceDelay(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2478))(this, newValue);
	}
	template <typename T = void> T RemoveDelay() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD257C))(this);
	}
	template <typename T = bool> T get_isDestroying() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACDDCC))(this);
	}
	template <typename T = void> T set_isDestroying(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1ACEA40))(this, value);
	}
	template <typename T = uintptr_t> T get_dot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2588))(this);
	}
	template <typename T = bool> T get_hasDot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2610))(this);
	}
	template <typename T = void> T AddDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD261C))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD2730))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveDot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2844))(this);
	}
	template <typename T = uintptr_t> T get_duration() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2850))(this);
	}
	template <typename T = bool> T get_hasDuration() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD5F4))(this);
	}
	template <typename T = void> T AddDuration(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD28D8))(this, newValue);
	}
	template <typename T = void> T ReplaceDuration(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD29DC))(this, newValue);
	}
	template <typename T = void> T RemoveDuration() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2AE0))(this);
	}
	template <typename T = bool> T get_isDurationPrediction() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2AEC))(this);
	}
	template <typename T = void> T set_isDurationPrediction(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD2AF8))(this, value);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2C10))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2C98))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD2CA4))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD2DA8))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2EAC))(this);
	}
	template <typename T = uintptr_t> T get_heal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2EB8))(this);
	}
	template <typename T = bool> T get_hasHeal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD2F40))(this);
	}
	template <typename T = void> T AddHeal(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD2F4C))(this, newValue);
	}
	template <typename T = void> T ReplaceHeal(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD3050))(this, newValue);
	}
	template <typename T = void> T RemoveHeal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3154))(this);
	}
	template <typename T = uintptr_t> T get_hot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3160))(this);
	}
	template <typename T = bool> T get_hasHot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD31E8))(this);
	}
	template <typename T = void> T AddHot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD31F4))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceHot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD3308))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveHot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD341C))(this);
	}
	template <typename T = uintptr_t> T get_id() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACCFF4))(this);
	}
	template <typename T = bool> T get_hasId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACEFA4))(this);
	}
	template <typename T = void> T AddId(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3428))(this, newValue);
	}
	template <typename T = void> T ReplaceId(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD352C))(this, newValue);
	}
	template <typename T = void> T RemoveId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3630))(this);
	}
	template <typename T = uintptr_t> T get_inventoryIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD363C))(this);
	}
	template <typename T = bool> T get_hasInventoryIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD36C4))(this);
	}
	template <typename T = void> T AddInventoryIndex(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD36D0))(this, newValue);
	}
	template <typename T = void> T ReplaceInventoryIndex(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD37D4))(this, newValue);
	}
	template <typename T = void> T RemoveInventoryIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD38D8))(this);
	}
	template <typename T = uintptr_t> T get_item() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD38E4))(this);
	}
	template <typename T = bool> T get_hasItem() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD396C))(this);
	}
	template <typename T = void> T AddItem(Il2CppString* newName) {
		return ((T (*)(MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1AD3978))(this, newName);
	}
	template <typename T = void> T ReplaceItem(Il2CppString* newName) {
		return ((T (*)(MagicEntity*, Il2CppString*))(Il2CppBase() + 0x1AD3A8C))(this, newName);
	}
	template <typename T = void> T RemoveItem() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3BA0))(this);
	}
	template <typename T = uintptr_t> T get_magicData() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACEBAC))(this);
	}
	template <typename T = bool> T get_hasMagicData() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACEBA0))(this);
	}
	template <typename T = void> T AddMagicData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(MagicEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1AD3BAC))(this, newName, newDataEntity);
	}
	template <typename T = void> T ReplaceMagicData(Il2CppString* newName, uintptr_t newDataEntity) {
		return ((T (*)(MagicEntity*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1ACEC38))(this, newName, newDataEntity);
	}
	template <typename T = void> T RemoveMagicData() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3CD4))(this);
	}
	template <typename T = uintptr_t> T get_magicTriggerId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3CE0))(this);
	}
	template <typename T = bool> T get_hasMagicTriggerId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3D68))(this);
	}
	template <typename T = void> T AddMagicTriggerId(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3D74))(this, newId);
	}
	template <typename T = void> T ReplaceMagicTriggerId(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD3E78))(this, newId);
	}
	template <typename T = void> T RemoveMagicTriggerId() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3F7C))(this);
	}
	template <typename T = uintptr_t> T get_maxHealthCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD3F88))(this);
	}
	template <typename T = bool> T get_hasMaxHealthCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4010))(this);
	}
	template <typename T = void> T AddMaxHealthCoef(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD401C))(this, newValue);
	}
	template <typename T = void> T ReplaceMaxHealthCoef(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD4120))(this, newValue);
	}
	template <typename T = void> T RemoveMaxHealthCoef() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4224))(this);
	}
	template <typename T = uintptr_t> T get_onDurationEndCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4230))(this);
	}
	template <typename T = bool> T get_hasOnDurationEndCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD42B8))(this);
	}
	template <typename T = void> T AddOnDurationEndCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD42C4))(this, newValue);
	}
	template <typename T = void> T ReplaceOnDurationEndCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD43C8))(this, newValue);
	}
	template <typename T = void> T RemoveOnDurationEndCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD44CC))(this);
	}
	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD44D8))(this);
	}
	template <typename T = bool> T get_hasOwner() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4560))(this);
	}
	template <typename T = void> T AddOwner(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD456C))(this, newId);
	}
	template <typename T = void> T ReplaceOwner(int64_t newId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4670))(this, newId);
	}
	template <typename T = void> T RemoveOwner() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4774))(this);
	}
	template <typename T = uintptr_t> T get_parent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD560))(this);
	}
	template <typename T = bool> T get_hasParent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD554))(this);
	}
	template <typename T = void> T AddParent(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD4780))(this, newId);
	}
	template <typename T = void> T ReplaceParent(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD4884))(this, newId);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4988))(this);
	}
	template <typename T = uintptr_t> T get_permanent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4994))(this);
	}
	template <typename T = bool> T get_hasPermanent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4A1C))(this);
	}
	template <typename T = void> T AddPermanent(bool newSaveOnDeath) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4A28))(this, newSaveOnDeath);
	}
	template <typename T = void> T ReplacePermanent(bool newSaveOnDeath) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4B30))(this, newSaveOnDeath);
	}
	template <typename T = void> T RemovePermanent() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4C38))(this);
	}
	template <typename T = uintptr_t> T get_personal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4C44))(this);
	}
	template <typename T = bool> T get_hasPersonal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4CCC))(this);
	}
	template <typename T = void> T AddPersonal(int64_t newPlayerId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4CD8))(this, newPlayerId);
	}
	template <typename T = void> T ReplacePersonal(int64_t newPlayerId) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD4DDC))(this, newPlayerId);
	}
	template <typename T = void> T RemovePersonal() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4EE0))(this);
	}
	template <typename T = bool> T get_isProcessing() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD4EEC))(this);
	}
	template <typename T = void> T set_isProcessing(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD4EF8))(this, value);
	}
	template <typename T = bool> T get_isRemoveOnMove() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5010))(this);
	}
	template <typename T = void> T set_isRemoveOnMove(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD501C))(this, value);
	}
	template <typename T = uintptr_t> T get_repeatMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5134))(this);
	}
	template <typename T = bool> T get_hasRepeatMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD51BC))(this);
	}
	template <typename T = void> T AddRepeatMagicState(int64_t newNextTime) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD51C8))(this, newNextTime);
	}
	template <typename T = void> T ReplaceRepeatMagicState(int64_t newNextTime) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD52CC))(this, newNextTime);
	}
	template <typename T = void> T RemoveRepeatMagicState() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD53D0))(this);
	}
	template <typename T = bool> T get_isReplicated() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACDDD8))(this);
	}
	template <typename T = void> T set_isReplicated(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD53DC))(this, value);
	}
	template <typename T = uintptr_t> T get_sequenceIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD54F4))(this);
	}
	template <typename T = bool> T get_hasSequenceIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD557C))(this);
	}
	template <typename T = void> T AddSequenceIndex(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5588))(this, newValue);
	}
	template <typename T = void> T ReplaceSequenceIndex(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD568C))(this, newValue);
	}
	template <typename T = void> T RemoveSequenceIndex() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5790))(this);
	}
	template <typename T = bool> T get_isSneak() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD579C))(this);
	}
	template <typename T = void> T set_isSneak(bool value) {
		return ((T (*)(MagicEntity*, bool))(Il2CppBase() + 0x1AD57A8))(this, value);
	}
	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD58C0))(this);
	}
	template <typename T = bool> T get_hasSource() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5948))(this);
	}
	template <typename T = void> T AddSource(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5954))(this, newId);
	}
	template <typename T = void> T ReplaceSource(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD5A58))(this, newId);
	}
	template <typename T = void> T RemoveSource() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5B5C))(this);
	}
	template <typename T = uintptr_t> T get_sourceDamage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5B68))(this);
	}
	template <typename T = bool> T get_hasSourceDamage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5BF0))(this);
	}
	template <typename T = void> T AddSourceDamage(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD5BFC))(this, newValue);
	}
	template <typename T = void> T ReplaceSourceDamage(float newValue) {
		return ((T (*)(MagicEntity*, float))(Il2CppBase() + 0x1AD5D00))(this, newValue);
	}
	template <typename T = void> T RemoveSourceDamage() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD5E04))(this);
	}
	template <typename T = uintptr_t> T get_startTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD600))(this);
	}
	template <typename T = bool> T get_hasStartTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1ACD5E8))(this);
	}
	template <typename T = void> T AddStartTime(int64_t newValue) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD5E10))(this, newValue);
	}
	template <typename T = void> T ReplaceStartTime(int64_t newValue) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD5F14))(this, newValue);
	}
	template <typename T = void> T RemoveStartTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6018))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6024))(this);
	}
	template <typename T = bool> T get_hasTarget() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD60AC))(this);
	}
	template <typename T = void> T AddTarget(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD60B8))(this, newId);
	}
	template <typename T = void> T ReplaceTarget(int32_t newId) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD61BC))(this, newId);
	}
	template <typename T = void> T RemoveTarget() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD62C0))(this);
	}
	template <typename T = uintptr_t> T get_ticksCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD62CC))(this);
	}
	template <typename T = bool> T get_hasTicksCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6354))(this);
	}
	template <typename T = void> T AddTicksCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6360))(this, newValue);
	}
	template <typename T = void> T ReplaceTicksCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6464))(this, newValue);
	}
	template <typename T = void> T RemoveTicksCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6568))(this);
	}
	template <typename T = uintptr_t> T get_tot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6574))(this);
	}
	template <typename T = bool> T get_hasTot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD65FC))(this);
	}
	template <typename T = void> T AddTot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD6608))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceTot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD671C))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveTot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6830))(this);
	}
	template <typename T = uintptr_t> T get_updateTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD683C))(this);
	}
	template <typename T = bool> T get_hasUpdateTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD68C4))(this);
	}
	template <typename T = void> T AddUpdateTime(int64_t newValue) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD68D0))(this, newValue);
	}
	template <typename T = void> T ReplaceUpdateTime(int64_t newValue) {
		return ((T (*)(MagicEntity*, int64_t))(Il2CppBase() + 0x1AD69D4))(this, newValue);
	}
	template <typename T = void> T RemoveUpdateTime() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6AD8))(this);
	}
	template <typename T = uintptr_t> T get_useCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6AE4))(this);
	}
	template <typename T = bool> T get_hasUseCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6B6C))(this);
	}
	template <typename T = void> T AddUseCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6B78))(this, newValue);
	}
	template <typename T = void> T ReplaceUseCount(int32_t newValue) {
		return ((T (*)(MagicEntity*, int32_t))(Il2CppBase() + 0x1AD6C7C))(this, newValue);
	}
	template <typename T = void> T RemoveUseCount() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6D80))(this);
	}
	template <typename T = uintptr_t> T get_vipMagic() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6D8C))(this);
	}
	template <typename T = bool> T get_hasVipMagic() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD6E14))(this);
	}
	template <typename T = void> T AddVipMagic(uintptr_t newType) {
		return ((T (*)(MagicEntity*, uintptr_t))(Il2CppBase() + 0x1AD6E20))(this, newType);
	}
	template <typename T = void> T ReplaceVipMagic(uintptr_t newType) {
		return ((T (*)(MagicEntity*, uintptr_t))(Il2CppBase() + 0x1AD6F24))(this, newType);
	}
	template <typename T = void> T RemoveVipMagic() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD7028))(this);
	}
	template <typename T = uintptr_t> T get_weaponDot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD7034))(this);
	}
	template <typename T = bool> T get_hasWeaponDot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD70BC))(this);
	}
	template <typename T = void> T AddWeaponDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD70C8))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceWeaponDot(float newValue, uintptr_t newGroup) {
		return ((T (*)(MagicEntity*, float, uintptr_t))(Il2CppBase() + 0x1AD71DC))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveWeaponDot() {
		return ((T (*)(MagicEntity*))(Il2CppBase() + 0x1AD72F0))(this);
	}

};

}
