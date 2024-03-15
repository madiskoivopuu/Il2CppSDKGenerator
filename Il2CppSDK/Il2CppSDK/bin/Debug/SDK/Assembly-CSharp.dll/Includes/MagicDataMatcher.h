#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataMatcher"));
	}

	 static IMatcher1MagicDataEntity*>*& _matcherActivation() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherActive() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherActiveEffect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAddChance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyDamage() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyDestroy() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyHeal() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyInPvP() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyOnActorEffect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyOnTargetEffect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyTeleport() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherApplyTenacityRegeneration() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherArmorDec() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherArmorDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherArmorInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherArmorIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAttackPriority() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAttackRadiusIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAttackSpeedDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAttackSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAttractor() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAura() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherAutoRotation() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherBackstabDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherBackstabResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherBowResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherBurned() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherChance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherChangeDurationByLostHp() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherChangeTargetCooldown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherChildren() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherClassCooldownReduce() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCoefChance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCollisionMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCooldown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCount() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCreepDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCreepResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherCursed() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageBlock() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageBlockIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageBonusForMissingHealth() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamage() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageDec() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageReflect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageShield() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageStat() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageType() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDamageVulnerability() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDebuff() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDebuffImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDelay() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDescriptionItem() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDisabled() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDisarmingFeet() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDisarmingWeapon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDispel() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDot() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDotResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDualWeapon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDuration() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherDurationPrediction() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherEquipTags() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherEventEffect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherExpGainIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherFallen() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherFollowTarget() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherFrozen() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGadgetCooldownReduce() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGender() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGhost() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGiveQuest() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGrade() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherGuildBossDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHeal() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHealing() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHealingSkillCooldownReduce() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHeavyArmorDec() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHeavyArmorDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHeavyArmorInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHeavyArmorIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHidden() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHot() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHungerSpeedDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherHungerSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherIcelandResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherIcon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherImmobilizedDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherImmortal() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherImmunity() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherImpotent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherImpotentImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInPvP() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherIncomingHealBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherIncomingHealReduction() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInstability() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInteractCollision() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInteractionAccess() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInterruptTarget() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherInvisible() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherItem() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherKnockdown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLightArmorDec() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLightArmorDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLightArmorInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLightArmorIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLocationPlayerMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLostControl() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherLostControlImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMagicIcon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMagicTrigger() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMapSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMasteryPointsBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxDamageReflect() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxHealthDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxHealthInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxHealthIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxIncomingDamage() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxTenacity() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxTenacityInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMaxTenacityIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMediumArmorDec() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMediumArmorDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMediumArmorInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMediumArmorIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMeleeResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMetabolismDamageResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMetabolismDamageVulnerability() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMinimapHidden() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherModifiersCatch() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMorphingWeapon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMountSpeed() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMountSpeedDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherMountSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherNotAggressive() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherNotification() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOnDurationEnd() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOnRemove() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOnRemoveCooldown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOutcomingHealBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherOverrideCooldown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPatrolling() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPermanent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPermanentMoving() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPersonal() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPersonalForTarget() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPetExperienceBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPlayerDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPlayerDamageReduction() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPlayerResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPoisoned() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPowerInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherPursuit() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherQuestTarget() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRangedResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRemovable() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRemoveCondition() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRemoveOnAction() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRemoveOnMove() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRemoveOnUse() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRepeatMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRestoreMetabolism() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRiding() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRootImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRooted() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherRunesDisabled() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSatiationReduction() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherScaleByDistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSecondMagicIcon() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSetMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSilence() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSilenceImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSkillDamageBonus() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSneakBackstab() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSneak() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSneakDamageImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSneakDamageResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSneakImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSpeedDecImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSpeedDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSpeedInc() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSpeedMoving() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSplash() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSplashResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherSprint() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStackMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStartChance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStartCondition() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStartCooldown() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStatusResistance() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStatusVulnerability() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStunImmune() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherStunned() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTags() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTargetPosition() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTargetTags() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTeamUnhidden() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherThirstSpeedDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherThirstSpeedIncPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTimeOutExitDecPercent() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherToolTip() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTot() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTransferMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTriggerTarget() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherTrueVision() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherUnhidden() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherUseCount() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherVipMagic() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	 static IMatcher1MagicDataEntity*>*& _matcherWeaponDot() {
		return *(IMatcher1MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}

	 static IMatcher1MagicDataEntity*>* get_Activation() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB58C0))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Active() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5A40))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ActiveCondition() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5BDC))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ActiveEffect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5D78))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AddChance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5F14))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyDamage() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB60B0))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyDestroy() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB624C))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyHeal() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB63E8))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyInPvP() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6584))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6720))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyOnActorEffect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB68BC))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyOnTargetEffect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6A58))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyPlace() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6BF4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyTeleport() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6D90))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ApplyTenacityRegeneration() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6F2C))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ArmorDec() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB70C8))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ArmorDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7264))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ArmorInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7400))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ArmorIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB759C))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AttackPriority() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7738))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AttackRadiusIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB78D4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AttackSpeedDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7A70))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AttackSpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7C0C))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Attractor() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7DA8))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Aura() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7F44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_AutoRotation() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB80E0))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_BackstabDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB827C))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_BackstabResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8418))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Blueprint() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB85B4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_BowResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8750))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Burned() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB88EC))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Chance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8A88))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ChangeDurationByLostHp() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8C24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ChangeTargetCooldown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8DC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Children() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8F64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ClassCooldownReduce() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9104))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_CoefChance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB92A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_CollisionMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9444))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Cooldown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB95E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Count() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9784))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_CreepDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9924))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_CreepResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9AC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Cursed() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9C64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageBlock() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9E04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageBlockIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9FA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageBonusForMissingHealth() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA144))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Damage() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA2E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageDec() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA484))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA624))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA7C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA964))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAB04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageReflect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABACA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAE44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageShield() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAFE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageStat() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB184))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageType() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB324))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DamageVulnerability() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB4C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Debuff() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB664))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DebuffImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB804))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Delay() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB9A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DescriptionItem() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBB44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Disabled() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBCE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DisarmingFeet() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBE84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DisarmingWeapon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC024))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Dispel() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC1C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Dot() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC364))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DotResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC504))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DualWeapon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC6A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Duration() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC844))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_DurationPrediction() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC9E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_EquipTags() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCB84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_EventEffect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCD24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ExpGainIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCEC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Fallen() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD064))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_FollowTarget() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD204))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Frozen() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD3A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_GadgetCooldownReduce() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD544))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Gender() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD6E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Ghost() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD884))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_GiveQuest() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDA24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Grade() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDBC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_GuildBossDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDD64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Heal() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDF04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Healing() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE0A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HealingSkillCooldownReduce() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE244))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HeavyArmorDec() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE3E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HeavyArmorDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE584))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HeavyArmorInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE724))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HeavyArmorIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE8C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Hidden() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEA64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Hot() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEC04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HungerSpeedDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEDA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_HungerSpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEF44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_IcelandResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF0E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Icon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF284))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF424))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ImmobilizedDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF5C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Immortal() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF764))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Immunity() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF904))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Impotent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFAA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ImpotentImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFC44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_InPvP() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFDE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_IncomingHealBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFF84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_IncomingHealReduction() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0124))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Instability() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC02C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_InteractCollision() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0464))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_InteractionAccess() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0604))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_InterruptTarget() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC07A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Invisible() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0944))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Item() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0AE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Knockdown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0C84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LifeSteal() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0E24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LightArmorDec() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0FC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LightArmorDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1164))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LightArmorInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1304))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LightArmorIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC14A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LocationPlayerMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1644))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LostControl() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC17E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_LostControlImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1984))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MagicIcon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1B24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MagicTrigger() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1CC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MapSpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1E64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MasteryPointsBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2004))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxDamageReflect() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC21A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxHealthDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2344))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxHealthInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC24E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxHealthIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2684))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxIncomingDamage() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2824))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxTenacity() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC29C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxTenacityInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2B64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MaxTenacityIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2D04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MediumArmorDec() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2EA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MediumArmorDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3044))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MediumArmorInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC31E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MediumArmorIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3384))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MeleeResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3524))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MetabolismDamageResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC36C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MetabolismDamageVulnerability() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3864))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MinimapHidden() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3A04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ModifiersCatch() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3BA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MorphingWeapon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3D44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MountSpeed() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3EE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MountSpeedDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4084))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_MountSpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4224))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_NotAggressive() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC43C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Notification() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4564))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4704))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OnDurationEnd() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC48A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OnRemove() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4A44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OnRemoveCooldown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4BE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OutcomingHealBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4D84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_OverrideCooldown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4F24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Patrolling() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC50C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Permanent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5264))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PermanentMoving() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5404))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Personal() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC55A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PersonalForTarget() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5744))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PetExperienceBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC58E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PlayerDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5A84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PlayerDamageReduction() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5C24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PlayerResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5DC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Poisoned() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5F64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_PowerInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6104))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Pursuit() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC62A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_QuestTarget() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6444))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RangedResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC65E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Removable() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6784))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RemoveCondition() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6924))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RemoveOnAction() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6AC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RemoveOnMove() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6C64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RemoveOnUse() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6E04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RepeatMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6FA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RestoreMetabolism() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7144))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Riding() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC72E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RootImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7484))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Rooted() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7624))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Rune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC77C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_RunesDisabled() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7964))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SatiationReduction() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7B04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ScaleByDistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7CA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SecondMagicIcon() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7E44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SetMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7FE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Silence() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8184))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SilenceImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8324))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SkillDamageBonus() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC84C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SneakBackstab() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8664))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Sneak() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8804))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SneakDamageImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC89A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SneakDamageResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8B44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SneakImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8CE4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SpeedDecImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8E84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SpeedDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9024))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SpeedInc() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC91C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9364))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SpeedMoving() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9504))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Splash() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC96A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_SplashResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9844))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Sprint() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC99E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StackMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9B84))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StartChance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9D24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StartCondition() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9EC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StartCooldown() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA064))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StatusResistance() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA204))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StatusVulnerability() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA3A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_StunImmune() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA544))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Stunned() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA6E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Tags() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA884))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TargetPosition() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAA24))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TargetTags() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACABC4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TeamUnhidden() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAD64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ThirstSpeedDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAF04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ThirstSpeedIncPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB0A4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TimeOutExitDecPercent() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB244))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_ToolTip() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB3E4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Tot() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB584))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TransferMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB724))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TriggerTarget() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB8C4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_TrueVision() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBA64))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_Unhidden() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBC04))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_UseCount() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBDA4))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_VipMagic() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBF44))(0);
	}
	 static IMatcher1MagicDataEntity*>* get_WeaponDot() {
		return ((IMatcher1MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACC0E4))(0);
	}
	 static IAllOfMatcher1MagicDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1MagicDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ACC284))(0, indices);
	}
	 static IAllOfMatcher1MagicDataEntity*>* AllOf_1(Il2CppArray<IMatcher1MagicDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1MagicDataEntity*>* (*)(void *, Il2CppArray<IMatcher1MagicDataEntity*>*>*))(Il2CppBase() + 0x1ACC2FC))(0, matchers);
	}
	 static IAnyOfMatcher1MagicDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1MagicDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ACC374))(0, indices);
	}
	 static IAnyOfMatcher1MagicDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1MagicDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1MagicDataEntity*>* (*)(void *, Il2CppArray<IMatcher1MagicDataEntity*>*>*))(Il2CppBase() + 0x1ACC3EC))(0, matchers);
	}

};

