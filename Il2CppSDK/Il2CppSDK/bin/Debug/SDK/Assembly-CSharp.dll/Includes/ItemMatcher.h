#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ItemMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemMatcher"));
	}

	template <typename T = void*> static T& _matcherAIUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _matcherAOE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _matcherActionSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& _matcherActiveCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& _matcherAddExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& _matcherAddExpertise() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& _matcherAddMastery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& _matcherAddPetExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& _matcherAddShieldSeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& _matcherAnalyticSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& _matcherAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& _matcherApplyActorMagicByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& _matcherApplyActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& _matcherApplyCosmeticToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = void*> static T& _matcherApplyDurabilityDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& _matcherApplyLevelCapUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = void*> static T& _matcherApplyLocationMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = void*> static T& _matcherApplyMapEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = void*> static T& _matcherApplyMountToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& _matcherApplyPetToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = void*> static T& _matcherApplyPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& _matcherApplyResourcesToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& _matcherApplyRuneToInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& _matcherApplyTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& _matcherApplyToInventoryOnDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& _matcherArmingCoat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& _matcherArmor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& _matcherAttackAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = void*> static T& _matcherAura() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& _matcherBop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& _matcherBattlePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = void*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& _matcherBook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = void*> static T& _matcherBossDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = void*> static T& _matcherBreakActionEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = void*> static T& _matcherBusyAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = void*> static T& _matcherCanOperate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = void*> static T& _matcherCancelUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& _matcherCantDelete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& _matcherCastAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = void*> static T& _matcherCheatSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = void*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _matcherColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _matcherCompatibleViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _matcherContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _matcherConvertTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _matcherCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = void*> static T& _matcherCostumeFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = void*> static T& _matcherCraftAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = void*> static T& _matcherCraftCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = void*> static T& _matcherCurrencyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = void*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = void*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = void*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = void*> static T& _matcherDailyShopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = void*> static T& _matcherDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = void*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = void*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = void*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = void*> static T& _matcherDestroyAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = void*> static T& _matcherDiplomacyManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = void*> static T& _matcherDismountCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = void*> static T& _matcherDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = void*> static T& _matcherDualVariant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = void*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = void*> static T& _matcherEmojiAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = void*> static T& _matcherEnemyInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = void*> static T& _matcherEquipMagicByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = void*> static T& _matcherEquipMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = void*> static T& _matcherEquipQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = void*> static T& _matcherEquipSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = void*> static T& _matcherEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = void*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = void*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = void*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = void*> static T& _matcherExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = void*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = void*> static T& _matcherFinalizeAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = void*> static T& _matcherFinishQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = void*> static T& _matcherFreeAttackAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = void*> static T& _matcherFreeCastAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = void*> static T& _matcherFuel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = void*> static T& _matcherGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = void*> static T& _matcherGhostyRuneDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = void*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = void*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = void*> static T& _matcherGradeUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = void*> static T& _matcherGroupCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = void*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = void*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = void*> static T& _matcherHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = void*> static T& _matcherHealPrediction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = void*> static T& _matcherHitActorMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = void*> static T& _matcherHitTargetMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = void*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = void*> static T& _matcherIgnoreArmorPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = void*> static T& _matcherIndestructible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = void*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = void*> static T& _matcherInstantAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = void*> static T& _matcherInstant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = void*> static T& _matcherInstantEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = void*> static T& _matcherInteractAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = void*> static T& _matcherInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = void*> static T& _matcherInteractRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = void*> static T& _matcherInventoryContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = void*> static T& _matcherInventoryMagic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = void*> static T& _matcherLifeSteal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = void*> static T& _matcherLoadCart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = void*> static T& _matcherLockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = void*> static T& _matcherLoopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = void*> static T& _matcherMailStack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = void*> static T& _matcherMaxDurabilityByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = void*> static T& _matcherMaxDurability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = void*> static T& _matcherMaxGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = void*> static T& _matcherMiningAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = void*> static T& _matcherMorph() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = void*> static T& _matcherMount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = void*> static T& _matcherMountInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = void*> static T& _matcherNextSkill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = void*> static T& _matcherNote() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = void*> static T& _matcherNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = void*> static T& _matcherOdinsCupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = void*> static T& _matcherOfferAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = void*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = void*> static T& _matcherOrder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = void*> static T& _matcherPage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = void*> static T& _matcherPet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = void*> static T& _matcherPickupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = void*> static T& _matcherPlayerClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = void*> static T& _matcherPlayerClassDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = void*> static T& _matcherPlayerKillAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = void*> static T& _matcherPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = void*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = void*> static T& _matcherPowerByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = void*> static T& _matcherPower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = void*> static T& _matcherPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = void*> static T& _matcherPreviewPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = void*> static T& _matcherProgressQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = void*> static T& _matcherRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = void*> static T& _matcherRavenNestManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = void*> static T& _matcherRavenNestStatsAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = void*> static T& _matcherRepairAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = void*> static T& _matcherRequired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = void*> static T& _matcherRestoreMetabolism() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = void*> static T& _matcherResurrectAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = void*> static T& _matcherRune() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = void*> static T& _matcherRuneDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = void*> static T& _matcherSaga() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = void*> static T& _matcherSaveAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = void*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = void*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = void*> static T& _matcherSelectClassAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = void*> static T& _matcherSelectMountAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = void*> static T& _matcherSelectPetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = void*> static T& _matcherShieldManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = void*> static T& _matcherShortName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = void*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = void*> static T& _matcherSilverPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = void*> static T& _matcherSingleGroups() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = void*> static T& _matcherSkillDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = void*> static T& _matcherSkillShotAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = void*> static T& _matcherSkillShotTargetAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = void*> static T& _matcherSkills() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = void*> static T& _matcherSlotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = void*> static T& _matcherSneakDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = void*> static T& _matcherSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = void*> static T& _matcherSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = void*> static T& _matcherStackCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = void*> static T& _matcherStartQuest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = void*> static T& _matcherStartTournamentAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = void*> static T& _matcherStoreProduct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = void*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = void*> static T& _matcherTenacityBlockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = void*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = void*> static T& _matcherToolTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = void*> static T& _matcherTournamentPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = void*> static T& _matcherUndeletable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = void*> static T& _matcherUndropable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = void*> static T& _matcherUnlockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = void*> static T& _matcherUnlockContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = void*> static T& _matcherUnlockPlayerClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = void*> static T& _matcherUnlockPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = void*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = void*> static T& _matcherWalletSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = void*> static T& _matcherWeaponPrefabs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}

	template <typename T = void*> static T get_AIUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CC9E0))(0);
	}
	template <typename T = void*> static T get_AOE() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CCB7C))(0);
	}
	template <typename T = void*> static T get_ActionSound() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CCD18))(0);
	}
	template <typename T = void*> static T get_ActiveCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CCE98))(0);
	}
	template <typename T = void*> static T get_AddExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD034))(0);
	}
	template <typename T = void*> static T get_AddExpertise() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD1D0))(0);
	}
	template <typename T = void*> static T get_AddMastery() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD36C))(0);
	}
	template <typename T = void*> static T get_AddPetExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD508))(0);
	}
	template <typename T = void*> static T get_AddShieldSeconds() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD6A4))(0);
	}
	template <typename T = void*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD840))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CD9DC))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CDB78))(0);
	}
	template <typename T = void*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CDD14))(0);
	}
	template <typename T = void*> static T get_AnalyticSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CDEB0))(0);
	}
	template <typename T = void*> static T get_Animator() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE04C))(0);
	}
	template <typename T = void*> static T get_ApplyActorMagicByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE1E8))(0);
	}
	template <typename T = void*> static T get_ApplyActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE384))(0);
	}
	template <typename T = void*> static T get_ApplyCosmeticToInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE520))(0);
	}
	template <typename T = void*> static T get_ApplyDurabilityDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE6BC))(0);
	}
	template <typename T = void*> static T get_ApplyLevelCapUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE858))(0);
	}
	template <typename T = void*> static T get_ApplyLocationMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CE9F4))(0);
	}
	template <typename T = void*> static T get_ApplyMapEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CEB90))(0);
	}
	template <typename T = void*> static T get_ApplyMountToInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CED2C))(0);
	}
	template <typename T = void*> static T get_ApplyPetToInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CEEC8))(0);
	}
	template <typename T = void*> static T get_ApplyPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF064))(0);
	}
	template <typename T = void*> static T get_ApplyResourcesToInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF200))(0);
	}
	template <typename T = void*> static T get_ApplyRuneToInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF39C))(0);
	}
	template <typename T = void*> static T get_ApplyTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF538))(0);
	}
	template <typename T = void*> static T get_ApplyToInventoryOnDelete() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF6D4))(0);
	}
	template <typename T = void*> static T get_ArmingCoat() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CF870))(0);
	}
	template <typename T = void*> static T get_Armor() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CFA0C))(0);
	}
	template <typename T = void*> static T get_AttackAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CFBA8))(0);
	}
	template <typename T = void*> static T get_Aura() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CFD44))(0);
	}
	template <typename T = void*> static T get_Bop() {
		return ((T (*)(void *))(Il2CppBase() + 0x14CFEE4))(0);
	}
	template <typename T = void*> static T get_BattlePass() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0084))(0);
	}
	template <typename T = void*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0224))(0);
	}
	template <typename T = void*> static T get_Book() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D03C4))(0);
	}
	template <typename T = void*> static T get_BossDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0564))(0);
	}
	template <typename T = void*> static T get_BreakActionEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0704))(0);
	}
	template <typename T = void*> static T get_BusyAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D08A4))(0);
	}
	template <typename T = void*> static T get_CanOperate() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0A44))(0);
	}
	template <typename T = void*> static T get_CancelUse() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0BE4))(0);
	}
	template <typename T = void*> static T get_CantDelete() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0D84))(0);
	}
	template <typename T = void*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D0F24))(0);
	}
	template <typename T = void*> static T get_CastAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D10C4))(0);
	}
	template <typename T = void*> static T get_CheatSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1264))(0);
	}
	template <typename T = void*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1404))(0);
	}
	template <typename T = void*> static T get_Color() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D15A4))(0);
	}
	template <typename T = void*> static T get_CompatibleViews() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1744))(0);
	}
	template <typename T = void*> static T get_ContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D18E4))(0);
	}
	template <typename T = void*> static T get_ConvertTo() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1A84))(0);
	}
	template <typename T = void*> static T get_Cooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1C24))(0);
	}
	template <typename T = void*> static T get_CostumeFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1DC4))(0);
	}
	template <typename T = void*> static T get_CraftAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D1F64))(0);
	}
	template <typename T = void*> static T get_CraftCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2104))(0);
	}
	template <typename T = void*> static T get_CurrencyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D22A4))(0);
	}
	template <typename T = void*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2444))(0);
	}
	template <typename T = void*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D25E4))(0);
	}
	template <typename T = void*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2784))(0);
	}
	template <typename T = void*> static T get_DailyShopAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2924))(0);
	}
	template <typename T = void*> static T get_Damage() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2AC4))(0);
	}
	template <typename T = void*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2C64))(0);
	}
	template <typename T = void*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2E04))(0);
	}
	template <typename T = void*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D2FA4))(0);
	}
	template <typename T = void*> static T get_DestroyAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3144))(0);
	}
	template <typename T = void*> static T get_DiplomacyManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D32E4))(0);
	}
	template <typename T = void*> static T get_DismountCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3484))(0);
	}
	template <typename T = void*> static T get_Distance() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3624))(0);
	}
	template <typename T = void*> static T get_DualVariant() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D37C4))(0);
	}
	template <typename T = void*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3964))(0);
	}
	template <typename T = void*> static T get_EmojiAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3B04))(0);
	}
	template <typename T = void*> static T get_EnemyInteract() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3CA4))(0);
	}
	template <typename T = void*> static T get_EquipMagicByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3E44))(0);
	}
	template <typename T = void*> static T get_EquipMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D3FE4))(0);
	}
	template <typename T = void*> static T get_EquipQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4184))(0);
	}
	template <typename T = void*> static T get_EquipSet() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4324))(0);
	}
	template <typename T = void*> static T get_Equipment() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D44C4))(0);
	}
	template <typename T = void*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4664))(0);
	}
	template <typename T = void*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4804))(0);
	}
	template <typename T = void*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D49A4))(0);
	}
	template <typename T = void*> static T get_Explode() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4B44))(0);
	}
	template <typename T = void*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4CE4))(0);
	}
	template <typename T = void*> static T get_FinalizeAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D4E84))(0);
	}
	template <typename T = void*> static T get_FinishQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5024))(0);
	}
	template <typename T = void*> static T get_FreeAttackAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D51C4))(0);
	}
	template <typename T = void*> static T get_FreeCastAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5364))(0);
	}
	template <typename T = void*> static T get_Fuel() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5504))(0);
	}
	template <typename T = void*> static T get_Gender() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D56A4))(0);
	}
	template <typename T = void*> static T get_GhostyRuneDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5844))(0);
	}
	template <typename T = void*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D59E4))(0);
	}
	template <typename T = void*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5B84))(0);
	}
	template <typename T = void*> static T get_GradeUp() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5D24))(0);
	}
	template <typename T = void*> static T get_GroupCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D5EC4))(0);
	}
	template <typename T = void*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6064))(0);
	}
	template <typename T = void*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6204))(0);
	}
	template <typename T = void*> static T get_Heal() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D63A4))(0);
	}
	template <typename T = void*> static T get_HealPrediction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6544))(0);
	}
	template <typename T = void*> static T get_HitActorMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D66E4))(0);
	}
	template <typename T = void*> static T get_HitTargetMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6884))(0);
	}
	template <typename T = void*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6A24))(0);
	}
	template <typename T = void*> static T get_IgnoreArmorPercent() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6BC4))(0);
	}
	template <typename T = void*> static T get_Indestructible() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6D64))(0);
	}
	template <typename T = void*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D6F04))(0);
	}
	template <typename T = void*> static T get_InstantAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D70A4))(0);
	}
	template <typename T = void*> static T get_Instant() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7244))(0);
	}
	template <typename T = void*> static T get_InstantEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D73E4))(0);
	}
	template <typename T = void*> static T get_InteractAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7584))(0);
	}
	template <typename T = void*> static T get_Interact() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7724))(0);
	}
	template <typename T = void*> static T get_InteractRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D78C4))(0);
	}
	template <typename T = void*> static T get_InventoryContainer() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7A64))(0);
	}
	template <typename T = void*> static T get_InventoryMagic() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7C04))(0);
	}
	template <typename T = void*> static T get_LifeSteal() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7DA4))(0);
	}
	template <typename T = void*> static T get_LoadCart() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D7F44))(0);
	}
	template <typename T = void*> static T get_LockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D80E4))(0);
	}
	template <typename T = void*> static T get_LoopSound() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8284))(0);
	}
	template <typename T = void*> static T get_MailStack() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8424))(0);
	}
	template <typename T = void*> static T get_MaxDurabilityByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D85C4))(0);
	}
	template <typename T = void*> static T get_MaxDurability() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8764))(0);
	}
	template <typename T = void*> static T get_MaxGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8904))(0);
	}
	template <typename T = void*> static T get_MiningAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8AA4))(0);
	}
	template <typename T = void*> static T get_Morph() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8C44))(0);
	}
	template <typename T = void*> static T get_Mount() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8DE4))(0);
	}
	template <typename T = void*> static T get_MountInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D8F84))(0);
	}
	template <typename T = void*> static T get_NextSkill() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9124))(0);
	}
	template <typename T = void*> static T get_Note() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D92C4))(0);
	}
	template <typename T = void*> static T get_Notification() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9464))(0);
	}
	template <typename T = void*> static T get_OdinsCupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9604))(0);
	}
	template <typename T = void*> static T get_OfferAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D97A4))(0);
	}
	template <typename T = void*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9944))(0);
	}
	template <typename T = void*> static T get_Order() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9AE4))(0);
	}
	template <typename T = void*> static T get_Page() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9C84))(0);
	}
	template <typename T = void*> static T get_Pet() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9E24))(0);
	}
	template <typename T = void*> static T get_PickupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14D9FC4))(0);
	}
	template <typename T = void*> static T get_PlayerClass() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA164))(0);
	}
	template <typename T = void*> static T get_PlayerClassDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA304))(0);
	}
	template <typename T = void*> static T get_PlayerKillAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA4A4))(0);
	}
	template <typename T = void*> static T get_PortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA644))(0);
	}
	template <typename T = void*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA7E4))(0);
	}
	template <typename T = void*> static T get_PowerByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DA984))(0);
	}
	template <typename T = void*> static T get_Power() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DAB24))(0);
	}
	template <typename T = void*> static T get_Prefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DACC4))(0);
	}
	template <typename T = void*> static T get_PreviewPrefab() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DAE64))(0);
	}
	template <typename T = void*> static T get_ProgressQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB004))(0);
	}
	template <typename T = void*> static T get_Rarity() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB1A4))(0);
	}
	template <typename T = void*> static T get_RavenNestManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB344))(0);
	}
	template <typename T = void*> static T get_RavenNestStatsAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB4E4))(0);
	}
	template <typename T = void*> static T get_RepairAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB684))(0);
	}
	template <typename T = void*> static T get_Required() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB824))(0);
	}
	template <typename T = void*> static T get_RestoreMetabolism() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DB9C4))(0);
	}
	template <typename T = void*> static T get_ResurrectAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DBB64))(0);
	}
	template <typename T = void*> static T get_Rune() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DBD04))(0);
	}
	template <typename T = void*> static T get_RuneDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DBEA4))(0);
	}
	template <typename T = void*> static T get_Saga() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC044))(0);
	}
	template <typename T = void*> static T get_SaveAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC1E4))(0);
	}
	template <typename T = void*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC384))(0);
	}
	template <typename T = void*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC524))(0);
	}
	template <typename T = void*> static T get_SelectClassAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC6C4))(0);
	}
	template <typename T = void*> static T get_SelectMountAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DC864))(0);
	}
	template <typename T = void*> static T get_SelectPetAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DCA04))(0);
	}
	template <typename T = void*> static T get_ShieldManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DCBA4))(0);
	}
	template <typename T = void*> static T get_ShortName() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DCD44))(0);
	}
	template <typename T = void*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DCEE4))(0);
	}
	template <typename T = void*> static T get_SilverPrice() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD084))(0);
	}
	template <typename T = void*> static T get_SingleGroups() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD224))(0);
	}
	template <typename T = void*> static T get_SkillDescription() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD3C4))(0);
	}
	template <typename T = void*> static T get_SkillShotAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD564))(0);
	}
	template <typename T = void*> static T get_SkillShotTargetAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD704))(0);
	}
	template <typename T = void*> static T get_Skills() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DD8A4))(0);
	}
	template <typename T = void*> static T get_SlotCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DDA44))(0);
	}
	template <typename T = void*> static T get_SneakDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DDBE4))(0);
	}
	template <typename T = void*> static T get_Socket() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DDD84))(0);
	}
	template <typename T = void*> static T get_Speed() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DDF24))(0);
	}
	template <typename T = void*> static T get_StackCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE0C4))(0);
	}
	template <typename T = void*> static T get_StartQuest() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE264))(0);
	}
	template <typename T = void*> static T get_StartTournamentAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE404))(0);
	}
	template <typename T = void*> static T get_StoreProduct() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE5A4))(0);
	}
	template <typename T = void*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE744))(0);
	}
	template <typename T = void*> static T get_TenacityBlockTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DE8E4))(0);
	}
	template <typename T = void*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DEA84))(0);
	}
	template <typename T = void*> static T get_ToolTip() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DEC24))(0);
	}
	template <typename T = void*> static T get_TournamentPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DEDC4))(0);
	}
	template <typename T = void*> static T get_Undeletable() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DEF64))(0);
	}
	template <typename T = void*> static T get_Undropable() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF104))(0);
	}
	template <typename T = void*> static T get_UnlockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF2A4))(0);
	}
	template <typename T = void*> static T get_UnlockContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF444))(0);
	}
	template <typename T = void*> static T get_UnlockPlayerClass() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF5E4))(0);
	}
	template <typename T = void*> static T get_UnlockPortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF784))(0);
	}
	template <typename T = void*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DF924))(0);
	}
	template <typename T = void*> static T get_WalletSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DFAC4))(0);
	}
	template <typename T = void*> static T get_WeaponPrefabs() {
		return ((T (*)(void *))(Il2CppBase() + 0x14DFC64))(0);
	}
	template <typename T = void*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14DFE04))(0, indices);
	}
	template <typename T = void*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14DFE7C))(0, matchers);
	}
	template <typename T = void*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14DFEF4))(0, indices);
	}
	template <typename T = void*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x14DFF6C))(0, matchers);
	}

};

}
