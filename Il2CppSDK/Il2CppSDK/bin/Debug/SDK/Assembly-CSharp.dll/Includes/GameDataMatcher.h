#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataMatcher"));
	}

	 static IMatcher1<GameDataEntity*>*& _matcherAFKMove() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAFKTrigger() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIBattle() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIBattleSource() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIBattleState() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIBattleTracker() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIEvadeTime() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAIPocketsState() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAccumulativeExchange() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherActivateOnLocationLocked() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherActive() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherActiveEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAddExpByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAddExperience() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAddRaidKarma() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAddStoreExperience() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAggroMeRadius() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAggroRadius() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAggroTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAngularSpeed() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAnimator() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherApplyOnTargetActiveEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingBackpack() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingBanner() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingBeard() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingCharm() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingChest() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingClass() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingClothes() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingCorpse() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingFace() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingFeet() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingHairColor() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingHair() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingHead() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingLegs() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingMount() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingMountSkill1() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingMountSkill2() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingMountSkill3() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPassiveSkill1() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPet() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPetSkill1() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPetSkill2() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPetSkill3() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingPocket() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingRunes() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingSkill1() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingSkill2() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingSkinColor() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArmingWeapon() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArrivalTime() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherArrowMarker() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAura() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoAbility() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoAttack() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoDestruction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoFarm() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoLock() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoMagicSpawner() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoMode() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAutoOpenDoor() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherAvatar() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBackPoint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBackTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBank() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBattleId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBattleStatisticType() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBawl() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBind() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBlueprint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBonusMaxHealth() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBossOpenResources() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBossOpenState() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBoxCollision() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBuildBlocker() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBuildGroup() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBuildPlace() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherBuilder() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCampBath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCanTravel() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCell() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChance() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChestMarker() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChestOnDeath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChestReward() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChilds() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherChooseCreature() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCircleCollision() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherClan() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherClanPersonal() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherClanPersonalGenerator() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherClick() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherClosedDuration() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCoins() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCollisionActive() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherContainerAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCorpseDestruction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCostumeChest() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCostumeHead() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCostumeLegs() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCount() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCover() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCoverRadius() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCraftAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCraftBoost() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCraft() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCraftWork() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCreateInventory() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCreateUniqueInventory() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCreationTime() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCreep() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCurrencyExchange() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCurrentRoof() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCustomStore() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDailyShopAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDailyShop() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDailyTavern() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDamageCoefByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDamageEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDamageStat() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDamageType() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDefaultArming() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDefaultGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDefaultVectorField() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDelay() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDescription() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDestroyAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDestroyOnDeath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDifficulty() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDiplomacyManagementAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDisabled() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDistance() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDistrictLevelUpgrades() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDoorWall() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDragged() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDungeonDifficulty() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDurabilityDamage() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherDuration() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEndTime() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEnemyInteract() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEnergy() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEnterCondition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEnterQuests() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherEventTag() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExchange() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExplode() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExplodeOnDeath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExternalInventory() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExtract() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherExtractWork() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFakeBase() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFakeClanName() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFinalizeAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFinalize() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFindViewInScene() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFloor() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFog() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFollow() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFollowTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherFusion() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGamePlace() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGameSound() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGender() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGenerateWall() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGradeFromLocation() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGradeHide() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGradeView() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGroupChild() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGroup() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGuild() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherGuildTag() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHashPosition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHealthCoef() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHideBag() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHide() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHideHead() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherHidePet() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherIcon() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherIgnoreDoorVectorField() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInfluenceByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInfluence() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInstantEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInteractAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInteract() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInteractCooldown() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInteractRadius() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInteractTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInventory() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInventoryContent() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherInventoryLocked() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherKilledBy() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLastActionTick() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLastDamager() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLevel() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLobbyType() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLocationRegion() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLocationRegionEnter() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLockAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLockController() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLoopSound() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLootByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherLootStatus() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMagicSave() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMagicSpawner() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMannequin() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMapNotify() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMapPath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMapPathView() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMapPoint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMapSpeed() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMaxHealthCoefByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMaxHealth() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMetabolismSetting() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMinimapArrow() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMinimap() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMinimapPing() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMiningAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMining() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMountInventoryContent() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMountInventoryId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMountInvetory() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMountTrader() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherMoveToTargetPosition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNeedQuests() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNeedRemoveEmpty() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNextWayPoint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNoAutoMode() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNotAggressive() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNotInteractable() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNotPursuitTarget() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherNotSelectable() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherObjectTrigger() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOdinsCupAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOfferAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOldBlueprint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOnDeath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOnEmptyWorld() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOnGround() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOrientation() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOwner() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherOwnerName() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherParent() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPatrol() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPeriod() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPersonal() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPersonalGenerator() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPersonalKey() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPetInventoryId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPhases() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPickupAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPlaceOwner() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPlayer() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPlayerKill() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPlayerName() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPointLabel() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPortalAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPortal() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPosition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPositionPlace() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPositionTransaction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPower() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPrefab() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherProduction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherProductionWork() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherProgressionExchange() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPursuit() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherPursuitGroup() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherQuestsSave() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRandomClanName() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRandomName() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRarity() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRavenNest() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x940);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRavenNestManagementAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x948);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRavenNestStatsAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x950);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRavenNestStats() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x958);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRepairAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x960);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRequired() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x968);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherResetTime() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x970);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherResources() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x978);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRespawnPoint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x980);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherResurrectAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x988);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRewards() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x990);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRoaming() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x998);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRoof() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9A0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRoom() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9A8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRoomsDoor() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9B0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRotateTo() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9B8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRotation() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9C0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherRuneInventoryId() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9C8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSaveAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9D0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSaveable() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9D8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9E0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherScout() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9E8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSeasonPointsByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9F0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x9F8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherServerPosition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA00);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherServerTick() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA08);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherShared() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA10);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherShieldManagementAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA18);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherShieldTotem() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA20);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherShowCondition() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA28);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSilver() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA30);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSinglePlace() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA38);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSlotCount() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA40);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSpawnAndDestroy() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA48);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSpawnEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA50);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSpawnOnDeath() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA58);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSpectator() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA60);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherSpeed() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA68);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherStartTournamentAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA70);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherStateView() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA78);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherStatue() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA80);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherStatusBarView() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA88);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherStoreExperienceByGrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA90);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTags() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA98);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTeam() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAA0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTenacityCoef() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAA8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTick() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAB0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTickets() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAB8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTicksCount() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAC0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTimeTrigger() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAC8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTimerEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAD0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherToLocation() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAD8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherToolTip() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAE0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTransport() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAE8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherTriggerView() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAF0);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUIPrefab() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xAF8);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUniqueLookup() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB00);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlockAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB08);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlock() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB10);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlockContainerAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB18);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlockDuration() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB20);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlockPortalAction() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB28);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUnlocked() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB30);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUpgrade() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB38);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherUpgradeEffect() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB40);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB48);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherVelocity() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB50);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherVisualCollision() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB58);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWallCollision() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB60);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWaveIndex() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB68);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWaveItem() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB70);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWaveState() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB78);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWavesEvent() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB80);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWayPoint() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB88);
	}
	 static IMatcher1<GameDataEntity*>*& _matcherWorldType() {
		return *(IMatcher1<GameDataEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB90);
	}

	 static IMatcher1<GameDataEntity*>* get_AFKMove() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5AF58))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AFKTrigger() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B0F4))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIBattle() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B290))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIBattleSource() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B42C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIBattleState() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B5C8))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIBattleTracker() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B764))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIEvadeTime() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5B900))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AIPocketsState() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BA9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AccumulativeExchange() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BC38))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ActivateOnLocationLocked() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BDB8))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Active() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5BF54))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ActiveEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C0F0))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AddExpByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C28C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AddExperience() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C428))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AddRaidKarma() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C5C4))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AddStoreExperience() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C760))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AggroMeRadius() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5C8FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AggroRadius() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CA98))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AggroTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CC34))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CDD0))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5CF6C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D108))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D2A4))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AngularSpeed() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D440))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Animator() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D5DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ApplyOnTargetActiveEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D778))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingBackpack() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5D914))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingBanner() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DAB0))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingBeard() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DC4C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingCharm() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DDE8))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingChest() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5DF84))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingClass() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E120))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingClothes() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E2BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingCorpse() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E45C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingFace() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E5FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingFeet() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E79C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingHairColor() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5E93C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingHair() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EADC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingHead() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EC7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingLegs() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EE1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingMount() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5EFBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingMountSkill1() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F15C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingMountSkill2() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F2FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingMountSkill3() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F49C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPassiveSkill1() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F63C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPet() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F7DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPetSkill1() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5F97C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPetSkill2() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FB1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPetSkill3() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FCBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingPocket() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FE5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingRunes() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF5FFFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingSkill1() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6019C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingSkill2() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6033C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingSkinColor() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF604DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArmingWeapon() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6067C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArrivalTime() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6081C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ArrowMarker() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF609BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Aura() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60B5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoAbility() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60CFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoAttack() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF60E9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoDestruction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6103C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoFarm() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF611DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoLock() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6137C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoMagicSpawner() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6151C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoMode() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF616BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_AutoOpenDoor() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6185C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Avatar() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF619FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BackPoint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61B9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BackTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61D3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Bank() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF61EDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BattleId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6207C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BattleStatisticType() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6221C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Bawl() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF623BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Bind() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6255C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Blueprint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF626FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BonusMaxHealth() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6289C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BossOpenResources() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62A3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BossOpenState() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62BDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BoxCollision() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62D7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BuildBlocker() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF62F1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BuildGroup() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF630BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_BuildPlace() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6325C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Builder() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF633FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CampBath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6359C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CanTravel() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6373C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CashbackCoins() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF638DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Cell() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63A7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Chance() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63C1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ChestMarker() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63DBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ChestOnDeath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF63F5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ChestReward() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF640FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Childs() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6429C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ChooseCreature() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6443C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CircleCollision() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF645DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Clan() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6477C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ClanPersonal() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6491C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ClanPersonalGenerator() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64ABC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Click() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64C5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ClosedDuration() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64DFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Coins() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF64F9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CollisionActive() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6513C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ContainerAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF652DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CorpseDestruction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6547C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CostumeChest() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6561C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CostumeHead() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF657BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CostumeLegs() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6595C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Count() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65AFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Cover() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65C9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CoverRadius() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65E3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CraftAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF65FDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CraftBoost() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6617C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Craft() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6631C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CraftWork() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF664BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CreateInventory() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6665C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CreateUniqueInventory() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF667FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CreationTime() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6699C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Creep() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66B3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CurrencyExchange() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66CDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CurrentRoof() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF66E7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CustomStore() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6701C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CyclicPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF671BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6735C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF674FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DailyShopAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6769C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DailyShop() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6783C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DailyTavern() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF679DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DamageCoefByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67B7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DamageCoef() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67D1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DamageEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF67EBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DamageStat() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6805C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DamageType() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF681FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DefaultArming() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6839C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DefaultGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6853C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DefaultVectorField() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF686DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Delay() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6887C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Description() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68A1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DestroyAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68BBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DestroyOnDeath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68D5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Difficulty() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF68EFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DiplomacyManagementAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6909C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Disabled() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6923C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Distance() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF693DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DistrictLevelUpgrades() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6957C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DoorWall() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6971C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Dragged() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF698BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DungeonDifficulty() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69A5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_DurabilityDamage() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69BFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Duration() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69D9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EndTime() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF69F3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EnemyInteract() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A0DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Energy() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A27C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EnterCondition() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A41C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EnterQuests() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A5BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EventBpPointsA() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A75C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EventBpPointsB() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6A8FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EventBpPointsC() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AA9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_EventTag() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AC3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Exchange() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6ADDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Explode() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6AF7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ExplodeOnDeath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B11C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ExternalInventory() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B2BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B45C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Extract() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B5FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ExtractWork() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B79C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_FakeBase() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6B93C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_FakeClanName() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BADC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_FinalizeAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BC7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Finalize() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BE1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_FindViewInScene() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6BFBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Floor() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C15C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Fog() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C2FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Follow() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C49C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_FollowTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C63C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Fusion() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C7DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GamePlace() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6C97C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GameSound() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CB1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Gender() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CCBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GenerateWall() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CE5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GiantReputation() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6CFFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Grade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D19C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GradeFromLocation() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D33C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GradeHide() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D4DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GradeView() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D67C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GroupChild() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D81C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Group() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6D9BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GuildBossCoins() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DB5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GuildCoins() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DCFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Guild() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6DE9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_GuildTag() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E03C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_HashPosition() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E1DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_HealthCoef() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E37C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_HideBag() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E51C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Hide() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E6BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_HideHead() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E85C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_HidePet() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6E9FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Icon() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6EB9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Id() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6ED3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_IgnoreDoorVectorField() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6EEDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InfluenceByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F07C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Influence() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F21C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InstantEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F3BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InteractAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F55C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Interact() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F6FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InteractCooldown() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6F89C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InteractRadius() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FA3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InteractTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FBDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Inventory() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FD7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InventoryContent() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF6FF1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_InventoryLocked() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF700BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_KilledBy() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7025C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LastActionTick() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF703FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LastDamager() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7059C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Level() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7073C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LobbyType() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF708DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LocationRegion() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70A7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LocationRegionEnter() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70C1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LockAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70DBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LockController() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF70F5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LoopSound() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF710FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LootByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7129C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_LootStatus() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7143C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MagicSave() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF715DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MagicSpawner() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7177C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MagicTriggerId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7191C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Mannequin() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71ABC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MapNotify() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71C5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MapPath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71DFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MapPathView() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF71F9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MapPoint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7213C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MapSpeed() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF722DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MaxHealthCoefByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7247C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7261C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MaxHealth() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF727BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MetabolismSetting() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7295C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MinimapArrow() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72AFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Minimap() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72C9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MinimapPing() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72E3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MiningAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF72FDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Mining() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7317C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MountInventoryContent() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7331C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MountInventoryId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF734BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MountInvetory() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7365C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MountTrader() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF737FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MoveToTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7399C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_MoveToTargetPosition() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73B3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NeedQuests() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73CDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NeedRemoveEmpty() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF73E7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NextWayPoint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7401C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NoAutoMode() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF741BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NotAggressive() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7435C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NotInteractable() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF744FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NotPursuitTarget() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7469C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_NotSelectable() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7483C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ObjectTrigger() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF749DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OdinsCupAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74B7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OfferAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74D1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OldBlueprint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF74EBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OnDeath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7505C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OnEmptyWorld() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF751FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OnGround() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7539C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Orientation() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7553C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Owner() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF756DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_OwnerName() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7587C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Parent() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75A1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Patrol() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75BBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Period() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75D5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Personal() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF75EFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PersonalGenerator() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7609C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PersonalKey() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7623C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PetInventoryId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF763DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Phases() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7657C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PickupAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7671C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PlaceOwner() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF768BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Player() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76A5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PlayerId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76BFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PlayerKill() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76D9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PlayerName() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF76F3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PointLabel() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF770DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Points() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7727C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PortalAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7741C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Portal() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF775BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PortalsPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7775C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Position() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF778FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PositionPlace() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77A9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PositionTransaction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77C3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Power() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77DDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Prefab() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF77F7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Production() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7811C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ProductionWork() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF782BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ProgressionExchange() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7845C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Pursuit() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF785FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_PursuitGroup() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7879C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_QuestsSave() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7893C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RandomClanName() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78ADC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RandomName() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78C7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Rarity() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78E1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RavenNest() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF78FBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RavenNestManagementAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7915C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RavenNestStatsAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF792FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RavenNestStats() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7949C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RepairAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7963C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Required() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF797DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ResetTime() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7997C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Resources() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79B1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RespawnPoint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79CBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ResurrectAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79E5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Rewards() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF79FFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Roaming() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A19C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Roof() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A33C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Room() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A4DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RoomsDoor() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A67C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RotateTo() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A81C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Rotation() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7A9BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_RuneInventoryId() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7AB5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SaveAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7ACFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Saveable() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7AE9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SaviorPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B03C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Scout() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B1DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SeasonPointsByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B37C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SeasonPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B51C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ServerPosition() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B6BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ServerTick() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B85C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Shared() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7B9FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ShieldManagementAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BB9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ShieldTotem() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BD3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ShowCondition() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7BEDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Silver() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C07C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SinglePlace() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C21C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SlotCount() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C3BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SpawnAndDestroy() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C55C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SpawnEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C6FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_SpawnOnDeath() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7C89C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Spectator() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CA3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Speed() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CBDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_StartTournamentAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CD7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_StateView() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7CF1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Statue() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D0BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_StatusBarView() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D25C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_StoreExperienceByGrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D3FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Tags() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D59C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Team() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D73C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_TenacityCoef() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7D8DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Tick() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DA7C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Tickets() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DC1C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_TicksCount() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DDBC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_TimeTrigger() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7DF5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_TimerEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E0FC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ToLocation() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E29C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_ToolTip() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E43C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Transport() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E5DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_TriggerView() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E77C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UIPrefab() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7E91C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UniqueLookup() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EABC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UnlockAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EC5C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Unlock() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EDFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UnlockContainerAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7EF9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UnlockDuration() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F13C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UnlockPortalAction() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F2DC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Unlocked() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F47C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Upgrade() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F61C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_UpgradeEffect() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F7BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_VIPPoints() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7F95C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_Velocity() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FAFC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_VisualCollision() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FC9C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WallCollision() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FE3C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WaveIndex() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF7FFDC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WaveItem() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8017C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WaveState() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8031C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WavesEvent() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF804BC))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WayPoint() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF8065C))(0);
	}
	 static IMatcher1<GameDataEntity*>* get_WorldType() {
		return ((IMatcher1<GameDataEntity*>* (*)(void *))(Il2CppBase() + 0xF807FC))(0);
	}
	 static IAllOfMatcher1<GameDataEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<GameDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF8099C))(0, indices);
	}
	 static IAllOfMatcher1<GameDataEntity*>* AllOf_1(Il2CppArray<IMatcher1<GameDataEntity*>*>* matchers) {
		return ((IAllOfMatcher1<GameDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<GameDataEntity*>*>*))(Il2CppBase() + 0xF80A14))(0, matchers);
	}
	 static IAnyOfMatcher1<GameDataEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<GameDataEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xF80A8C))(0, indices);
	}
	 static IAnyOfMatcher1<GameDataEntity*>* AnyOf_1(Il2CppArray<IMatcher1<GameDataEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<GameDataEntity*>* (*)(void *, Il2CppArray<IMatcher1<GameDataEntity*>*>*))(Il2CppBase() + 0xF80B04))(0, matchers);
	}

};

