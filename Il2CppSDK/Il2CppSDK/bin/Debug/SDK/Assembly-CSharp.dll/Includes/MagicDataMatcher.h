#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataMatcher"));
	}

	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherActivation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAddChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyInPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyOnActorEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyOnTargetEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyTeleport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherApplyTenacityRegeneration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAttackPriority() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAttackRadiusIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAttackSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAttackSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAttractor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAura() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherAutoRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherBackstabDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherBackstabResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherBowResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherBurned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherChangeDurationByLostHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherChangeTargetCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherClassCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCoefChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCollisionMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCreepDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCreepResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherCursed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageBlockIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageBonusForMissingHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDamageVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDebuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDebuffImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDescriptionItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDisarmingFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDisarmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDispel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDotResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDualWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherDurationPrediction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherEquipTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherEventEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherExpGainIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherFallen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherFrozen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGadgetCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGhost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGiveQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherGuildBossDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHealing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHealingSkillCooldownReduce() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHeavyArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHeavyArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHeavyArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHeavyArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHungerSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherHungerSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherIcelandResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherIgnoreArmorPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherImmobilizedDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherImmortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherImmunity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherImpotent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherImpotentImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInPvP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherIncomingHealBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherIncomingHealReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInstability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInteractCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInteractionAccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInterruptTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherKnockdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLightArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLightArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLightArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLightArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLocationPlayerMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLostControl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherLostControlImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMagicIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMagicTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMapSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMasteryPointsBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxDamageReflect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxHealthDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxHealthInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxHealthIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxIncomingDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxTenacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxTenacityInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMaxTenacityIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMediumArmorDec() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMediumArmorDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMediumArmorInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMediumArmorIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMeleeResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMetabolismDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMetabolismDamageVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMinimapHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherModifiersCatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMorphingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMountSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMountSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherMountSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherNotAggressive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOnDurationEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOnRemove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOnRemoveCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOutcomingHealBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherOverrideCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPatrolling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPermanent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPermanentMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPersonalForTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPetExperienceBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPlayerDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPlayerDamageReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPlayerResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPoisoned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPowerInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherPursuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherQuestTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRangedResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRemovable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRemoveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRemoveOnAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRemoveOnMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRemoveOnUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRepeatMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRestoreMetabolism() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRiding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRootImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRooted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherRunesDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSatiationReduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherScaleByDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSecondMagicIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSilence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSilenceImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSkillDamageBonus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSneakBackstab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSneak() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSneakDamageImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSneakDamageResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSneakImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSpeedDecImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSpeedInc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSpeedMoving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSplashResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherSprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStackMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStartChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStartCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStartCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStatusResistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStatusVulnerability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStunImmune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherStunned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTargetTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTeamUnhidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherThirstSpeedDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherThirstSpeedIncPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTimeOutExitDecPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherToolTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTransferMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTriggerTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherTrueVision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherUnhidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherUseCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherVipMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T& _matcherWeaponDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}

	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Activation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB58C0))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB5A40))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB5BDC))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ActiveEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB5D78))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AddChance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB5F14))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB60B0))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyDestroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB624C))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyHeal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB63E8))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyInPvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6584))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6720))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyOnActorEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB68BC))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyOnTargetEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6A58))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6BF4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyTeleport() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6D90))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ApplyTenacityRegeneration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB6F2C))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB70C8))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7264))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7400))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB759C))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AttackPriority() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7738))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AttackRadiusIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB78D4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AttackSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7A70))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AttackSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7C0C))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Attractor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7DA8))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Aura() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB7F44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_AutoRotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB80E0))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_BackstabDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB827C))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_BackstabResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8418))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB85B4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_BowResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8750))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Burned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB88EC))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8A88))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ChangeDurationByLostHp() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8C24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ChangeTargetCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8DC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Children() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB8F64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ClassCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9104))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_CoefChance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB92A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_CollisionMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9444))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Cooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB95E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9784))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_CreepDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9924))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_CreepResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9AC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Cursed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9C64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageBlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9E04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageBlockIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AB9FA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageBonusForMissingHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA144))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Damage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA2E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA484))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA624))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA7C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABA964))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABAB04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABACA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABAE44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageShield() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABAFE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB184))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB324))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DamageVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB4C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Debuff() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB664))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DebuffImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB804))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABB9A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DescriptionItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABBB44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Disabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABBCE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DisarmingFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABBE84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DisarmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC024))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Dispel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC1C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Dot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC364))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DotResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC504))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DualWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC6A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC844))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_DurationPrediction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABC9E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_EquipTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABCB84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_EventEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABCD24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ExpGainIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABCEC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Fallen() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD064))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_FollowTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD204))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Frozen() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD3A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_GadgetCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD544))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Gender() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD6E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Ghost() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABD884))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_GiveQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABDA24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABDBC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_GuildBossDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABDD64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Heal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABDF04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Healing() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE0A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HealingSkillCooldownReduce() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE244))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HeavyArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE3E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HeavyArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE584))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HeavyArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE724))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HeavyArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABE8C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Hidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABEA64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Hot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABEC04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HungerSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABEDA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_HungerSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABEF44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_IcelandResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF0E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF284))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_IgnoreArmorPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF424))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ImmobilizedDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF5C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Immortal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF764))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Immunity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABF904))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Impotent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABFAA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ImpotentImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABFC44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_InPvP() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABFDE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_IncomingHealBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ABFF84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_IncomingHealReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0124))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Instability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC02C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_InteractCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0464))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_InteractionAccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0604))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_InterruptTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC07A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Invisible() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0944))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Item() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0AE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Knockdown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0C84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0E24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LightArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC0FC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LightArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1164))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LightArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1304))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LightArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC14A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LocationPlayerMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1644))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LostControl() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC17E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_LostControlImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1984))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MagicIcon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1B24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MagicTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1CC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MapSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC1E64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MasteryPointsBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2004))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxDamageReflect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC21A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxHealthDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2344))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxHealthInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC24E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxHealthIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2684))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxIncomingDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2824))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxTenacity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC29C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxTenacityInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2B64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MaxTenacityIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2D04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MediumArmorDec() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC2EA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MediumArmorDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3044))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MediumArmorInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC31E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MediumArmorIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3384))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MeleeResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3524))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MetabolismDamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC36C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MetabolismDamageVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3864))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MinimapHidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3A04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ModifiersCatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3BA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MorphingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3D44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MountSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC3EE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MountSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4084))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_MountSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4224))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_NotAggressive() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC43C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Notification() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4564))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4704))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OnDurationEnd() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC48A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OnRemove() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4A44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OnRemoveCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4BE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OutcomingHealBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4D84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_OverrideCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC4F24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Patrolling() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC50C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Permanent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5264))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PermanentMoving() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5404))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC55A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PersonalForTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5744))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PetExperienceBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC58E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PlayerDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5A84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PlayerDamageReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5C24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PlayerResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5DC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Poisoned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC5F64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_PowerInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6104))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Pursuit() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC62A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_QuestTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6444))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RangedResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC65E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Removable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6784))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RemoveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6924))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RemoveOnAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6AC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RemoveOnMove() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6C64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RemoveOnUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6E04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RepeatMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC6FA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RestoreMetabolism() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7144))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Riding() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC72E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RootImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7484))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Rooted() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7624))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Rune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC77C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_RunesDisabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7964))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SatiationReduction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7B04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ScaleByDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7CA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SecondMagicIcon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7E44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC7FE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Silence() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8184))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SilenceImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8324))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SkillDamageBonus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC84C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SneakBackstab() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8664))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Sneak() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8804))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SneakDamageImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC89A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SneakDamageResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8B44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SneakImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8CE4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SpeedDecImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC8E84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9024))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SpeedInc() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC91C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9364))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SpeedMoving() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9504))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Splash() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC96A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_SplashResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9844))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Sprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC99E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StackMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9B84))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StartChance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9D24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StartCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1AC9EC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StartCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA064))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StatusResistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA204))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StatusVulnerability() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA3A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_StunImmune() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA544))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Stunned() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA6E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACA884))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TargetPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACAA24))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TargetTags() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACABC4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TeamUnhidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACAD64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ThirstSpeedDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACAF04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ThirstSpeedIncPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB0A4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TimeOutExitDecPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB244))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_ToolTip() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB3E4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Tot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB584))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TransferMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB724))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TriggerTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACB8C4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_TrueVision() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACBA64))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_Unhidden() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACBC04))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_UseCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACBDA4))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_VipMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACBF44))(0);
	}
	template <typename T = IMatcher1MagicDataEntity*>*> static T get_WeaponDot() {
		return ((T (*)(void *))(Il2CppBase() + 0x1ACC0E4))(0);
	}
	template <typename T = IAllOfMatcher1MagicDataEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ACC284))(0, indices);
	}
	template <typename T = IAllOfMatcher1MagicDataEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ACC2FC))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1MagicDataEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ACC374))(0, indices);
	}
	template <typename T = IAnyOfMatcher1MagicDataEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1ACC3EC))(0, matchers);
	}

};

