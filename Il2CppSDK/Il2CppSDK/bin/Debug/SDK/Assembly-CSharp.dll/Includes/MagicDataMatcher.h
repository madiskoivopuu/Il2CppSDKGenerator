#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MagicDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MagicDataMatcher"));
	}

	 static IMatcher1<MagicDataEntity*>*& _matcherActivation() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherActive() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherActiveEffect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAddChance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyDamage() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyDestroy() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyHeal() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyInPvP() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyOnActorEffect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyOnTargetEffect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyTeleport() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherApplyTenacityRegeneration() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherArmorDec() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherArmorDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherArmorInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherArmorIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAttackPriority() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAttackRadiusIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAttackSpeedDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAttackSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAttractor() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAura() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherAutoRotation() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherBackstabDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherBackstabResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherBowResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherBurned() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherChance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherChangeDurationByLostHp() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherChangeTargetCooldown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherChildren() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherClassCooldownReduce() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCoefChance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCollisionMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCooldown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCount() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCreepDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCreepResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherCursed() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageBlock() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageBlockIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageBonusForMissingHealth() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamage() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageDec() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageReflect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageShield() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageStat() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageType() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDamageVulnerability() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDebuff() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDebuffImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDelay() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDescriptionItem() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDisabled() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDisarmingFeet() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDisarmingWeapon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDispel() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDot() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDotResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDualWeapon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDuration() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherDurationPrediction() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherEquipTags() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherEventEffect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherExpGainIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherFallen() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherFollowTarget() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherFrozen() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGadgetCooldownReduce() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGender() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGhost() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGiveQuest() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGrade() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherGuildBossDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHeal() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHealing() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHealingSkillCooldownReduce() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHeavyArmorDec() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHeavyArmorDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHeavyArmorInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHeavyArmorIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHidden() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHot() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHungerSpeedDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherHungerSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherIcelandResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherIcon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherImmobilizedDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherImmortal() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherImmunity() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherImpotent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherImpotentImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInPvP() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherIncomingHealBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherIncomingHealReduction() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInstability() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInteractCollision() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInteractionAccess() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInterruptTarget() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherInvisible() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherItem() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherKnockdown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLightArmorDec() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLightArmorDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLightArmorInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLightArmorIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLocationPlayerMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLostControl() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherLostControlImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMagicIcon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMagicTrigger() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMapSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMasteryPointsBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxDamageReflect() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxHealthDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxHealthInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxHealthIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxIncomingDamage() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxTenacity() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxTenacityInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMaxTenacityIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMediumArmorDec() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMediumArmorDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMediumArmorInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMediumArmorIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMeleeResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMetabolismDamageResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMetabolismDamageVulnerability() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMinimapHidden() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherModifiersCatch() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMorphingWeapon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMountSpeed() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMountSpeedDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherMountSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherNotAggressive() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherNotification() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOnDurationEnd() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOnRemove() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOnRemoveCooldown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOutcomingHealBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherOverrideCooldown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPatrolling() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPermanent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPermanentMoving() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPersonal() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPersonalForTarget() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPetExperienceBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPlayerDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPlayerDamageReduction() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPlayerResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPoisoned() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPowerInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherPursuit() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherQuestTarget() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRangedResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRemovable() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRemoveCondition() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRemoveOnAction() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRemoveOnMove() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRemoveOnUse() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRepeatMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRestoreMetabolism() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRiding() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRootImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRooted() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherRunesDisabled() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSatiationReduction() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherScaleByDistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSecondMagicIcon() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSetMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSilence() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSilenceImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSkillDamageBonus() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSneakBackstab() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSneak() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSneakDamageImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSneakDamageResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSneakImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSpeedDecImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSpeedDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSpeedInc() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSpeedMoving() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSplash() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSplashResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherSprint() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStackMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStartChance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStartCondition() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStartCooldown() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStatusResistance() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStatusVulnerability() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStunImmune() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherStunned() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTags() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTargetPosition() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTargetTags() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTeamUnhidden() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherThirstSpeedDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherThirstSpeedIncPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTimeOutExitDecPercent() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherToolTip() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTot() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTransferMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTriggerTarget() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherTrueVision() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherUnhidden() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherUseCount() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherVipMagic() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	 static IMatcher1<MagicDataEntity*>*& _matcherWeaponDot() {
		return *(IMatcher1<MagicDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}

	 static IMatcher1<MagicDataEntity*>* get_Activation() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB58C0))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Active() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5A40))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ActiveCondition() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5BDC))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ActiveEffect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5D78))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AddChance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB5F14))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyDamage() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB60B0))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyDestroy() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB624C))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyHeal() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB63E8))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyInPvP() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6584))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6720))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyOnActorEffect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB68BC))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyOnTargetEffect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6A58))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyPlace() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6BF4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyTeleport() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6D90))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ApplyTenacityRegeneration() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB6F2C))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ArmorDec() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB70C8))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ArmorDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7264))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ArmorInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7400))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ArmorIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB759C))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AttackPriority() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7738))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AttackRadiusIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB78D4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AttackSpeedDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7A70))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AttackSpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7C0C))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Attractor() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7DA8))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Aura() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB7F44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_AutoRotation() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB80E0))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_BackstabDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB827C))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_BackstabResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8418))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Blueprint() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB85B4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_BowResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8750))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Burned() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB88EC))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Chance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8A88))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ChangeDurationByLostHp() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8C24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ChangeTargetCooldown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8DC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Children() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB8F64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ClassCooldownReduce() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9104))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_CoefChance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB92A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_CollisionMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9444))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Cooldown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB95E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Count() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9784))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_CreepDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9924))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_CreepResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9AC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Cursed() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9C64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageBlock() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9E04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageBlockIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AB9FA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageBonusForMissingHealth() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA144))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Damage() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA2E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageDec() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA484))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA624))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA7C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABA964))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAB04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageReflect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABACA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAE44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageShield() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABAFE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageStat() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB184))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageType() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB324))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DamageVulnerability() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB4C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Debuff() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB664))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DebuffImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB804))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Delay() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABB9A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DescriptionItem() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBB44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Disabled() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBCE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DisarmingFeet() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABBE84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DisarmingWeapon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC024))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Dispel() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC1C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Dot() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC364))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DotResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC504))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DualWeapon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC6A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Duration() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC844))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_DurationPrediction() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABC9E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_EquipTags() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCB84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_EventEffect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCD24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ExpGainIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABCEC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Fallen() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD064))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_FollowTarget() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD204))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Frozen() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD3A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_GadgetCooldownReduce() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD544))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Gender() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD6E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Ghost() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABD884))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_GiveQuest() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDA24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Grade() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDBC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_GuildBossDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDD64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Heal() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABDF04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Healing() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE0A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HealingSkillCooldownReduce() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE244))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HeavyArmorDec() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE3E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HeavyArmorDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE584))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HeavyArmorInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE724))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HeavyArmorIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABE8C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Hidden() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEA64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Hot() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEC04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HungerSpeedDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEDA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_HungerSpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABEF44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_IcelandResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF0E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Icon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF284))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF424))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ImmobilizedDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF5C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Immortal() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF764))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Immunity() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABF904))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Impotent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFAA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ImpotentImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFC44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_InPvP() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFDE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_IncomingHealBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ABFF84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_IncomingHealReduction() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0124))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Instability() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC02C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_InteractCollision() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0464))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_InteractionAccess() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0604))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_InterruptTarget() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC07A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Invisible() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0944))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Item() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0AE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Knockdown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0C84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LifeSteal() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0E24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LightArmorDec() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC0FC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LightArmorDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1164))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LightArmorInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1304))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LightArmorIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC14A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LocationPlayerMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1644))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LostControl() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC17E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_LostControlImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1984))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MagicIcon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1B24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MagicTrigger() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1CC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MapSpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC1E64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MasteryPointsBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2004))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxDamageReflect() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC21A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxHealthDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2344))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxHealthInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC24E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxHealthIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2684))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxIncomingDamage() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2824))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxTenacity() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC29C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxTenacityInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2B64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MaxTenacityIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2D04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MediumArmorDec() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC2EA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MediumArmorDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3044))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MediumArmorInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC31E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MediumArmorIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3384))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MeleeResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3524))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MetabolismDamageResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC36C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MetabolismDamageVulnerability() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3864))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MinimapHidden() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3A04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ModifiersCatch() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3BA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MorphingWeapon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3D44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MountSpeed() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC3EE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MountSpeedDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4084))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_MountSpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4224))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_NotAggressive() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC43C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Notification() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4564))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4704))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OnDurationEnd() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC48A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OnRemove() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4A44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OnRemoveCooldown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4BE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OutcomingHealBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4D84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_OverrideCooldown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC4F24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Patrolling() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC50C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Permanent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5264))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PermanentMoving() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5404))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Personal() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC55A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PersonalForTarget() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5744))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PetExperienceBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC58E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PlayerDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5A84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PlayerDamageReduction() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5C24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PlayerResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5DC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Poisoned() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC5F64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_PowerInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6104))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Pursuit() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC62A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_QuestTarget() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6444))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RangedResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC65E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Removable() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6784))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RemoveCondition() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6924))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RemoveOnAction() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6AC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RemoveOnMove() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6C64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RemoveOnUse() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6E04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RepeatMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC6FA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RestoreMetabolism() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7144))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Riding() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC72E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RootImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7484))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Rooted() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7624))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Rune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC77C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_RunesDisabled() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7964))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SatiationReduction() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7B04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ScaleByDistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7CA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SecondMagicIcon() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7E44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SetMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC7FE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Silence() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8184))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SilenceImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8324))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SkillDamageBonus() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC84C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SneakBackstab() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8664))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Sneak() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8804))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SneakDamageImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC89A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SneakDamageResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8B44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SneakImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8CE4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SpeedDecImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC8E84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SpeedDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9024))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SpeedInc() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC91C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9364))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SpeedMoving() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9504))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Splash() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC96A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_SplashResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9844))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Sprint() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC99E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StackMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9B84))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StartChance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9D24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StartCondition() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1AC9EC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StartCooldown() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA064))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StatusResistance() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA204))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StatusVulnerability() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA3A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_StunImmune() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA544))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Stunned() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA6E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Tags() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACA884))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TargetPosition() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAA24))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TargetTags() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACABC4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TeamUnhidden() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAD64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ThirstSpeedDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACAF04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ThirstSpeedIncPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB0A4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TimeOutExitDecPercent() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB244))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_ToolTip() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB3E4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Tot() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB584))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TransferMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB724))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TriggerTarget() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACB8C4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_TrueVision() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBA64))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_Unhidden() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBC04))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_UseCount() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBDA4))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_VipMagic() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACBF44))(0);
	}
	 static IMatcher1<MagicDataEntity*>* get_WeaponDot() {
		return ((IMatcher1<MagicDataEntity*>* (*)(void *))(Il2CppBase() + 0x1ACC0E4))(0);
	}
	 static IAllOfMatcher1<MagicDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<MagicDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ACC284))(0, indices);
	}
	 static IAllOfMatcher1<MagicDataEntity*>* AllOf_1(Il2CppArray<IMatcher1<MagicDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1<MagicDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicDataEntity*>*>*))(Il2CppBase() + 0x1ACC2FC))(0, matchers);
	}
	 static IAnyOfMatcher1<MagicDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<MagicDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x1ACC374))(0, indices);
	}
	 static IAnyOfMatcher1<MagicDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1<MagicDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<MagicDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<MagicDataEntity*>*>*))(Il2CppBase() + 0x1ACC3EC))(0, matchers);
	}

};

