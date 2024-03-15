#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataMatcher"));
	}

	 static IMatcher1GameDataEntity*>*& _matcherAFKMove() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAFKTrigger() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIBattle() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIBattleSource() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIBattleState() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIBattleTracker() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIEvadeTime() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAIPocketsState() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAccumulativeExchange() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1GameDataEntity*>*& _matcherActivateOnLocationLocked() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1GameDataEntity*>*& _matcherActive() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1GameDataEntity*>*& _matcherActiveEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAddExpByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAddExperience() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAddRaidKarma() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAddStoreExperience() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAggroMeRadius() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAggroRadius() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAggroTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAngularSpeed() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAnimator() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherApplyOnTargetActiveEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingBackpack() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingBanner() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingBeard() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingCharm() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingChest() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingClass() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingClothes() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingCorpse() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingFace() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingFeet() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingHairColor() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingHair() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingHead() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingLegs() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingMount() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingMountSkill1() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingMountSkill2() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingMountSkill3() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPassiveSkill1() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPet() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPetSkill1() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPetSkill2() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPetSkill3() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingPocket() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingRunes() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingSkill1() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingSkill2() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingSkinColor() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArmingWeapon() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArrivalTime() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherArrowMarker() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAura() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoAbility() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoAttack() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoDestruction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoFarm() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoLock() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoMagicSpawner() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoMode() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAutoOpenDoor() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1GameDataEntity*>*& _matcherAvatar() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBackPoint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBackTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBank() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBattleId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBattleStatisticType() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBawl() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBind() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBonusMaxHealth() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBossOpenResources() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBossOpenState() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBoxCollision() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBuildBlocker() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBuildGroup() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBuildPlace() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1GameDataEntity*>*& _matcherBuilder() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCampBath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCanTravel() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCell() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChance() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChestMarker() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChestOnDeath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChestReward() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChilds() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherChooseCreature() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCircleCollision() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherClan() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherClanPersonal() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherClanPersonalGenerator() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1GameDataEntity*>*& _matcherClick() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1GameDataEntity*>*& _matcherClosedDuration() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCoins() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCollisionActive() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1GameDataEntity*>*& _matcherContainerAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCorpseDestruction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCostumeChest() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCostumeHead() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCostumeLegs() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCount() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCover() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCoverRadius() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCraftAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCraftBoost() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCraft() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCraftWork() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCreateInventory() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCreateUniqueInventory() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCreationTime() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCreep() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCurrencyExchange() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCurrentRoof() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCustomStore() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDailyShopAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDailyShop() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDailyTavern() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDamageCoefByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDamageEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDamageStat() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDamageType() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDefaultArming() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDefaultGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDefaultVectorField() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDelay() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDescription() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDestroyAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDestroyOnDeath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDifficulty() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDiplomacyManagementAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDisabled() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDistance() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDistrictLevelUpgrades() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDoorWall() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDragged() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDungeonDifficulty() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDurabilityDamage() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1GameDataEntity*>*& _matcherDuration() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEndTime() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEnemyInteract() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEnergy() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEnterCondition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEnterQuests() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherEventTag() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExchange() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExplode() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExplodeOnDeath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExternalInventory() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExtract() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1GameDataEntity*>*& _matcherExtractWork() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFakeBase() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFakeClanName() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFinalizeAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFinalize() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFindViewInScene() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFloor() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFog() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFollow() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFollowTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1GameDataEntity*>*& _matcherFusion() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGamePlace() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGameSound() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGender() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGenerateWall() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGradeFromLocation() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGradeHide() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGradeView() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGroupChild() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGroup() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGuild() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherGuildTag() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHashPosition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHealthCoef() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHideBag() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHide() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHideHead() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	 static IMatcher1GameDataEntity*>*& _matcherHidePet() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	 static IMatcher1GameDataEntity*>*& _matcherIcon() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	 static IMatcher1GameDataEntity*>*& _matcherId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	 static IMatcher1GameDataEntity*>*& _matcherIgnoreDoorVectorField() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInfluenceByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInfluence() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInstantEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInteractAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInteract() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInteractCooldown() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInteractRadius() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInteractTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInventory() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInventoryContent() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	 static IMatcher1GameDataEntity*>*& _matcherInventoryLocked() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	 static IMatcher1GameDataEntity*>*& _matcherKilledBy() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLastActionTick() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLastDamager() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLevel() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLobbyType() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLocationRegion() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLocationRegionEnter() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLockAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLockController() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLoopSound() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLootByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherLootStatus() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMagicSave() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMagicSpawner() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMannequin() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMapNotify() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMapPath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMapPathView() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMapPoint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMapSpeed() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMaxHealthCoefByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMaxHealth() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMetabolismSetting() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMinimapArrow() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMinimap() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMinimapPing() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMiningAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMining() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMountInventoryContent() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMountInventoryId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMountInvetory() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMountTrader() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	 static IMatcher1GameDataEntity*>*& _matcherMoveToTargetPosition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNeedQuests() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNeedRemoveEmpty() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNextWayPoint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNoAutoMode() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNotAggressive() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNotInteractable() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNotPursuitTarget() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherNotSelectable() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherObjectTrigger() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOdinsCupAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOfferAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOnDeath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOnEmptyWorld() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOnGround() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOrientation() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOwner() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	 static IMatcher1GameDataEntity*>*& _matcherOwnerName() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	 static IMatcher1GameDataEntity*>*& _matcherParent() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPatrol() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPeriod() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPersonal() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPersonalGenerator() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPersonalKey() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPetInventoryId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPhases() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPickupAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPlaceOwner() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPlayer() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPlayerId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPlayerKill() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPlayerName() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPointLabel() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPortalAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPortal() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPosition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPositionPlace() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPositionTransaction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPower() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPrefab() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherProduction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherProductionWork() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	 static IMatcher1GameDataEntity*>*& _matcherProgressionExchange() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPursuit() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	 static IMatcher1GameDataEntity*>*& _matcherPursuitGroup() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	 static IMatcher1GameDataEntity*>*& _matcherQuestsSave() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRandomClanName() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRandomName() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRarity() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRavenNest() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x940);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRavenNestManagementAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x948);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRavenNestStatsAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x950);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRavenNestStats() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x958);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRepairAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x960);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRequired() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x968);
	}
	 static IMatcher1GameDataEntity*>*& _matcherResetTime() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x970);
	}
	 static IMatcher1GameDataEntity*>*& _matcherResources() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x978);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRespawnPoint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x980);
	}
	 static IMatcher1GameDataEntity*>*& _matcherResurrectAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x988);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRewards() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x990);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRoaming() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x998);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRoof() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9A0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRoom() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9A8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRoomsDoor() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9B0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRotateTo() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9B8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRotation() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9C0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherRuneInventoryId() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9C8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSaveAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9D0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSaveable() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9D8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9E0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherScout() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9E8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSeasonPointsByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9F0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9F8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherServerPosition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA00);
	}
	 static IMatcher1GameDataEntity*>*& _matcherServerTick() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA08);
	}
	 static IMatcher1GameDataEntity*>*& _matcherShared() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA10);
	}
	 static IMatcher1GameDataEntity*>*& _matcherShieldManagementAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA18);
	}
	 static IMatcher1GameDataEntity*>*& _matcherShieldTotem() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA20);
	}
	 static IMatcher1GameDataEntity*>*& _matcherShowCondition() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA28);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSilver() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA30);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSinglePlace() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA38);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSlotCount() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA40);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSpawnAndDestroy() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA48);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSpawnEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA50);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSpawnOnDeath() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA58);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSpectator() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA60);
	}
	 static IMatcher1GameDataEntity*>*& _matcherSpeed() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA68);
	}
	 static IMatcher1GameDataEntity*>*& _matcherStartTournamentAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA70);
	}
	 static IMatcher1GameDataEntity*>*& _matcherStateView() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA78);
	}
	 static IMatcher1GameDataEntity*>*& _matcherStatue() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA80);
	}
	 static IMatcher1GameDataEntity*>*& _matcherStatusBarView() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA88);
	}
	 static IMatcher1GameDataEntity*>*& _matcherStoreExperienceByGrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA90);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTags() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA98);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTeam() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAA0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTenacityCoef() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAA8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTick() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAB0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTickets() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAB8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTicksCount() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAC0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTimeTrigger() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAC8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTimerEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAD0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherToLocation() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAD8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherToolTip() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAE0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTransport() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAE8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherTriggerView() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAF0);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUIPrefab() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAF8);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUniqueLookup() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB00);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlockAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB08);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlock() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB10);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlockContainerAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB18);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlockDuration() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB20);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlockPortalAction() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB28);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUnlocked() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB30);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUpgrade() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB38);
	}
	 static IMatcher1GameDataEntity*>*& _matcherUpgradeEffect() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB40);
	}
	 static IMatcher1GameDataEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB48);
	}
	 static IMatcher1GameDataEntity*>*& _matcherVelocity() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB50);
	}
	 static IMatcher1GameDataEntity*>*& _matcherVisualCollision() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB58);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWallCollision() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB60);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWaveIndex() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB68);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWaveItem() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB70);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWaveState() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB78);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWavesEvent() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB80);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWayPoint() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB88);
	}
	 static IMatcher1GameDataEntity*>*& _matcherWorldType() {
		return *(IMatcher1GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB90);
	}

	 static IMatcher1GameDataEntity*>* get_AFKMove() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5AF58))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AFKTrigger() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B0F4))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIBattle() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B290))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIBattleSource() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B42C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIBattleState() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B5C8))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIBattleTracker() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B764))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIEvadeTime() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B900))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AIPocketsState() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BA9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AccumulativeExchange() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BC38))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ActivateOnLocationLocked() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BDB8))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Active() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BF54))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ActiveEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C0F0))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AddExpByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C28C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AddExperience() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C428))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AddRaidKarma() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C5C4))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AddStoreExperience() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C760))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AggroMeRadius() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C8FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AggroRadius() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CA98))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AggroTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CC34))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CDD0))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CF6C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D108))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D2A4))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AngularSpeed() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D440))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Animator() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D5DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ApplyOnTargetActiveEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D778))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingBackpack() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D914))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingBanner() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DAB0))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingBeard() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DC4C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingCharm() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DDE8))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingChest() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DF84))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingClass() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E120))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingClothes() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E2BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingCorpse() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E45C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingFace() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E5FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingFeet() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E79C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingHairColor() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E93C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingHair() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EADC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingHead() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EC7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingLegs() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EE1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingMount() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EFBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingMountSkill1() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F15C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingMountSkill2() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F2FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingMountSkill3() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F49C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPassiveSkill1() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F63C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPet() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F7DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPetSkill1() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F97C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPetSkill2() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FB1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPetSkill3() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FCBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingPocket() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FE5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingRunes() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FFFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingSkill1() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6019C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingSkill2() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6033C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingSkinColor() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF604DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArmingWeapon() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6067C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArrivalTime() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6081C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ArrowMarker() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF609BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Aura() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60B5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoAbility() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60CFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoAttack() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60E9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoDestruction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6103C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoFarm() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF611DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoLock() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6137C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoMagicSpawner() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6151C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoMode() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF616BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_AutoOpenDoor() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6185C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Avatar() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF619FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BackPoint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61B9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BackTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61D3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Bank() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61EDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BattleId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6207C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BattleStatisticType() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6221C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Bawl() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF623BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Bind() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6255C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Blueprint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF626FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BonusMaxHealth() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6289C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BossOpenResources() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62A3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BossOpenState() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62BDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BoxCollision() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62D7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BuildBlocker() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62F1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BuildGroup() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF630BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_BuildPlace() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6325C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Builder() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF633FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CampBath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6359C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CanTravel() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6373C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CashbackCoins() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF638DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Cell() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63A7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Chance() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63C1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ChestMarker() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63DBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ChestOnDeath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63F5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ChestReward() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF640FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Childs() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6429C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ChooseCreature() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6443C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CircleCollision() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF645DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Clan() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6477C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ClanPersonal() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6491C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ClanPersonalGenerator() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64ABC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Click() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64C5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ClosedDuration() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64DFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Coins() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64F9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CollisionActive() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6513C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ContainerAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF652DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CorpseDestruction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6547C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CostumeChest() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6561C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CostumeHead() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF657BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CostumeLegs() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6595C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Count() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65AFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Cover() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65C9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CoverRadius() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65E3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CraftAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65FDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CraftBoost() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6617C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Craft() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6631C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CraftWork() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF664BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CreateInventory() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6665C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CreateUniqueInventory() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF667FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CreationTime() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6699C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Creep() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66B3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CurrencyExchange() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66CDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CurrentRoof() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66E7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CustomStore() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6701C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CyclicPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF671BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6735C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF674FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DailyShopAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6769C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DailyShop() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6783C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DailyTavern() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF679DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DamageCoefByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67B7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DamageCoef() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67D1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DamageEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67EBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DamageStat() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6805C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DamageType() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF681FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DefaultArming() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6839C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DefaultGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6853C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DefaultVectorField() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF686DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Delay() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6887C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Description() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68A1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DestroyAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68BBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DestroyOnDeath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68D5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Difficulty() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68EFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DiplomacyManagementAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6909C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Disabled() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6923C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Distance() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF693DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DistrictLevelUpgrades() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6957C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DoorWall() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6971C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Dragged() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF698BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DungeonDifficulty() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69A5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_DurabilityDamage() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69BFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Duration() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69D9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EndTime() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69F3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EnemyInteract() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A0DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Energy() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A27C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EnterCondition() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A41C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EnterQuests() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A5BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EventBpPointsA() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A75C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EventBpPointsB() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A8FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EventBpPointsC() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AA9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_EventTag() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AC3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Exchange() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6ADDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Explode() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AF7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ExplodeOnDeath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B11C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ExternalInventory() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B2BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B45C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Extract() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B5FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ExtractWork() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B79C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_FakeBase() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B93C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_FakeClanName() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BADC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_FinalizeAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BC7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Finalize() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BE1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_FindViewInScene() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BFBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Floor() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C15C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Fog() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C2FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Follow() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C49C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_FollowTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C63C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Fusion() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C7DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GamePlace() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C97C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GameSound() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CB1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Gender() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CCBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GenerateWall() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CE5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GiantReputation() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CFFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Grade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D19C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GradeFromLocation() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D33C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GradeHide() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D4DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GradeView() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D67C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GroupChild() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D81C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Group() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D9BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GuildBossCoins() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DB5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GuildCoins() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DCFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Guild() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DE9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_GuildTag() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E03C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_HashPosition() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E1DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_HealthCoef() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E37C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_HideBag() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E51C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Hide() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E6BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_HideHead() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E85C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_HidePet() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E9FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Icon() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6EB9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Id() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6ED3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_IgnoreDoorVectorField() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6EEDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InfluenceByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F07C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Influence() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F21C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InstantEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F3BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InteractAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F55C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Interact() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F6FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InteractCooldown() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F89C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InteractRadius() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FA3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InteractTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FBDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Inventory() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FD7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InventoryContent() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FF1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_InventoryLocked() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF700BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_KilledBy() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7025C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LastActionTick() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF703FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LastDamager() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7059C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Level() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7073C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LobbyType() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF708DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LocationRegion() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70A7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LocationRegionEnter() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70C1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LockAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70DBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LockController() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70F5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LoopSound() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF710FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LootByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7129C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_LootStatus() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7143C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MagicSave() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF715DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MagicSpawner() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7177C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MagicTriggerId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7191C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Mannequin() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71ABC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MapNotify() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71C5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MapPath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71DFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MapPathView() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71F9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MapPoint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7213C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MapSpeed() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF722DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MaxHealthCoefByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7247C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7261C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MaxHealth() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF727BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MetabolismSetting() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7295C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MinimapArrow() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72AFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Minimap() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72C9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MinimapPing() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72E3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MiningAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72FDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Mining() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7317C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MountInventoryContent() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7331C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MountInventoryId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF734BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MountInvetory() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7365C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MountTrader() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF737FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MoveToTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7399C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_MoveToTargetPosition() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73B3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NeedQuests() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73CDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NeedRemoveEmpty() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73E7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NextWayPoint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7401C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NoAutoMode() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF741BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NotAggressive() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7435C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NotInteractable() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF744FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NotPursuitTarget() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7469C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_NotSelectable() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7483C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ObjectTrigger() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF749DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OdinsCupAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74B7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OfferAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74D1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74EBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OnDeath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7505C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OnEmptyWorld() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF751FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OnGround() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7539C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Orientation() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7553C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Owner() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF756DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_OwnerName() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7587C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Parent() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75A1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Patrol() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75BBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Period() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75D5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Personal() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75EFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PersonalGenerator() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7609C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PersonalKey() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7623C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PetInventoryId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF763DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Phases() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7657C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PickupAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7671C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PlaceOwner() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF768BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Player() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76A5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PlayerId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76BFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PlayerKill() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76D9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PlayerName() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76F3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PointLabel() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF770DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Points() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7727C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PortalAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7741C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Portal() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF775BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PortalsPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7775C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Position() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF778FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PositionPlace() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77A9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PositionTransaction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77C3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Power() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77DDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Prefab() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77F7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Production() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7811C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ProductionWork() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF782BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ProgressionExchange() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7845C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Pursuit() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF785FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_PursuitGroup() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7879C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_QuestsSave() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7893C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RandomClanName() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78ADC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RandomName() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78C7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Rarity() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78E1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RavenNest() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78FBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RavenNestManagementAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7915C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RavenNestStatsAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF792FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RavenNestStats() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7949C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RepairAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7963C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Required() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF797DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ResetTime() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7997C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Resources() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79B1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RespawnPoint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79CBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ResurrectAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79E5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Rewards() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79FFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Roaming() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A19C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Roof() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A33C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Room() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A4DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RoomsDoor() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A67C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RotateTo() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A81C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Rotation() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A9BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_RuneInventoryId() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7AB5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SaveAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7ACFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Saveable() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7AE9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SaviorPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B03C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Scout() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B1DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SeasonPointsByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B37C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SeasonPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B51C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ServerPosition() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B6BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ServerTick() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B85C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Shared() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B9FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ShieldManagementAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BB9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ShieldTotem() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BD3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ShowCondition() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BEDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Silver() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C07C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SinglePlace() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C21C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SlotCount() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C3BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SpawnAndDestroy() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C55C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SpawnEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C6FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_SpawnOnDeath() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C89C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Spectator() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CA3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Speed() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CBDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_StartTournamentAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CD7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_StateView() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CF1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Statue() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D0BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_StatusBarView() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D25C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_StoreExperienceByGrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D3FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Tags() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D59C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Team() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D73C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_TenacityCoef() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D8DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Tick() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DA7C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Tickets() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DC1C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_TicksCount() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DDBC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_TimeTrigger() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DF5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_TimerEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E0FC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ToLocation() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E29C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_ToolTip() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E43C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Transport() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E5DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_TriggerView() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E77C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UIPrefab() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E91C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UniqueLookup() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EABC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UnlockAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EC5C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Unlock() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EDFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UnlockContainerAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EF9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UnlockDuration() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F13C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UnlockPortalAction() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F2DC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Unlocked() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F47C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Upgrade() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F61C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_UpgradeEffect() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F7BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_VIPPoints() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F95C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_Velocity() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FAFC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_VisualCollision() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FC9C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WallCollision() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FE3C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WaveIndex() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FFDC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WaveItem() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8017C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WaveState() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8031C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WavesEvent() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF804BC))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WayPoint() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8065C))(0);
	}
	 static IMatcher1GameDataEntity*>* get_WorldType() {
		return ((IMatcher1GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF807FC))(0);
	}
	 static IAllOfMatcher1GameDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1GameDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF8099C))(0, indices);
	}
	 static IAllOfMatcher1GameDataEntity*>* AllOf_1(Il2CppArray<IMatcher1GameDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1GameDataEntity*>* (*)(void *, Il2CppArray<IMatcher1GameDataEntity*>*>*))(Il2CppBase() + 0xF80A14))(0, matchers);
	}
	 static IAnyOfMatcher1GameDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1GameDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF80A8C))(0, indices);
	}
	 static IAnyOfMatcher1GameDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1GameDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1GameDataEntity*>* (*)(void *, Il2CppArray<IMatcher1GameDataEntity*>*>*))(Il2CppBase() + 0xF80B04))(0, matchers);
	}

};

