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

	template <typename T = uintptr_t> static T GetOwner(uintptr_t modifierEntity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E91A0C))(0, modifierEntity, world);
	}
	template <typename T = uintptr_t> static T GetModifiers(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91B10))(0, entity);
	}
	template <typename T = void> static T DestroyModifiers(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91B5C))(0, entity);
	}
	template <typename T = uintptr_t> static T GetOrCreateModifiers(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E91BDC))(0, entity, world);
	}
	template <typename T = float> static T GetAttackSpeedCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91D24))(0, entity);
	}
	template <typename T = float> static T GetOutcomingHealBonus(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91E30))(0, entity);
	}
	template <typename T = float> static T GetPowerInc(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91ED0))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetCurrentArmingWeapon(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E91F70))(0, entity);
	}
	template <typename T = Il2CppString*> static T GetCurrentArmingFeet(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92084))(0, entity);
	}
	template <typename T = bool> static T HasMagicTrigger(uintptr_t entity, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E92144))(0, entity, type);
	}
	template <typename T = bool> static T IsKnockdown(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E921F0))(0, entity);
	}
	template <typename T = bool> static T IsLostControl(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92268))(0, entity);
	}
	template <typename T = bool> static T IsStunned(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E922E0))(0, entity);
	}
	template <typename T = bool> static T IsImmobilized(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92358))(0, entity);
	}
	template <typename T = bool> static T IsImpotent(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E923EC))(0, entity);
	}
	template <typename T = bool> static T IsSilence(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92464))(0, entity);
	}
	template <typename T = bool> static T IsRiding(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E924DC))(0, entity);
	}
	template <typename T = bool> static T IsGhost(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92554))(0, entity);
	}
	template <typename T = bool> static T IsInvisible(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E925CC))(0, entity);
	}
	template <typename T = bool> static T IsRooted(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92644))(0, entity);
	}
	template <typename T = bool> static T IsPermanentMoving(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E926BC))(0, entity);
	}
	template <typename T = bool> static T IsPatrolling(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92734))(0, entity);
	}
	template <typename T = bool> static T IsSneak(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E927AC))(0, entity);
	}
	template <typename T = bool> static T IsSneakImmune(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92824))(0, entity);
	}
	template <typename T = bool> static T IsSneakDamageImmune(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9289C))(0, entity);
	}
	template <typename T = bool> static T IsNaked(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92914))(0, entity);
	}
	template <typename T = bool> static T IsTrueVision(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9298C))(0, entity);
	}
	template <typename T = bool> static T IsRunesDisabled(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92A04))(0, entity);
	}
	template <typename T = bool> static T IsDisarmingWeapon(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92A7C))(0, entity);
	}
	template <typename T = bool> static T IsDisarmingFeet(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92AF4))(0, entity);
	}
	template <typename T = bool> static T IsInstability(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92B6C))(0, entity);
	}
	template <typename T = bool> static T IsSpeedDecImmune(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92BE4))(0, entity);
	}
	template <typename T = bool> static T IsUnstoppable(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92C5C))(0, entity);
	}
	template <typename T = bool> static T IsDebuffImmune(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92D2C))(0, entity);
	}
	template <typename T = float> static T GetDamageShield(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92DA4))(0, entity);
	}
	template <typename T = float> static T GetSkillDamageCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92E44))(0, entity);
	}
	template <typename T = float> static T GetArmor(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E92EF8))(0, gameEntity);
	}
	template <typename T = float> static T GetArmor_1(uintptr_t modifierEntity, float baseValue) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1E92F94))(0, modifierEntity, baseValue);
	}
	template <typename T = float> static T GetLightArmor(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9312C))(0, modifierEntity);
	}
	template <typename T = float> static T GetMediumArmor(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E931D4))(0, modifierEntity);
	}
	template <typename T = float> static T GetHeavyArmor(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9327C))(0, modifierEntity);
	}
	template <typename T = void> static T SetModifierValue(uintptr_t modifierEntity, int32_t modifierIndex, float value) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x0))(0, modifierEntity, modifierIndex, value);
	}
	template <typename T = void> static T SetModifierValue_1(uintptr_t entity, uintptr_t world, int32_t modifierIndex, float value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x0))(0, entity, world, modifierIndex, value);
	}
	template <typename T = float> static T GetDamage(uintptr_t entity, float baseValue) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1E93324))(0, entity, baseValue);
	}
	template <typename T = float> static T GetAttackPriority(uintptr_t gameEntity, bool isPriorityTarget) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1E93504))(0, gameEntity, isPriorityTarget);
	}
	template <typename T = float> static T GetSatiationCoef(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9365C))(0, modifierEntity);
	}
	template <typename T = float> static T GetStatusCoef(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E93710))(0, modifierEntity);
	}
	template <typename T = float> static T GetMitigationCoef(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E9380C))(0, modifierEntity);
	}
	template <typename T = float> static T GetArmorDamageCoef(float armorValue) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1E93908))(0, armorValue);
	}
	template <typename T = float> static T GetInteractRadiusFoItem(uintptr_t entity, uintptr_t item) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E939C0))(0, entity, item);
	}
	template <typename T = float> static T CalcMapSpeed(uintptr_t gameEntity, float baseSpeed) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1E93AD8))(0, gameEntity, baseSpeed);
	}
	template <typename T = float> static T GetSpeed(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E93B9C))(0, gameEntity);
	}
	template <typename T = float> static T GetSpeed_1(uintptr_t modifierEntity, float baseSpeed) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1E93C80))(0, modifierEntity, baseSpeed);
	}
	template <typename T = float> static T GetMountSpeed(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E93D8C))(0, modifierEntity);
	}
	template <typename T = float> static T GetMetabolismDamageCoef(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E93EF4))(0, gameEntity);
	}
	template <typename T = float> static T GetMetabolismDamageCoef_1(uintptr_t modifierEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E93F8C))(0, modifierEntity);
	}
	template <typename T = float> static T GetPlayerClassProgressBonus(uintptr_t actor, uintptr_t world, uintptr_t progressType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E94080))(0, actor, world, progressType);
	}
	template <typename T = float> static T GetHotPrediction(uintptr_t target, uintptr_t magicContext) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E94208))(0, target, magicContext);
	}
	template <typename T = bool> static T CheckActorChance(uintptr_t entity, uintptr_t world, float coef) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1E94B08))(0, entity, world, coef);
	}
	template <typename T = float> static T GetActorChanceValue(uintptr_t entity, uintptr_t world, float coef) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1E94CB8))(0, entity, world, coef);
	}
	template <typename T = bool> static T CheckChance(uintptr_t chanceEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E9502C))(0, chanceEntity, world, actor);
	}
	template <typename T = float> static T GetChanceValue(uintptr_t chanceEntity, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E951D8))(0, chanceEntity, world, actor);
	}
	template <typename T = bool> static T CheckStartChance(uintptr_t magicData, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E953D4))(0, magicData, world, actor);
	}
	template <typename T = float> static T GetStartChanceValue(uintptr_t magicData, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E95580))(0, magicData, world, actor);
	}
	template <typename T = int64_t> static T GetStartDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename T = int64_t> static T GetCreateDurationTimeout(uintptr_t entity, int64_t defaultValue) {
		return ((T (*)(void *, uintptr_t, int64_t))(Il2CppBase() + 0x0))(0, entity, defaultValue);
	}
	template <typename T = int32_t> static T GetPower(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E956BC))(0, gameEntity);
	}
	template <typename T = float> static T IncreasePercent(float value, float percent) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x1E95854))(0, value, percent);
	}
	template <typename T = float> static T DecreasePercent(float value, float percent) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x1E95878))(0, value, percent);
	}
	template <typename T = float> static T GetMaxHealthCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E958BC))(0, entity);
	}
	template <typename T = float> static T GetDamageCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E959E0))(0, entity);
	}
	template <typename T = float> static T GetApplyDamageCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, entity);
	}
	template <typename T = float> static T GetApplyDamageCoef_1(uintptr_t magic) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E95B04))(0, magic);
	}
	template <typename T = float> static T GetMaxHealth(uintptr_t gameEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E95B98))(0, gameEntity);
	}
	template <typename T = float> static T GetDamage_1(uintptr_t gameEntity, uintptr_t itemEntity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E95D3C))(0, gameEntity, itemEntity);
	}
	template <typename T = float> static T GetSneakDamage(uintptr_t gameEntity, uintptr_t itemEntity, bool pvp) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E95DFC))(0, gameEntity, itemEntity, pvp);
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
	template <typename T = float> static T GetCurrentMoveSpeed(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E95F30))(0, entity);
	}
	template <typename T = bool> static T IsUnhidden(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E96118))(0, target);
	}
	template <typename T = bool> static T IsHidden(uintptr_t target) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1E96190))(0, target);
	}
	template <typename T = bool> static T IsVisibleFor(uintptr_t target, uintptr_t world, uintptr_t actor) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E9624C))(0, target, world, actor);
	}
	template <typename T = bool> static T IsVisibleForTeam(uintptr_t target, uintptr_t world, int64_t teamId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x1E963BC))(0, target, world, teamId);
	}

};

}
