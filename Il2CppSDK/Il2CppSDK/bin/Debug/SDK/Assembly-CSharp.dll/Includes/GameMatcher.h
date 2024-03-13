#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameMatcher"));
	}

	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAABB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAFKMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAFKTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAIBattleSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAIBattleState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAIEvadeTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAIPocketsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAddExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAddRaidKarma() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAddStoreExperience() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAggroRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAggroTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAlvesBpPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAlvesWavesBadgesT1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAlvesWavesBadgesT2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAlvesWavesBadgesT3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAngularSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAnimator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherApplyOnTargetActiveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingBackpack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingBanner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingBeard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingCharm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingClass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingClothes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingCorpse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingFace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingFeet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingHairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingMount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingMountSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingMountSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingMountSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPassiveSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPetSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPetSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPetSkill3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingPocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingRunes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingSkill1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingSkill2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingSkinColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArmingWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArrivalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherArrowMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAura() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoAbility() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoDestruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoFarm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoMagicSpawner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAutoOpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBackPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBackTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBattleId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBattleStatisticType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBawl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBonusMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBossOpenResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBossOpenState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBuildGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBuildPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherBuilder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCampBath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCanTravel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCashbackCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherChance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherChestMarker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherChestOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherChilds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherChooseCreature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherClan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherClanPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherClanPersonalGenerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherClosedDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCorpseDestruction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCostumeChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCostumeHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCostumeLegs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCoverRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCraftBoost() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCraftWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCreateInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCreateUniqueInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCreationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCreep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCurrentRoof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCustomStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCyclicPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCyclicPremiumTokens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherCyclicYmirSoul() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDamageCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDamageStat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDamageType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDefaultGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDefaultVectorField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDescription() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDestroyOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDifficulty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDisabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDoorWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDragged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDurabilityDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEndTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEnergy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEnterCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEnterQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEventBpPointsA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEventBpPointsB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEventBpPointsC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherEventTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherExplodeOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherExternalInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherExtraLevelCap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherExtractWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFakeBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFakeClanName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFloor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFollow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherFollowTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGameData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGender() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGenerateWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGiantReputation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGradeFromLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGradeHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGradeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGroupChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGuildBossCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGuildCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherGuildTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHashPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHideBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHideHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherHidePet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherIgnoreDoorVectorField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherInfluence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherInteractTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherInventoryContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherInventoryLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherKilledBy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLastActionTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLastDamager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLobbyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLocationRegion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLocationRegionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLockController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLoopSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherLootStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMagicSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMagicSpawner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMagicTriggerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMapNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMapPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMapPathView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMapSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMaxHealthCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMetabolismSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMinimapArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMinimap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMinimapPing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherModifiers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMountInventoryContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMountInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMountInvetory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMountTrader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherMoveToTargetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNeedQuests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNeedRemoveEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNextWayPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNoAutoMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNotAggressive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNotInteractable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNotPursuitTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherNotSelectable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherObjectTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherOnEmptyWorld() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherOwnerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPatrol() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPeriod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPersonal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPersonalGenerator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPersonalKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPetInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPhases() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPlaceOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPlayerKill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPointLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPortal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPortalsPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPositionPlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPositionTransaction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPower() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherProduction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherProductionWork() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPursuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherPursuitGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherQuestsSave() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRandomClanName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRandomName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRarity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRavenNest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRavenNestStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRequired() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRespawnPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRoaming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRoof() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRoomsDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRotateTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherRuneInventoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSaveAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSaveable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSaviorPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherScout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSeasonPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherServerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherServerTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherShared() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherShowCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSilver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSinglePlace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSlotCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSpawnAndDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSpawnOnDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSpectator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherStateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherStatue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherStatusBarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTenacityCoef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTicksCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTimeTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTimerEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherToLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTransport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherTriggerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUniqueLookup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUnlockDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUnlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUpgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherUpgradeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherVIPPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherVelocity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherWaveIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherWaveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherWaveState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherWavesEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	template <typename T = IMatcher1GameEntity*>*> static T& _matcherWayPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x940);
	}

	template <typename T = IMatcher1GameEntity*>*> static T get_AABB() {
		return ((T (*)(void *))(Il2CppBase() + 0x174E8D0))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AFKMove() {
		return ((T (*)(void *))(Il2CppBase() + 0x174EA50))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AFKTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x174EBEC))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AIBattleSource() {
		return ((T (*)(void *))(Il2CppBase() + 0x174ED88))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AIBattleState() {
		return ((T (*)(void *))(Il2CppBase() + 0x174EF24))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AIEvadeTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F0C0))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AIPocketsState() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F25C))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Active() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F3F8))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AddExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F594))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AddRaidKarma() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F730))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AddStoreExperience() {
		return ((T (*)(void *))(Il2CppBase() + 0x174F8CC))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AggroRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0x174FA68))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AggroTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x174FC04))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AlvesBpPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x174FDA0))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AlvesWavesBadgesT1() {
		return ((T (*)(void *))(Il2CppBase() + 0x174FF3C))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AlvesWavesBadgesT2() {
		return ((T (*)(void *))(Il2CppBase() + 0x17500D8))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AlvesWavesBadgesT3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750274))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AngularSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750410))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Animator() {
		return ((T (*)(void *))(Il2CppBase() + 0x17505AC))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ApplyOnTargetActiveEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750748))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingBackpack() {
		return ((T (*)(void *))(Il2CppBase() + 0x17508E4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingBanner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750A80))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingBeard() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750C1C))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingCharm() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750DB8))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingChest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1750F54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingClass() {
		return ((T (*)(void *))(Il2CppBase() + 0x17510F0))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingClothes() {
		return ((T (*)(void *))(Il2CppBase() + 0x175128C))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingCorpse() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751428))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingFace() {
		return ((T (*)(void *))(Il2CppBase() + 0x17515C4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingFeet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751760))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingHairColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x17518FC))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingHair() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751A98))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingHead() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751C34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingLegs() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751DD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingMount() {
		return ((T (*)(void *))(Il2CppBase() + 0x1751F74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingMountSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752114))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingMountSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0x17522B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingMountSkill3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752454))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPassiveSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0x17525F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPet() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752794))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPetSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752934))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPetSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752AD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPetSkill3() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752C74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingPocket() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752E14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingRunes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1752FB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingSkill1() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753154))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingSkill2() {
		return ((T (*)(void *))(Il2CppBase() + 0x17532F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingSkinColor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753494))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArmingWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753634))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArrivalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x17537D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ArrowMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753974))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Aura() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753B14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoAbility() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753CB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoDestruction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753E54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoFarm() {
		return ((T (*)(void *))(Il2CppBase() + 0x1753FF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoLock() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754194))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoMagicSpawner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754334))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x17544D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_AutoOpenDoor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754674))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Avatar() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754814))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BackPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x17549B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BackTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754B54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BattleId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754CF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BattleStatisticType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1754E94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Bawl() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755034))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Bind() {
		return ((T (*)(void *))(Il2CppBase() + 0x17551D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BonusMaxHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755374))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BossOpenResources() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755514))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BossOpenState() {
		return ((T (*)(void *))(Il2CppBase() + 0x17556B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BuildGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755854))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_BuildPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x17559F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Builder() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755B94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CampBath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755D34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CanTravel() {
		return ((T (*)(void *))(Il2CppBase() + 0x1755ED4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CashbackCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756074))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Cell() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756214))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Chance() {
		return ((T (*)(void *))(Il2CppBase() + 0x17563B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ChestMarker() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756554))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ChestOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x17566F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Childs() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756894))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ChooseCreature() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756A34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Clan() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756BD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ClanPersonal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756D74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ClanPersonalGenerator() {
		return ((T (*)(void *))(Il2CppBase() + 0x1756F14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Click() {
		return ((T (*)(void *))(Il2CppBase() + 0x17570B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ClosedDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757254))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Coins() {
		return ((T (*)(void *))(Il2CppBase() + 0x17573F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CorpseDestruction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757594))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CostumeChest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757734))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CostumeHead() {
		return ((T (*)(void *))(Il2CppBase() + 0x17578D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CostumeLegs() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757A74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Count() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757C14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Cover() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757DB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CoverRadius() {
		return ((T (*)(void *))(Il2CppBase() + 0x1757F54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CraftBoost() {
		return ((T (*)(void *))(Il2CppBase() + 0x17580F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CraftWork() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758294))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CreateInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758434))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CreateUniqueInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x17585D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CreationTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758774))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Creep() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758914))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CurrentRoof() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758AB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CustomStore() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758C54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CyclicPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758DF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CyclicPremiumTokens() {
		return ((T (*)(void *))(Il2CppBase() + 0x1758F94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_CyclicYmirSoul() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759134))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DamageCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x17592D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DamageStat() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759474))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DamageType() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759614))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DefaultGrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x17597B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DefaultVectorField() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759954))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Delay() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759AF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Description() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759C94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DestroyOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759E34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Difficulty() {
		return ((T (*)(void *))(Il2CppBase() + 0x1759FD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Disabled() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A174))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Distance() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A314))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DoorWall() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A4B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Dragged() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A654))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_DurabilityDamage() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A7F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Duration() {
		return ((T (*)(void *))(Il2CppBase() + 0x175A994))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EndTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x175AB34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Energy() {
		return ((T (*)(void *))(Il2CppBase() + 0x175ACD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EnterCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x175AE74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EnterQuests() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B014))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EventBpPointsA() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B1B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EventBpPointsB() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B354))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EventBpPointsC() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B4F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_EventTag() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B694))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Explode() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B834))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ExplodeOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x175B9D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ExternalInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x175BB74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ExtraLevelCap() {
		return ((T (*)(void *))(Il2CppBase() + 0x175BD14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ExtractWork() {
		return ((T (*)(void *))(Il2CppBase() + 0x175BEB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_FakeBase() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C054))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_FakeClanName() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C1F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Floor() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C394))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Fog() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C534))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Follow() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C6D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_FollowTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x175C874))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GameData() {
		return ((T (*)(void *))(Il2CppBase() + 0x175CA14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Gender() {
		return ((T (*)(void *))(Il2CppBase() + 0x175CBB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GenerateWall() {
		return ((T (*)(void *))(Il2CppBase() + 0x175CD54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GiantReputation() {
		return ((T (*)(void *))(Il2CppBase() + 0x175CEF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Grade() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D094))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GradeFromLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D234))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GradeHide() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D3D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GradeView() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D574))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GroupChild() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D714))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Group() {
		return ((T (*)(void *))(Il2CppBase() + 0x175D8B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GuildBossCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x175DA54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GuildCoins() {
		return ((T (*)(void *))(Il2CppBase() + 0x175DBF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Guild() {
		return ((T (*)(void *))(Il2CppBase() + 0x175DD94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_GuildTag() {
		return ((T (*)(void *))(Il2CppBase() + 0x175DF34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_HashPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E0D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_HealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E274))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_HideBag() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E414))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Hide() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E5B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_HideHead() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E754))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_HidePet() {
		return ((T (*)(void *))(Il2CppBase() + 0x175E8F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Icon() {
		return ((T (*)(void *))(Il2CppBase() + 0x175EA94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Id() {
		return ((T (*)(void *))(Il2CppBase() + 0x175EC34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_IgnoreDoorVectorField() {
		return ((T (*)(void *))(Il2CppBase() + 0x175EDD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Influence() {
		return ((T (*)(void *))(Il2CppBase() + 0x175EF74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_InteractTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F114))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Inventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F2B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_InventoryContent() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F454))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_InventoryLocked() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F5F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_KilledBy() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F794))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LastActionTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x175F934))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LastDamager() {
		return ((T (*)(void *))(Il2CppBase() + 0x175FAD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Level() {
		return ((T (*)(void *))(Il2CppBase() + 0x175FC74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LobbyType() {
		return ((T (*)(void *))(Il2CppBase() + 0x175FE14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LocationRegion() {
		return ((T (*)(void *))(Il2CppBase() + 0x175FFB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LocationRegionEnter() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760154))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LockController() {
		return ((T (*)(void *))(Il2CppBase() + 0x17602F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LoopSound() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760494))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_LootStatus() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760634))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MagicSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x17607D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MagicSpawner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760974))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MagicTriggerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760B14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MapNotify() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760CB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MapPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760E54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MapPathView() {
		return ((T (*)(void *))(Il2CppBase() + 0x1760FF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MapSpeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761194))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MaxHealthCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761334))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MaxHealth() {
		return ((T (*)(void *))(Il2CppBase() + 0x17614D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MetabolismSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761674))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MinimapArrow() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761814))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Minimap() {
		return ((T (*)(void *))(Il2CppBase() + 0x17619B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MinimapPing() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761B54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Mining() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761CF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Modifiers() {
		return ((T (*)(void *))(Il2CppBase() + 0x1761E94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MountInventoryContent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762034))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MountInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0x17621D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MountInvetory() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762374))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MountTrader() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762514))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MoveToTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x17626B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_MoveToTargetPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762854))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NeedQuests() {
		return ((T (*)(void *))(Il2CppBase() + 0x17629F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NeedRemoveEmpty() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762B94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NextWayPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762D34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NoAutoMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x1762ED4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NotAggressive() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763074))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NotInteractable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763214))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NotPursuitTarget() {
		return ((T (*)(void *))(Il2CppBase() + 0x17633B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_NotSelectable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763554))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ObjectTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x17636F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_OnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763894))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_OnEmptyWorld() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763A34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Orientation() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763BD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Owner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763D74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_OwnerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1763F14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Parent() {
		return ((T (*)(void *))(Il2CppBase() + 0x17640B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Patrol() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764254))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Period() {
		return ((T (*)(void *))(Il2CppBase() + 0x17643F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Personal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764594))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PersonalGenerator() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764734))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PersonalKey() {
		return ((T (*)(void *))(Il2CppBase() + 0x17648D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PetInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764A74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Phases() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764C14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PlaceOwner() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764DB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Player() {
		return ((T (*)(void *))(Il2CppBase() + 0x1764F54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PlayerId() {
		return ((T (*)(void *))(Il2CppBase() + 0x17650F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PlayerKill() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765294))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PlayerName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765434))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PointLabel() {
		return ((T (*)(void *))(Il2CppBase() + 0x17655D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Points() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765774))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Portal() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765914))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PortalsPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765AB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Position() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765C54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PositionPlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765DF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PositionTransaction() {
		return ((T (*)(void *))(Il2CppBase() + 0x1765F94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Power() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766134))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Production() {
		return ((T (*)(void *))(Il2CppBase() + 0x17662D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ProductionWork() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766474))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Pursuit() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766614))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_PursuitGroup() {
		return ((T (*)(void *))(Il2CppBase() + 0x17667B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_QuestsSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766954))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RandomClanName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766AF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RandomName() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766C94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Rarity() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766E34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RavenNest() {
		return ((T (*)(void *))(Il2CppBase() + 0x1766FD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RavenNestStats() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767174))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Required() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767314))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ResetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x17674B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RespawnPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767654))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Rewards() {
		return ((T (*)(void *))(Il2CppBase() + 0x17677F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Roaming() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767994))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Roof() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767B34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Room() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767CD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RoomsDoor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1767E74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RotateTo() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768014))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Rotation() {
		return ((T (*)(void *))(Il2CppBase() + 0x17681B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_RuneInventoryId() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768354))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SaveAction() {
		return ((T (*)(void *))(Il2CppBase() + 0x17684F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Saveable() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768694))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SaviorPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768834))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Scout() {
		return ((T (*)(void *))(Il2CppBase() + 0x17689D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SeasonPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768B74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ServerPosition() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768D14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ServerTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x1768EB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Shared() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769054))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ShowCondition() {
		return ((T (*)(void *))(Il2CppBase() + 0x17691F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Silver() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769394))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SinglePlace() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769534))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SlotCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x17696D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SpawnAndDestroy() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769874))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_SpawnOnDeath() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769A14))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Spectator() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769BB4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Speed() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769D54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_StateView() {
		return ((T (*)(void *))(Il2CppBase() + 0x1769EF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Statue() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A094))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_StatusBarView() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A234))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Team() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A3D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_TenacityCoef() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A574))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Tick() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A714))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Tickets() {
		return ((T (*)(void *))(Il2CppBase() + 0x176A8B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_TicksCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x176AA54))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_TimeTrigger() {
		return ((T (*)(void *))(Il2CppBase() + 0x176ABF4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_TimerEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x176AD94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_ToLocation() {
		return ((T (*)(void *))(Il2CppBase() + 0x176AF34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Transport() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B0D4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_TriggerView() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B274))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_UniqueLookup() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B414))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Unlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B5B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_UnlockDuration() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B754))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Unlocked() {
		return ((T (*)(void *))(Il2CppBase() + 0x176B8F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Upgrade() {
		return ((T (*)(void *))(Il2CppBase() + 0x176BA94))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_UpgradeEffect() {
		return ((T (*)(void *))(Il2CppBase() + 0x176BC34))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_VIPPoints() {
		return ((T (*)(void *))(Il2CppBase() + 0x176BDD4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_Velocity() {
		return ((T (*)(void *))(Il2CppBase() + 0x176BF74))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_View() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C114))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_WaveIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C2B4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_WaveItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C454))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_WaveState() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C5F4))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_WavesEvent() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C794))(0);
	}
	template <typename T = IMatcher1GameEntity*>*> static T get_WayPoint() {
		return ((T (*)(void *))(Il2CppBase() + 0x176C934))(0);
	}
	template <typename T = IAllOfMatcher1GameEntity*>*> static T AllOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x176CAD4))(0, indices);
	}
	template <typename T = IAllOfMatcher1GameEntity*>*> static T AllOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x176CB4C))(0, matchers);
	}
	template <typename T = IAnyOfMatcher1GameEntity*>*> static T AnyOf(Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x176CBC4))(0, indices);
	}
	template <typename T = IAnyOfMatcher1GameEntity*>*> static T AnyOf_1(Il2CppArray<uintptr_t>* matchers) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x176CC3C))(0, matchers);
	}

};

