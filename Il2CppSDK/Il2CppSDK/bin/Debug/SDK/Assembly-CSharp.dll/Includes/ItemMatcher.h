#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMatcher"));
	}

	 static IMatcher1<ItemEntity*>*& _matcherAIUse() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAOE() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherActionSound() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<ItemEntity*>*& _matcherActiveCondition() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAddExperience() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAddExpertise() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAddMastery() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAddPetExperience() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAddShieldSeconds() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAnalyticSettings() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAnimator() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyActorMagicByGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyActorMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyCosmeticToInventory() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyDurabilityDamage() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyLevelCapUp() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyLocationMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyMapEvent() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyMountToInventory() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyPetToInventory() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyPlace() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyResourcesToInventory() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyRuneToInventory() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyTargetMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherApplyToInventoryOnDelete() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherArmingCoat() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherArmor() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAttackAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherAura() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBop() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBattlePass() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBook() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBossDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBreakActionEffect() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<ItemEntity*>*& _matcherBusyAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCanOperate() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCancelUse() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCantDelete() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCastAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCheatSetting() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCoins() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<ItemEntity*>*& _matcherColor() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCompatibleViews() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<ItemEntity*>*& _matcherContainerAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<ItemEntity*>*& _matcherConvertTo() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCooldown() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCostumeFeet() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCraftAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCraftCooldown() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCurrencyType() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDailyShopAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDamage() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDamageType() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDelay() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDestroyAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDiplomacyManagementAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDismountCooldown() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDistance() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDualVariant() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<ItemEntity*>*& _matcherDuration() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEmojiAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEnemyInteract() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEquipMagicByGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEquipMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEquipQuest() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEquipSet() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEquipment() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<ItemEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<ItemEntity*>*& _matcherExplode() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<ItemEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<ItemEntity*>*& _matcherFinalizeAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<ItemEntity*>*& _matcherFinishQuest() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<ItemEntity*>*& _matcherFreeAttackAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherFreeCastAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherFuel() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGender() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGhostyRuneDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGradeUp() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGroupCooldown() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherHeal() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherHealPrediction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1<ItemEntity*>*& _matcherHitActorMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1<ItemEntity*>*& _matcherHitTargetMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1<ItemEntity*>*& _matcherIcon() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1<ItemEntity*>*& _matcherIgnoreArmorPercent() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1<ItemEntity*>*& _matcherIndestructible() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInfluence() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInstantAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInstant() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInstantEffect() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInteractAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInteract() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInteractRadius() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInventoryContainer() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1<ItemEntity*>*& _matcherInventoryMagic() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1<ItemEntity*>*& _matcherLifeSteal() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1<ItemEntity*>*& _matcherLoadCart() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1<ItemEntity*>*& _matcherLockAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1<ItemEntity*>*& _matcherLoopSound() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMailStack() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMaxDurabilityByGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMaxDurability() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMaxGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMiningAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMorph() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMount() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherMountInfo() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherNextSkill() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherNote() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherNotification() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherOdinsCupAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherOfferAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1<ItemEntity*>*& _matcherOrder() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPage() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPet() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPickupAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPlayerClass() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPlayerClassDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPlayerKillAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPortalAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPowerByGrade() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPower() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPrefab() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1<ItemEntity*>*& _matcherPreviewPrefab() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1<ItemEntity*>*& _matcherProgressQuest() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRarity() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRavenNestManagementAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRavenNestStatsAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRepairAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRequired() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRestoreMetabolism() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherResurrectAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRune() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherRuneDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSaga() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSaveAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSelectClassAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSelectMountAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSelectPetAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherShieldManagementAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherShortName() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSilver() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSilverPrice() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSingleGroups() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSkillDescription() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSkillShotAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSkillShotTargetAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSkills() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSlotCount() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSneakDamage() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSocket() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1<ItemEntity*>*& _matcherSpeed() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1<ItemEntity*>*& _matcherStackCount() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1<ItemEntity*>*& _matcherStartQuest() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1<ItemEntity*>*& _matcherStartTournamentAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1<ItemEntity*>*& _matcherStoreProduct() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1<ItemEntity*>*& _matcherTags() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1<ItemEntity*>*& _matcherTenacityBlockTime() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1<ItemEntity*>*& _matcherTickets() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1<ItemEntity*>*& _matcherToolTip() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1<ItemEntity*>*& _matcherTournamentPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUndeletable() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUndropable() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUnlockAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUnlockContainerAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUnlockPlayerClass() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherUnlockPortalAction() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1<ItemEntity*>*& _matcherWalletSetting() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1<ItemEntity*>*& _matcherWeaponPrefabs() {
		return *(IMatcher1<ItemEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}

	 static IMatcher1<ItemEntity*>* get_AIUse() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CC9E0))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AOE() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CCB7C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ActionSound() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CCD18))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ActiveCondition() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CCE98))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AddExperience() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD034))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AddExpertise() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD1D0))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AddMastery() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD36C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AddPetExperience() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD508))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AddShieldSeconds() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD6A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD840))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CD9DC))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CDB78))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CDD14))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AnalyticSettings() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CDEB0))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Animator() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE04C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyActorMagicByGrade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE1E8))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyActorMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE384))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyCosmeticToInventory() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE520))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyDurabilityDamage() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE6BC))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyLevelCapUp() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE858))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyLocationMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CE9F4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyMapEvent() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CEB90))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyMountToInventory() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CED2C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyPetToInventory() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CEEC8))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyPlace() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF064))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyResourcesToInventory() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF200))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyRuneToInventory() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF39C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyTargetMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF538))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ApplyToInventoryOnDelete() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF6D4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ArmingCoat() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CF870))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Armor() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CFA0C))(0);
	}
	 static IMatcher1<ItemEntity*>* get_AttackAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CFBA8))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Aura() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CFD44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Bop() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14CFEE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_BattlePass() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0084))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Blueprint() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0224))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Book() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D03C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_BossDescription() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0564))(0);
	}
	 static IMatcher1<ItemEntity*>* get_BreakActionEffect() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0704))(0);
	}
	 static IMatcher1<ItemEntity*>* get_BusyAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D08A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CanOperate() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0A44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CancelUse() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0BE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CantDelete() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0D84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CashbackCoins() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D0F24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CastAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D10C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CheatSetting() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1264))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Coins() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1404))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Color() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D15A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CompatibleViews() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1744))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ContainerAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D18E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ConvertTo() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1A84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Cooldown() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1C24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CostumeFeet() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1DC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CraftAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D1F64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CraftCooldown() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2104))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CurrencyType() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D22A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CyclicPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2444))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D25E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2784))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DailyShopAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2924))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Damage() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2AC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DamageType() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2C64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Delay() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2E04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Description() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D2FA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DestroyAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3144))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DiplomacyManagementAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D32E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DismountCooldown() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3484))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Distance() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3624))(0);
	}
	 static IMatcher1<ItemEntity*>* get_DualVariant() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D37C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Duration() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3964))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EmojiAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3B04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EnemyInteract() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3CA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EquipMagicByGrade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3E44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EquipMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D3FE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EquipQuest() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4184))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EquipSet() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4324))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Equipment() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D44C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EventBpPointsA() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4664))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EventBpPointsB() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4804))(0);
	}
	 static IMatcher1<ItemEntity*>* get_EventBpPointsC() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D49A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Explode() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4B44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4CE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_FinalizeAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D4E84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_FinishQuest() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5024))(0);
	}
	 static IMatcher1<ItemEntity*>* get_FreeAttackAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D51C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_FreeCastAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5364))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Fuel() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5504))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Gender() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D56A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GhostyRuneDescription() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5844))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GiantReputation() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D59E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Grade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5B84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GradeUp() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5D24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GroupCooldown() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D5EC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GuildBossCoins() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6064))(0);
	}
	 static IMatcher1<ItemEntity*>* get_GuildCoins() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6204))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Heal() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D63A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_HealPrediction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6544))(0);
	}
	 static IMatcher1<ItemEntity*>* get_HitActorMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D66E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_HitTargetMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6884))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Icon() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6A24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_IgnoreArmorPercent() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6BC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Indestructible() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6D64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Influence() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D6F04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InstantAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D70A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Instant() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7244))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InstantEffect() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D73E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InteractAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7584))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Interact() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7724))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InteractRadius() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D78C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InventoryContainer() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7A64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_InventoryMagic() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7C04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_LifeSteal() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7DA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_LoadCart() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D7F44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_LockAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D80E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_LoopSound() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8284))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MailStack() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8424))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MaxDurabilityByGrade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D85C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MaxDurability() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8764))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MaxGrade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8904))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MiningAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8AA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Morph() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8C44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Mount() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8DE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_MountInfo() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D8F84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_NextSkill() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9124))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Note() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D92C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Notification() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9464))(0);
	}
	 static IMatcher1<ItemEntity*>* get_OdinsCupAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9604))(0);
	}
	 static IMatcher1<ItemEntity*>* get_OfferAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D97A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_OldBlueprint() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9944))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Order() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9AE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Page() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9C84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Pet() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9E24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PickupAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14D9FC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PlayerClass() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA164))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PlayerClassDescription() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA304))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PlayerKillAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA4A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PortalAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA644))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PortalsPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA7E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PowerByGrade() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DA984))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Power() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DAB24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Prefab() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DACC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_PreviewPrefab() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DAE64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ProgressQuest() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB004))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Rarity() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB1A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_RavenNestManagementAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB344))(0);
	}
	 static IMatcher1<ItemEntity*>* get_RavenNestStatsAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB4E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_RepairAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB684))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Required() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB824))(0);
	}
	 static IMatcher1<ItemEntity*>* get_RestoreMetabolism() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DB9C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ResurrectAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DBB64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Rune() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DBD04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_RuneDescription() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DBEA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Saga() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC044))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SaveAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC1E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SaviorPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC384))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SeasonPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC524))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SelectClassAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC6C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SelectMountAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DC864))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SelectPetAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DCA04))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ShieldManagementAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DCBA4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ShortName() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DCD44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Silver() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DCEE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SilverPrice() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD084))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SingleGroups() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD224))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SkillDescription() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD3C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SkillShotAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD564))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SkillShotTargetAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD704))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Skills() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DD8A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SlotCount() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DDA44))(0);
	}
	 static IMatcher1<ItemEntity*>* get_SneakDamage() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DDBE4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Socket() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DDD84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Speed() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DDF24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_StackCount() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE0C4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_StartQuest() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE264))(0);
	}
	 static IMatcher1<ItemEntity*>* get_StartTournamentAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE404))(0);
	}
	 static IMatcher1<ItemEntity*>* get_StoreProduct() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE5A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Tags() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE744))(0);
	}
	 static IMatcher1<ItemEntity*>* get_TenacityBlockTime() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DE8E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Tickets() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DEA84))(0);
	}
	 static IMatcher1<ItemEntity*>* get_ToolTip() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DEC24))(0);
	}
	 static IMatcher1<ItemEntity*>* get_TournamentPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DEDC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Undeletable() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DEF64))(0);
	}
	 static IMatcher1<ItemEntity*>* get_Undropable() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF104))(0);
	}
	 static IMatcher1<ItemEntity*>* get_UnlockAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF2A4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_UnlockContainerAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF444))(0);
	}
	 static IMatcher1<ItemEntity*>* get_UnlockPlayerClass() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF5E4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_UnlockPortalAction() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF784))(0);
	}
	 static IMatcher1<ItemEntity*>* get_VIPPoints() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DF924))(0);
	}
	 static IMatcher1<ItemEntity*>* get_WalletSetting() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DFAC4))(0);
	}
	 static IMatcher1<ItemEntity*>* get_WeaponPrefabs() {
		return ((IMatcher1<ItemEntity*>* (*)(void *))(Il2CppBase() + 0x14DFC64))(0);
	}
	 static IAllOfMatcher1<ItemEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<ItemEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14DFE04))(0, indices);
	}
	 static IAllOfMatcher1<ItemEntity*>* AllOf_1(Il2CppArray<IMatcher1<ItemEntity*>*>* matchers) {
		return ((IAllOfMatcher1<ItemEntity*>* (*)(void *, Il2CppArray<IMatcher1<ItemEntity*>*>*))(Il2CppBase() + 0x14DFE7C))(0, matchers);
	}
	 static IAnyOfMatcher1<ItemEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<ItemEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x14DFEF4))(0, indices);
	}
	 static IAnyOfMatcher1<ItemEntity*>* AnyOf_1(Il2CppArray<IMatcher1<ItemEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<ItemEntity*>* (*)(void *, Il2CppArray<IMatcher1<ItemEntity*>*>*))(Il2CppBase() + 0x14DFF6C))(0, matchers);
	}

};

