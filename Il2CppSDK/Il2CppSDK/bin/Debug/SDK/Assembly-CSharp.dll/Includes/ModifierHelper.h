#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _sharedBuffer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = GameEntity*> static T GetOwner(ModifierEntity* modifierEntity, ICommonContexts* world) {
		return ((T (*)(void *, ModifierEntity*, ICommonContexts*))(Il2CppBase() + 0x1E91A0C))(0, modifierEntity, world);
	}
	template <typename T = ModifierEntity*> static T GetModifiers(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91B10))(0, entity);
	}
	template <typename T = void> static T DestroyModifiers(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91B5C))(0, entity);
	}
	template <typename T = ModifierEntity*> static T GetOrCreateModifiers(GameEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1E91BDC))(0, entity, world);
	}
	template <typename T = float> static T GetAttackSpeedCoef(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91D24))(0, entity);
	}
	template <typename T = float> static T GetOutcomingHealBonus(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91E30))(0, entity);
	}
	template <typename T = float> static T GetPowerInc(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91ED0))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetCurrentArmingWeapon(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91F70))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetCurrentArmingFeet(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92084))(0, entity);
	}
	template <typename T = bool> static T HasMagicTrigger(GameEntity* entity, MagicTriggerType* type) {
		return ((T (*)(void *, GameEntity*, MagicTriggerType*))(Il2CppBase() + 0x1E92144))(0, entity, type);
	}
	template <typename T = bool> static T IsKnockdown(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E921F0))(0, entity);
	}
	template <typename T = bool> static T IsLostControl(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92268))(0, entity);
	}
	template <typename T = bool> static T IsStunned(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E922E0))(0, entity);
	}
	template <typename T = bool> static T IsImmobilized(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92358))(0, entity);
	}
	template <typename T = bool> static T IsImpotent(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E923EC))(0, entity);
	}
	template <typename T = bool> static T IsSilence(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92464))(0, entity);
	}
	template <typename T = bool> static T IsRiding(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E924DC))(0, entity);
	}
	template <typename T = bool> static T IsGhost(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92554))(0, entity);
	}
	template <typename T = bool> static T IsInvisible(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E925CC))(0, entity);
	}
	template <typename T = bool> static T IsRooted(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92644))(0, entity);
	}
	template <typename T = bool> static T IsPermanentMoving(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E926BC))(0, entity);
	}
	template <typename T = bool> static T IsPatrolling(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92734))(0, entity);
	}
	template <typename T = bool> static T IsSneak(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E927AC))(0, entity);
	}
	template <typename T = bool> static T IsSneakImmune(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92824))(0, entity);
	}
	template <typename T = bool> static T IsSneakDamageImmune(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E9289C))(0, entity);
	}
	template <typename T = bool> static T IsNaked(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92914))(0, entity);
	}
	template <typename T = bool> static T IsTrueVision(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E9298C))(0, entity);
	}
	template <typename T = bool> static T IsRunesDisabled(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92A04))(0, entity);
	}
	template <typename T = bool> static T IsDisarmingWeapon(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92A7C))(0, entity);
	}
	template <typename T = bool> static T IsDisarmingFeet(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92AF4))(0, entity);
	}
	template <typename T = bool> static T IsInstability(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92B6C))(0, entity);
	}
	template <typename T = bool> static T IsSpeedDecImmune(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92BE4))(0, entity);
	}
	template <typename T = bool> static T IsUnstoppable(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92C5C))(0, entity);
	}
	template <typename T = bool> static T IsDebuffImmune(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92D2C))(0, entity);
	}
	template <typename T = float> static T GetDamageShield(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92DA4))(0, entity);
	}
	template <typename T = float> static T GetSkillDamageCoef(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92E44))(0, entity);
	}
	template <typename T = float> static T GetArmor(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92EF8))(0, gameEntity);
	}
	template <typename T = float> static T GetArmor_1(ModifierEntity* modifierEntity, float baseValue) {
		return ((T (*)(void *, ModifierEntity*, float))(Il2CppBase() + 0x1E92F94))(0, modifierEntity, baseValue);
	}
	template <typename T = float> static T GetLightArmor(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9312C))(0, modifierEntity);
	}
	template <typename T = float> static T GetMediumArmor(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E931D4))(0, modifierEntity);
	}
	template <typename T = float> static T GetHeavyArmor(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9327C))(0, modifierEntity);
	}
	template <typename T = void> static T SetModifierValue(ModifierEntity* modifierEntity, int32_t modifierIndex, float value) {
		return ((T (*)(void *, ModifierEntity*, int32_t, float))(Il2CppBase() + 0x0))(0, modifierEntity, modifierIndex, value);
	}
	template <typename T = void> static T SetModifierValue_1(GameEntity* entity, ICommonContexts* world, int32_t modifierIndex, float value) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int32_t, float))(Il2CppBase() + 0x0))(0, entity, world, modifierIndex, value);
	}
	template <typename T = float> static T GetDamage(GameEntity* entity, float baseValue) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1E93324))(0, entity, baseValue);
	}
	template <typename T = float> static T GetAttackPriority(GameEntity* gameEntity, bool isPriorityTarget) {
		return ((T (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x1E93504))(0, gameEntity, isPriorityTarget);
	}
	template <typename T = float> static T GetSatiationCoef(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9365C))(0, modifierEntity);
	}
	template <typename T = float> static T GetStatusCoef(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93710))(0, modifierEntity);
	}
	template <typename T = float> static T GetMitigationCoef(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9380C))(0, modifierEntity);
	}
	template <typename T = float> static T GetArmorDamageCoef(float armorValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1E93908))(0, armorValue);
	}
	template <typename T = float> static T GetInteractRadiusFoItem(GameEntity* entity, ItemEntity* item) {
		return ((T (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1E939C0))(0, entity, item);
	}
	template <typename T = float> static T CalcMapSpeed(GameEntity* gameEntity, float baseSpeed) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1E93AD8))(0, gameEntity, baseSpeed);
	}
	template <typename T = float> static T GetSpeed(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E93B9C))(0, gameEntity);
	}
	template <typename T = float> static T GetSpeed_1(ModifierEntity* modifierEntity, float baseSpeed) {
		return ((T (*)(void *, ModifierEntity*, float))(Il2CppBase() + 0x1E93C80))(0, modifierEntity, baseSpeed);
	}
	template <typename T = float> static T GetMountSpeed(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93D8C))(0, modifierEntity);
	}
	template <typename T = float> static T GetMetabolismDamageCoef(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E93EF4))(0, gameEntity);
	}
	template <typename T = float> static T GetMetabolismDamageCoef_1(ModifierEntity* modifierEntity) {
		return ((T (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93F8C))(0, modifierEntity);
	}
	template <typename T = float> static T GetPlayerClassProgressBonus(GameEntity* actor, ICommonContexts* world, PlayerClassProgress* progressType) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, PlayerClassProgress*))(Il2CppBase() + 0x1E94080))(0, actor, world, progressType);
	}
	template <typename T = float> static T GetHotPrediction(GameEntity* target, MagicContext* magicContext) {
		return ((T (*)(void *, GameEntity*, MagicContext*))(Il2CppBase() + 0x1E94208))(0, target, magicContext);
	}
	template <typename T = bool> static T CheckActorChance(IChanceWithActor* entity, ICommonContexts* world, float coef) {
		return ((T (*)(void *, IChanceWithActor*, ICommonContexts*, float))(Il2CppBase() + 0x1E94B08))(0, entity, world, coef);
	}
	template <typename T = float> static T GetActorChanceValue(IChanceWithActor* entity, ICommonContexts* world, float coef) {
		return ((T (*)(void *, IChanceWithActor*, ICommonContexts*, float))(Il2CppBase() + 0x1E94CB8))(0, entity, world, coef);
	}
	template <typename T = bool> static T CheckChance(IChanceEntity* chanceEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, IChanceEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E9502C))(0, chanceEntity, world, actor);
	}
	template <typename T = float> static T GetChanceValue(IChanceEntity* chanceEntity, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, IChanceEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E951D8))(0, chanceEntity, world, actor);
	}
	template <typename T = bool> static T CheckStartChance(MagicDataEntity* magicData, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, MagicDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E953D4))(0, magicData, world, actor);
	}
	template <typename T = float> static T GetStartChanceValue(MagicDataEntity* magicData, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, MagicDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E95580))(0, magicData, world, actor);
	}
	template <typename T = int64_t> static T GetStartDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename T = int64_t> static T GetCreateDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename T = int32_t> static T GetPower(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E956BC))(0, gameEntity);
	}
	template <typename T = float> static T IncreasePercent(float value, float percent) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x1E95854))(0, value, percent);
	}
	template <typename T = float> static T DecreasePercent(float value, float percent) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x1E95878))(0, value, percent);
	}
	template <typename T = float> static T GetMaxHealthCoef(IMaxHealthCoefEntity* entity) {
		return ((T (*)(void *, IMaxHealthCoefEntity*))(Il2CppBase() + 0x1E958BC))(0, entity);
	}
	template <typename T = float> static T GetDamageCoef(IDamageCoefEntity* entity) {
		return ((T (*)(void *, IDamageCoefEntity*))(Il2CppBase() + 0x1E959E0))(0, entity);
	}
	template <typename T = float> static T GetApplyDamageCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = float> static T GetApplyDamageCoef_1(MagicEntity* magic) {
		return ((T (*)(void *, MagicEntity*))(Il2CppBase() + 0x1E95B04))(0, magic);
	}
	template <typename T = float> static T GetMaxHealth(GameEntity* gameEntity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E95B98))(0, gameEntity);
	}
	template <typename T = float> static T GetDamage_1(GameEntity* gameEntity, ItemEntity* itemEntity) {
		return ((T (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1E95D3C))(0, gameEntity, itemEntity);
	}
	template <typename T = float> static T GetSneakDamage(GameEntity* gameEntity, ItemEntity* itemEntity, bool pvp) {
		return ((T (*)(void *, GameEntity*, ItemEntity*, bool))(Il2CppBase() + 0x1E95DFC))(0, gameEntity, itemEntity, pvp);
	}
	template <typename T = float> static T GetDamageResistance(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename T = float> static T GetDamageVulnerability(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename T = float> static T GetSpeed_2(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename T = float> static T GetMountSpeed_1(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename T = float> static T GetCurrentMoveSpeed(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E95F30))(0, entity);
	}
	template <typename T = bool> static T IsUnhidden(GameEntity* target) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E96118))(0, target);
	}
	template <typename T = bool> static T IsHidden(GameEntity* target) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x1E96190))(0, target);
	}
	template <typename T = bool> static T IsVisibleFor(GameEntity* target, ICommonContexts* world, GameEntity* actor) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E9624C))(0, target, world, actor);
	}
	template <typename T = bool> static T IsVisibleForTeam(GameEntity* target, ICommonContexts* world, int64_t teamId) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1E963BC))(0, target, world, teamId);
	}

};

