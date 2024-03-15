#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameMatcher"));
	}

	 static IMatcher1GameEntity*>*& _matcherAABB() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1GameEntity*>*& _matcherAFKMove() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1GameEntity*>*& _matcherAFKTrigger() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1GameEntity*>*& _matcherAIBattleSource() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1GameEntity*>*& _matcherAIBattleState() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1GameEntity*>*& _matcherAIEvadeTime() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1GameEntity*>*& _matcherAIPocketsState() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1GameEntity*>*& _matcherActive() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1GameEntity*>*& _matcherAddExperience() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1GameEntity*>*& _matcherAddRaidKarma() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1GameEntity*>*& _matcherAddStoreExperience() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1GameEntity*>*& _matcherAggroRadius() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1GameEntity*>*& _matcherAggroTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1GameEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1GameEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1GameEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1GameEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1GameEntity*>*& _matcherAngularSpeed() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1GameEntity*>*& _matcherAnimator() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1GameEntity*>*& _matcherApplyOnTargetActiveEffect() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingBackpack() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingBanner() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingBeard() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingCharm() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingChest() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingClass() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingClothes() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingCorpse() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingFace() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingFeet() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingHairColor() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingHair() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingHead() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingLegs() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingMount() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingMountSkill1() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingMountSkill2() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingMountSkill3() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPassiveSkill1() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPet() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPetSkill1() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPetSkill2() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPetSkill3() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingPocket() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingRunes() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingSkill1() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingSkill2() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingSkinColor() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1GameEntity*>*& _matcherArmingWeapon() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1GameEntity*>*& _matcherArrivalTime() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1GameEntity*>*& _matcherArrowMarker() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1GameEntity*>*& _matcherAura() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoAbility() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoDestruction() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoFarm() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoLock() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoMagicSpawner() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoMode() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1GameEntity*>*& _matcherAutoOpenDoor() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1GameEntity*>*& _matcherAvatar() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1GameEntity*>*& _matcherBackPoint() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1GameEntity*>*& _matcherBackTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1GameEntity*>*& _matcherBattleId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1GameEntity*>*& _matcherBattleStatisticType() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1GameEntity*>*& _matcherBawl() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1GameEntity*>*& _matcherBind() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1GameEntity*>*& _matcherBonusMaxHealth() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1GameEntity*>*& _matcherBossOpenResources() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1GameEntity*>*& _matcherBossOpenState() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1GameEntity*>*& _matcherBuildGroup() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1GameEntity*>*& _matcherBuildPlace() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1GameEntity*>*& _matcherBuilder() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1GameEntity*>*& _matcherCampBath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1GameEntity*>*& _matcherCanTravel() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1GameEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1GameEntity*>*& _matcherCell() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1GameEntity*>*& _matcherChance() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1GameEntity*>*& _matcherChestMarker() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1GameEntity*>*& _matcherChestOnDeath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1GameEntity*>*& _matcherChilds() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1GameEntity*>*& _matcherChooseCreature() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1GameEntity*>*& _matcherClan() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1GameEntity*>*& _matcherClanPersonal() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1GameEntity*>*& _matcherClanPersonalGenerator() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1GameEntity*>*& _matcherClick() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1GameEntity*>*& _matcherClosedDuration() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1GameEntity*>*& _matcherCoins() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1GameEntity*>*& _matcherCorpseDestruction() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1GameEntity*>*& _matcherCostumeChest() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1GameEntity*>*& _matcherCostumeHead() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1GameEntity*>*& _matcherCostumeLegs() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1GameEntity*>*& _matcherCount() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1GameEntity*>*& _matcherCover() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1GameEntity*>*& _matcherCoverRadius() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1GameEntity*>*& _matcherCraftBoost() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1GameEntity*>*& _matcherCraftWork() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1GameEntity*>*& _matcherCreateInventory() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1GameEntity*>*& _matcherCreateUniqueInventory() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1GameEntity*>*& _matcherCreationTime() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1GameEntity*>*& _matcherCreep() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1GameEntity*>*& _matcherCurrentRoof() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1GameEntity*>*& _matcherCustomStore() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1GameEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1GameEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1GameEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1GameEntity*>*& _matcherDamageCoef() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1GameEntity*>*& _matcherDamageStat() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1GameEntity*>*& _matcherDamageType() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1GameEntity*>*& _matcherDefaultGrade() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1GameEntity*>*& _matcherDefaultVectorField() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1GameEntity*>*& _matcherDelay() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1GameEntity*>*& _matcherDescription() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1GameEntity*>*& _matcherDestroyOnDeath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1GameEntity*>*& _matcherDifficulty() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1GameEntity*>*& _matcherDisabled() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1GameEntity*>*& _matcherDistance() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1GameEntity*>*& _matcherDoorWall() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1GameEntity*>*& _matcherDragged() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1GameEntity*>*& _matcherDurabilityDamage() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1GameEntity*>*& _matcherDuration() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1GameEntity*>*& _matcherEndTime() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1GameEntity*>*& _matcherEnergy() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1GameEntity*>*& _matcherEnterCondition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1GameEntity*>*& _matcherEnterQuests() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1GameEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1GameEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1GameEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1GameEntity*>*& _matcherEventTag() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1GameEntity*>*& _matcherExplode() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1GameEntity*>*& _matcherExplodeOnDeath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1GameEntity*>*& _matcherExternalInventory() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1GameEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1GameEntity*>*& _matcherExtractWork() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1GameEntity*>*& _matcherFakeBase() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1GameEntity*>*& _matcherFakeClanName() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1GameEntity*>*& _matcherFloor() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1GameEntity*>*& _matcherFog() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1GameEntity*>*& _matcherFollow() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1GameEntity*>*& _matcherFollowTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1GameEntity*>*& _matcherGameData() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1GameEntity*>*& _matcherGender() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1GameEntity*>*& _matcherGenerateWall() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1GameEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1GameEntity*>*& _matcherGrade() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1GameEntity*>*& _matcherGradeFromLocation() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1GameEntity*>*& _matcherGradeHide() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1GameEntity*>*& _matcherGradeView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1GameEntity*>*& _matcherGroupChild() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1GameEntity*>*& _matcherGroup() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1GameEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}
	 static IMatcher1GameEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B0);
	}
	 static IMatcher1GameEntity*>*& _matcherGuild() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4B8);
	}
	 static IMatcher1GameEntity*>*& _matcherGuildTag() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C0);
	}
	 static IMatcher1GameEntity*>*& _matcherHashPosition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4C8);
	}
	 static IMatcher1GameEntity*>*& _matcherHealthCoef() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D0);
	}
	 static IMatcher1GameEntity*>*& _matcherHideBag() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4D8);
	}
	 static IMatcher1GameEntity*>*& _matcherHide() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E0);
	}
	 static IMatcher1GameEntity*>*& _matcherHideHead() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4E8);
	}
	 static IMatcher1GameEntity*>*& _matcherHidePet() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F0);
	}
	 static IMatcher1GameEntity*>*& _matcherIcon() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4F8);
	}
	 static IMatcher1GameEntity*>*& _matcherId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x500);
	}
	 static IMatcher1GameEntity*>*& _matcherIgnoreDoorVectorField() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x508);
	}
	 static IMatcher1GameEntity*>*& _matcherInfluence() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x510);
	}
	 static IMatcher1GameEntity*>*& _matcherInteractTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x518);
	}
	 static IMatcher1GameEntity*>*& _matcherInventory() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x520);
	}
	 static IMatcher1GameEntity*>*& _matcherInventoryContent() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x528);
	}
	 static IMatcher1GameEntity*>*& _matcherInventoryLocked() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x530);
	}
	 static IMatcher1GameEntity*>*& _matcherKilledBy() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x538);
	}
	 static IMatcher1GameEntity*>*& _matcherLastActionTick() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x540);
	}
	 static IMatcher1GameEntity*>*& _matcherLastDamager() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x548);
	}
	 static IMatcher1GameEntity*>*& _matcherLevel() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x550);
	}
	 static IMatcher1GameEntity*>*& _matcherLobbyType() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x558);
	}
	 static IMatcher1GameEntity*>*& _matcherLocationRegion() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x560);
	}
	 static IMatcher1GameEntity*>*& _matcherLocationRegionEnter() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x568);
	}
	 static IMatcher1GameEntity*>*& _matcherLockController() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x570);
	}
	 static IMatcher1GameEntity*>*& _matcherLoopSound() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x578);
	}
	 static IMatcher1GameEntity*>*& _matcherLootStatus() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x580);
	}
	 static IMatcher1GameEntity*>*& _matcherMagicSave() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x588);
	}
	 static IMatcher1GameEntity*>*& _matcherMagicSpawner() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x590);
	}
	 static IMatcher1GameEntity*>*& _matcherMagicTriggerId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x598);
	}
	 static IMatcher1GameEntity*>*& _matcherMapNotify() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A0);
	}
	 static IMatcher1GameEntity*>*& _matcherMapPath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5A8);
	}
	 static IMatcher1GameEntity*>*& _matcherMapPathView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B0);
	}
	 static IMatcher1GameEntity*>*& _matcherMapSpeed() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5B8);
	}
	 static IMatcher1GameEntity*>*& _matcherMaxHealthCoef() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C0);
	}
	 static IMatcher1GameEntity*>*& _matcherMaxHealth() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5C8);
	}
	 static IMatcher1GameEntity*>*& _matcherMetabolismSetting() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D0);
	}
	 static IMatcher1GameEntity*>*& _matcherMinimapArrow() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5D8);
	}
	 static IMatcher1GameEntity*>*& _matcherMinimap() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E0);
	}
	 static IMatcher1GameEntity*>*& _matcherMinimapPing() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5E8);
	}
	 static IMatcher1GameEntity*>*& _matcherMining() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F0);
	}
	 static IMatcher1GameEntity*>*& _matcherModifiers() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x5F8);
	}
	 static IMatcher1GameEntity*>*& _matcherMountInventoryContent() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x600);
	}
	 static IMatcher1GameEntity*>*& _matcherMountInventoryId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x608);
	}
	 static IMatcher1GameEntity*>*& _matcherMountInvetory() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x610);
	}
	 static IMatcher1GameEntity*>*& _matcherMountTrader() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x618);
	}
	 static IMatcher1GameEntity*>*& _matcherMoveToTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x620);
	}
	 static IMatcher1GameEntity*>*& _matcherMoveToTargetPosition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x628);
	}
	 static IMatcher1GameEntity*>*& _matcherNeedQuests() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x630);
	}
	 static IMatcher1GameEntity*>*& _matcherNeedRemoveEmpty() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x638);
	}
	 static IMatcher1GameEntity*>*& _matcherNextWayPoint() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x640);
	}
	 static IMatcher1GameEntity*>*& _matcherNoAutoMode() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x648);
	}
	 static IMatcher1GameEntity*>*& _matcherNotAggressive() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x650);
	}
	 static IMatcher1GameEntity*>*& _matcherNotInteractable() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x658);
	}
	 static IMatcher1GameEntity*>*& _matcherNotPursuitTarget() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x660);
	}
	 static IMatcher1GameEntity*>*& _matcherNotSelectable() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x668);
	}
	 static IMatcher1GameEntity*>*& _matcherObjectTrigger() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x670);
	}
	 static IMatcher1GameEntity*>*& _matcherOnDeath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x678);
	}
	 static IMatcher1GameEntity*>*& _matcherOnEmptyWorld() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x680);
	}
	 static IMatcher1GameEntity*>*& _matcherOrientation() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x688);
	}
	 static IMatcher1GameEntity*>*& _matcherOwner() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x690);
	}
	 static IMatcher1GameEntity*>*& _matcherOwnerName() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x698);
	}
	 static IMatcher1GameEntity*>*& _matcherParent() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A0);
	}
	 static IMatcher1GameEntity*>*& _matcherPatrol() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6A8);
	}
	 static IMatcher1GameEntity*>*& _matcherPeriod() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B0);
	}
	 static IMatcher1GameEntity*>*& _matcherPersonal() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6B8);
	}
	 static IMatcher1GameEntity*>*& _matcherPersonalGenerator() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C0);
	}
	 static IMatcher1GameEntity*>*& _matcherPersonalKey() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6C8);
	}
	 static IMatcher1GameEntity*>*& _matcherPetInventoryId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D0);
	}
	 static IMatcher1GameEntity*>*& _matcherPhases() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6D8);
	}
	 static IMatcher1GameEntity*>*& _matcherPlaceOwner() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E0);
	}
	 static IMatcher1GameEntity*>*& _matcherPlayer() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6E8);
	}
	 static IMatcher1GameEntity*>*& _matcherPlayerId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F0);
	}
	 static IMatcher1GameEntity*>*& _matcherPlayerKill() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x6F8);
	}
	 static IMatcher1GameEntity*>*& _matcherPlayerName() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x700);
	}
	 static IMatcher1GameEntity*>*& _matcherPointLabel() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x708);
	}
	 static IMatcher1GameEntity*>*& _matcherPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x710);
	}
	 static IMatcher1GameEntity*>*& _matcherPortal() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x718);
	}
	 static IMatcher1GameEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x720);
	}
	 static IMatcher1GameEntity*>*& _matcherPosition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x728);
	}
	 static IMatcher1GameEntity*>*& _matcherPositionPlace() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x730);
	}
	 static IMatcher1GameEntity*>*& _matcherPositionTransaction() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x738);
	}
	 static IMatcher1GameEntity*>*& _matcherPower() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x740);
	}
	 static IMatcher1GameEntity*>*& _matcherProduction() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x748);
	}
	 static IMatcher1GameEntity*>*& _matcherProductionWork() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x750);
	}
	 static IMatcher1GameEntity*>*& _matcherPursuit() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x758);
	}
	 static IMatcher1GameEntity*>*& _matcherPursuitGroup() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x760);
	}
	 static IMatcher1GameEntity*>*& _matcherQuestsSave() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x768);
	}
	 static IMatcher1GameEntity*>*& _matcherRandomClanName() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x770);
	}
	 static IMatcher1GameEntity*>*& _matcherRandomName() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x778);
	}
	 static IMatcher1GameEntity*>*& _matcherRarity() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x780);
	}
	 static IMatcher1GameEntity*>*& _matcherRavenNest() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x788);
	}
	 static IMatcher1GameEntity*>*& _matcherRavenNestStats() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x790);
	}
	 static IMatcher1GameEntity*>*& _matcherRequired() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x798);
	}
	 static IMatcher1GameEntity*>*& _matcherResetTime() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A0);
	}
	 static IMatcher1GameEntity*>*& _matcherRespawnPoint() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7A8);
	}
	 static IMatcher1GameEntity*>*& _matcherRewards() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B0);
	}
	 static IMatcher1GameEntity*>*& _matcherRoaming() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7B8);
	}
	 static IMatcher1GameEntity*>*& _matcherRoof() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C0);
	}
	 static IMatcher1GameEntity*>*& _matcherRoom() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7C8);
	}
	 static IMatcher1GameEntity*>*& _matcherRoomsDoor() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D0);
	}
	 static IMatcher1GameEntity*>*& _matcherRotateTo() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7D8);
	}
	 static IMatcher1GameEntity*>*& _matcherRotation() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E0);
	}
	 static IMatcher1GameEntity*>*& _matcherRuneInventoryId() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7E8);
	}
	 static IMatcher1GameEntity*>*& _matcherSaveAction() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F0);
	}
	 static IMatcher1GameEntity*>*& _matcherSaveable() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x7F8);
	}
	 static IMatcher1GameEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x800);
	}
	 static IMatcher1GameEntity*>*& _matcherScout() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x808);
	}
	 static IMatcher1GameEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x810);
	}
	 static IMatcher1GameEntity*>*& _matcherServerPosition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x818);
	}
	 static IMatcher1GameEntity*>*& _matcherServerTick() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x820);
	}
	 static IMatcher1GameEntity*>*& _matcherShared() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x828);
	}
	 static IMatcher1GameEntity*>*& _matcherShowCondition() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x830);
	}
	 static IMatcher1GameEntity*>*& _matcherSilver() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x838);
	}
	 static IMatcher1GameEntity*>*& _matcherSinglePlace() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x840);
	}
	 static IMatcher1GameEntity*>*& _matcherSlotCount() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x848);
	}
	 static IMatcher1GameEntity*>*& _matcherSpawnAndDestroy() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x850);
	}
	 static IMatcher1GameEntity*>*& _matcherSpawnOnDeath() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x858);
	}
	 static IMatcher1GameEntity*>*& _matcherSpectator() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x860);
	}
	 static IMatcher1GameEntity*>*& _matcherSpeed() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x868);
	}
	 static IMatcher1GameEntity*>*& _matcherStateView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x870);
	}
	 static IMatcher1GameEntity*>*& _matcherStatue() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x878);
	}
	 static IMatcher1GameEntity*>*& _matcherStatusBarView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x880);
	}
	 static IMatcher1GameEntity*>*& _matcherTeam() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x888);
	}
	 static IMatcher1GameEntity*>*& _matcherTenacityCoef() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x890);
	}
	 static IMatcher1GameEntity*>*& _matcherTick() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x898);
	}
	 static IMatcher1GameEntity*>*& _matcherTickets() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A0);
	}
	 static IMatcher1GameEntity*>*& _matcherTicksCount() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8A8);
	}
	 static IMatcher1GameEntity*>*& _matcherTimeTrigger() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B0);
	}
	 static IMatcher1GameEntity*>*& _matcherTimerEffect() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8B8);
	}
	 static IMatcher1GameEntity*>*& _matcherToLocation() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C0);
	}
	 static IMatcher1GameEntity*>*& _matcherTransport() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8C8);
	}
	 static IMatcher1GameEntity*>*& _matcherTriggerView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D0);
	}
	 static IMatcher1GameEntity*>*& _matcherUniqueLookup() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8D8);
	}
	 static IMatcher1GameEntity*>*& _matcherUnlock() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E0);
	}
	 static IMatcher1GameEntity*>*& _matcherUnlockDuration() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8E8);
	}
	 static IMatcher1GameEntity*>*& _matcherUnlocked() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F0);
	}
	 static IMatcher1GameEntity*>*& _matcherUpgrade() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8F8);
	}
	 static IMatcher1GameEntity*>*& _matcherUpgradeEffect() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x900);
	}
	 static IMatcher1GameEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x908);
	}
	 static IMatcher1GameEntity*>*& _matcherVelocity() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x910);
	}
	 static IMatcher1GameEntity*>*& _matcherView() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x918);
	}
	 static IMatcher1GameEntity*>*& _matcherWaveIndex() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x920);
	}
	 static IMatcher1GameEntity*>*& _matcherWaveItem() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x928);
	}
	 static IMatcher1GameEntity*>*& _matcherWaveState() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x930);
	}
	 static IMatcher1GameEntity*>*& _matcherWavesEvent() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x938);
	}
	 static IMatcher1GameEntity*>*& _matcherWayPoint() {
		return *(IMatcher1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x940);
	}

	 static IMatcher1GameEntity*>* get_AABB() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174E8D0))(0);
	}
	 static IMatcher1GameEntity*>* get_AFKMove() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174EA50))(0);
	}
	 static IMatcher1GameEntity*>* get_AFKTrigger() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174EBEC))(0);
	}
	 static IMatcher1GameEntity*>* get_AIBattleSource() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174ED88))(0);
	}
	 static IMatcher1GameEntity*>* get_AIBattleState() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174EF24))(0);
	}
	 static IMatcher1GameEntity*>* get_AIEvadeTime() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F0C0))(0);
	}
	 static IMatcher1GameEntity*>* get_AIPocketsState() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F25C))(0);
	}
	 static IMatcher1GameEntity*>* get_Active() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F3F8))(0);
	}
	 static IMatcher1GameEntity*>* get_AddExperience() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F594))(0);
	}
	 static IMatcher1GameEntity*>* get_AddRaidKarma() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F730))(0);
	}
	 static IMatcher1GameEntity*>* get_AddStoreExperience() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174F8CC))(0);
	}
	 static IMatcher1GameEntity*>* get_AggroRadius() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174FA68))(0);
	}
	 static IMatcher1GameEntity*>* get_AggroTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174FC04))(0);
	}
	 static IMatcher1GameEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174FDA0))(0);
	}
	 static IMatcher1GameEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x174FF3C))(0);
	}
	 static IMatcher1GameEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17500D8))(0);
	}
	 static IMatcher1GameEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750274))(0);
	}
	 static IMatcher1GameEntity*>* get_AngularSpeed() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750410))(0);
	}
	 static IMatcher1GameEntity*>* get_Animator() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17505AC))(0);
	}
	 static IMatcher1GameEntity*>* get_ApplyOnTargetActiveEffect() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750748))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingBackpack() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17508E4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingBanner() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750A80))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingBeard() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750C1C))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingCharm() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750DB8))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingChest() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1750F54))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingClass() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17510F0))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingClothes() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175128C))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingCorpse() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751428))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingFace() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17515C4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingFeet() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751760))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingHairColor() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17518FC))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingHair() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751A98))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingHead() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751C34))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingLegs() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751DD4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingMount() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1751F74))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingMountSkill1() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752114))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingMountSkill2() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17522B4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingMountSkill3() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752454))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPassiveSkill1() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17525F4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPet() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752794))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPetSkill1() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752934))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPetSkill2() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752AD4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPetSkill3() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752C74))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingPocket() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752E14))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingRunes() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1752FB4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingSkill1() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753154))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingSkill2() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17532F4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingSkinColor() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753494))(0);
	}
	 static IMatcher1GameEntity*>* get_ArmingWeapon() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753634))(0);
	}
	 static IMatcher1GameEntity*>* get_ArrivalTime() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17537D4))(0);
	}
	 static IMatcher1GameEntity*>* get_ArrowMarker() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753974))(0);
	}
	 static IMatcher1GameEntity*>* get_Aura() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753B14))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoAbility() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753CB4))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoDestruction() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753E54))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoFarm() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1753FF4))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoLock() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754194))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoMagicSpawner() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754334))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoMode() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17544D4))(0);
	}
	 static IMatcher1GameEntity*>* get_AutoOpenDoor() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754674))(0);
	}
	 static IMatcher1GameEntity*>* get_Avatar() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754814))(0);
	}
	 static IMatcher1GameEntity*>* get_BackPoint() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17549B4))(0);
	}
	 static IMatcher1GameEntity*>* get_BackTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754B54))(0);
	}
	 static IMatcher1GameEntity*>* get_BattleId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754CF4))(0);
	}
	 static IMatcher1GameEntity*>* get_BattleStatisticType() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1754E94))(0);
	}
	 static IMatcher1GameEntity*>* get_Bawl() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755034))(0);
	}
	 static IMatcher1GameEntity*>* get_Bind() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17551D4))(0);
	}
	 static IMatcher1GameEntity*>* get_BonusMaxHealth() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755374))(0);
	}
	 static IMatcher1GameEntity*>* get_BossOpenResources() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755514))(0);
	}
	 static IMatcher1GameEntity*>* get_BossOpenState() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17556B4))(0);
	}
	 static IMatcher1GameEntity*>* get_BuildGroup() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755854))(0);
	}
	 static IMatcher1GameEntity*>* get_BuildPlace() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17559F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Builder() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755B94))(0);
	}
	 static IMatcher1GameEntity*>* get_CampBath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755D34))(0);
	}
	 static IMatcher1GameEntity*>* get_CanTravel() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1755ED4))(0);
	}
	 static IMatcher1GameEntity*>* get_CashbackCoins() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756074))(0);
	}
	 static IMatcher1GameEntity*>* get_Cell() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756214))(0);
	}
	 static IMatcher1GameEntity*>* get_Chance() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17563B4))(0);
	}
	 static IMatcher1GameEntity*>* get_ChestMarker() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756554))(0);
	}
	 static IMatcher1GameEntity*>* get_ChestOnDeath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17566F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Childs() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756894))(0);
	}
	 static IMatcher1GameEntity*>* get_ChooseCreature() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756A34))(0);
	}
	 static IMatcher1GameEntity*>* get_Clan() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756BD4))(0);
	}
	 static IMatcher1GameEntity*>* get_ClanPersonal() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756D74))(0);
	}
	 static IMatcher1GameEntity*>* get_ClanPersonalGenerator() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1756F14))(0);
	}
	 static IMatcher1GameEntity*>* get_Click() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17570B4))(0);
	}
	 static IMatcher1GameEntity*>* get_ClosedDuration() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757254))(0);
	}
	 static IMatcher1GameEntity*>* get_Coins() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17573F4))(0);
	}
	 static IMatcher1GameEntity*>* get_CorpseDestruction() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757594))(0);
	}
	 static IMatcher1GameEntity*>* get_CostumeChest() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757734))(0);
	}
	 static IMatcher1GameEntity*>* get_CostumeHead() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17578D4))(0);
	}
	 static IMatcher1GameEntity*>* get_CostumeLegs() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757A74))(0);
	}
	 static IMatcher1GameEntity*>* get_Count() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757C14))(0);
	}
	 static IMatcher1GameEntity*>* get_Cover() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757DB4))(0);
	}
	 static IMatcher1GameEntity*>* get_CoverRadius() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1757F54))(0);
	}
	 static IMatcher1GameEntity*>* get_CraftBoost() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17580F4))(0);
	}
	 static IMatcher1GameEntity*>* get_CraftWork() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758294))(0);
	}
	 static IMatcher1GameEntity*>* get_CreateInventory() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758434))(0);
	}
	 static IMatcher1GameEntity*>* get_CreateUniqueInventory() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17585D4))(0);
	}
	 static IMatcher1GameEntity*>* get_CreationTime() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758774))(0);
	}
	 static IMatcher1GameEntity*>* get_Creep() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758914))(0);
	}
	 static IMatcher1GameEntity*>* get_CurrentRoof() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758AB4))(0);
	}
	 static IMatcher1GameEntity*>* get_CustomStore() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758C54))(0);
	}
	 static IMatcher1GameEntity*>* get_CyclicPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758DF4))(0);
	}
	 static IMatcher1GameEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1758F94))(0);
	}
	 static IMatcher1GameEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759134))(0);
	}
	 static IMatcher1GameEntity*>* get_DamageCoef() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17592D4))(0);
	}
	 static IMatcher1GameEntity*>* get_DamageStat() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759474))(0);
	}
	 static IMatcher1GameEntity*>* get_DamageType() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759614))(0);
	}
	 static IMatcher1GameEntity*>* get_DefaultGrade() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17597B4))(0);
	}
	 static IMatcher1GameEntity*>* get_DefaultVectorField() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759954))(0);
	}
	 static IMatcher1GameEntity*>* get_Delay() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759AF4))(0);
	}
	 static IMatcher1GameEntity*>* get_Description() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759C94))(0);
	}
	 static IMatcher1GameEntity*>* get_DestroyOnDeath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759E34))(0);
	}
	 static IMatcher1GameEntity*>* get_Difficulty() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1759FD4))(0);
	}
	 static IMatcher1GameEntity*>* get_Disabled() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A174))(0);
	}
	 static IMatcher1GameEntity*>* get_Distance() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A314))(0);
	}
	 static IMatcher1GameEntity*>* get_DoorWall() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A4B4))(0);
	}
	 static IMatcher1GameEntity*>* get_Dragged() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A654))(0);
	}
	 static IMatcher1GameEntity*>* get_DurabilityDamage() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A7F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Duration() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175A994))(0);
	}
	 static IMatcher1GameEntity*>* get_EndTime() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175AB34))(0);
	}
	 static IMatcher1GameEntity*>* get_Energy() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175ACD4))(0);
	}
	 static IMatcher1GameEntity*>* get_EnterCondition() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175AE74))(0);
	}
	 static IMatcher1GameEntity*>* get_EnterQuests() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B014))(0);
	}
	 static IMatcher1GameEntity*>* get_EventBpPointsA() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B1B4))(0);
	}
	 static IMatcher1GameEntity*>* get_EventBpPointsB() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B354))(0);
	}
	 static IMatcher1GameEntity*>* get_EventBpPointsC() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B4F4))(0);
	}
	 static IMatcher1GameEntity*>* get_EventTag() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B694))(0);
	}
	 static IMatcher1GameEntity*>* get_Explode() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B834))(0);
	}
	 static IMatcher1GameEntity*>* get_ExplodeOnDeath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175B9D4))(0);
	}
	 static IMatcher1GameEntity*>* get_ExternalInventory() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175BB74))(0);
	}
	 static IMatcher1GameEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175BD14))(0);
	}
	 static IMatcher1GameEntity*>* get_ExtractWork() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175BEB4))(0);
	}
	 static IMatcher1GameEntity*>* get_FakeBase() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C054))(0);
	}
	 static IMatcher1GameEntity*>* get_FakeClanName() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C1F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Floor() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C394))(0);
	}
	 static IMatcher1GameEntity*>* get_Fog() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C534))(0);
	}
	 static IMatcher1GameEntity*>* get_Follow() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C6D4))(0);
	}
	 static IMatcher1GameEntity*>* get_FollowTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175C874))(0);
	}
	 static IMatcher1GameEntity*>* get_GameData() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175CA14))(0);
	}
	 static IMatcher1GameEntity*>* get_Gender() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175CBB4))(0);
	}
	 static IMatcher1GameEntity*>* get_GenerateWall() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175CD54))(0);
	}
	 static IMatcher1GameEntity*>* get_GiantReputation() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175CEF4))(0);
	}
	 static IMatcher1GameEntity*>* get_Grade() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D094))(0);
	}
	 static IMatcher1GameEntity*>* get_GradeFromLocation() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D234))(0);
	}
	 static IMatcher1GameEntity*>* get_GradeHide() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D3D4))(0);
	}
	 static IMatcher1GameEntity*>* get_GradeView() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D574))(0);
	}
	 static IMatcher1GameEntity*>* get_GroupChild() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D714))(0);
	}
	 static IMatcher1GameEntity*>* get_Group() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175D8B4))(0);
	}
	 static IMatcher1GameEntity*>* get_GuildBossCoins() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175DA54))(0);
	}
	 static IMatcher1GameEntity*>* get_GuildCoins() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175DBF4))(0);
	}
	 static IMatcher1GameEntity*>* get_Guild() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175DD94))(0);
	}
	 static IMatcher1GameEntity*>* get_GuildTag() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175DF34))(0);
	}
	 static IMatcher1GameEntity*>* get_HashPosition() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E0D4))(0);
	}
	 static IMatcher1GameEntity*>* get_HealthCoef() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E274))(0);
	}
	 static IMatcher1GameEntity*>* get_HideBag() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E414))(0);
	}
	 static IMatcher1GameEntity*>* get_Hide() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E5B4))(0);
	}
	 static IMatcher1GameEntity*>* get_HideHead() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E754))(0);
	}
	 static IMatcher1GameEntity*>* get_HidePet() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175E8F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Icon() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175EA94))(0);
	}
	 static IMatcher1GameEntity*>* get_Id() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175EC34))(0);
	}
	 static IMatcher1GameEntity*>* get_IgnoreDoorVectorField() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175EDD4))(0);
	}
	 static IMatcher1GameEntity*>* get_Influence() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175EF74))(0);
	}
	 static IMatcher1GameEntity*>* get_InteractTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F114))(0);
	}
	 static IMatcher1GameEntity*>* get_Inventory() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F2B4))(0);
	}
	 static IMatcher1GameEntity*>* get_InventoryContent() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F454))(0);
	}
	 static IMatcher1GameEntity*>* get_InventoryLocked() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F5F4))(0);
	}
	 static IMatcher1GameEntity*>* get_KilledBy() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F794))(0);
	}
	 static IMatcher1GameEntity*>* get_LastActionTick() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175F934))(0);
	}
	 static IMatcher1GameEntity*>* get_LastDamager() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175FAD4))(0);
	}
	 static IMatcher1GameEntity*>* get_Level() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175FC74))(0);
	}
	 static IMatcher1GameEntity*>* get_LobbyType() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175FE14))(0);
	}
	 static IMatcher1GameEntity*>* get_LocationRegion() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x175FFB4))(0);
	}
	 static IMatcher1GameEntity*>* get_LocationRegionEnter() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760154))(0);
	}
	 static IMatcher1GameEntity*>* get_LockController() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17602F4))(0);
	}
	 static IMatcher1GameEntity*>* get_LoopSound() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760494))(0);
	}
	 static IMatcher1GameEntity*>* get_LootStatus() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760634))(0);
	}
	 static IMatcher1GameEntity*>* get_MagicSave() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17607D4))(0);
	}
	 static IMatcher1GameEntity*>* get_MagicSpawner() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760974))(0);
	}
	 static IMatcher1GameEntity*>* get_MagicTriggerId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760B14))(0);
	}
	 static IMatcher1GameEntity*>* get_MapNotify() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760CB4))(0);
	}
	 static IMatcher1GameEntity*>* get_MapPath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760E54))(0);
	}
	 static IMatcher1GameEntity*>* get_MapPathView() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1760FF4))(0);
	}
	 static IMatcher1GameEntity*>* get_MapSpeed() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761194))(0);
	}
	 static IMatcher1GameEntity*>* get_MaxHealthCoef() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761334))(0);
	}
	 static IMatcher1GameEntity*>* get_MaxHealth() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17614D4))(0);
	}
	 static IMatcher1GameEntity*>* get_MetabolismSetting() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761674))(0);
	}
	 static IMatcher1GameEntity*>* get_MinimapArrow() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761814))(0);
	}
	 static IMatcher1GameEntity*>* get_Minimap() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17619B4))(0);
	}
	 static IMatcher1GameEntity*>* get_MinimapPing() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761B54))(0);
	}
	 static IMatcher1GameEntity*>* get_Mining() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761CF4))(0);
	}
	 static IMatcher1GameEntity*>* get_Modifiers() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1761E94))(0);
	}
	 static IMatcher1GameEntity*>* get_MountInventoryContent() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762034))(0);
	}
	 static IMatcher1GameEntity*>* get_MountInventoryId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17621D4))(0);
	}
	 static IMatcher1GameEntity*>* get_MountInvetory() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762374))(0);
	}
	 static IMatcher1GameEntity*>* get_MountTrader() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762514))(0);
	}
	 static IMatcher1GameEntity*>* get_MoveToTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17626B4))(0);
	}
	 static IMatcher1GameEntity*>* get_MoveToTargetPosition() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762854))(0);
	}
	 static IMatcher1GameEntity*>* get_NeedQuests() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17629F4))(0);
	}
	 static IMatcher1GameEntity*>* get_NeedRemoveEmpty() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762B94))(0);
	}
	 static IMatcher1GameEntity*>* get_NextWayPoint() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762D34))(0);
	}
	 static IMatcher1GameEntity*>* get_NoAutoMode() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1762ED4))(0);
	}
	 static IMatcher1GameEntity*>* get_NotAggressive() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763074))(0);
	}
	 static IMatcher1GameEntity*>* get_NotInteractable() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763214))(0);
	}
	 static IMatcher1GameEntity*>* get_NotPursuitTarget() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17633B4))(0);
	}
	 static IMatcher1GameEntity*>* get_NotSelectable() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763554))(0);
	}
	 static IMatcher1GameEntity*>* get_ObjectTrigger() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17636F4))(0);
	}
	 static IMatcher1GameEntity*>* get_OnDeath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763894))(0);
	}
	 static IMatcher1GameEntity*>* get_OnEmptyWorld() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763A34))(0);
	}
	 static IMatcher1GameEntity*>* get_Orientation() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763BD4))(0);
	}
	 static IMatcher1GameEntity*>* get_Owner() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763D74))(0);
	}
	 static IMatcher1GameEntity*>* get_OwnerName() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1763F14))(0);
	}
	 static IMatcher1GameEntity*>* get_Parent() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17640B4))(0);
	}
	 static IMatcher1GameEntity*>* get_Patrol() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764254))(0);
	}
	 static IMatcher1GameEntity*>* get_Period() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17643F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Personal() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764594))(0);
	}
	 static IMatcher1GameEntity*>* get_PersonalGenerator() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764734))(0);
	}
	 static IMatcher1GameEntity*>* get_PersonalKey() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17648D4))(0);
	}
	 static IMatcher1GameEntity*>* get_PetInventoryId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764A74))(0);
	}
	 static IMatcher1GameEntity*>* get_Phases() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764C14))(0);
	}
	 static IMatcher1GameEntity*>* get_PlaceOwner() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764DB4))(0);
	}
	 static IMatcher1GameEntity*>* get_Player() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1764F54))(0);
	}
	 static IMatcher1GameEntity*>* get_PlayerId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17650F4))(0);
	}
	 static IMatcher1GameEntity*>* get_PlayerKill() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765294))(0);
	}
	 static IMatcher1GameEntity*>* get_PlayerName() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765434))(0);
	}
	 static IMatcher1GameEntity*>* get_PointLabel() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17655D4))(0);
	}
	 static IMatcher1GameEntity*>* get_Points() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765774))(0);
	}
	 static IMatcher1GameEntity*>* get_Portal() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765914))(0);
	}
	 static IMatcher1GameEntity*>* get_PortalsPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765AB4))(0);
	}
	 static IMatcher1GameEntity*>* get_Position() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765C54))(0);
	}
	 static IMatcher1GameEntity*>* get_PositionPlace() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765DF4))(0);
	}
	 static IMatcher1GameEntity*>* get_PositionTransaction() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1765F94))(0);
	}
	 static IMatcher1GameEntity*>* get_Power() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766134))(0);
	}
	 static IMatcher1GameEntity*>* get_Production() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17662D4))(0);
	}
	 static IMatcher1GameEntity*>* get_ProductionWork() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766474))(0);
	}
	 static IMatcher1GameEntity*>* get_Pursuit() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766614))(0);
	}
	 static IMatcher1GameEntity*>* get_PursuitGroup() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17667B4))(0);
	}
	 static IMatcher1GameEntity*>* get_QuestsSave() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766954))(0);
	}
	 static IMatcher1GameEntity*>* get_RandomClanName() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766AF4))(0);
	}
	 static IMatcher1GameEntity*>* get_RandomName() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766C94))(0);
	}
	 static IMatcher1GameEntity*>* get_Rarity() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766E34))(0);
	}
	 static IMatcher1GameEntity*>* get_RavenNest() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1766FD4))(0);
	}
	 static IMatcher1GameEntity*>* get_RavenNestStats() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767174))(0);
	}
	 static IMatcher1GameEntity*>* get_Required() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767314))(0);
	}
	 static IMatcher1GameEntity*>* get_ResetTime() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17674B4))(0);
	}
	 static IMatcher1GameEntity*>* get_RespawnPoint() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767654))(0);
	}
	 static IMatcher1GameEntity*>* get_Rewards() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17677F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Roaming() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767994))(0);
	}
	 static IMatcher1GameEntity*>* get_Roof() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767B34))(0);
	}
	 static IMatcher1GameEntity*>* get_Room() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767CD4))(0);
	}
	 static IMatcher1GameEntity*>* get_RoomsDoor() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1767E74))(0);
	}
	 static IMatcher1GameEntity*>* get_RotateTo() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768014))(0);
	}
	 static IMatcher1GameEntity*>* get_Rotation() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17681B4))(0);
	}
	 static IMatcher1GameEntity*>* get_RuneInventoryId() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768354))(0);
	}
	 static IMatcher1GameEntity*>* get_SaveAction() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17684F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Saveable() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768694))(0);
	}
	 static IMatcher1GameEntity*>* get_SaviorPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768834))(0);
	}
	 static IMatcher1GameEntity*>* get_Scout() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17689D4))(0);
	}
	 static IMatcher1GameEntity*>* get_SeasonPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768B74))(0);
	}
	 static IMatcher1GameEntity*>* get_ServerPosition() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768D14))(0);
	}
	 static IMatcher1GameEntity*>* get_ServerTick() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1768EB4))(0);
	}
	 static IMatcher1GameEntity*>* get_Shared() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769054))(0);
	}
	 static IMatcher1GameEntity*>* get_ShowCondition() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17691F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Silver() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769394))(0);
	}
	 static IMatcher1GameEntity*>* get_SinglePlace() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769534))(0);
	}
	 static IMatcher1GameEntity*>* get_SlotCount() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x17696D4))(0);
	}
	 static IMatcher1GameEntity*>* get_SpawnAndDestroy() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769874))(0);
	}
	 static IMatcher1GameEntity*>* get_SpawnOnDeath() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769A14))(0);
	}
	 static IMatcher1GameEntity*>* get_Spectator() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769BB4))(0);
	}
	 static IMatcher1GameEntity*>* get_Speed() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769D54))(0);
	}
	 static IMatcher1GameEntity*>* get_StateView() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x1769EF4))(0);
	}
	 static IMatcher1GameEntity*>* get_Statue() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A094))(0);
	}
	 static IMatcher1GameEntity*>* get_StatusBarView() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A234))(0);
	}
	 static IMatcher1GameEntity*>* get_Team() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A3D4))(0);
	}
	 static IMatcher1GameEntity*>* get_TenacityCoef() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A574))(0);
	}
	 static IMatcher1GameEntity*>* get_Tick() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A714))(0);
	}
	 static IMatcher1GameEntity*>* get_Tickets() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176A8B4))(0);
	}
	 static IMatcher1GameEntity*>* get_TicksCount() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176AA54))(0);
	}
	 static IMatcher1GameEntity*>* get_TimeTrigger() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176ABF4))(0);
	}
	 static IMatcher1GameEntity*>* get_TimerEffect() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176AD94))(0);
	}
	 static IMatcher1GameEntity*>* get_ToLocation() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176AF34))(0);
	}
	 static IMatcher1GameEntity*>* get_Transport() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B0D4))(0);
	}
	 static IMatcher1GameEntity*>* get_TriggerView() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B274))(0);
	}
	 static IMatcher1GameEntity*>* get_UniqueLookup() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B414))(0);
	}
	 static IMatcher1GameEntity*>* get_Unlock() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B5B4))(0);
	}
	 static IMatcher1GameEntity*>* get_UnlockDuration() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B754))(0);
	}
	 static IMatcher1GameEntity*>* get_Unlocked() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176B8F4))(0);
	}
	 static IMatcher1GameEntity*>* get_Upgrade() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176BA94))(0);
	}
	 static IMatcher1GameEntity*>* get_UpgradeEffect() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176BC34))(0);
	}
	 static IMatcher1GameEntity*>* get_VIPPoints() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176BDD4))(0);
	}
	 static IMatcher1GameEntity*>* get_Velocity() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176BF74))(0);
	}
	 static IMatcher1GameEntity*>* get_View() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C114))(0);
	}
	 static IMatcher1GameEntity*>* get_WaveIndex() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C2B4))(0);
	}
	 static IMatcher1GameEntity*>* get_WaveItem() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C454))(0);
	}
	 static IMatcher1GameEntity*>* get_WaveState() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C5F4))(0);
	}
	 static IMatcher1GameEntity*>* get_WavesEvent() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C794))(0);
	}
	 static IMatcher1GameEntity*>* get_WayPoint() {
		return ((IMatcher1GameEntity*>* (*)(void *))(Il2CppBase() + 0x176C934))(0);
	}
	 static IAllOfMatcher1GameEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1GameEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x176CAD4))(0, indices);
	}
	 static IAllOfMatcher1GameEntity*>* AllOf_1(Il2CppArray<IMatcher1GameEntity*>*>* matchers) {
		return ((IAllOfMatcher1GameEntity*>* (*)(void *, Il2CppArray<IMatcher1GameEntity*>*>*))(Il2CppBase() + 0x176CB4C))(0, matchers);
	}
	 static IAnyOfMatcher1GameEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1GameEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0x176CBC4))(0, indices);
	}
	 static IAnyOfMatcher1GameEntity*>* AnyOf_1(Il2CppArray<IMatcher1GameEntity*>*>* matchers) {
		return ((IAnyOfMatcher1GameEntity*>* (*)(void *, Il2CppArray<IMatcher1GameEntity*>*>*))(Il2CppBase() + 0x176CC3C))(0, matchers);
	}

};

