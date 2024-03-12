#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierMatcher"));
	}

	template <typename T = void*> static T& _matcherArmingFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherArmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherAttackPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherAttackRadiusIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherAttackSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherAttackSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherBackstabDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherBackstabResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherBowResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherBurned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherChangeChances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherClassCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherCreepDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherCreepResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherCursed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherDamageBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherDamageBlockIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherDamageBonusForMissingHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherDamageDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherDamageDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherDamageImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherDamageInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherDamageIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherDamageShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherDamageVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherDebuffImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherDisarmingFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherDisarmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherDotResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherDualWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherEquipTagsSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherExpGainIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherExplodeTargets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherFallen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherFrozen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherGadgetCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherGhost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherGuildBossDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherHealing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherHealingSkillCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherHeavyArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherHeavyArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherHeavyArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherHeavyArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherHotPrediction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& _matcherHungerSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& _matcherHungerSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& _matcherIcelandResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& _matcherIgnoreArmorPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& _matcherImmobilizedDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& _matcherImmortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& _matcherImmunityCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = void*> static T& _matcherImpotent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = void*> static T& _matcherImpotentImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = void*> static T& _matcherInPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = void*> static T& _matcherIncomingHealBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = void*> static T& _matcherIncomingHealReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = void*> static T& _matcherInstability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = void*> static T& _matcherInteractCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = void*> static T& _matcherInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = void*> static T& _matcherKnockdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = void*> static T& _matcherLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = void*> static T& _matcherLightArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = void*> static T& _matcherLightArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = void*> static T& _matcherLightArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = void*> static T& _matcherLightArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = void*> static T& _matcherLostControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = void*> static T& _matcherLostControlImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = void*> static T& _matcherMagicTriggerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = void*> static T& _matcherMapSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = void*> static T& _matcherMasteryPointsBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = void*> static T& _matcherMaxDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = void*> static T& _matcherMaxHealthDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = void*> static T& _matcherMaxHealthInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = void*> static T& _matcherMaxHealthIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = void*> static T& _matcherMaxIncomingDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = void*> static T& _matcherMaxTenacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = void*> static T& _matcherMaxTenacityInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = void*> static T& _matcherMaxTenacityIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = void*> static T& _matcherMediumArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = void*> static T& _matcherMediumArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = void*> static T& _matcherMediumArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = void*> static T& _matcherMediumArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = void*> static T& _matcherMeleeResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = void*> static T& _matcherMetabolism() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = void*> static T& _matcherMetabolismDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = void*> static T& _matcherMetabolismDamageVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = void*> static T& _matcherMinimapHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = void*> static T& _matcherMorphingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = void*> static T& _matcherMountSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = void*> static T& _matcherMountSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = void*> static T& _matcherMountSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = void*> static T& _matcherNaked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = void*> static T& _matcherOutcomingHealBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = void*> static T& _matcherOverrideCooldowns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = void*> static T& _matcherPatrolling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = void*> static T& _matcherPermanentMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = void*> static T& _matcherPetExperienceBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = void*> static T& _matcherPlayerDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = void*> static T& _matcherPlayerDamageReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = void*> static T& _matcherPlayerResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = void*> static T& _matcherPoisoned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = void*> static T& _matcherPowerInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = void*> static T& _matcherRangedResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = void*> static T& _matcherRiding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = void*> static T& _matcherRootImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = void*> static T& _matcherRooted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = void*> static T& _matcherRunesDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = void*> static T& _matcherSatiationReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = void*> static T& _matcherSilence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = void*> static T& _matcherSilenceImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = void*> static T& _matcherSkillDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = void*> static T& _matcherSneakBackstab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = void*> static T& _matcherSneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = void*> static T& _matcherSneakDamageImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = void*> static T& _matcherSneakDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = void*> static T& _matcherSneakImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = void*> static T& _matcherSpeedDecImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = void*> static T& _matcherSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = void*> static T& _matcherSpeedInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = void*> static T& _matcherSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = void*> static T& _matcherSpeedMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = void*> static T& _matcherSplashResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = void*> static T& _matcherSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = void*> static T& _matcherStatusResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = void*> static T& _matcherStatusVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = void*> static T& _matcherStunImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = void*> static T& _matcherStunned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = void*> static T& _matcherTeamUnhidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = void*> static T& _matcherThirstSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = void*> static T& _matcherThirstSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = void*> static T& _matcherTimeOutExitDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = void*> static T& _matcherTot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = void*> static T& _matcherTrueVision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = void*> static T& _matcherUnhidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = void*> static T& _matcherUpdateMagicIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = void*> static T& _matcherUpdateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = void*> static T& _matcherWeaponDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}

	template <typename T = void*> static T get_ArmingFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E964E4))(0);
	}
	template <typename T = void*> static T get_ArmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E96664))(0);
	}
	template <typename T = void*> static T get_ArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E96800))(0);
	}
	template <typename T = void*> static T get_ArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9699C))(0);
	}
	template <typename T = void*> static T get_ArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E96B38))(0);
	}
	template <typename T = void*> static T get_ArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E96CD4))(0);
	}
	template <typename T = void*> static T get_AttackPriority() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E96E70))(0);
	}
	template <typename T = void*> static T get_AttackRadiusIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9700C))(0);
	}
	template <typename T = void*> static T get_AttackSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E971A8))(0);
	}
	template <typename T = void*> static T get_AttackSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E97344))(0);
	}
	template <typename T = void*> static T get_BackstabDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E974E0))(0);
	}
	template <typename T = void*> static T get_BackstabResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9767C))(0);
	}
	template <typename T = void*> static T get_BowResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E97818))(0);
	}
	template <typename T = void*> static T get_Burned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E979B4))(0);
	}
	template <typename T = void*> static T get_ChangeChances() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E97B50))(0);
	}
	template <typename T = void*> static T get_ClassCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E97CEC))(0);
	}
	template <typename T = void*> static T get_CreepDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E97E88))(0);
	}
	template <typename T = void*> static T get_CreepResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98024))(0);
	}
	template <typename T = void*> static T get_Cursed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E981C0))(0);
	}
	template <typename T = void*> static T get_DamageBlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9835C))(0);
	}
	template <typename T = void*> static T get_DamageBlockIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E984F8))(0);
	}
	template <typename T = void*> static T get_DamageBonusForMissingHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98694))(0);
	}
	template <typename T = void*> static T get_DamageDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98830))(0);
	}
	template <typename T = void*> static T get_DamageDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E989CC))(0);
	}
	template <typename T = void*> static T get_DamageImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98B68))(0);
	}
	template <typename T = void*> static T get_DamageInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98D04))(0);
	}
	template <typename T = void*> static T get_DamageIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E98EA0))(0);
	}
	template <typename T = void*> static T get_DamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9903C))(0);
	}
	template <typename T = void*> static T get_DamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E991D8))(0);
	}
	template <typename T = void*> static T get_DamageShield() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99374))(0);
	}
	template <typename T = void*> static T get_DamageVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99510))(0);
	}
	template <typename T = void*> static T get_DebuffImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E996AC))(0);
	}
	template <typename T = void*> static T get_DisarmingFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99848))(0);
	}
	template <typename T = void*> static T get_DisarmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E999E8))(0);
	}
	template <typename T = void*> static T get_Dot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99B88))(0);
	}
	template <typename T = void*> static T get_DotResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99D28))(0);
	}
	template <typename T = void*> static T get_DualWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E99EC8))(0);
	}
	template <typename T = void*> static T get_EquipTagsSet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A068))(0);
	}
	template <typename T = void*> static T get_ExpGainIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A208))(0);
	}
	template <typename T = void*> static T get_ExplodeTargets() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A3A8))(0);
	}
	template <typename T = void*> static T get_Fallen() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A548))(0);
	}
	template <typename T = void*> static T get_Frozen() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A6E8))(0);
	}
	template <typename T = void*> static T get_GadgetCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9A888))(0);
	}
	template <typename T = void*> static T get_Gender() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9AA28))(0);
	}
	template <typename T = void*> static T get_Ghost() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9ABC8))(0);
	}
	template <typename T = void*> static T get_GuildBossDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9AD68))(0);
	}
	template <typename T = void*> static T get_Healing() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9AF08))(0);
	}
	template <typename T = void*> static T get_HealingSkillCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B0A8))(0);
	}
	template <typename T = void*> static T get_HeavyArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B248))(0);
	}
	template <typename T = void*> static T get_HeavyArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B3E8))(0);
	}
	template <typename T = void*> static T get_HeavyArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B588))(0);
	}
	template <typename T = void*> static T get_HeavyArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B728))(0);
	}
	template <typename T = void*> static T get_Hidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9B8C8))(0);
	}
	template <typename T = void*> static T get_Hot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9BA68))(0);
	}
	template <typename T = void*> static T get_HotPrediction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9BC08))(0);
	}
	template <typename T = void*> static T get_HungerSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9BDA8))(0);
	}
	template <typename T = void*> static T get_HungerSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9BF48))(0);
	}
	template <typename T = void*> static T get_IcelandResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C0E8))(0);
	}
	template <typename T = void*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C288))(0);
	}
	template <typename T = void*> static T get_IgnoreArmorPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C428))(0);
	}
	template <typename T = void*> static T get_ImmobilizedDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C5C8))(0);
	}
	template <typename T = void*> static T get_Immortal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C768))(0);
	}
	template <typename T = void*> static T get_ImmunityCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9C908))(0);
	}
	template <typename T = void*> static T get_Impotent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9CAA8))(0);
	}
	template <typename T = void*> static T get_ImpotentImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9CC48))(0);
	}
	template <typename T = void*> static T get_InPvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9CDE8))(0);
	}
	template <typename T = void*> static T get_IncomingHealBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9CF88))(0);
	}
	template <typename T = void*> static T get_IncomingHealReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D128))(0);
	}
	template <typename T = void*> static T get_Instability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D2C8))(0);
	}
	template <typename T = void*> static T get_InteractCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D468))(0);
	}
	template <typename T = void*> static T get_Invisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D608))(0);
	}
	template <typename T = void*> static T get_Knockdown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D7A8))(0);
	}
	template <typename T = void*> static T get_LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9D948))(0);
	}
	template <typename T = void*> static T get_LightArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9DAE8))(0);
	}
	template <typename T = void*> static T get_LightArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9DC88))(0);
	}
	template <typename T = void*> static T get_LightArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9DE28))(0);
	}
	template <typename T = void*> static T get_LightArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9DFC8))(0);
	}
	template <typename T = void*> static T get_LostControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E168))(0);
	}
	template <typename T = void*> static T get_LostControlImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E308))(0);
	}
	template <typename T = void*> static T get_MagicTriggerType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E4A8))(0);
	}
	template <typename T = void*> static T get_MapSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E648))(0);
	}
	template <typename T = void*> static T get_MasteryPointsBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E7E8))(0);
	}
	template <typename T = void*> static T get_MaxDamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9E988))(0);
	}
	template <typename T = void*> static T get_MaxHealthDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9EB28))(0);
	}
	template <typename T = void*> static T get_MaxHealthInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9ECC8))(0);
	}
	template <typename T = void*> static T get_MaxHealthIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9EE68))(0);
	}
	template <typename T = void*> static T get_MaxIncomingDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F008))(0);
	}
	template <typename T = void*> static T get_MaxTenacity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F1A8))(0);
	}
	template <typename T = void*> static T get_MaxTenacityInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F348))(0);
	}
	template <typename T = void*> static T get_MaxTenacityIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F4E8))(0);
	}
	template <typename T = void*> static T get_MediumArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F688))(0);
	}
	template <typename T = void*> static T get_MediumArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F828))(0);
	}
	template <typename T = void*> static T get_MediumArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9F9C8))(0);
	}
	template <typename T = void*> static T get_MediumArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9FB68))(0);
	}
	template <typename T = void*> static T get_MeleeResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9FD08))(0);
	}
	template <typename T = void*> static T get_Metabolism() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E9FEA8))(0);
	}
	template <typename T = void*> static T get_MetabolismDamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0048))(0);
	}
	template <typename T = void*> static T get_MetabolismDamageVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA01E8))(0);
	}
	template <typename T = void*> static T get_MinimapHidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0388))(0);
	}
	template <typename T = void*> static T get_MorphingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0528))(0);
	}
	template <typename T = void*> static T get_MountSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA06C8))(0);
	}
	template <typename T = void*> static T get_MountSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0868))(0);
	}
	template <typename T = void*> static T get_MountSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0A08))(0);
	}
	template <typename T = void*> static T get_Naked() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0BA8))(0);
	}
	template <typename T = void*> static T get_OutcomingHealBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0D48))(0);
	}
	template <typename T = void*> static T get_OverrideCooldowns() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA0EE8))(0);
	}
	template <typename T = void*> static T get_Patrolling() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1088))(0);
	}
	template <typename T = void*> static T get_PermanentMoving() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1228))(0);
	}
	template <typename T = void*> static T get_PetExperienceBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA13C8))(0);
	}
	template <typename T = void*> static T get_PlayerDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1568))(0);
	}
	template <typename T = void*> static T get_PlayerDamageReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1708))(0);
	}
	template <typename T = void*> static T get_PlayerResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA18A8))(0);
	}
	template <typename T = void*> static T get_Poisoned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1A48))(0);
	}
	template <typename T = void*> static T get_PowerInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1BE8))(0);
	}
	template <typename T = void*> static T get_RangedResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1D88))(0);
	}
	template <typename T = void*> static T get_Riding() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA1F28))(0);
	}
	template <typename T = void*> static T get_RootImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA20C8))(0);
	}
	template <typename T = void*> static T get_Rooted() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2268))(0);
	}
	template <typename T = void*> static T get_RunesDisabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2408))(0);
	}
	template <typename T = void*> static T get_SatiationReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA25A8))(0);
	}
	template <typename T = void*> static T get_Silence() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2748))(0);
	}
	template <typename T = void*> static T get_SilenceImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA28E8))(0);
	}
	template <typename T = void*> static T get_SkillDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2A88))(0);
	}
	template <typename T = void*> static T get_SneakBackstab() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2C28))(0);
	}
	template <typename T = void*> static T get_Sneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2DC8))(0);
	}
	template <typename T = void*> static T get_SneakDamageImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA2F68))(0);
	}
	template <typename T = void*> static T get_SneakDamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3108))(0);
	}
	template <typename T = void*> static T get_SneakImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA32A8))(0);
	}
	template <typename T = void*> static T get_SpeedDecImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3448))(0);
	}
	template <typename T = void*> static T get_SpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA35E8))(0);
	}
	template <typename T = void*> static T get_SpeedInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3788))(0);
	}
	template <typename T = void*> static T get_SpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3928))(0);
	}
	template <typename T = void*> static T get_SpeedMoving() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3AC8))(0);
	}
	template <typename T = void*> static T get_SplashResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3C68))(0);
	}
	template <typename T = void*> static T get_Sprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3E08))(0);
	}
	template <typename T = void*> static T get_StatusResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA3FA8))(0);
	}
	template <typename T = void*> static T get_StatusVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4148))(0);
	}
	template <typename T = void*> static T get_StunImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA42E8))(0);
	}
	template <typename T = void*> static T get_Stunned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4488))(0);
	}
	template <typename T = void*> static T get_TeamUnhidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4628))(0);
	}
	template <typename T = void*> static T get_ThirstSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA47C8))(0);
	}
	template <typename T = void*> static T get_ThirstSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4968))(0);
	}
	template <typename T = void*> static T get_TimeOutExitDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4B08))(0);
	}
	template <typename T = void*> static T get_Tot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4CA8))(0);
	}
	template <typename T = void*> static T get_TrueVision() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4E48))(0);
	}
	template <typename T = void*> static T get_Unhidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA4FE8))(0);
	}
	template <typename T = void*> static T get_UpdateMagicIcon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA5188))(0);
	}
	template <typename T = void*> static T get_UpdateTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA5328))(0);
	}
	template <typename T = void*> static T get_WeaponDot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EA54C8))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EA5668))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EA56E0))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EA5758))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1EA57D0))(0, matchers);
	}

};

}
