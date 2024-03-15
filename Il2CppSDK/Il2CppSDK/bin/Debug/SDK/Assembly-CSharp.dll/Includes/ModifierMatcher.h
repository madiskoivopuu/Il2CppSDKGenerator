#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModifierMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModifierMatcher"));
	}

	 static IMatcher1ModifierEntity*>*& _matcherArmingFeet() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherArmingWeapon() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherArmorDec() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1ModifierEntity*>*& _matcherArmorDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1ModifierEntity*>*& _matcherArmorInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1ModifierEntity*>*& _matcherArmorIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1ModifierEntity*>*& _matcherAttackPriority() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1ModifierEntity*>*& _matcherAttackRadiusIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1ModifierEntity*>*& _matcherAttackSpeedDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1ModifierEntity*>*& _matcherAttackSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1ModifierEntity*>*& _matcherBackstabDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1ModifierEntity*>*& _matcherBackstabResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1ModifierEntity*>*& _matcherBowResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1ModifierEntity*>*& _matcherBurned() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1ModifierEntity*>*& _matcherChangeChances() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1ModifierEntity*>*& _matcherClassCooldownReduce() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1ModifierEntity*>*& _matcherCreepDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1ModifierEntity*>*& _matcherCreepResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1ModifierEntity*>*& _matcherCursed() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageBlock() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageBlockIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageBonusForMissingHealth() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageDec() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageReflect() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageShield() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDamageVulnerability() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDebuffImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDisarmingFeet() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDisarmingWeapon() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDot() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDotResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1ModifierEntity*>*& _matcherDualWeapon() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1ModifierEntity*>*& _matcherEquipTagsSet() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1ModifierEntity*>*& _matcherExpGainIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1ModifierEntity*>*& _matcherExplodeTargets() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1ModifierEntity*>*& _matcherFallen() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1ModifierEntity*>*& _matcherFrozen() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1ModifierEntity*>*& _matcherGadgetCooldownReduce() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1ModifierEntity*>*& _matcherGender() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1ModifierEntity*>*& _matcherGhost() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1ModifierEntity*>*& _matcherGuildBossDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHealing() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHealingSkillCooldownReduce() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHeavyArmorDec() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHeavyArmorDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHeavyArmorInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHeavyArmorIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHidden() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHot() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHotPrediction() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHungerSpeedDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherHungerSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherIcelandResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherId() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherImmobilizedDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherImmortal() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherImmunityCache() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherImpotent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherImpotentImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1ModifierEntity*>*& _matcherInPvP() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1ModifierEntity*>*& _matcherIncomingHealBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1ModifierEntity*>*& _matcherIncomingHealReduction() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1ModifierEntity*>*& _matcherInstability() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1ModifierEntity*>*& _matcherInteractCollision() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1ModifierEntity*>*& _matcherInvisible() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1ModifierEntity*>*& _matcherKnockdown() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLightArmorDec() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLightArmorDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLightArmorInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLightArmorIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLostControl() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1ModifierEntity*>*& _matcherLostControlImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMagicTriggerType() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMapSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMasteryPointsBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxDamageReflect() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxHealthDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxHealthInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxHealthIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxIncomingDamage() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxTenacity() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxTenacityInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMaxTenacityIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMediumArmorDec() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMediumArmorDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMediumArmorInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMediumArmorIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMeleeResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMetabolism() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMetabolismDamageResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMetabolismDamageVulnerability() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMinimapHidden() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMorphingWeapon() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMountSpeed() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMountSpeedDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1ModifierEntity*>*& _matcherMountSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1ModifierEntity*>*& _matcherNaked() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1ModifierEntity*>*& _matcherOutcomingHealBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1ModifierEntity*>*& _matcherOverrideCooldowns() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPatrolling() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPermanentMoving() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPetExperienceBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPlayerDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPlayerDamageReduction() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPlayerResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPoisoned() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1ModifierEntity*>*& _matcherPowerInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1ModifierEntity*>*& _matcherRangedResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1ModifierEntity*>*& _matcherRiding() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1ModifierEntity*>*& _matcherRootImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherRooted() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherRunesDisabled() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSatiationReduction() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSilence() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSilenceImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSkillDamageBonus() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSneakBackstab() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSneak() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSneakDamageImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSneakDamageResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSneakImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSpeedDecImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSpeedDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSpeedInc() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSpeedMoving() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSplashResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1ModifierEntity*>*& _matcherSprint() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1ModifierEntity*>*& _matcherStatusResistance() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1ModifierEntity*>*& _matcherStatusVulnerability() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1ModifierEntity*>*& _matcherStunImmune() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1ModifierEntity*>*& _matcherStunned() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1ModifierEntity*>*& _matcherTeamUnhidden() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1ModifierEntity*>*& _matcherThirstSpeedDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1ModifierEntity*>*& _matcherThirstSpeedIncPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1ModifierEntity*>*& _matcherTimeOutExitDecPercent() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1ModifierEntity*>*& _matcherTot() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1ModifierEntity*>*& _matcherTrueVision() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1ModifierEntity*>*& _matcherUnhidden() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1ModifierEntity*>*& _matcherUpdateMagicIcon() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1ModifierEntity*>*& _matcherUpdateTime() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1ModifierEntity*>*& _matcherWeaponDot() {
		return *(IMatcher1ModifierEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}

	 static IMatcher1ModifierEntity*>* get_ArmingFeet() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E964E4))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ArmingWeapon() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E96664))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ArmorDec() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E96800))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ArmorDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9699C))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ArmorInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E96B38))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ArmorIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E96CD4))(0);
	}
	 static IMatcher1ModifierEntity*>* get_AttackPriority() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E96E70))(0);
	}
	 static IMatcher1ModifierEntity*>* get_AttackRadiusIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9700C))(0);
	}
	 static IMatcher1ModifierEntity*>* get_AttackSpeedDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E971A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_AttackSpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E97344))(0);
	}
	 static IMatcher1ModifierEntity*>* get_BackstabDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E974E0))(0);
	}
	 static IMatcher1ModifierEntity*>* get_BackstabResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9767C))(0);
	}
	 static IMatcher1ModifierEntity*>* get_BowResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E97818))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Burned() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E979B4))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ChangeChances() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E97B50))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ClassCooldownReduce() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E97CEC))(0);
	}
	 static IMatcher1ModifierEntity*>* get_CreepDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E97E88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_CreepResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98024))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Cursed() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E981C0))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageBlock() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9835C))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageBlockIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E984F8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageBonusForMissingHealth() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98694))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageDec() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98830))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E989CC))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98B68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98D04))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E98EA0))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageReflect() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9903C))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E991D8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageShield() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99374))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DamageVulnerability() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99510))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DebuffImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E996AC))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DisarmingFeet() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99848))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DisarmingWeapon() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E999E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Dot() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99B88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DotResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99D28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_DualWeapon() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E99EC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_EquipTagsSet() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A068))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ExpGainIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A208))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ExplodeTargets() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A3A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Fallen() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A548))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Frozen() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A6E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_GadgetCooldownReduce() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9A888))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Gender() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9AA28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Ghost() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9ABC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_GuildBossDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9AD68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Healing() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9AF08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HealingSkillCooldownReduce() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B0A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HeavyArmorDec() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B248))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HeavyArmorDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B3E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HeavyArmorInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B588))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HeavyArmorIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B728))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Hidden() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9B8C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Hot() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9BA68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HotPrediction() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9BC08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HungerSpeedDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9BDA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_HungerSpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9BF48))(0);
	}
	 static IMatcher1ModifierEntity*>* get_IcelandResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C0E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Id() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C288))(0);
	}
	 static IMatcher1ModifierEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C428))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ImmobilizedDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C5C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Immortal() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C768))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ImmunityCache() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9C908))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Impotent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9CAA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ImpotentImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9CC48))(0);
	}
	 static IMatcher1ModifierEntity*>* get_InPvP() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9CDE8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_IncomingHealBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9CF88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_IncomingHealReduction() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D128))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Instability() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D2C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_InteractCollision() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D468))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Invisible() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D608))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Knockdown() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D7A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LifeSteal() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9D948))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LightArmorDec() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9DAE8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LightArmorDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9DC88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LightArmorInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9DE28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LightArmorIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9DFC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LostControl() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E168))(0);
	}
	 static IMatcher1ModifierEntity*>* get_LostControlImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E308))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MagicTriggerType() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E4A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MapSpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E648))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MasteryPointsBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E7E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxDamageReflect() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9E988))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxHealthDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9EB28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxHealthInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9ECC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxHealthIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9EE68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxIncomingDamage() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F008))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxTenacity() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F1A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxTenacityInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F348))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MaxTenacityIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F4E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MediumArmorDec() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F688))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MediumArmorDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F828))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MediumArmorInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9F9C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MediumArmorIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9FB68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MeleeResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9FD08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Metabolism() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1E9FEA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MetabolismDamageResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0048))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MetabolismDamageVulnerability() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA01E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MinimapHidden() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0388))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MorphingWeapon() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0528))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MountSpeed() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA06C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MountSpeedDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0868))(0);
	}
	 static IMatcher1ModifierEntity*>* get_MountSpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0A08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Naked() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0BA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_OutcomingHealBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0D48))(0);
	}
	 static IMatcher1ModifierEntity*>* get_OverrideCooldowns() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA0EE8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Patrolling() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1088))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PermanentMoving() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1228))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PetExperienceBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA13C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PlayerDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1568))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PlayerDamageReduction() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1708))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PlayerResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA18A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Poisoned() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1A48))(0);
	}
	 static IMatcher1ModifierEntity*>* get_PowerInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1BE8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_RangedResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1D88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Riding() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA1F28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_RootImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA20C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Rooted() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2268))(0);
	}
	 static IMatcher1ModifierEntity*>* get_RunesDisabled() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2408))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SatiationReduction() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA25A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Silence() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2748))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SilenceImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA28E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SkillDamageBonus() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2A88))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SneakBackstab() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2C28))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Sneak() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2DC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SneakDamageImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA2F68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SneakDamageResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3108))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SneakImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA32A8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SpeedDecImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3448))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SpeedDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA35E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SpeedInc() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3788))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3928))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SpeedMoving() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3AC8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_SplashResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3C68))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Sprint() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3E08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_StatusResistance() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA3FA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_StatusVulnerability() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4148))(0);
	}
	 static IMatcher1ModifierEntity*>* get_StunImmune() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA42E8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Stunned() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4488))(0);
	}
	 static IMatcher1ModifierEntity*>* get_TeamUnhidden() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4628))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ThirstSpeedDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA47C8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_ThirstSpeedIncPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4968))(0);
	}
	 static IMatcher1ModifierEntity*>* get_TimeOutExitDecPercent() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4B08))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Tot() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4CA8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_TrueVision() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4E48))(0);
	}
	 static IMatcher1ModifierEntity*>* get_Unhidden() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA4FE8))(0);
	}
	 static IMatcher1ModifierEntity*>* get_UpdateMagicIcon() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA5188))(0);
	}
	 static IMatcher1ModifierEntity*>* get_UpdateTime() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA5328))(0);
	}
	 static IMatcher1ModifierEntity*>* get_WeaponDot() {
		return ((IMatcher1ModifierEntity*>* (*)(void *))(Il2CppBase() + 0x1EA54C8))(0);
	}
	 static IAllOfMatcher1ModifierEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1ModifierEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1EA5668))(0, indices);
	}
	 static IAllOfMatcher1ModifierEntity*>* AllOf_1(Il2CppArray<IMatcher1ModifierEntity*>*>* matchers) {
		return ((IAllOfMatcher1ModifierEntity*>* (*)(void *, Il2CppArray<IMatcher1ModifierEntity*>*>*))(Il2CppBase() + 0x1EA56E0))(0, matchers);
	}
	 static IAnyOfMatcher1ModifierEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1ModifierEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1EA5758))(0, indices);
	}
	 static IAnyOfMatcher1ModifierEntity*>* AnyOf_1(Il2CppArray<IMatcher1ModifierEntity*>*>* matchers) {
		return ((IAnyOfMatcher1ModifierEntity*>* (*)(void *, Il2CppArray<IMatcher1ModifierEntity*>*>*))(Il2CppBase() + 0x1EA57D0))(0, matchers);
	}

};

