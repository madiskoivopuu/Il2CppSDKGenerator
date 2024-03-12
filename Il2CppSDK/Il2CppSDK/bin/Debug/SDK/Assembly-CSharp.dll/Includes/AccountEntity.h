#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountEntity"));
	}

	template <typename T = uintptr_t> static T& avatarComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& bugReportDelayComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& deepLogComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& disconnectComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& firstLaunchComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& freeCraftComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& hideBagComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& hideHeadComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& hidePetComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& leaveArenaStartedComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& payerComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& playerKillComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& pushNotificationsEnabledComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& worldSentComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uintptr_t> T GetTestGroup() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9E780))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9E884))(this);
	}
	template <typename T = uintptr_t> T get_alvesBpPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EC00))(this);
	}
	template <typename T = bool> T get_hasAlvesBpPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EC88))(this);
	}
	template <typename T = void> T AddAlvesBpPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9EC94))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesBpPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9ED98))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesBpPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EE9C))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT1() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EEA8))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT1() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EF30))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9EF3C))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F040))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT1() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F144))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT2() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F150))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT2() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F1D8))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F1E4))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F2E8))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT2() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F3EC))(this);
	}
	template <typename T = uintptr_t> T get_alvesWavesBadgesT3() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F3F8))(this);
	}
	template <typename T = bool> T get_hasAlvesWavesBadgesT3() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F480))(this);
	}
	template <typename T = void> T AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F48C))(this, newCount);
	}
	template <typename T = void> T ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F590))(this, newCount);
	}
	template <typename T = void> T RemoveAlvesWavesBadgesT3() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F694))(this);
	}
	template <typename T = uintptr_t> T get_armingEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F6A0))(this);
	}
	template <typename T = bool> T get_hasArmingEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F728))(this);
	}
	template <typename T = void> T AddArmingEmojis(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D9F734))(this, newNames);
	}
	template <typename T = void> T ReplaceArmingEmojis(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1D9F848))(this, newNames);
	}
	template <typename T = void> T RemoveArmingEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F95C))(this);
	}
	template <typename T = uintptr_t> T get_arrivalTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F968))(this);
	}
	template <typename T = bool> T get_hasArrivalTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9F9F0))(this);
	}
	template <typename T = void> T AddArrivalTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9F9FC))(this, newValue);
	}
	template <typename T = void> T ReplaceArrivalTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9FB00))(this, newValue);
	}
	template <typename T = void> T RemoveArrivalTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC04))(this);
	}
	template <typename T = uintptr_t> T get_autoDetectedQuality() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC10))(this);
	}
	template <typename T = bool> T get_hasAutoDetectedQuality() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC98))(this);
	}
	template <typename T = void> T AddAutoDetectedQuality(unsigned char newValue) {
		return ((T (*)(AccountEntity*, unsigned char))(Il2CppBase() + 0x1D9FCA4))(this, newValue);
	}
	template <typename T = void> T ReplaceAutoDetectedQuality(unsigned char newValue) {
		return ((T (*)(AccountEntity*, unsigned char))(Il2CppBase() + 0x1D9FDA8))(this, newValue);
	}
	template <typename T = void> T RemoveAutoDetectedQuality() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FEAC))(this);
	}
	template <typename T = uintptr_t> T get_availableBugReports() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FEB8))(this);
	}
	template <typename T = bool> T get_hasAvailableBugReports() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9FF40))(this);
	}
	template <typename T = void> T AddAvailableBugReports(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9FF4C))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailableBugReports(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0050))(this, newValue);
	}
	template <typename T = void> T RemoveAvailableBugReports() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0154))(this);
	}
	template <typename T = uintptr_t> T get_availableCosmetics() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0160))(this);
	}
	template <typename T = bool> T get_hasAvailableCosmetics() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA01E8))(this);
	}
	template <typename T = void> T AddAvailableCosmetics(Il2CppDictionary<Il2CppString*, bool>* newItems) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x1DA01F4))(this, newItems);
	}
	template <typename T = void> T ReplaceAvailableCosmetics(Il2CppDictionary<Il2CppString*, bool>* newItems) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x1DA0308))(this, newItems);
	}
	template <typename T = void> T RemoveAvailableCosmetics() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA041C))(this);
	}
	template <typename T = uintptr_t> T get_availableProductsVersion() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0428))(this);
	}
	template <typename T = bool> T get_hasAvailableProductsVersion() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA04B0))(this);
	}
	template <typename T = void> T AddAvailableProductsVersion(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA04BC))(this, newValue);
	}
	template <typename T = void> T ReplaceAvailableProductsVersion(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA05C0))(this, newValue);
	}
	template <typename T = void> T RemoveAvailableProductsVersion() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA06C4))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA06D0))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1D9E650))(this, value);
	}
	template <typename T = uintptr_t> T get_avatarId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA06DC))(this);
	}
	template <typename T = bool> T get_hasAvatarId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0764))(this);
	}
	template <typename T = void> T AddAvatarId(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0770))(this, newValue);
	}
	template <typename T = void> T ReplaceAvatarId(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0874))(this, newValue);
	}
	template <typename T = void> T RemoveAvatarId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0978))(this);
	}
	template <typename T = uintptr_t> T get_bPRewards() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0984))(this);
	}
	template <typename T = bool> T get_hasBPRewards() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0A0C))(this);
	}
	template <typename T = void> T AddBPRewards(Il2CppDictionary<uintptr_t, uintptr_t>* newDictionary) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x1DA0A18))(this, newDictionary);
	}
	template <typename T = void> T ReplaceBPRewards(Il2CppDictionary<uintptr_t, uintptr_t>* newDictionary) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x1DA0B2C))(this, newDictionary);
	}
	template <typename T = void> T RemoveBPRewards() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0C40))(this);
	}
	template <typename T = uintptr_t> T get_battleTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0C4C))(this);
	}
	template <typename T = bool> T get_hasBattleTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0CD4))(this);
	}
	template <typename T = void> T AddBattleTag(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA0CE0))(this, newValue);
	}
	template <typename T = void> T ReplaceBattleTag(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA0DF4))(this, newValue);
	}
	template <typename T = void> T RemoveBattleTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0F08))(this);
	}
	template <typename T = bool> T get_isBugReportDelay() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA0F14))(this);
	}
	template <typename T = void> T set_isBugReportDelay(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA0F20))(this, value);
	}
	template <typename T = uintptr_t> T get_cartCache() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1038))(this);
	}
	template <typename T = bool> T get_hasCartCache() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA10C0))(this);
	}
	template <typename T = void> T AddCartCache(int32_t newLevel, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA10CC))(this, newLevel, newResources);
	}
	template <typename T = void> T ReplaceCartCache(int32_t newLevel, Il2CppArray<uintptr_t>* newResources) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA11E8))(this, newLevel, newResources);
	}
	template <typename T = void> T RemoveCartCache() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1304))(this);
	}
	template <typename T = uintptr_t> T get_cashbackCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1310))(this);
	}
	template <typename T = bool> T get_hasCashbackCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1398))(this);
	}
	template <typename T = void> T AddCashbackCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA13A4))(this, newCount);
	}
	template <typename T = void> T ReplaceCashbackCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA14A8))(this, newCount);
	}
	template <typename T = void> T RemoveCashbackCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA15AC))(this);
	}
	template <typename T = uintptr_t> T get_cell() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA15B8))(this);
	}
	template <typename T = bool> T get_hasCell() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1640))(this);
	}
	template <typename T = void> T AddCell(unsigned char newId) {
		return ((T (*)(AccountEntity*, unsigned char))(Il2CppBase() + 0x1DA164C))(this, newId);
	}
	template <typename T = void> T ReplaceCell(unsigned char newId) {
		return ((T (*)(AccountEntity*, unsigned char))(Il2CppBase() + 0x1DA1750))(this, newId);
	}
	template <typename T = void> T RemoveCell() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1854))(this);
	}
	template <typename T = uintptr_t> T get_chatData() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1860))(this);
	}
	template <typename T = bool> T get_hasChatData() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA18E8))(this);
	}
	template <typename T = void> T AddChatData(bool newIsRegistered, Il2CppString* newLogin, Il2CppString* newPassword, Il2CppString* newSelectedRoom, Il2CppList<uintptr_t>* newRooms, int64_t newBannedTill) {
		return ((T (*)(AccountEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppList<uintptr_t>*, int64_t))(Il2CppBase() + 0x1DA18F4))(this, newIsRegistered, newLogin, newPassword, newSelectedRoom, newRooms, newBannedTill);
	}
	template <typename T = void> T ReplaceChatData(bool newIsRegistered, Il2CppString* newLogin, Il2CppString* newPassword, Il2CppString* newSelectedRoom, Il2CppList<uintptr_t>* newRooms, int64_t newBannedTill) {
		return ((T (*)(AccountEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppList<uintptr_t>*, int64_t))(Il2CppBase() + 0x1DA1A68))(this, newIsRegistered, newLogin, newPassword, newSelectedRoom, newRooms, newBannedTill);
	}
	template <typename T = void> T RemoveChatData() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1BDC))(this);
	}
	template <typename T = uintptr_t> T get_clan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1BE8))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1C70))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1C7C))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1D80))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1E84))(this);
	}
	template <typename T = uintptr_t> T get_clanJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1E90))(this);
	}
	template <typename T = bool> T get_hasClanJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA1F18))(this);
	}
	template <typename T = void> T AddClanJoinTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1F24))(this, newValue);
	}
	template <typename T = void> T ReplaceClanJoinTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA2028))(this, newValue);
	}
	template <typename T = void> T RemoveClanJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA212C))(this);
	}
	template <typename T = uintptr_t> T get_classRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2138))(this);
	}
	template <typename T = bool> T get_hasClassRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA21C0))(this);
	}
	template <typename T = void> T AddClassRunes(Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>* newAllClassRunes) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1DA21CC))(this, newAllClassRunes);
	}
	template <typename T = void> T ReplaceClassRunes(Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>* newAllClassRunes) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1DA22E0))(this, newAllClassRunes);
	}
	template <typename T = void> T RemoveClassRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA23F4))(this);
	}
	template <typename T = uintptr_t> T get_classRunesEndTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2400))(this);
	}
	template <typename T = bool> T get_hasClassRunesEndTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2488))(this);
	}
	template <typename T = void> T AddClassRunesEndTime(Il2CppDictionary<uintptr_t, int64_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, int64_t>*))(Il2CppBase() + 0x1DA2494))(this, newValues);
	}
	template <typename T = void> T ReplaceClassRunesEndTime(Il2CppDictionary<uintptr_t, int64_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<uintptr_t, int64_t>*))(Il2CppBase() + 0x1DA25A8))(this, newValues);
	}
	template <typename T = void> T RemoveClassRunesEndTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA26BC))(this);
	}
	template <typename T = uintptr_t> T get_coins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA26C8))(this);
	}
	template <typename T = bool> T get_hasCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2750))(this);
	}
	template <typename T = void> T AddCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA275C))(this, newCount);
	}
	template <typename T = void> T ReplaceCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2860))(this, newCount);
	}
	template <typename T = void> T RemoveCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2964))(this);
	}
	template <typename T = uintptr_t> T get_customization() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2970))(this);
	}
	template <typename T = bool> T get_hasCustomization() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA29F8))(this);
	}
	template <typename T = void> T AddCustomization(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2A04))(this, newCount);
	}
	template <typename T = void> T ReplaceCustomization(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2B08))(this, newCount);
	}
	template <typename T = void> T RemoveCustomization() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2C0C))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2C18))(this);
	}
	template <typename T = bool> T get_hasCyclicPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2CA0))(this);
	}
	template <typename T = void> T AddCyclicPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2CAC))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2DB0))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2EB4))(this);
	}
	template <typename T = uintptr_t> T get_cyclicPremiumTokens() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2EC0))(this);
	}
	template <typename T = bool> T get_hasCyclicPremiumTokens() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA2F48))(this);
	}
	template <typename T = void> T AddCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2F54))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3058))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicPremiumTokens() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA315C))(this);
	}
	template <typename T = uintptr_t> T get_cyclicYmirSoul() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3168))(this);
	}
	template <typename T = bool> T get_hasCyclicYmirSoul() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA31F0))(this);
	}
	template <typename T = void> T AddCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA31FC))(this, newCount);
	}
	template <typename T = void> T ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3300))(this, newCount);
	}
	template <typename T = void> T RemoveCyclicYmirSoul() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3404))(this);
	}
	template <typename T = uintptr_t> T get_dailyShopState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3410))(this);
	}
	template <typename T = bool> T get_hasDailyShopState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3498))(this);
	}
	template <typename T = void> T AddDailyShopState(int64_t newResetTime, Il2CppArray<uintptr_t>* newSoldSlots, Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(AccountEntity*, int64_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA34A4))(this, newResetTime, newSoldSlots, newSlots);
	}
	template <typename T = void> T ReplaceDailyShopState(int64_t newResetTime, Il2CppArray<uintptr_t>* newSoldSlots, Il2CppArray<uintptr_t>* newSlots) {
		return ((T (*)(AccountEntity*, int64_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA35DC))(this, newResetTime, newSoldSlots, newSlots);
	}
	template <typename T = void> T RemoveDailyShopState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3714))(this);
	}
	template <typename T = uintptr_t> T get_deathCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3720))(this);
	}
	template <typename T = bool> T get_hasDeathCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA37A8))(this);
	}
	template <typename T = void> T AddDeathCounter(int32_t newCount, float newTimer) {
		return ((T (*)(AccountEntity*, int32_t, float))(Il2CppBase() + 0x1DA37B4))(this, newCount, newTimer);
	}
	template <typename T = void> T ReplaceDeathCounter(int32_t newCount, float newTimer) {
		return ((T (*)(AccountEntity*, int32_t, float))(Il2CppBase() + 0x1DA38C8))(this, newCount, newTimer);
	}
	template <typename T = void> T RemoveDeathCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA39DC))(this);
	}
	template <typename T = bool> T get_isDeepLog() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA39E8))(this);
	}
	template <typename T = void> T set_isDeepLog(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA39F4))(this, value);
	}
	template <typename T = uintptr_t> T get_devToDev() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3B0C))(this);
	}
	template <typename T = bool> T get_hasDevToDev() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3B94))(this);
	}
	template <typename T = void> T AddDevToDev(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA3BA0))(this, newValue);
	}
	template <typename T = void> T ReplaceDevToDev(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA3CB4))(this, newValue);
	}
	template <typename T = void> T RemoveDevToDev() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3DC8))(this);
	}
	template <typename T = bool> T get_toDisconnect() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3DD4))(this);
	}
	template <typename T = void> T set_toDisconnect(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA3DE0))(this, value);
	}
	template <typename T = uintptr_t> T get_districtLevel() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3EF8))(this);
	}
	template <typename T = bool> T get_hasDistrictLevel() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA3F80))(this);
	}
	template <typename T = void> T AddDistrictLevel(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3F8C))(this, newValue);
	}
	template <typename T = void> T ReplaceDistrictLevel(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4090))(this, newValue);
	}
	template <typename T = void> T RemoveDistrictLevel() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4194))(this);
	}
	template <typename T = uintptr_t> T get_districtState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA41A0))(this);
	}
	template <typename T = bool> T get_hasDistrictState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4228))(this);
	}
	template <typename T = void> T AddDistrictState(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA4234))(this, newType);
	}
	template <typename T = void> T ReplaceDistrictState(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA4338))(this, newType);
	}
	template <typename T = void> T RemoveDistrictState() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA443C))(this);
	}
	template <typename T = uintptr_t> T get_dungeonLastEnter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4448))(this);
	}
	template <typename T = bool> T get_hasDungeonLastEnter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA44D0))(this);
	}
	template <typename T = void> T AddDungeonLastEnter(Il2CppDictionary<Il2CppString*, void*>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, void*>*))(Il2CppBase() + 0x1DA44DC))(this, newValues);
	}
	template <typename T = void> T ReplaceDungeonLastEnter(Il2CppDictionary<Il2CppString*, void*>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, void*>*))(Il2CppBase() + 0x1DA45F0))(this, newValues);
	}
	template <typename T = void> T RemoveDungeonLastEnter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4704))(this);
	}
	template <typename T = uintptr_t> T get_energyTick() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4710))(this);
	}
	template <typename T = bool> T get_hasEnergyTick() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4798))(this);
	}
	template <typename T = void> T AddEnergyTick(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA47A4))(this, newValue);
	}
	template <typename T = void> T ReplaceEnergyTick(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA48A8))(this, newValue);
	}
	template <typename T = void> T RemoveEnergyTick() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA49AC))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsA() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA49B8))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsA() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4A40))(this);
	}
	template <typename T = void> T AddEventBpPointsA(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4A4C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsA(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4B50))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsA() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4C54))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4C60))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4CE8))(this);
	}
	template <typename T = void> T AddEventBpPointsB(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4CF4))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsB(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4DF8))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4EFC))(this);
	}
	template <typename T = uintptr_t> T get_eventBpPointsC() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4F08))(this);
	}
	template <typename T = bool> T get_hasEventBpPointsC() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA4F90))(this);
	}
	template <typename T = void> T AddEventBpPointsC(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4F9C))(this, newCount);
	}
	template <typename T = void> T ReplaceEventBpPointsC(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA50A0))(this, newCount);
	}
	template <typename T = void> T RemoveEventBpPointsC() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA51A4))(this);
	}
	template <typename T = uintptr_t> T get_exitOwner() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA51B0))(this);
	}
	template <typename T = bool> T get_hasExitOwner() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5238))(this);
	}
	template <typename T = void> T AddExitOwner(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA5244))(this, newValue);
	}
	template <typename T = void> T ReplaceExitOwner(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA5348))(this, newValue);
	}
	template <typename T = void> T RemoveExitOwner() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA544C))(this);
	}
	template <typename T = uintptr_t> T get_exitTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5458))(this);
	}
	template <typename T = bool> T get_hasExitTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA54E0))(this);
	}
	template <typename T = void> T AddExitTag(Il2CppString* newName) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA54EC))(this, newName);
	}
	template <typename T = void> T ReplaceExitTag(Il2CppString* newName) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA5600))(this, newName);
	}
	template <typename T = void> T RemoveExitTag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5714))(this);
	}
	template <typename T = uintptr_t> T get_experienceBooster() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5720))(this);
	}
	template <typename T = bool> T get_hasExperienceBooster() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA57A8))(this);
	}
	template <typename T = void> T AddExperienceBooster(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA57B4))(this, newValue);
	}
	template <typename T = void> T ReplaceExperienceBooster(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA58B8))(this, newValue);
	}
	template <typename T = void> T RemoveExperienceBooster() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA59BC))(this);
	}
	template <typename T = uintptr_t> T get_expertise() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA59C8))(this);
	}
	template <typename T = bool> T get_hasExpertise() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5A50))(this);
	}
	template <typename T = void> T AddExpertise(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5A5C))(this, newValue);
	}
	template <typename T = void> T ReplaceExpertise(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5B60))(this, newValue);
	}
	template <typename T = void> T RemoveExpertise() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5C64))(this);
	}
	template <typename T = uintptr_t> T get_extraLevelCap() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5C70))(this);
	}
	template <typename T = bool> T get_hasExtraLevelCap() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5CF8))(this);
	}
	template <typename T = void> T AddExtraLevelCap(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5D04))(this, newCount);
	}
	template <typename T = void> T ReplaceExtraLevelCap(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5E08))(this, newCount);
	}
	template <typename T = void> T RemoveExtraLevelCap() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5F0C))(this);
	}
	template <typename T = uintptr_t> T get_firstClass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5F18))(this);
	}
	template <typename T = bool> T get_hasFirstClass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA5FA0))(this);
	}
	template <typename T = void> T AddFirstClass(Il2CppString* newName) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA5FAC))(this, newName);
	}
	template <typename T = void> T ReplaceFirstClass(Il2CppString* newName) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA60C0))(this, newName);
	}
	template <typename T = void> T RemoveFirstClass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA61D4))(this);
	}
	template <typename T = bool> T get_wasFirstLaunch() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA61E0))(this);
	}
	template <typename T = void> T set_wasFirstLaunch(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA61EC))(this, value);
	}
	template <typename T = uintptr_t> T get_firstTimeEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6304))(this);
	}
	template <typename T = bool> T get_hasFirstTimeEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA638C))(this);
	}
	template <typename T = void> T AddFirstTimeEvents(bool newGlobalMapEntered) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA6398))(this, newGlobalMapEntered);
	}
	template <typename T = void> T ReplaceFirstTimeEvents(bool newGlobalMapEntered) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA64A0))(this, newGlobalMapEntered);
	}
	template <typename T = void> T RemoveFirstTimeEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA65A8))(this);
	}
	template <typename T = uintptr_t> T get_fontanelGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA65B4))(this);
	}
	template <typename T = bool> T get_hasFontanelGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA663C))(this);
	}
	template <typename T = void> T AddFontanelGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA6648))(this, newValue);
	}
	template <typename T = void> T ReplaceFontanelGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA674C))(this, newValue);
	}
	template <typename T = void> T RemoveFontanelGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6850))(this);
	}
	template <typename T = bool> T get_isFreeCraft() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA685C))(this);
	}
	template <typename T = void> T set_isFreeCraft(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA6868))(this, value);
	}
	template <typename T = uintptr_t> T get_gameObjectsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6980))(this);
	}
	template <typename T = bool> T get_hasGameObjectsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6A08))(this);
	}
	template <typename T = void> T AddGameObjectsSave(Il2CppDictionary<Il2CppString*, Il2CppString*>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DA6A14))(this, newValues);
	}
	template <typename T = void> T ReplaceGameObjectsSave(Il2CppDictionary<Il2CppString*, Il2CppString*>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DA6B28))(this, newValues);
	}
	template <typename T = void> T RemoveGameObjectsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6C3C))(this);
	}
	template <typename T = uintptr_t> T get_gender() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6C48))(this);
	}
	template <typename T = bool> T get_hasGender() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6CD0))(this);
	}
	template <typename T = void> T AddGender(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA6CDC))(this, newType);
	}
	template <typename T = void> T ReplaceGender(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA6DE0))(this, newType);
	}
	template <typename T = void> T RemoveGender() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6EE4))(this);
	}
	template <typename T = uintptr_t> T get_giantReputation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6EF0))(this);
	}
	template <typename T = bool> T get_hasGiantReputation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA6F78))(this);
	}
	template <typename T = void> T AddGiantReputation(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA6F84))(this, newCount);
	}
	template <typename T = void> T ReplaceGiantReputation(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA7088))(this, newCount);
	}
	template <typename T = void> T RemoveGiantReputation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA718C))(this);
	}
	template <typename T = uintptr_t> T get_guildBossCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7198))(this);
	}
	template <typename T = bool> T get_hasGuildBossCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7220))(this);
	}
	template <typename T = void> T AddGuildBossCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA722C))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildBossCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA7330))(this, newCount);
	}
	template <typename T = void> T RemoveGuildBossCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7434))(this);
	}
	template <typename T = uintptr_t> T get_guildCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7440))(this);
	}
	template <typename T = bool> T get_hasGuildCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA74C8))(this);
	}
	template <typename T = void> T AddGuildCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA74D4))(this, newCount);
	}
	template <typename T = void> T ReplaceGuildCoins(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA75D8))(this, newCount);
	}
	template <typename T = void> T RemoveGuildCoins() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA76DC))(this);
	}
	template <typename T = uintptr_t> T get_guild() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA76E8))(this);
	}
	template <typename T = bool> T get_hasGuild() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7770))(this);
	}
	template <typename T = void> T AddGuild(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA777C))(this, newId);
	}
	template <typename T = void> T ReplaceGuild(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7880))(this, newId);
	}
	template <typename T = void> T RemoveGuild() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7984))(this);
	}
	template <typename T = uintptr_t> T get_guildJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7990))(this);
	}
	template <typename T = bool> T get_hasGuildJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7A18))(this);
	}
	template <typename T = void> T AddGuildJoinTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7A24))(this, newValue);
	}
	template <typename T = void> T ReplaceGuildJoinTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7B28))(this, newValue);
	}
	template <typename T = void> T RemoveGuildJoinTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7C2C))(this);
	}
	template <typename T = uintptr_t> T get_guildRole() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7C38))(this);
	}
	template <typename T = bool> T get_hasGuildRole() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7CC0))(this);
	}
	template <typename T = void> T AddGuildRole(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA7CCC))(this, newType);
	}
	template <typename T = void> T ReplaceGuildRole(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA7DD0))(this, newType);
	}
	template <typename T = void> T RemoveGuildRole() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7ED4))(this);
	}
	template <typename T = uintptr_t> T get_healthCoef() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7EE0))(this);
	}
	template <typename T = bool> T get_hasHealthCoef() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA7F68))(this);
	}
	template <typename T = void> T AddHealthCoef(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DA7F74))(this, newValue);
	}
	template <typename T = void> T ReplaceHealthCoef(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DA8078))(this, newValue);
	}
	template <typename T = void> T RemoveHealthCoef() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA817C))(this);
	}
	template <typename T = bool> T get_isHideBag() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8188))(this);
	}
	template <typename T = void> T set_isHideBag(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA8194))(this, value);
	}
	template <typename T = bool> T get_isHideHead() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA82AC))(this);
	}
	template <typename T = void> T set_isHideHead(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA82B8))(this, value);
	}
	template <typename T = bool> T get_isHidePet() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA83D0))(this);
	}
	template <typename T = void> T set_isHidePet(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA83DC))(this, value);
	}
	template <typename T = uintptr_t> T get_home() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA84F4))(this);
	}
	template <typename T = bool> T get_hasHome() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA857C))(this);
	}
	template <typename T = void> T AddHome(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8588))(this, newValue);
	}
	template <typename T = void> T ReplaceHome(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA868C))(this, newValue);
	}
	template <typename T = void> T RemoveHome() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8790))(this);
	}
	template <typename T = uintptr_t> T get_influence() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA879C))(this);
	}
	template <typename T = bool> T get_hasInfluence() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8824))(this);
	}
	template <typename T = void> T AddInfluence(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8830))(this, newCount);
	}
	template <typename T = void> T ReplaceInfluence(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8934))(this, newCount);
	}
	template <typename T = void> T RemoveInfluence() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8A38))(this);
	}
	template <typename T = uintptr_t> T get_inventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8A44))(this);
	}
	template <typename T = bool> T get_hasInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8ACC))(this);
	}
	template <typename T = void> T AddInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA8AD8))(this, newData);
	}
	template <typename T = void> T ReplaceInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DA8BEC))(this, newData);
	}
	template <typename T = void> T RemoveInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D00))(this);
	}
	template <typename T = uintptr_t> T get_inventoryPower() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D0C))(this);
	}
	template <typename T = bool> T get_hasInventoryPower() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D94))(this);
	}
	template <typename T = void> T AddInventoryPower(uintptr_t newValue) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA8DA0))(this, newValue);
	}
	template <typename T = void> T ReplaceInventoryPower(uintptr_t newValue) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA8EBC))(this, newValue);
	}
	template <typename T = void> T RemoveInventoryPower() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8FD8))(this);
	}
	template <typename T = uintptr_t> T get_itemCooldowns() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA8FE4))(this);
	}
	template <typename T = bool> T get_hasItemCooldowns() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA906C))(this);
	}
	template <typename T = void> T AddItemCooldowns(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DA9078))(this, newList);
	}
	template <typename T = void> T ReplaceItemCooldowns(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DA918C))(this, newList);
	}
	template <typename T = void> T RemoveItemCooldowns() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA92A0))(this);
	}
	template <typename T = uintptr_t> T get_karma() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA92AC))(this);
	}
	template <typename T = bool> T get_hasKarma() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9334))(this);
	}
	template <typename T = void> T AddKarma(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA9340))(this, newValue);
	}
	template <typename T = void> T ReplaceKarma(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA9444))(this, newValue);
	}
	template <typename T = void> T RemoveKarma() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9548))(this);
	}
	template <typename T = uintptr_t> T get_kefirId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9554))(this);
	}
	template <typename T = bool> T get_hasKefirId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA95DC))(this);
	}
	template <typename T = void> T AddKefirId(Il2CppString* newKefirId) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA95E8))(this, newKefirId);
	}
	template <typename T = void> T ReplaceKefirId(Il2CppString* newKefirId) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA96FC))(this, newKefirId);
	}
	template <typename T = void> T RemoveKefirId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9810))(this);
	}
	template <typename T = uintptr_t> T get_kickTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D93CB0))(this);
	}
	template <typename T = bool> T get_hasKickTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D93658))(this);
	}
	template <typename T = void> T AddKickTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D936C8))(this, newValue);
	}
	template <typename T = void> T ReplaceKickTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA981C))(this, newValue);
	}
	template <typename T = void> T RemoveKickTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9920))(this);
	}
	template <typename T = uintptr_t> T get_land() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA992C))(this);
	}
	template <typename T = bool> T get_hasLand() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA99B4))(this);
	}
	template <typename T = void> T AddLand(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA99C0))(this, newType);
	}
	template <typename T = void> T ReplaceLand(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DA9AC4))(this, newType);
	}
	template <typename T = void> T RemoveLand() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9BC8))(this);
	}
	template <typename T = uintptr_t> T get_language() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9BD4))(this);
	}
	template <typename T = bool> T get_hasLanguage() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9C5C))(this);
	}
	template <typename T = void> T AddLanguage(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA9C68))(this, newValue);
	}
	template <typename T = void> T ReplaceLanguage(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA9D7C))(this, newValue);
	}
	template <typename T = void> T RemoveLanguage() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9E90))(this);
	}
	template <typename T = uintptr_t> T get_lastAttackTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9E9C))(this);
	}
	template <typename T = bool> T get_hasLastAttackTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DA9F24))(this);
	}
	template <typename T = void> T AddLastAttackTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA9F30))(this, newValue);
	}
	template <typename T = void> T ReplaceLastAttackTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA034))(this, newValue);
	}
	template <typename T = void> T RemoveLastAttackTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA138))(this);
	}
	template <typename T = uintptr_t> T get_lastBugReport() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA144))(this);
	}
	template <typename T = bool> T get_hasLastBugReport() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA1CC))(this);
	}
	template <typename T = void> T AddLastBugReport(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA1D8))(this, newValue);
	}
	template <typename T = void> T ReplaceLastBugReport(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA2DC))(this, newValue);
	}
	template <typename T = void> T RemoveLastBugReport() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA3E0))(this);
	}
	template <typename T = uintptr_t> T get_lastDeath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA3EC))(this);
	}
	template <typename T = bool> T get_hasLastDeath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA474))(this);
	}
	template <typename T = void> T AddLastDeath(int64_t newTime, int32_t newCount) {
		return ((T (*)(AccountEntity*, int64_t, int32_t))(Il2CppBase() + 0x1DAA480))(this, newTime, newCount);
	}
	template <typename T = void> T ReplaceLastDeath(int64_t newTime, int32_t newCount) {
		return ((T (*)(AccountEntity*, int64_t, int32_t))(Il2CppBase() + 0x1DAA58C))(this, newTime, newCount);
	}
	template <typename T = void> T RemoveLastDeath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA698))(this);
	}
	template <typename T = uintptr_t> T get_lastMinimapPing() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA6A4))(this);
	}
	template <typename T = bool> T get_hasLastMinimapPing() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA72C))(this);
	}
	template <typename T = void> T AddLastMinimapPing(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA738))(this, newValue);
	}
	template <typename T = void> T ReplaceLastMinimapPing(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA83C))(this, newValue);
	}
	template <typename T = void> T RemoveLastMinimapPing() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA940))(this);
	}
	template <typename T = uintptr_t> T get_lastOpenPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA94C))(this);
	}
	template <typename T = bool> T get_hasLastOpenPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAA9D4))(this);
	}
	template <typename T = void> T AddLastOpenPortals(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA9E0))(this, newValue);
	}
	template <typename T = void> T ReplaceLastOpenPortals(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAAE4))(this, newValue);
	}
	template <typename T = void> T RemoveLastOpenPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAABE8))(this);
	}
	template <typename T = uintptr_t> T get_lastResetEventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAABF4))(this);
	}
	template <typename T = bool> T get_hasLastResetEventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAAC7C))(this);
	}
	template <typename T = void> T AddLastResetEventBpPointsB(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAC88))(this, newValue);
	}
	template <typename T = void> T ReplaceLastResetEventBpPointsB(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAD8C))(this, newValue);
	}
	template <typename T = void> T RemoveLastResetEventBpPointsB() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAAE90))(this);
	}
	template <typename T = uintptr_t> T get_lastResetPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAAE9C))(this);
	}
	template <typename T = bool> T get_hasLastResetPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAAF24))(this);
	}
	template <typename T = void> T AddLastResetPortals(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAF30))(this, newValue);
	}
	template <typename T = void> T ReplaceLastResetPortals(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB034))(this, newValue);
	}
	template <typename T = void> T RemoveLastResetPortals() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB138))(this);
	}
	template <typename T = uintptr_t> T get_lastSeason() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB144))(this);
	}
	template <typename T = bool> T get_hasLastSeason() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB1CC))(this);
	}
	template <typename T = void> T AddLastSeason(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB1D8))(this, newCount);
	}
	template <typename T = void> T ReplaceLastSeason(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB2DC))(this, newCount);
	}
	template <typename T = void> T RemoveLastSeason() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB3E0))(this);
	}
	template <typename T = uintptr_t> T get_lastSeasonNotified() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB3EC))(this);
	}
	template <typename T = bool> T get_hasLastSeasonNotified() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB474))(this);
	}
	template <typename T = void> T AddLastSeasonNotified(bool newValue) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAB480))(this, newValue);
	}
	template <typename T = void> T ReplaceLastSeasonNotified(bool newValue) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAB588))(this, newValue);
	}
	template <typename T = void> T RemoveLastSeasonNotified() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB690))(this);
	}
	template <typename T = uintptr_t> T get_lastSession() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB69C))(this);
	}
	template <typename T = bool> T get_hasLastSession() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB724))(this);
	}
	template <typename T = void> T AddLastSession(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB730))(this, newId);
	}
	template <typename T = void> T ReplaceLastSession(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB834))(this, newId);
	}
	template <typename T = void> T RemoveLastSession() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB938))(this);
	}
	template <typename T = uintptr_t> T get_lastVisitedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB944))(this);
	}
	template <typename T = bool> T get_hasLastVisitedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAB9CC))(this);
	}
	template <typename T = void> T AddLastVisitedLocation(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB9D8))(this, newValue);
	}
	template <typename T = void> T ReplaceLastVisitedLocation(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DABADC))(this, newValue);
	}
	template <typename T = void> T RemoveLastVisitedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABBE0))(this);
	}
	template <typename T = uintptr_t> T get_lastVisitedLocationTicks() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABBEC))(this);
	}
	template <typename T = bool> T get_hasLastVisitedLocationTicks() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABC74))(this);
	}
	template <typename T = void> T AddLastVisitedLocationTicks(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DABC80))(this, newValue);
	}
	template <typename T = void> T ReplaceLastVisitedLocationTicks(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DABD84))(this, newValue);
	}
	template <typename T = void> T RemoveLastVisitedLocationTicks() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABE88))(this);
	}
	template <typename T = bool> T get_wasLeaveArenaStarted() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABE94))(this);
	}
	template <typename T = void> T set_wasLeaveArenaStarted(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DABEA0))(this, value);
	}
	template <typename T = uintptr_t> T get_leaveArenaTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DABFB8))(this);
	}
	template <typename T = bool> T get_hasLeaveArenaTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC040))(this);
	}
	template <typename T = void> T AddLeaveArenaTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAC04C))(this, newValue);
	}
	template <typename T = void> T ReplaceLeaveArenaTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAC150))(this, newValue);
	}
	template <typename T = void> T RemoveLeaveArenaTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC254))(this);
	}
	template <typename T = uintptr_t> T get_level() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC260))(this);
	}
	template <typename T = bool> T get_hasLevel() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC2E8))(this);
	}
	template <typename T = void> T AddLevel(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DAC2F4))(this, newValue);
	}
	template <typename T = void> T ReplaceLevel(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DAC3F8))(this, newValue);
	}
	template <typename T = void> T RemoveLevel() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC4FC))(this);
	}
	template <typename T = uintptr_t> T get_locationAuto() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC508))(this);
	}
	template <typename T = bool> T get_hasLocationAuto() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC590))(this);
	}
	template <typename T = void> T AddLocationAuto(Il2CppDictionary<Il2CppString*, uintptr_t>* newAttempts) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1DAC59C))(this, newAttempts);
	}
	template <typename T = void> T ReplaceLocationAuto(Il2CppDictionary<Il2CppString*, uintptr_t>* newAttempts) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1DAC6B0))(this, newAttempts);
	}
	template <typename T = void> T RemoveLocationAuto() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC7C4))(this);
	}
	template <typename T = uintptr_t> T get_locationResetInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC7D0))(this);
	}
	template <typename T = bool> T get_hasLocationResetInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAC858))(this);
	}
	template <typename T = void> T AddLocationResetInfo(int64_t newResetPriceTime, int64_t newCooldownTime, int32_t newResetCount, uintptr_t newCurrencyType, int32_t newPrice) {
		return ((T (*)(AccountEntity*, int64_t, int64_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1DAC864))(this, newResetPriceTime, newCooldownTime, newResetCount, newCurrencyType, newPrice);
	}
	template <typename T = void> T ReplaceLocationResetInfo(int64_t newResetPriceTime, int64_t newCooldownTime, int32_t newResetCount, uintptr_t newCurrencyType, int32_t newPrice) {
		return ((T (*)(AccountEntity*, int64_t, int64_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x1DAC990))(this, newResetPriceTime, newCooldownTime, newResetCount, newCurrencyType, newPrice);
	}
	template <typename T = void> T RemoveLocationResetInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACABC))(this);
	}
	template <typename T = uintptr_t> T get_magicSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACAC8))(this);
	}
	template <typename T = bool> T get_hasMagicSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACB50))(this);
	}
	template <typename T = void> T AddMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DACB5C))(this, newItems, newRiding);
	}
	template <typename T = void> T ReplaceMagicSave(Il2CppArray<uintptr_t>* newItems, bool newRiding) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x1DACC7C))(this, newItems, newRiding);
	}
	template <typename T = void> T RemoveMagicSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACD9C))(this);
	}
	template <typename T = uintptr_t> T get_manualQuestTrackingOrder() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACDA8))(this);
	}
	template <typename T = bool> T get_hasManualQuestTrackingOrder() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DACE30))(this);
	}
	template <typename T = void> T AddManualQuestTrackingOrder(Il2CppString* newQuests, int32_t newCount) {
		return ((T (*)(AccountEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DACE3C))(this, newQuests, newCount);
	}
	template <typename T = void> T ReplaceManualQuestTrackingOrder(Il2CppString* newQuests, int32_t newCount) {
		return ((T (*)(AccountEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DACF58))(this, newQuests, newCount);
	}
	template <typename T = void> T RemoveManualQuestTrackingOrder() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD074))(this);
	}
	template <typename T = uintptr_t> T get_mapPath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD080))(this);
	}
	template <typename T = bool> T get_hasMapPath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD108))(this);
	}
	template <typename T = void> T AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(AccountEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAD114))(this, newStartId, newEndId);
	}
	template <typename T = void> T ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((T (*)(AccountEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAD23C))(this, newStartId, newEndId);
	}
	template <typename T = void> T RemoveMapPath() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD364))(this);
	}
	template <typename T = uintptr_t> T get_metabolism() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD370))(this);
	}
	template <typename T = bool> T get_hasMetabolism() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD3F8))(this);
	}
	template <typename T = void> T AddMetabolism(float newHunger, float newThirst) {
		return ((T (*)(AccountEntity*, float, float))(Il2CppBase() + 0x1DAD404))(this, newHunger, newThirst);
	}
	template <typename T = void> T ReplaceMetabolism(float newHunger, float newThirst) {
		return ((T (*)(AccountEntity*, float, float))(Il2CppBase() + 0x1DAD50C))(this, newHunger, newThirst);
	}
	template <typename T = void> T RemoveMetabolism() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD614))(this);
	}
	template <typename T = uintptr_t> T get_mountInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD620))(this);
	}
	template <typename T = bool> T get_hasMountInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD6A8))(this);
	}
	template <typename T = void> T AddMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAD6B4))(this, newData);
	}
	template <typename T = void> T ReplaceMountInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAD7C8))(this, newData);
	}
	template <typename T = void> T RemoveMountInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD8DC))(this);
	}
	template <typename T = uintptr_t> T get_mountsInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD8E8))(this);
	}
	template <typename T = bool> T get_hasMountsInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAD970))(this);
	}
	template <typename T = void> T AddMountsInventoryGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAD97C))(this, newValue);
	}
	template <typename T = void> T ReplaceMountsInventoryGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DADA80))(this, newValue);
	}
	template <typename T = void> T RemoveMountsInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADB84))(this);
	}
	template <typename T = uintptr_t> T get_nextPortalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADB90))(this);
	}
	template <typename T = bool> T get_hasNextPortalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADC18))(this);
	}
	template <typename T = void> T AddNextPortalsPoints(int32_t newPoints, int32_t newWorld) {
		return ((T (*)(AccountEntity*, int32_t, int32_t))(Il2CppBase() + 0x1DADC24))(this, newPoints, newWorld);
	}
	template <typename T = void> T ReplaceNextPortalsPoints(int32_t newPoints, int32_t newWorld) {
		return ((T (*)(AccountEntity*, int32_t, int32_t))(Il2CppBase() + 0x1DADD2C))(this, newPoints, newWorld);
	}
	template <typename T = void> T RemoveNextPortalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADE34))(this);
	}
	template <typename T = uintptr_t> T get_notSeenNewClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADE40))(this);
	}
	template <typename T = bool> T get_hasNotSeenNewClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DADEC8))(this);
	}
	template <typename T = void> T AddNotSeenNewClasses(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DADED4))(this, newValues);
	}
	template <typename T = void> T ReplaceNotSeenNewClasses(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DADFE8))(this, newValues);
	}
	template <typename T = void> T RemoveNotSeenNewClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE0FC))(this);
	}
	template <typename T = uintptr_t> T get_notSeenNewPets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE108))(this);
	}
	template <typename T = bool> T get_hasNotSeenNewPets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE190))(this);
	}
	template <typename T = void> T AddNotSeenNewPets(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE19C))(this, newValues);
	}
	template <typename T = void> T ReplaceNotSeenNewPets(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE2B0))(this, newValues);
	}
	template <typename T = void> T RemoveNotSeenNewPets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE3C4))(this);
	}
	template <typename T = uintptr_t> T get_notSeenNewRecipes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE3D0))(this);
	}
	template <typename T = bool> T get_hasNotSeenNewRecipes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE458))(this);
	}
	template <typename T = void> T AddNotSeenNewRecipes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE464))(this, newValues);
	}
	template <typename T = void> T ReplaceNotSeenNewRecipes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE578))(this, newValues);
	}
	template <typename T = void> T RemoveNotSeenNewRecipes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE68C))(this);
	}
	template <typename T = uintptr_t> T get_notSeenNewRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE698))(this);
	}
	template <typename T = bool> T get_hasNotSeenNewRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE720))(this);
	}
	template <typename T = void> T AddNotSeenNewRunes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE72C))(this, newValues);
	}
	template <typename T = void> T ReplaceNotSeenNewRunes(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAE840))(this, newValues);
	}
	template <typename T = void> T RemoveNotSeenNewRunes() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE954))(this);
	}
	template <typename T = uintptr_t> T get_occupation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE960))(this);
	}
	template <typename T = bool> T get_hasOccupation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAE9E8))(this);
	}
	template <typename T = void> T AddOccupation(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DAE9F4))(this, newType);
	}
	template <typename T = void> T ReplaceOccupation(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DAEAF8))(this, newType);
	}
	template <typename T = void> T RemoveOccupation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEBFC))(this);
	}
	template <typename T = uintptr_t> T get_odinExp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEC08))(this);
	}
	template <typename T = bool> T get_hasOdinExp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEC90))(this);
	}
	template <typename T = void> T AddOdinExp(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAEC9C))(this, newValue);
	}
	template <typename T = void> T ReplaceOdinExp(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAEDA0))(this, newValue);
	}
	template <typename T = void> T RemoveOdinExp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEEA4))(this);
	}
	template <typename T = uintptr_t> T get_offlineDeathInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEEB0))(this);
	}
	template <typename T = bool> T get_hasOfflineDeathInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAEF38))(this);
	}
	template <typename T = void> T AddOfflineDeathInfo(uintptr_t newType, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newGuildTag, Il2CppString* newClanName, Il2CppString* newLocationName) {
		return ((T (*)(AccountEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAEF44))(this, newType, newName, newBlueprint, newGuildTag, newClanName, newLocationName);
	}
	template <typename T = void> T ReplaceOfflineDeathInfo(uintptr_t newType, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newGuildTag, Il2CppString* newClanName, Il2CppString* newLocationName) {
		return ((T (*)(AccountEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAF0C0))(this, newType, newName, newBlueprint, newGuildTag, newClanName, newLocationName);
	}
	template <typename T = void> T RemoveOfflineDeathInfo() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF23C))(this);
	}
	template <typename T = uintptr_t> T get_onlineTimeout() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF248))(this);
	}
	template <typename T = bool> T get_hasOnlineTimeout() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF2D0))(this);
	}
	template <typename T = void> T AddOnlineTimeout(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAF2DC))(this, newValue);
	}
	template <typename T = void> T ReplaceOnlineTimeout(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAF3E0))(this, newValue);
	}
	template <typename T = void> T RemoveOnlineTimeout() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF4E4))(this);
	}
	template <typename T = uintptr_t> T get_patchCommands() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF4F0))(this);
	}
	template <typename T = bool> T get_hasPatchCommands() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF578))(this);
	}
	template <typename T = void> T AddPatchCommands(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DAF584))(this, newList);
	}
	template <typename T = void> T ReplacePatchCommands(Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DAF698))(this, newList);
	}
	template <typename T = void> T RemovePatchCommands() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF7AC))(this);
	}
	template <typename T = bool> T get_isPayer() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF7B8))(this);
	}
	template <typename T = void> T set_isPayer(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAF7C4))(this, value);
	}
	template <typename T = uintptr_t> T get_peer() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF8DC))(this);
	}
	template <typename T = bool> T get_hasPeer() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAF964))(this);
	}
	template <typename T = void> T AddPeer(uintptr_t newValue, uintptr_t newIp) {
		return ((T (*)(AccountEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAF970))(this, newValue, newIp);
	}
	template <typename T = void> T ReplacePeer(uintptr_t newValue, uintptr_t newIp) {
		return ((T (*)(AccountEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAFA98))(this, newValue, newIp);
	}
	template <typename T = void> T RemovePeer() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFBC0))(this);
	}
	template <typename T = uintptr_t> T get_personalEntities() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFBCC))(this);
	}
	template <typename T = bool> T get_hasPersonalEntities() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFC54))(this);
	}
	template <typename T = void> T AddPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DAFC60))(this, newList);
	}
	template <typename T = void> T ReplacePersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DAFD74))(this, newList);
	}
	template <typename T = void> T RemovePersonalEntities() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFE88))(this);
	}
	template <typename T = uintptr_t> T get_petInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFE94))(this);
	}
	template <typename T = bool> T get_hasPetInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DAFF1C))(this);
	}
	template <typename T = void> T AddPetInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DAFF28))(this, newData);
	}
	template <typename T = void> T ReplacePetInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB003C))(this, newData);
	}
	template <typename T = void> T RemovePetInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0150))(this);
	}
	template <typename T = uintptr_t> T get_playerId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EB78))(this);
	}
	template <typename T = bool> T get_hasPlayerId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7E4))(this);
	}
	template <typename T = void> T AddPlayerId(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9E3A8))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerId(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB015C))(this, newValue);
	}
	template <typename T = void> T RemovePlayerId() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0260))(this);
	}
	template <typename T = bool> T get_isPlayerKill() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB026C))(this);
	}
	template <typename T = void> T set_isPlayerKill(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB0278))(this, value);
	}
	template <typename T = uintptr_t> T get_playerName() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EAF0))(this);
	}
	template <typename T = bool> T get_hasPlayerName() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9EAE4))(this);
	}
	template <typename T = void> T AddPlayerName(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DB0390))(this, newValue);
	}
	template <typename T = void> T ReplacePlayerName(Il2CppString* newValue) {
		return ((T (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DB04A4))(this, newValue);
	}
	template <typename T = void> T RemovePlayerName() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB05B8))(this);
	}
	template <typename T = uintptr_t> T get_portalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB05C4))(this);
	}
	template <typename T = bool> T get_hasPortalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB064C))(this);
	}
	template <typename T = void> T AddPortalsPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB0658))(this, newCount);
	}
	template <typename T = void> T ReplacePortalsPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB075C))(this, newCount);
	}
	template <typename T = void> T RemovePortalsPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0860))(this);
	}
	template <typename T = uintptr_t> T get_premiumPass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB086C))(this);
	}
	template <typename T = bool> T get_hasPremiumPass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB08F4))(this);
	}
	template <typename T = void> T AddPremiumPass(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB0900))(this, newNames);
	}
	template <typename T = void> T ReplacePremiumPass(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB0A14))(this, newNames);
	}
	template <typename T = void> T RemovePremiumPass() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0B28))(this);
	}
	template <typename T = uintptr_t> T get_purchaseHistory() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0B34))(this);
	}
	template <typename T = bool> T get_hasPurchaseHistory() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0BBC))(this);
	}
	template <typename T = void> T AddPurchaseHistory(Il2CppList<uintptr_t>* newEntries) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DB0BC8))(this, newEntries);
	}
	template <typename T = void> T ReplacePurchaseHistory(Il2CppList<uintptr_t>* newEntries) {
		return ((T (*)(AccountEntity*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DB0CDC))(this, newEntries);
	}
	template <typename T = void> T RemovePurchaseHistory() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0DF0))(this);
	}
	template <typename T = uintptr_t> T get_pushBlockedNotifications() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0DFC))(this);
	}
	template <typename T = bool> T get_hasPushBlockedNotifications() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB0E84))(this);
	}
	template <typename T = void> T AddPushBlockedNotifications(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB0E90))(this, newNames);
	}
	template <typename T = void> T ReplacePushBlockedNotifications(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB0FA4))(this, newNames);
	}
	template <typename T = void> T RemovePushBlockedNotifications() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB10B8))(this);
	}
	template <typename T = bool> T get_isPushNotificationsEnabled() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB10C4))(this);
	}
	template <typename T = void> T set_isPushNotificationsEnabled(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB10D0))(this, value);
	}
	template <typename T = uintptr_t> T get_questsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB11E8))(this);
	}
	template <typename T = bool> T get_hasQuestsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1270))(this);
	}
	template <typename T = void> T AddQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB127C))(this, newVersion, newData);
	}
	template <typename T = void> T ReplaceQuestsSave(int32_t newVersion, Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB1398))(this, newVersion, newData);
	}
	template <typename T = void> T RemoveQuestsSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB14B4))(this);
	}
	template <typename T = uintptr_t> T get_rGSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB14C0))(this);
	}
	template <typename T = bool> T get_hasRGSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1548))(this);
	}
	template <typename T = void> T AddRGSave(Il2CppDictionary<Il2CppString*, uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1DB1554))(this, newValues);
	}
	template <typename T = void> T ReplaceRGSave(Il2CppDictionary<Il2CppString*, uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x1DB1668))(this, newValues);
	}
	template <typename T = void> T RemoveRGSave() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB177C))(this);
	}
	template <typename T = uintptr_t> T get_registrationTimestamp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1788))(this);
	}
	template <typename T = bool> T get_hasRegistrationTimestamp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1810))(this);
	}
	template <typename T = void> T AddRegistrationTimestamp(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB181C))(this, newValue);
	}
	template <typename T = void> T ReplaceRegistrationTimestamp(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB1920))(this, newValue);
	}
	template <typename T = void> T RemoveRegistrationTimestamp() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1A24))(this);
	}
	template <typename T = uintptr_t> T get_renameClan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1A30))(this);
	}
	template <typename T = bool> T get_hasRenameClan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1AB8))(this);
	}
	template <typename T = void> T AddRenameClan(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1AC4))(this, newCount);
	}
	template <typename T = void> T ReplaceRenameClan(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1BC8))(this, newCount);
	}
	template <typename T = void> T RemoveRenameClan() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1CCC))(this);
	}
	template <typename T = uintptr_t> T get_rename() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1CD8))(this);
	}
	template <typename T = bool> T get_hasRename() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1D60))(this);
	}
	template <typename T = void> T AddRename(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1D6C))(this, newCount);
	}
	template <typename T = void> T ReplaceRename(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1E70))(this, newCount);
	}
	template <typename T = void> T RemoveRename() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1F74))(this);
	}
	template <typename T = uintptr_t> T get_runeInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB1F80))(this);
	}
	template <typename T = bool> T get_hasRuneInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2008))(this);
	}
	template <typename T = void> T AddRuneInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB2014))(this, newData);
	}
	template <typename T = void> T ReplaceRuneInventoryContent(Il2CppArray<uintptr_t>* newData) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB2128))(this, newData);
	}
	template <typename T = void> T RemoveRuneInventoryContent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB223C))(this);
	}
	template <typename T = uintptr_t> T get_runeInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2248))(this);
	}
	template <typename T = bool> T get_hasRuneInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB22D0))(this);
	}
	template <typename T = void> T AddRuneInventoryGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB22DC))(this, newValue);
	}
	template <typename T = void> T ReplaceRuneInventoryGrade(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB23E0))(this, newValue);
	}
	template <typename T = void> T RemoveRuneInventoryGrade() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB24E4))(this);
	}
	template <typename T = uintptr_t> T get_saveCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB24F0))(this);
	}
	template <typename T = bool> T get_hasSaveCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2578))(this);
	}
	template <typename T = void> T AddSaveCounter(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2584))(this, newValue);
	}
	template <typename T = void> T ReplaceSaveCounter(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2688))(this, newValue);
	}
	template <typename T = void> T RemoveSaveCounter() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB278C))(this);
	}
	template <typename T = uintptr_t> T get_saviorPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2798))(this);
	}
	template <typename T = bool> T get_hasSaviorPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2820))(this);
	}
	template <typename T = void> T AddSaviorPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB282C))(this, newCount);
	}
	template <typename T = void> T ReplaceSaviorPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2930))(this, newCount);
	}
	template <typename T = void> T RemoveSaviorPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2A34))(this);
	}
	template <typename T = uintptr_t> T get_seasonPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2A40))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2AC8))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2AD4))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2BD8))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2CDC))(this);
	}
	template <typename T = uintptr_t> T get_seenMapEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2CE8))(this);
	}
	template <typename T = bool> T get_hasSeenMapEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2D70))(this);
	}
	template <typename T = void> T AddSeenMapEvents(Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>* newEventPoints) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1DB2D7C))(this, newEventPoints);
	}
	template <typename T = void> T ReplaceSeenMapEvents(Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>* newEventPoints) {
		return ((T (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1DB2E90))(this, newEventPoints);
	}
	template <typename T = void> T RemoveSeenMapEvents() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2FA4))(this);
	}
	template <typename T = uintptr_t> T get_seenSeasonQuests() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB2FB0))(this);
	}
	template <typename T = bool> T get_hasSeenSeasonQuests() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3038))(this);
	}
	template <typename T = void> T AddSeenSeasonQuests(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB3044))(this, newNames);
	}
	template <typename T = void> T ReplaceSeenSeasonQuests(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB3158))(this, newNames);
	}
	template <typename T = void> T RemoveSeenSeasonQuests() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB326C))(this);
	}
	template <typename T = uintptr_t> T get_selectedClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3278))(this);
	}
	template <typename T = bool> T get_hasSelectedClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3300))(this);
	}
	template <typename T = void> T AddSelectedClasses(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB330C))(this, newNames);
	}
	template <typename T = void> T ReplaceSelectedClasses(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB3420))(this, newNames);
	}
	template <typename T = void> T RemoveSelectedClasses() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3534))(this);
	}
	template <typename T = uintptr_t> T get_session() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3540))(this);
	}
	template <typename T = bool> T get_hasSession() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB35C8))(this);
	}
	template <typename T = void> T AddSession(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB35D4))(this, newId);
	}
	template <typename T = void> T ReplaceSession(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB36D8))(this, newId);
	}
	template <typename T = void> T RemoveSession() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB37DC))(this);
	}
	template <typename T = uintptr_t> T get_showChestMarker() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB37E8))(this);
	}
	template <typename T = bool> T get_hasShowChestMarker() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3870))(this);
	}
	template <typename T = void> T AddShowChestMarker(bool newValue) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB387C))(this, newValue);
	}
	template <typename T = void> T ReplaceShowChestMarker(bool newValue) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB3984))(this, newValue);
	}
	template <typename T = void> T RemoveShowChestMarker() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3A8C))(this);
	}
	template <typename T = uintptr_t> T get_silver() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3A98))(this);
	}
	template <typename T = bool> T get_hasSilver() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3B20))(this);
	}
	template <typename T = void> T AddSilver(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB3B2C))(this, newCount);
	}
	template <typename T = void> T ReplaceSilver(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB3C30))(this, newCount);
	}
	template <typename T = void> T RemoveSilver() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3D34))(this);
	}
	template <typename T = uintptr_t> T get_socialPlatformsStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3D40))(this);
	}
	template <typename T = bool> T get_hasSocialPlatformsStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3DC8))(this);
	}
	template <typename T = void> T AddSocialPlatformsStatus(bool newIsGooglePlayConnected, bool newIsGamecenterConnected) {
		return ((T (*)(AccountEntity*, bool, bool))(Il2CppBase() + 0x1DB3DD4))(this, newIsGooglePlayConnected, newIsGamecenterConnected);
	}
	template <typename T = void> T ReplaceSocialPlatformsStatus(bool newIsGooglePlayConnected, bool newIsGamecenterConnected) {
		return ((T (*)(AccountEntity*, bool, bool))(Il2CppBase() + 0x1DB3EE8))(this, newIsGooglePlayConnected, newIsGamecenterConnected);
	}
	template <typename T = void> T RemoveSocialPlatformsStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB3FFC))(this);
	}
	template <typename T = uintptr_t> T get_speed() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4008))(this);
	}
	template <typename T = bool> T get_hasSpeed() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4090))(this);
	}
	template <typename T = void> T AddSpeed(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB409C))(this, newValue);
	}
	template <typename T = void> T ReplaceSpeed(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB41A0))(this, newValue);
	}
	template <typename T = void> T RemoveSpeed() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB42A4))(this);
	}
	template <typename T = uintptr_t> T get_tags() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB42B0))(this);
	}
	template <typename T = bool> T get_hasTags() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4338))(this);
	}
	template <typename T = void> T AddTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB4344))(this, newValues);
	}
	template <typename T = void> T ReplaceTags(Il2CppArray<uintptr_t>* newValues) {
		return ((T (*)(AccountEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1DB4458))(this, newValues);
	}
	template <typename T = void> T RemoveTags() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB456C))(this);
	}
	template <typename T = uintptr_t> T get_testGroup() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7FC))(this);
	}
	template <typename T = bool> T get_hasTestGroup() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7F0))(this);
	}
	template <typename T = void> T AddTestGroup(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4578))(this, newValue);
	}
	template <typename T = void> T ReplaceTestGroup(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB467C))(this, newValue);
	}
	template <typename T = void> T RemoveTestGroup() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4780))(this);
	}
	template <typename T = uintptr_t> T get_tickets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB478C))(this);
	}
	template <typename T = bool> T get_hasTickets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4814))(this);
	}
	template <typename T = void> T AddTickets(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4820))(this, newCount);
	}
	template <typename T = void> T ReplaceTickets(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4924))(this, newCount);
	}
	template <typename T = void> T RemoveTickets() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4A28))(this);
	}
	template <typename T = uintptr_t> T get_timeLockMove() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4A34))(this);
	}
	template <typename T = bool> T get_hasTimeLockMove() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4ABC))(this);
	}
	template <typename T = void> T AddTimeLockMove(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB4AC8))(this, newValue);
	}
	template <typename T = void> T ReplaceTimeLockMove(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB4BCC))(this, newValue);
	}
	template <typename T = void> T RemoveTimeLockMove() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4CD0))(this);
	}
	template <typename T = uintptr_t> T get_totalDonate() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4CDC))(this);
	}
	template <typename T = bool> T get_hasTotalDonate() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4D64))(this);
	}
	template <typename T = void> T AddTotalDonate(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB4D70))(this, newValue);
	}
	template <typename T = void> T ReplaceTotalDonate(float newValue) {
		return ((T (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB4E74))(this, newValue);
	}
	template <typename T = void> T RemoveTotalDonate() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4F78))(this);
	}
	template <typename T = uintptr_t> T get_tournamentStartSearchingTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB4F84))(this);
	}
	template <typename T = bool> T get_hasTournamentStartSearchingTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB500C))(this);
	}
	template <typename T = void> T AddTournamentStartSearchingTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB5018))(this, newValue);
	}
	template <typename T = void> T ReplaceTournamentStartSearchingTime(int64_t newValue) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB511C))(this, newValue);
	}
	template <typename T = void> T RemoveTournamentStartSearchingTime() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5220))(this);
	}
	template <typename T = uintptr_t> T get_transactions() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB522C))(this);
	}
	template <typename T = bool> T get_hasTransactions() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB52B4))(this);
	}
	template <typename T = void> T AddTransactions(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB52C0))(this, newCount);
	}
	template <typename T = void> T ReplaceTransactions(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB53C4))(this, newCount);
	}
	template <typename T = void> T RemoveTransactions() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB54C8))(this);
	}
	template <typename T = uintptr_t> T get_unlockedEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB54D4))(this);
	}
	template <typename T = bool> T get_hasUnlockedEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB555C))(this);
	}
	template <typename T = void> T AddUnlockedEmojis(int32_t newNewEmojisCount, Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DB5568))(this, newNewEmojisCount, newList);
	}
	template <typename T = void> T ReplaceUnlockedEmojis(int32_t newNewEmojisCount, Il2CppList<uintptr_t>* newList) {
		return ((T (*)(AccountEntity*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1DB5684))(this, newNewEmojisCount, newList);
	}
	template <typename T = void> T RemoveUnlockedEmojis() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB57A0))(this);
	}
	template <typename T = uintptr_t> T get_unlockedFoW() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB57AC))(this);
	}
	template <typename T = bool> T get_hasUnlockedFoW() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5834))(this);
	}
	template <typename T = void> T AddUnlockedFoW(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5840))(this, newNames);
	}
	template <typename T = void> T ReplaceUnlockedFoW(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5954))(this, newNames);
	}
	template <typename T = void> T RemoveUnlockedFoW() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5A68))(this);
	}
	template <typename T = uintptr_t> T get_unlockedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5A74))(this);
	}
	template <typename T = bool> T get_hasUnlockedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5AFC))(this);
	}
	template <typename T = void> T AddUnlockedLocation(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5B08))(this, newNames);
	}
	template <typename T = void> T ReplaceUnlockedLocation(Il2CppList<Il2CppString*>* newNames) {
		return ((T (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5C1C))(this, newNames);
	}
	template <typename T = void> T RemoveUnlockedLocation() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5D30))(this);
	}
	template <typename T = uintptr_t> T get_usedPlatforms() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5D3C))(this);
	}
	template <typename T = bool> T get_hasUsedPlatforms() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5DC4))(this);
	}
	template <typename T = void> T AddUsedPlatforms(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB5DD0))(this, newValue);
	}
	template <typename T = void> T ReplaceUsedPlatforms(int32_t newValue) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB5ED4))(this, newValue);
	}
	template <typename T = void> T RemoveUsedPlatforms() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5FD8))(this);
	}
	template <typename T = uintptr_t> T get_vIPPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB5FE4))(this);
	}
	template <typename T = bool> T get_hasVIPPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB606C))(this);
	}
	template <typename T = void> T AddVIPPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB6078))(this, newCount);
	}
	template <typename T = void> T ReplaceVIPPoints(int32_t newCount) {
		return ((T (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB617C))(this, newCount);
	}
	template <typename T = void> T RemoveVIPPoints() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB6280))(this);
	}
	template <typename T = uintptr_t> T get_world() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB628C))(this);
	}
	template <typename T = bool> T get_hasWorld() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB6314))(this);
	}
	template <typename T = void> T AddWorld(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB6320))(this, newId);
	}
	template <typename T = void> T ReplaceWorld(int64_t newId) {
		return ((T (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB6424))(this, newId);
	}
	template <typename T = void> T RemoveWorld() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB6528))(this);
	}
	template <typename T = bool> T get_wasWorldSent() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB6534))(this);
	}
	template <typename T = void> T set_wasWorldSent(bool value) {
		return ((T (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB6540))(this, value);
	}
	template <typename T = uintptr_t> T get_worldStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB6658))(this);
	}
	template <typename T = bool> T get_hasWorldStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB66E0))(this);
	}
	template <typename T = void> T AddWorldStatus(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DB66EC))(this, newType);
	}
	template <typename T = void> T ReplaceWorldStatus(uintptr_t newType) {
		return ((T (*)(AccountEntity*, uintptr_t))(Il2CppBase() + 0x1DB67F0))(this, newType);
	}
	template <typename T = void> T RemoveWorldStatus() {
		return ((T (*)(AccountEntity*))(Il2CppBase() + 0x1DB68F4))(this);
	}

};

}
