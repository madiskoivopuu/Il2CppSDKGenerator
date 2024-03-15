#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierHelper"));
	}

	template <typename R = Il2CppArray<Il2CppList<ValueTuple2<float, int32_t>*>*>*> static R& _sharedBuffer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = GameEntity*> static R GetOwner(ModifierEntity* modifierEntity, ICommonContexts* world) {
		return ((R (*)(void *, ModifierEntity*, ICommonContexts*))(Il2CppBase() + 0x1E91A0C))(0, modifierEntity, world);
	}
	template <typename R = ModifierEntity*> static R GetModifiers(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91B10))(0, entity);
	}
	template <typename R = void> static R DestroyModifiers(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91B5C))(0, entity);
	}
	template <typename R = ModifierEntity*> static R GetOrCreateModifiers(GameEntity* entity, ICommonContexts* world) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*))(Il2CppBase() + 0x1E91BDC))(0, entity, world);
	}
	template <typename R = float> static R GetAttackSpeedCoef(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91D24))(0, entity);
	}
	template <typename R = float> static R GetOutcomingHealBonus(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91E30))(0, entity);
	}
	template <typename R = float> static R GetPowerInc(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91ED0))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetCurrentArmingWeapon(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E91F70))(0, entity);
	}
	template <typename R = Il2CppString*> static R GetCurrentArmingFeet(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92084))(0, entity);
	}
	template <typename R = bool> static R HasMagicTrigger(GameEntity* entity, MagicTriggerType type) {
		return ((R (*)(void *, GameEntity*, MagicTriggerType))(Il2CppBase() + 0x1E92144))(0, entity, type);
	}
	template <typename R = bool> static R IsKnockdown(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E921F0))(0, entity);
	}
	template <typename R = bool> static R IsLostControl(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92268))(0, entity);
	}
	template <typename R = bool> static R IsStunned(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E922E0))(0, entity);
	}
	template <typename R = bool> static R IsImmobilized(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92358))(0, entity);
	}
	template <typename R = bool> static R IsImpotent(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E923EC))(0, entity);
	}
	template <typename R = bool> static R IsSilence(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92464))(0, entity);
	}
	template <typename R = bool> static R IsRiding(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E924DC))(0, entity);
	}
	template <typename R = bool> static R IsGhost(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92554))(0, entity);
	}
	template <typename R = bool> static R IsInvisible(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E925CC))(0, entity);
	}
	template <typename R = bool> static R IsRooted(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92644))(0, entity);
	}
	template <typename R = bool> static R IsPermanentMoving(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E926BC))(0, entity);
	}
	template <typename R = bool> static R IsPatrolling(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92734))(0, entity);
	}
	template <typename R = bool> static R IsSneak(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E927AC))(0, entity);
	}
	template <typename R = bool> static R IsSneakImmune(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92824))(0, entity);
	}
	template <typename R = bool> static R IsSneakDamageImmune(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E9289C))(0, entity);
	}
	template <typename R = bool> static R IsNaked(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92914))(0, entity);
	}
	template <typename R = bool> static R IsTrueVision(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E9298C))(0, entity);
	}
	template <typename R = bool> static R IsRunesDisabled(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92A04))(0, entity);
	}
	template <typename R = bool> static R IsDisarmingWeapon(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92A7C))(0, entity);
	}
	template <typename R = bool> static R IsDisarmingFeet(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92AF4))(0, entity);
	}
	template <typename R = bool> static R IsInstability(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92B6C))(0, entity);
	}
	template <typename R = bool> static R IsSpeedDecImmune(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92BE4))(0, entity);
	}
	template <typename R = bool> static R IsUnstoppable(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92C5C))(0, entity);
	}
	template <typename R = bool> static R IsDebuffImmune(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92D2C))(0, entity);
	}
	template <typename R = float> static R GetDamageShield(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92DA4))(0, entity);
	}
	template <typename R = float> static R GetSkillDamageCoef(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92E44))(0, entity);
	}
	template <typename R = float> static R GetArmor(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E92EF8))(0, gameEntity);
	}
	template <typename R = float> static R GetArmor_1(ModifierEntity* modifierEntity, float baseValue) {
		return ((R (*)(void *, ModifierEntity*, float))(Il2CppBase() + 0x1E92F94))(0, modifierEntity, baseValue);
	}
	template <typename R = float> static R GetLightArmor(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9312C))(0, modifierEntity);
	}
	template <typename R = float> static R GetMediumArmor(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E931D4))(0, modifierEntity);
	}
	template <typename R = float> static R GetHeavyArmor(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9327C))(0, modifierEntity);
	}
	template <typename R = void> static R SetModifierValue(ModifierEntity* modifierEntity, int32_t modifierIndex, float value) {
		return ((R (*)(void *, ModifierEntity*, int32_t, float))(Il2CppBase() + 0x0))(0, modifierEntity, modifierIndex, value);
	}
	template <typename R = void> static R SetModifierValue_1(GameEntity* entity, ICommonContexts* world, int32_t modifierIndex, float value) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int32_t, float))(Il2CppBase() + 0x0))(0, entity, world, modifierIndex, value);
	}
	template <typename R = float> static R GetDamage(GameEntity* entity, float baseValue) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1E93324))(0, entity, baseValue);
	}
	template <typename R = float> static R GetAttackPriority(GameEntity* gameEntity, bool isPriorityTarget) {
		return ((R (*)(void *, GameEntity*, bool))(Il2CppBase() + 0x1E93504))(0, gameEntity, isPriorityTarget);
	}
	template <typename R = float> static R GetSatiationCoef(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9365C))(0, modifierEntity);
	}
	template <typename R = float> static R GetStatusCoef(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93710))(0, modifierEntity);
	}
	template <typename R = float> static R GetMitigationCoef(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E9380C))(0, modifierEntity);
	}
	template <typename R = float> static R GetArmorDamageCoef(float armorValue) {
		return ((R (*)(void *, float))(Il2CppBase() + 0x1E93908))(0, armorValue);
	}
	template <typename R = float> static R GetInteractRadiusFoItem(GameEntity* entity, ItemEntity* item) {
		return ((R (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1E939C0))(0, entity, item);
	}
	template <typename R = float> static R CalcMapSpeed(GameEntity* gameEntity, float baseSpeed) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x1E93AD8))(0, gameEntity, baseSpeed);
	}
	template <typename R = float> static R GetSpeed(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E93B9C))(0, gameEntity);
	}
	template <typename R = float> static R GetSpeed_1(ModifierEntity* modifierEntity, float baseSpeed) {
		return ((R (*)(void *, ModifierEntity*, float))(Il2CppBase() + 0x1E93C80))(0, modifierEntity, baseSpeed);
	}
	template <typename R = float> static R GetMountSpeed(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93D8C))(0, modifierEntity);
	}
	template <typename R = float> static R GetMetabolismDamageCoef(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E93EF4))(0, gameEntity);
	}
	template <typename R = float> static R GetMetabolismDamageCoef_1(ModifierEntity* modifierEntity) {
		return ((R (*)(void *, ModifierEntity*))(Il2CppBase() + 0x1E93F8C))(0, modifierEntity);
	}
	template <typename R = float> static R GetPlayerClassProgressBonus(GameEntity* actor, ICommonContexts* world, PlayerClassProgress progressType) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, PlayerClassProgress))(Il2CppBase() + 0x1E94080))(0, actor, world, progressType);
	}
	template <typename R = float> static R GetHotPrediction(GameEntity* target, MagicContext* magicContext) {
		return ((R (*)(void *, GameEntity*, MagicContext*))(Il2CppBase() + 0x1E94208))(0, target, magicContext);
	}
	template <typename R = bool> static R CheckActorChance(IChanceWithActor* entity, ICommonContexts* world, float coef) {
		return ((R (*)(void *, IChanceWithActor*, ICommonContexts*, float))(Il2CppBase() + 0x1E94B08))(0, entity, world, coef);
	}
	template <typename R = float> static R GetActorChanceValue(IChanceWithActor* entity, ICommonContexts* world, float coef) {
		return ((R (*)(void *, IChanceWithActor*, ICommonContexts*, float))(Il2CppBase() + 0x1E94CB8))(0, entity, world, coef);
	}
	template <typename R = bool> static R CheckChance(IChanceEntity* chanceEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, IChanceEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E9502C))(0, chanceEntity, world, actor);
	}
	template <typename R = float> static R GetChanceValue(IChanceEntity* chanceEntity, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, IChanceEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E951D8))(0, chanceEntity, world, actor);
	}
	template <typename R = bool> static R CheckStartChance(MagicDataEntity* magicData, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, MagicDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E953D4))(0, magicData, world, actor);
	}
	template <typename R = float> static R GetStartChanceValue(MagicDataEntity* magicData, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, MagicDataEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E95580))(0, magicData, world, actor);
	}
	template <typename R = int64_t> static R GetStartDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((R (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename R = int64_t> static R GetCreateDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((R (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename R = int32_t> static R GetPower(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E956BC))(0, gameEntity);
	}
	template <typename R = float> static R IncreasePercent(float value, float percent) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x1E95854))(0, value, percent);
	}
	template <typename R = float> static R DecreasePercent(float value, float percent) {
		return ((R (*)(void *, float, float))(Il2CppBase() + 0x1E95878))(0, value, percent);
	}
	template <typename R = float> static R GetMaxHealthCoef(IMaxHealthCoefEntity* entity) {
		return ((R (*)(void *, IMaxHealthCoefEntity*))(Il2CppBase() + 0x1E958BC))(0, entity);
	}
	template <typename R = float> static R GetDamageCoef(IDamageCoefEntity* entity) {
		return ((R (*)(void *, IDamageCoefEntity*))(Il2CppBase() + 0x1E959E0))(0, entity);
	}
	template <typename R = float> static R GetApplyDamageCoef(uintptr_t entity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename R = float> static R GetApplyDamageCoef_1(MagicEntity* magic) {
		return ((R (*)(void *, MagicEntity*))(Il2CppBase() + 0x1E95B04))(0, magic);
	}
	template <typename R = float> static R GetMaxHealth(GameEntity* gameEntity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E95B98))(0, gameEntity);
	}
	template <typename R = float> static R GetDamage_1(GameEntity* gameEntity, ItemEntity* itemEntity) {
		return ((R (*)(void *, GameEntity*, ItemEntity*))(Il2CppBase() + 0x1E95D3C))(0, gameEntity, itemEntity);
	}
	template <typename R = float> static R GetSneakDamage(GameEntity* gameEntity, ItemEntity* itemEntity, bool pvp) {
		return ((R (*)(void *, GameEntity*, ItemEntity*, bool))(Il2CppBase() + 0x1E95DFC))(0, gameEntity, itemEntity, pvp);
	}
	template <typename R = float> static R GetDamageResistance(uintptr_t gameEntity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename R = float> static R GetDamageVulnerability(uintptr_t gameEntity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename R = float> static R GetSpeed_2(uintptr_t gameEntity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename R = float> static R GetMountSpeed_1(uintptr_t gameEntity) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, gameEntity);
	}
	template <typename R = float> static R GetCurrentMoveSpeed(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E95F30))(0, entity);
	}
	template <typename R = bool> static R IsUnhidden(GameEntity* target) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E96118))(0, target);
	}
	template <typename R = bool> static R IsHidden(GameEntity* target) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x1E96190))(0, target);
	}
	template <typename R = bool> static R IsVisibleFor(GameEntity* target, ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1E9624C))(0, target, world, actor);
	}
	template <typename R = bool> static R IsVisibleForTeam(GameEntity* target, ICommonContexts* world, int64_t teamId) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x1E963BC))(0, target, world, teamId);
	}

};

