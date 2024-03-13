#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameDataMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameDataMatcher"));
	}

	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAFKMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAFKTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIBattle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIBattleSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIBattleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIBattleTracker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIEvadeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAIPocketsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAccumulativeExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherActivateOnLocationLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAddExpByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAddExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAddRaidKarma() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAddStoreExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAggroMeRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAggroRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAggroTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAngularSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherApplyOnTargetActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingBackpack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingBanner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingBeard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingCharm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingClothes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingCorpse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingHairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingMount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingMountSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingMountSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingMountSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPassiveSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPetSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPetSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPetSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingPocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingRunes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingSkinColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArrivalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherArrowMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAura() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoAbility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoDestruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoFarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoMagicSpawner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAutoOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBackPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBattleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBattleStatisticType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBawl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBonusMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBossOpenResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBossOpenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBoxCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBuildBlocker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBuildGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBuildPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCampBath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCanTravel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChestMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChestOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChestReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherChooseCreature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCircleCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherClanPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherClanPersonalGenerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherClosedDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCollisionActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCorpseDestruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCostumeChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCostumeHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCostumeLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCoverRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCraftAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCraftBoost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCraft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCraftWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCreateInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCreateUniqueInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCreep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCurrencyExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCurrentRoof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCustomStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDailyShopAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDailyShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDailyTavern() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDamageCoefByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDamageEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDefaultArming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDefaultGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDefaultVectorField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDestroyAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDestroyOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDiplomacyManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDistrictLevelUpgrades() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDoorWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDragged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDungeonDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDurabilityDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEnemyInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEnergy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEnterCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEnterQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherEventTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExplodeOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExternalInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExtract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherExtractWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFakeBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFakeClanName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFinalizeAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFinalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFindViewInScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFloor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFollow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherFusion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGamePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGameSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGenerateWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGradeFromLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGradeHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGradeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGroupChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherGuildTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHashPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHideBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHideHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherHidePet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherIgnoreDoorVectorField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInfluenceByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInstantEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInteractAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInteract() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInteractCooldown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInteractRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInteractTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInventoryContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherInventoryLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherKilledBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLastActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLastDamager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLobbyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLocationRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLocationRegionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLockController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLoopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLootByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherLootStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMagicSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMagicSpawner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMagicTriggerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMannequin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMapNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMapPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMapPathView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMapPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMapSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMaxHealthCoefByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMaxHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMetabolismSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMinimapArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMinimap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMinimapPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMiningAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMountInventoryContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMountInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMountInvetory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMountTrader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherMoveToTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNeedQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNeedRemoveEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNextWayPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNoAutoMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNotAggressive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNotInteractable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNotPursuitTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherNotSelectable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherObjectTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOdinsCupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOfferAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOldBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOnEmptyWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOnGround() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherOwnerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPatrol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPersonalGenerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPersonalKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPetInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPhases() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPickupAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPlaceOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPlayerKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPointLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPositionPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPositionTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherProduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherProductionWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherProgressionExchange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPursuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherPursuitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherQuestsSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRandomClanName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRandomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRavenNest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x940);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRavenNestManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x948);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRavenNestStatsAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x950);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRavenNestStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x958);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRepairAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x960);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRequired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x968);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x970);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x978);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRespawnPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x980);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherResurrectAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x988);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x990);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRoaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x998);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRoof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9A0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9A8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRoomsDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9B0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRotateTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9B8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherRuneInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSaveAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSaveable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9D8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9E0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherScout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9E8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSeasonPointsByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9F0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9F8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA00);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherServerTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA08);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherShared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA10);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherShieldManagementAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA18);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherShieldTotem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA20);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherShowCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA28);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA30);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSinglePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA38);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSlotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA40);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSpawnAndDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA48);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSpawnEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA50);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSpawnOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA58);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSpectator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA60);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA68);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherStartTournamentAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA70);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherStateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA78);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherStatue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA80);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherStatusBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA88);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherStoreExperienceByGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA90);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA98);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAA0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTenacityCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAA8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAB0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAB8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTicksCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTimeTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTimerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAD0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherToLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAD8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherToolTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAE0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTransport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAE8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherTriggerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAF0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUIPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAF8);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUniqueLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB00);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlockAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB08);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB10);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlockContainerAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB18);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlockDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB20);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlockPortalAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB28);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUnlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB30);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB38);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherUpgradeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB40);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB48);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB50);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherVisualCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB58);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWallCollision() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB60);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWaveIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB68);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWaveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB70);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWaveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB78);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWavesEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB80);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWayPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB88);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T& _matcherWorldType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB90);
	}

	template <typename T = IMatcher1GameDataEntity*>*> static T get_AFKMove() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5AF58))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AFKTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B0F4))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIBattle() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B290))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIBattleSource() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B42C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIBattleState() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B5C8))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIBattleTracker() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B764))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIEvadeTime() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5B900))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AIPocketsState() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5BA9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AccumulativeExchange() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5BC38))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ActivateOnLocationLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5BDB8))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5BF54))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ActiveEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C0F0))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AddExpByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C28C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AddExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C428))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AddRaidKarma() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C5C4))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AddStoreExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C760))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AggroMeRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5C8FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AggroRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5CA98))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AggroTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5CC34))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5CDD0))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5CF6C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D108))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D2A4))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AngularSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D440))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Animator() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D5DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ApplyOnTargetActiveEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D778))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingBackpack() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5D914))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingBanner() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5DAB0))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingBeard() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5DC4C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingCharm() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5DDE8))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingChest() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5DF84))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingClass() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E120))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingClothes() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E2BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingCorpse() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E45C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingFace() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E5FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E79C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingHairColor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5E93C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingHair() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5EADC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingHead() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5EC7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingLegs() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5EE1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingMount() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5EFBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingMountSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F15C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingMountSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F2FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingMountSkill3() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F49C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPassiveSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F63C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPet() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F7DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPetSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5F97C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPetSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5FB1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPetSkill3() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5FCBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingPocket() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5FE5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingRunes() {
		return ((T (*)(void *))(Il2CppBase() + 0xF5FFFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6019C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6033C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingSkinColor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF604DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6067C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArrivalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6081C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ArrowMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0xF609BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Aura() {
		return ((T (*)(void *))(Il2CppBase() + 0xF60B5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoAbility() {
		return ((T (*)(void *))(Il2CppBase() + 0xF60CFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoAttack() {
		return ((T (*)(void *))(Il2CppBase() + 0xF60E9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoDestruction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6103C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoFarm() {
		return ((T (*)(void *))(Il2CppBase() + 0xF611DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoLock() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6137C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoMagicSpawner() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6151C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoMode() {
		return ((T (*)(void *))(Il2CppBase() + 0xF616BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_AutoOpenDoor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6185C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0xF619FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BackPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF61B9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BackTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF61D3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Bank() {
		return ((T (*)(void *))(Il2CppBase() + 0xF61EDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BattleId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6207C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BattleStatisticType() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6221C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Bawl() {
		return ((T (*)(void *))(Il2CppBase() + 0xF623BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Bind() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6255C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Blueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF626FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BonusMaxHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6289C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BossOpenResources() {
		return ((T (*)(void *))(Il2CppBase() + 0xF62A3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BossOpenState() {
		return ((T (*)(void *))(Il2CppBase() + 0xF62BDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BoxCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0xF62D7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BuildBlocker() {
		return ((T (*)(void *))(Il2CppBase() + 0xF62F1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BuildGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0xF630BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_BuildPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6325C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Builder() {
		return ((T (*)(void *))(Il2CppBase() + 0xF633FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CampBath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6359C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CanTravel() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6373C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0xF638DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Cell() {
		return ((T (*)(void *))(Il2CppBase() + 0xF63A7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0xF63C1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ChestMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0xF63DBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ChestOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF63F5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ChestReward() {
		return ((T (*)(void *))(Il2CppBase() + 0xF640FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Childs() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6429C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ChooseCreature() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6443C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CircleCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0xF645DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6477C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ClanPersonal() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6491C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ClanPersonalGenerator() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64ABC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Click() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64C5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ClosedDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64DFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0xF64F9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CollisionActive() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6513C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF652DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CorpseDestruction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6547C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CostumeChest() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6561C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CostumeHead() {
		return ((T (*)(void *))(Il2CppBase() + 0xF657BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CostumeLegs() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6595C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0xF65AFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Cover() {
		return ((T (*)(void *))(Il2CppBase() + 0xF65C9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CoverRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0xF65E3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CraftAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF65FDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CraftBoost() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6617C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Craft() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6631C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CraftWork() {
		return ((T (*)(void *))(Il2CppBase() + 0xF664BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CreateInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6665C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CreateUniqueInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0xF667FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6699C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Creep() {
		return ((T (*)(void *))(Il2CppBase() + 0xF66B3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CurrencyExchange() {
		return ((T (*)(void *))(Il2CppBase() + 0xF66CDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CurrentRoof() {
		return ((T (*)(void *))(Il2CppBase() + 0xF66E7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CustomStore() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6701C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF671BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6735C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0xF674FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DailyShopAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6769C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DailyShop() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6783C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DailyTavern() {
		return ((T (*)(void *))(Il2CppBase() + 0xF679DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DamageCoefByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF67B7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0xF67D1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DamageEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF67EBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6805C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0xF681FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DefaultArming() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6839C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DefaultGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6853C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DefaultVectorField() {
		return ((T (*)(void *))(Il2CppBase() + 0xF686DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6887C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0xF68A1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DestroyAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF68BBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DestroyOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF68D5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Difficulty() {
		return ((T (*)(void *))(Il2CppBase() + 0xF68EFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DiplomacyManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6909C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Disabled() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6923C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Distance() {
		return ((T (*)(void *))(Il2CppBase() + 0xF693DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DistrictLevelUpgrades() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6957C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DoorWall() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6971C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Dragged() {
		return ((T (*)(void *))(Il2CppBase() + 0xF698BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DungeonDifficulty() {
		return ((T (*)(void *))(Il2CppBase() + 0xF69A5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_DurabilityDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0xF69BFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0xF69D9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0xF69F3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EnemyInteract() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A0DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Energy() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A27C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EnterCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A41C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EnterQuests() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A5BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A75C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6A8FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6AA9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_EventTag() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6AC3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Exchange() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6ADDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Explode() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6AF7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ExplodeOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B11C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ExternalInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B2BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B45C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Extract() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B5FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ExtractWork() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B79C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_FakeBase() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6B93C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_FakeClanName() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6BADC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_FinalizeAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6BC7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Finalize() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6BE1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_FindViewInScene() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6BFBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Floor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C15C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Fog() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C2FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Follow() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C49C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_FollowTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C63C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Fusion() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C7DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GamePlace() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6C97C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GameSound() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6CB1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Gender() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6CCBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GenerateWall() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6CE5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6CFFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D19C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GradeFromLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D33C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GradeHide() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D4DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GradeView() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D67C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GroupChild() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D81C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Group() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6D9BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6DB5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6DCFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6DE9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_GuildTag() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E03C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_HashPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E1DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_HealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E37C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_HideBag() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E51C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Hide() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E6BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_HideHead() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E85C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_HidePet() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6E9FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6EB9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6ED3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_IgnoreDoorVectorField() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6EEDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InfluenceByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F07C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F21C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InstantEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F3BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InteractAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F55C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Interact() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F6FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InteractCooldown() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6F89C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InteractRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6FA3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InteractTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6FBDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Inventory() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6FD7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InventoryContent() {
		return ((T (*)(void *))(Il2CppBase() + 0xF6FF1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_InventoryLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0xF700BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_KilledBy() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7025C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LastActionTick() {
		return ((T (*)(void *))(Il2CppBase() + 0xF703FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LastDamager() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7059C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Level() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7073C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LobbyType() {
		return ((T (*)(void *))(Il2CppBase() + 0xF708DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LocationRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0xF70A7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LocationRegionEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0xF70C1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF70DBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LockController() {
		return ((T (*)(void *))(Il2CppBase() + 0xF70F5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LoopSound() {
		return ((T (*)(void *))(Il2CppBase() + 0xF710FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LootByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7129C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_LootStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7143C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MagicSave() {
		return ((T (*)(void *))(Il2CppBase() + 0xF715DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MagicSpawner() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7177C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MagicTriggerId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7191C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Mannequin() {
		return ((T (*)(void *))(Il2CppBase() + 0xF71ABC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MapNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0xF71C5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MapPath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF71DFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MapPathView() {
		return ((T (*)(void *))(Il2CppBase() + 0xF71F9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MapPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7213C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MapSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0xF722DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MaxHealthCoefByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7247C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MaxHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7261C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MaxHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0xF727BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MetabolismSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7295C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MinimapArrow() {
		return ((T (*)(void *))(Il2CppBase() + 0xF72AFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Minimap() {
		return ((T (*)(void *))(Il2CppBase() + 0xF72C9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MinimapPing() {
		return ((T (*)(void *))(Il2CppBase() + 0xF72E3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MiningAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF72FDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Mining() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7317C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MountInventoryContent() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7331C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MountInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF734BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MountInvetory() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7365C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MountTrader() {
		return ((T (*)(void *))(Il2CppBase() + 0xF737FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MoveToTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7399C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_MoveToTargetPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0xF73B3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NeedQuests() {
		return ((T (*)(void *))(Il2CppBase() + 0xF73CDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NeedRemoveEmpty() {
		return ((T (*)(void *))(Il2CppBase() + 0xF73E7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NextWayPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7401C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NoAutoMode() {
		return ((T (*)(void *))(Il2CppBase() + 0xF741BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NotAggressive() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7435C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NotInteractable() {
		return ((T (*)(void *))(Il2CppBase() + 0xF744FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NotPursuitTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7469C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_NotSelectable() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7483C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ObjectTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0xF749DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OdinsCupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF74B7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OfferAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF74D1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OldBlueprint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF74EBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7505C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OnEmptyWorld() {
		return ((T (*)(void *))(Il2CppBase() + 0xF751FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OnGround() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7539C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Orientation() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7553C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0xF756DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_OwnerName() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7587C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0xF75A1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Patrol() {
		return ((T (*)(void *))(Il2CppBase() + 0xF75BBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Period() {
		return ((T (*)(void *))(Il2CppBase() + 0xF75D5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0xF75EFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PersonalGenerator() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7609C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PersonalKey() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7623C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PetInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF763DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Phases() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7657C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PickupAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7671C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PlaceOwner() {
		return ((T (*)(void *))(Il2CppBase() + 0xF768BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Player() {
		return ((T (*)(void *))(Il2CppBase() + 0xF76A5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF76BFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PlayerKill() {
		return ((T (*)(void *))(Il2CppBase() + 0xF76D9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0xF76F3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PointLabel() {
		return ((T (*)(void *))(Il2CppBase() + 0xF770DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Points() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7727C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7741C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Portal() {
		return ((T (*)(void *))(Il2CppBase() + 0xF775BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7775C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Position() {
		return ((T (*)(void *))(Il2CppBase() + 0xF778FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PositionPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0xF77A9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PositionTransaction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF77C3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Power() {
		return ((T (*)(void *))(Il2CppBase() + 0xF77DDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Prefab() {
		return ((T (*)(void *))(Il2CppBase() + 0xF77F7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Production() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7811C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ProductionWork() {
		return ((T (*)(void *))(Il2CppBase() + 0xF782BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ProgressionExchange() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7845C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Pursuit() {
		return ((T (*)(void *))(Il2CppBase() + 0xF785FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_PursuitGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7879C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_QuestsSave() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7893C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RandomClanName() {
		return ((T (*)(void *))(Il2CppBase() + 0xF78ADC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RandomName() {
		return ((T (*)(void *))(Il2CppBase() + 0xF78C7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Rarity() {
		return ((T (*)(void *))(Il2CppBase() + 0xF78E1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RavenNest() {
		return ((T (*)(void *))(Il2CppBase() + 0xF78FBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RavenNestManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7915C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RavenNestStatsAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF792FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RavenNestStats() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7949C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RepairAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7963C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Required() {
		return ((T (*)(void *))(Il2CppBase() + 0xF797DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ResetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7997C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Resources() {
		return ((T (*)(void *))(Il2CppBase() + 0xF79B1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RespawnPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF79CBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ResurrectAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF79E5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Rewards() {
		return ((T (*)(void *))(Il2CppBase() + 0xF79FFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Roaming() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A19C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Roof() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A33C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Room() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A4DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RoomsDoor() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A67C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RotateTo() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A81C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7A9BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_RuneInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7AB5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SaveAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7ACFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Saveable() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7AE9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B03C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Scout() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B1DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SeasonPointsByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B37C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B51C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ServerPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B6BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ServerTick() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B85C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Shared() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7B9FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ShieldManagementAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7BB9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ShieldTotem() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7BD3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ShowCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7BEDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C07C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SinglePlace() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C21C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SlotCount() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C3BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SpawnAndDestroy() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C55C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SpawnEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C6FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_SpawnOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7C89C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Spectator() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7CA3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Speed() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7CBDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_StartTournamentAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7CD7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_StateView() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7CF1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Statue() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D0BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_StatusBarView() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D25C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_StoreExperienceByGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D3FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Tags() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D59C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Team() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D73C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_TenacityCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7D8DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7DA7C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7DC1C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_TicksCount() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7DDBC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_TimeTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7DF5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_TimerEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E0FC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ToLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E29C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_ToolTip() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E43C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Transport() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E5DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_TriggerView() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E77C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UIPrefab() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7E91C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UniqueLookup() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7EABC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UnlockAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7EC5C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Unlock() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7EDFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UnlockContainerAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7EF9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UnlockDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F13C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UnlockPortalAction() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F2DC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Unlocked() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F47C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Upgrade() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F61C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_UpgradeEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F7BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7F95C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_Velocity() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7FAFC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_VisualCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7FC9C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WallCollision() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7FE3C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WaveIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0xF7FFDC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WaveItem() {
		return ((T (*)(void *))(Il2CppBase() + 0xF8017C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WaveState() {
		return ((T (*)(void *))(Il2CppBase() + 0xF8031C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WavesEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0xF804BC))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WayPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0xF8065C))(0);
	}
	template <typename T = IMatcher1GameDataEntity*>*> static T get_WorldType() {
		return ((T (*)(void *))(Il2CppBase() + 0xF807FC))(0);
	}
	template <typename T = IAllOfMatcher1GameDataEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF8099C))(0, indices);
	}
	template <typename T = IAllOfMatcher1GameDataEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF80A14))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1GameDataEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF80A8C))(0, indices);
	}
	template <typename T = IAnyOfMatcher1GameDataEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0xF80B04))(0, matchers);
	}

};

