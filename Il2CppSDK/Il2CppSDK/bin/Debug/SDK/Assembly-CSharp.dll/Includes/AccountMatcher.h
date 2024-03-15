#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountMatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountMatcher"));
	}

	 static IMatcher1<AccountEntity*>*& _matcherAlvesBpPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAlvesWavesBadgesT1() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAlvesWavesBadgesT2() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAlvesWavesBadgesT3() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 static IMatcher1<AccountEntity*>*& _matcherArmingEmojis() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 static IMatcher1<AccountEntity*>*& _matcherArrivalTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAutoDetectedQuality() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAvailableBugReports() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAvailableCosmetics() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAvailableProductsVersion() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAvatar() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static IMatcher1<AccountEntity*>*& _matcherAvatarId() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static IMatcher1<AccountEntity*>*& _matcherBPRewards() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static IMatcher1<AccountEntity*>*& _matcherBattleTag() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static IMatcher1<AccountEntity*>*& _matcherBugReportDelay() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCartCache() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCashbackCoins() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCell() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	 static IMatcher1<AccountEntity*>*& _matcherChatData() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static IMatcher1<AccountEntity*>*& _matcherClan() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	 static IMatcher1<AccountEntity*>*& _matcherClanJoinTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherClassRunes() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherClassRunesEndTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCoins() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCustomization() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCyclicPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCyclicPremiumTokens() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherCyclicYmirSoul() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDailyShopState() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDeathCounter() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDeepLog() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDevToDev() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDisconnect() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDistrictLevel() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDistrictState() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	 static IMatcher1<AccountEntity*>*& _matcherDungeonLastEnter() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static IMatcher1<AccountEntity*>*& _matcherEnergyTick() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	 static IMatcher1<AccountEntity*>*& _matcherEventBpPointsA() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	 static IMatcher1<AccountEntity*>*& _matcherEventBpPointsB() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	 static IMatcher1<AccountEntity*>*& _matcherEventBpPointsC() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	 static IMatcher1<AccountEntity*>*& _matcherExitOwner() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	 static IMatcher1<AccountEntity*>*& _matcherExitTag() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static IMatcher1<AccountEntity*>*& _matcherExperienceBooster() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static IMatcher1<AccountEntity*>*& _matcherExpertise() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static IMatcher1<AccountEntity*>*& _matcherExtraLevelCap() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	 static IMatcher1<AccountEntity*>*& _matcherFirstClass() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	 static IMatcher1<AccountEntity*>*& _matcherFirstLaunch() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static IMatcher1<AccountEntity*>*& _matcherFirstTimeEvents() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static IMatcher1<AccountEntity*>*& _matcherFontanelGrade() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static IMatcher1<AccountEntity*>*& _matcherFreeCraft() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGameObjectsSave() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGender() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGiantReputation() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGuildBossCoins() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1A8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGuildCoins() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGuild() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1B8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGuildJoinTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherGuildRole() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1C8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherHealthCoef() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherHideBag() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1D8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherHideHead() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherHidePet() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1E8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherHome() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherInfluence() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x1F8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherInventoryContent() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x200);
	}
	 static IMatcher1<AccountEntity*>*& _matcherInventoryPower() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x208);
	}
	 static IMatcher1<AccountEntity*>*& _matcherItemCooldowns() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x210);
	}
	 static IMatcher1<AccountEntity*>*& _matcherKarma() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x218);
	}
	 static IMatcher1<AccountEntity*>*& _matcherKefirId() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x220);
	}
	 static IMatcher1<AccountEntity*>*& _matcherKickTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x228);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLand() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x230);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLanguage() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x238);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastAttackTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x240);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastBugReport() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x248);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastDeath() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x250);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastMinimapPing() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x258);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastOpenPortals() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x260);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastResetEventBpPointsB() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x268);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastResetPortals() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x270);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastSeason() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x278);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastSeasonNotified() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x280);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastSession() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x288);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastVisitedLocation() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x290);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLastVisitedLocationTicks() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x298);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLeaveArenaStarted() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLeaveArenaTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2A8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLevel() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLocationAuto() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2B8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherLocationResetInfo() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherMagicSave() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2C8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherManualQuestTrackingOrder() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherMapPath() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2D8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherMetabolism() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherMountInventoryContent() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2E8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherMountsInventoryGrade() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherNextPortalsPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x2F8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherNotSeenNewClasses() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x300);
	}
	 static IMatcher1<AccountEntity*>*& _matcherNotSeenNewPets() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x308);
	}
	 static IMatcher1<AccountEntity*>*& _matcherNotSeenNewRecipes() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x310);
	}
	 static IMatcher1<AccountEntity*>*& _matcherNotSeenNewRunes() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x318);
	}
	 static IMatcher1<AccountEntity*>*& _matcherOccupation() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x320);
	}
	 static IMatcher1<AccountEntity*>*& _matcherOdinExp() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x328);
	}
	 static IMatcher1<AccountEntity*>*& _matcherOfflineDeathInfo() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x330);
	}
	 static IMatcher1<AccountEntity*>*& _matcherOnlineTimeout() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x338);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPatchCommands() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x340);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPayer() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x348);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPeer() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x350);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPersonalEntities() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x358);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPetInventoryContent() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x360);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPlayerId() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x368);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPlayerKill() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x370);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPlayerName() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x378);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPortalsPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x380);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPremiumPass() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x388);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPurchaseHistory() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x390);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPushBlockedNotifications() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x398);
	}
	 static IMatcher1<AccountEntity*>*& _matcherPushNotificationsEnabled() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherQuestsSave() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3A8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRGSave() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRegistrationTimestamp() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3B8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRenameClan() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRename() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3C8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRuneInventoryContent() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherRuneInventoryGrade() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3D8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSaveCounter() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSaviorPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3E8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSeasonPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSeenMapEvents() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x3F8);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSeenSeasonQuests() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x400);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSelectedClasses() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x408);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSession() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x410);
	}
	 static IMatcher1<AccountEntity*>*& _matcherShowChestMarker() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x418);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSilver() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x420);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSocialPlatformsStatus() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x428);
	}
	 static IMatcher1<AccountEntity*>*& _matcherSpeed() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x430);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTags() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x438);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTestGroup() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x440);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTickets() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x448);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTimeLockMove() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x450);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTotalDonate() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x458);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTournamentStartSearchingTime() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x460);
	}
	 static IMatcher1<AccountEntity*>*& _matcherTransactions() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x468);
	}
	 static IMatcher1<AccountEntity*>*& _matcherUnlockedEmojis() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x470);
	}
	 static IMatcher1<AccountEntity*>*& _matcherUnlockedFoW() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x478);
	}
	 static IMatcher1<AccountEntity*>*& _matcherUnlockedLocation() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x480);
	}
	 static IMatcher1<AccountEntity*>*& _matcherUsedPlatforms() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x488);
	}
	 static IMatcher1<AccountEntity*>*& _matcherVIPPoints() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x490);
	}
	 static IMatcher1<AccountEntity*>*& _matcherWorld() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x498);
	}
	 static IMatcher1<AccountEntity*>*& _matcherWorldSent() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A0);
	}
	 static IMatcher1<AccountEntity*>*& _matcherWorldStatus() {
		return *(IMatcher1<AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x4A8);
	}

	 static IAllOfMatcher1<AccountEntity*>* AllOf(Il2CppArray<int32_t>* indices) {
		return ((IAllOfMatcher1<AccountEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xFD10FC))(0, indices);
	}
	 static IAllOfMatcher1<AccountEntity*>* AllOf_1(Il2CppArray<IMatcher1<AccountEntity*>*>* matchers) {
		return ((IAllOfMatcher1<AccountEntity*>* (*)(void *, Il2CppArray<IMatcher1<AccountEntity*>*>*))(Il2CppBase() + 0xFD1174))(0, matchers);
	}
	 static IAnyOfMatcher1<AccountEntity*>* AnyOf(Il2CppArray<int32_t>* indices) {
		return ((IAnyOfMatcher1<AccountEntity*>* (*)(void *, Il2CppArray<int32_t>*))(Il2CppBase() + 0xFD11EC))(0, indices);
	}
	 static IAnyOfMatcher1<AccountEntity*>* AnyOf_1(Il2CppArray<IMatcher1<AccountEntity*>*>* matchers) {
		return ((IAnyOfMatcher1<AccountEntity*>* (*)(void *, Il2CppArray<IMatcher1<AccountEntity*>*>*))(Il2CppBase() + 0xFD1264))(0, matchers);
	}
	 static IMatcher1<AccountEntity*>* get_AlvesBpPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD12DC))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AlvesWavesBadgesT1() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD145C))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AlvesWavesBadgesT2() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD15F8))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AlvesWavesBadgesT3() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1794))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ArmingEmojis() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1930))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ArrivalTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1ACC))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AutoDetectedQuality() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1C68))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AvailableBugReports() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1E04))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AvailableCosmetics() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD1FA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AvailableProductsVersion() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD213C))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Avatar() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD22D8))(0);
	}
	 static IMatcher1<AccountEntity*>* get_AvatarId() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2474))(0);
	}
	 static IMatcher1<AccountEntity*>* get_BPRewards() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2610))(0);
	}
	 static IMatcher1<AccountEntity*>* get_BattleTag() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD27AC))(0);
	}
	 static IMatcher1<AccountEntity*>* get_BugReportDelay() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2948))(0);
	}
	 static IMatcher1<AccountEntity*>* get_CartCache() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2AE4))(0);
	}
	 static IMatcher1<AccountEntity*>* get_CashbackCoins() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2C80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Cell() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2E1C))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ChatData() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD2FB8))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Clan() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3154))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ClanJoinTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD32F0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ClassRunes() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD348C))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ClassRunesEndTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3628))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Coins() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD37C4))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Customization() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3960))(0);
	}
	 static IMatcher1<AccountEntity*>* get_CyclicPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3AFC))(0);
	}
	 static IMatcher1<AccountEntity*>* get_CyclicPremiumTokens() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3C98))(0);
	}
	 static IMatcher1<AccountEntity*>* get_CyclicYmirSoul() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3E34))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DailyShopState() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD3FD0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DeathCounter() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD416C))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DeepLog() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4308))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DevToDev() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD44A4))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Disconnect() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4640))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DistrictLevel() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD47E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DistrictState() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4980))(0);
	}
	 static IMatcher1<AccountEntity*>* get_DungeonLastEnter() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4B20))(0);
	}
	 static IMatcher1<AccountEntity*>* get_EnergyTick() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4CC0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_EventBpPointsA() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD4E60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_EventBpPointsB() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5000))(0);
	}
	 static IMatcher1<AccountEntity*>* get_EventBpPointsC() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD51A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ExitOwner() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5340))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ExitTag() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD54E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ExperienceBooster() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5680))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Expertise() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5820))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ExtraLevelCap() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD59C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_FirstClass() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5B60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_FirstLaunch() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5D00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_FirstTimeEvents() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD5EA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_FontanelGrade() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6040))(0);
	}
	 static IMatcher1<AccountEntity*>* get_FreeCraft() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD61E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GameObjectsSave() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6380))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Gender() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6520))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GiantReputation() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD66C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GuildBossCoins() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6860))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GuildCoins() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6A00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Guild() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6BA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GuildJoinTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6D40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_GuildRole() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD6EE0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_HealthCoef() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7080))(0);
	}
	 static IMatcher1<AccountEntity*>* get_HideBag() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7220))(0);
	}
	 static IMatcher1<AccountEntity*>* get_HideHead() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD73C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_HidePet() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7560))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Home() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7700))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Influence() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD78A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_InventoryContent() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7A40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_InventoryPower() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7BE0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ItemCooldowns() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7D80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Karma() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD7F20))(0);
	}
	 static IMatcher1<AccountEntity*>* get_KefirId() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD80C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_KickTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8260))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Land() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8400))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Language() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD85A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastAttackTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8740))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastBugReport() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD88E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastDeath() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8A80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastMinimapPing() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8C20))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastOpenPortals() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8DC0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastResetEventBpPointsB() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD8F60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastResetPortals() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9100))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastSeason() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD92A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastSeasonNotified() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9440))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastSession() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD95E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastVisitedLocation() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9780))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LastVisitedLocationTicks() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9920))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LeaveArenaStarted() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9AC0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LeaveArenaTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9C60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Level() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9E00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LocationAuto() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFD9FA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_LocationResetInfo() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA140))(0);
	}
	 static IMatcher1<AccountEntity*>* get_MagicSave() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA2E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ManualQuestTrackingOrder() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA480))(0);
	}
	 static IMatcher1<AccountEntity*>* get_MapPath() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA620))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Metabolism() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA7C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_MountInventoryContent() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDA960))(0);
	}
	 static IMatcher1<AccountEntity*>* get_MountsInventoryGrade() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDAB00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_NextPortalsPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDACA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_NotSeenNewClasses() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDAE40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_NotSeenNewPets() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDAFE0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_NotSeenNewRecipes() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB180))(0);
	}
	 static IMatcher1<AccountEntity*>* get_NotSeenNewRunes() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB320))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Occupation() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB4C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_OdinExp() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB660))(0);
	}
	 static IMatcher1<AccountEntity*>* get_OfflineDeathInfo() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB800))(0);
	}
	 static IMatcher1<AccountEntity*>* get_OnlineTimeout() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDB9A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PatchCommands() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDBB40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Payer() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDBCE0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Peer() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDBE80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PersonalEntities() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC020))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PetInventoryContent() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC1C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PlayerId() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC360))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PlayerKill() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC500))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PlayerName() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC6A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PortalsPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC840))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PremiumPass() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDC9E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PurchaseHistory() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDCB80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PushBlockedNotifications() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDCD20))(0);
	}
	 static IMatcher1<AccountEntity*>* get_PushNotificationsEnabled() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDCEC0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_QuestsSave() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD060))(0);
	}
	 static IMatcher1<AccountEntity*>* get_RGSave() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD200))(0);
	}
	 static IMatcher1<AccountEntity*>* get_RegistrationTimestamp() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD3A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_RenameClan() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD540))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Rename() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD6E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_RuneInventoryContent() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDD880))(0);
	}
	 static IMatcher1<AccountEntity*>* get_RuneInventoryGrade() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDDA20))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SaveCounter() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDDBC0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SaviorPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDDD60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SeasonPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDDF00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SeenMapEvents() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE0A0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SeenSeasonQuests() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE240))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SelectedClasses() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE3E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Session() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE580))(0);
	}
	 static IMatcher1<AccountEntity*>* get_ShowChestMarker() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE720))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Silver() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDE8C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_SocialPlatformsStatus() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDEA60))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Speed() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDEC00))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Tags() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDEDA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_TestGroup() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDEF40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Tickets() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF0E0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_TimeLockMove() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF280))(0);
	}
	 static IMatcher1<AccountEntity*>* get_TotalDonate() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF420))(0);
	}
	 static IMatcher1<AccountEntity*>* get_TournamentStartSearchingTime() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF5C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_Transactions() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF760))(0);
	}
	 static IMatcher1<AccountEntity*>* get_UnlockedEmojis() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDF900))(0);
	}
	 static IMatcher1<AccountEntity*>* get_UnlockedFoW() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDFAA0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_UnlockedLocation() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDFC40))(0);
	}
	 static IMatcher1<AccountEntity*>* get_UsedPlatforms() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDFDE0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_VIPPoints() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFDFF80))(0);
	}
	 static IMatcher1<AccountEntity*>* get_World() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFE0120))(0);
	}
	 static IMatcher1<AccountEntity*>* get_WorldSent() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFE02C0))(0);
	}
	 static IMatcher1<AccountEntity*>* get_WorldStatus() {
		return ((IMatcher1<AccountEntity*>* (*)(void *))(Il2CppBase() + 0xFE0460))(0);
	}

};

