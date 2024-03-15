#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountEntity"));
	}

	template <typename R = AvatarComponent*> static R& avatarComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = BugReportDelay*> static R& bugReportDelayComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = DeepLogComponent*> static R& deepLogComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = DisconnectComponent*> static R& disconnectComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = FirstLaunchComponent*> static R& firstLaunchComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = FreeCraftComponent*> static R& freeCraftComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename R = HideBagComponent*> static R& hideBagComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename R = HideHeadComponent*> static R& hideHeadComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename R = HidePetComponent*> static R& hidePetComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename R = LeaveArenaStartedComponent*> static R& leaveArenaStartedComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = PayerComponent*> static R& payerComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename R = PlayerKillComponent*> static R& playerKillComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename R = PushNotificationsEnabledComponent*> static R& pushNotificationsEnabledComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename R = WorldSentComponent*> static R& worldSentComponent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename R = TestGroup> R GetTestGroup() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9E780))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9E884))(this);
	}
	template <typename R = AlvesBpPointsComponent*> R get_alvesBpPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EC00))(this);
	}
	template <typename R = bool> R get_hasAlvesBpPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EC88))(this);
	}
	template <typename R = void> R AddAlvesBpPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9EC94))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesBpPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9ED98))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesBpPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EE9C))(this);
	}
	template <typename R = AlvesWavesBadgesT1Component*> R get_alvesWavesBadgesT1() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EEA8))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT1() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EF30))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9EF3C))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT1(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F040))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT1() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F144))(this);
	}
	template <typename R = AlvesWavesBadgesT2Component*> R get_alvesWavesBadgesT2() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F150))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT2() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F1D8))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F1E4))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT2(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F2E8))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT2() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F3EC))(this);
	}
	template <typename R = AlvesWavesBadgesT3Component*> R get_alvesWavesBadgesT3() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F3F8))(this);
	}
	template <typename R = bool> R get_hasAlvesWavesBadgesT3() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F480))(this);
	}
	template <typename R = void> R AddAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F48C))(this, newCount);
	}
	template <typename R = void> R ReplaceAlvesWavesBadgesT3(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9F590))(this, newCount);
	}
	template <typename R = void> R RemoveAlvesWavesBadgesT3() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F694))(this);
	}
	template <typename R = ArmingEmojisComponent*> R get_armingEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F6A0))(this);
	}
	template <typename R = bool> R get_hasArmingEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F728))(this);
	}
	template <typename R = void> R AddArmingEmojis(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1D9F734))(this, newNames);
	}
	template <typename R = void> R ReplaceArmingEmojis(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1D9F848))(this, newNames);
	}
	template <typename R = void> R RemoveArmingEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F95C))(this);
	}
	template <typename R = ArrivalTimeComponent*> R get_arrivalTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F968))(this);
	}
	template <typename R = bool> R get_hasArrivalTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9F9F0))(this);
	}
	template <typename R = void> R AddArrivalTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9F9FC))(this, newValue);
	}
	template <typename R = void> R ReplaceArrivalTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9FB00))(this, newValue);
	}
	template <typename R = void> R RemoveArrivalTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC04))(this);
	}
	template <typename R = AutoDetectedQualityComponent*> R get_autoDetectedQuality() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC10))(this);
	}
	template <typename R = bool> R get_hasAutoDetectedQuality() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FC98))(this);
	}
	template <typename R = void> R AddAutoDetectedQuality(uint8_t newValue) {
		return ((R (*)(AccountEntity*, uint8_t))(Il2CppBase() + 0x1D9FCA4))(this, newValue);
	}
	template <typename R = void> R ReplaceAutoDetectedQuality(uint8_t newValue) {
		return ((R (*)(AccountEntity*, uint8_t))(Il2CppBase() + 0x1D9FDA8))(this, newValue);
	}
	template <typename R = void> R RemoveAutoDetectedQuality() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FEAC))(this);
	}
	template <typename R = AvailableBugReportsComponent*> R get_availableBugReports() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FEB8))(this);
	}
	template <typename R = bool> R get_hasAvailableBugReports() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9FF40))(this);
	}
	template <typename R = void> R AddAvailableBugReports(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1D9FF4C))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailableBugReports(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0050))(this, newValue);
	}
	template <typename R = void> R RemoveAvailableBugReports() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0154))(this);
	}
	template <typename R = AvailableCosmeticsComponent*> R get_availableCosmetics() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0160))(this);
	}
	template <typename R = bool> R get_hasAvailableCosmetics() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA01E8))(this);
	}
	template <typename R = void> R AddAvailableCosmetics(Il2CppDictionary<Il2CppString*, bool>* newItems) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x1DA01F4))(this, newItems);
	}
	template <typename R = void> R ReplaceAvailableCosmetics(Il2CppDictionary<Il2CppString*, bool>* newItems) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, bool>*))(Il2CppBase() + 0x1DA0308))(this, newItems);
	}
	template <typename R = void> R RemoveAvailableCosmetics() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA041C))(this);
	}
	template <typename R = AvailableProductsVersionComponent*> R get_availableProductsVersion() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0428))(this);
	}
	template <typename R = bool> R get_hasAvailableProductsVersion() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA04B0))(this);
	}
	template <typename R = void> R AddAvailableProductsVersion(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA04BC))(this, newValue);
	}
	template <typename R = void> R ReplaceAvailableProductsVersion(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA05C0))(this, newValue);
	}
	template <typename R = void> R RemoveAvailableProductsVersion() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA06C4))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA06D0))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1D9E650))(this, value);
	}
	template <typename R = AvatarIdComponent*> R get_avatarId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA06DC))(this);
	}
	template <typename R = bool> R get_hasAvatarId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0764))(this);
	}
	template <typename R = void> R AddAvatarId(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0770))(this, newValue);
	}
	template <typename R = void> R ReplaceAvatarId(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA0874))(this, newValue);
	}
	template <typename R = void> R RemoveAvatarId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0978))(this);
	}
	template <typename R = BPRewardsComponent*> R get_bPRewards() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0984))(this);
	}
	template <typename R = bool> R get_hasBPRewards() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0A0C))(this);
	}
	template <typename R = void> R AddBPRewards(Il2CppDictionary<CurrencyType, Reward>* newDictionary) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<CurrencyType, Reward>*))(Il2CppBase() + 0x1DA0A18))(this, newDictionary);
	}
	template <typename R = void> R ReplaceBPRewards(Il2CppDictionary<CurrencyType, Reward>* newDictionary) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<CurrencyType, Reward>*))(Il2CppBase() + 0x1DA0B2C))(this, newDictionary);
	}
	template <typename R = void> R RemoveBPRewards() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0C40))(this);
	}
	template <typename R = BattleTagComponent*> R get_battleTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0C4C))(this);
	}
	template <typename R = bool> R get_hasBattleTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0CD4))(this);
	}
	template <typename R = void> R AddBattleTag(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA0CE0))(this, newValue);
	}
	template <typename R = void> R ReplaceBattleTag(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA0DF4))(this, newValue);
	}
	template <typename R = void> R RemoveBattleTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0F08))(this);
	}
	template <typename R = bool> R get_isBugReportDelay() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA0F14))(this);
	}
	template <typename R = void> R set_isBugReportDelay(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA0F20))(this, value);
	}
	template <typename R = CartCacheComponent*> R get_cartCache() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1038))(this);
	}
	template <typename R = bool> R get_hasCartCache() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA10C0))(this);
	}
	template <typename R = void> R AddCartCache(int32_t newLevel, Il2CppArray<Resource>* newResources) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppArray<Resource>*))(Il2CppBase() + 0x1DA10CC))(this, newLevel, newResources);
	}
	template <typename R = void> R ReplaceCartCache(int32_t newLevel, Il2CppArray<Resource>* newResources) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppArray<Resource>*))(Il2CppBase() + 0x1DA11E8))(this, newLevel, newResources);
	}
	template <typename R = void> R RemoveCartCache() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1304))(this);
	}
	template <typename R = CashbackCoinsComponent*> R get_cashbackCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1310))(this);
	}
	template <typename R = bool> R get_hasCashbackCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1398))(this);
	}
	template <typename R = void> R AddCashbackCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA13A4))(this, newCount);
	}
	template <typename R = void> R ReplaceCashbackCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA14A8))(this, newCount);
	}
	template <typename R = void> R RemoveCashbackCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA15AC))(this);
	}
	template <typename R = CellComponent*> R get_cell() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA15B8))(this);
	}
	template <typename R = bool> R get_hasCell() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1640))(this);
	}
	template <typename R = void> R AddCell(uint8_t newId) {
		return ((R (*)(AccountEntity*, uint8_t))(Il2CppBase() + 0x1DA164C))(this, newId);
	}
	template <typename R = void> R ReplaceCell(uint8_t newId) {
		return ((R (*)(AccountEntity*, uint8_t))(Il2CppBase() + 0x1DA1750))(this, newId);
	}
	template <typename R = void> R RemoveCell() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1854))(this);
	}
	template <typename R = ChatDataComponent*> R get_chatData() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1860))(this);
	}
	template <typename R = bool> R get_hasChatData() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA18E8))(this);
	}
	template <typename R = void> R AddChatData(bool newIsRegistered, Il2CppString* newLogin, Il2CppString* newPassword, Il2CppString* newSelectedRoom, Il2CppList<ChatRoom*>* newRooms, int64_t newBannedTill) {
		return ((R (*)(AccountEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppList<ChatRoom*>*, int64_t))(Il2CppBase() + 0x1DA18F4))(this, newIsRegistered, newLogin, newPassword, newSelectedRoom, newRooms, newBannedTill);
	}
	template <typename R = void> R ReplaceChatData(bool newIsRegistered, Il2CppString* newLogin, Il2CppString* newPassword, Il2CppString* newSelectedRoom, Il2CppList<ChatRoom*>* newRooms, int64_t newBannedTill) {
		return ((R (*)(AccountEntity*, bool, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppList<ChatRoom*>*, int64_t))(Il2CppBase() + 0x1DA1A68))(this, newIsRegistered, newLogin, newPassword, newSelectedRoom, newRooms, newBannedTill);
	}
	template <typename R = void> R RemoveChatData() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1BDC))(this);
	}
	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1BE8))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1C70))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1C7C))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1D80))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1E84))(this);
	}
	template <typename R = ClanJoinTimeComponent*> R get_clanJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1E90))(this);
	}
	template <typename R = bool> R get_hasClanJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA1F18))(this);
	}
	template <typename R = void> R AddClanJoinTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA1F24))(this, newValue);
	}
	template <typename R = void> R ReplaceClanJoinTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA2028))(this, newValue);
	}
	template <typename R = void> R RemoveClanJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA212C))(this);
	}
	template <typename R = ClassRunesComponent*> R get_classRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2138))(this);
	}
	template <typename R = bool> R get_hasClassRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA21C0))(this);
	}
	template <typename R = void> R AddClassRunes(Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>* newAllClassRunes) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>*))(Il2CppBase() + 0x1DA21CC))(this, newAllClassRunes);
	}
	template <typename R = void> R ReplaceClassRunes(Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>* newAllClassRunes) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<PlayerClassType, Il2CppArray<Il2CppString*>*>*))(Il2CppBase() + 0x1DA22E0))(this, newAllClassRunes);
	}
	template <typename R = void> R RemoveClassRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA23F4))(this);
	}
	template <typename R = ClassRunesEndTimeComponent*> R get_classRunesEndTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2400))(this);
	}
	template <typename R = bool> R get_hasClassRunesEndTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2488))(this);
	}
	template <typename R = void> R AddClassRunesEndTime(Il2CppDictionary<RuneSlotKey, int64_t>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<RuneSlotKey, int64_t>*))(Il2CppBase() + 0x1DA2494))(this, newValues);
	}
	template <typename R = void> R ReplaceClassRunesEndTime(Il2CppDictionary<RuneSlotKey, int64_t>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<RuneSlotKey, int64_t>*))(Il2CppBase() + 0x1DA25A8))(this, newValues);
	}
	template <typename R = void> R RemoveClassRunesEndTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA26BC))(this);
	}
	template <typename R = CoinsComponent*> R get_coins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA26C8))(this);
	}
	template <typename R = bool> R get_hasCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2750))(this);
	}
	template <typename R = void> R AddCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA275C))(this, newCount);
	}
	template <typename R = void> R ReplaceCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2860))(this, newCount);
	}
	template <typename R = void> R RemoveCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2964))(this);
	}
	template <typename R = CustomizationComponent*> R get_customization() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2970))(this);
	}
	template <typename R = bool> R get_hasCustomization() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA29F8))(this);
	}
	template <typename R = void> R AddCustomization(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2A04))(this, newCount);
	}
	template <typename R = void> R ReplaceCustomization(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2B08))(this, newCount);
	}
	template <typename R = void> R RemoveCustomization() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2C0C))(this);
	}
	template <typename R = CyclicPointsComponent*> R get_cyclicPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2C18))(this);
	}
	template <typename R = bool> R get_hasCyclicPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2CA0))(this);
	}
	template <typename R = void> R AddCyclicPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2CAC))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2DB0))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2EB4))(this);
	}
	template <typename R = CyclicPremiumTokensComponent*> R get_cyclicPremiumTokens() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2EC0))(this);
	}
	template <typename R = bool> R get_hasCyclicPremiumTokens() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA2F48))(this);
	}
	template <typename R = void> R AddCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA2F54))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicPremiumTokens(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3058))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicPremiumTokens() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA315C))(this);
	}
	template <typename R = CyclicYmirSoulComponent*> R get_cyclicYmirSoul() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3168))(this);
	}
	template <typename R = bool> R get_hasCyclicYmirSoul() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA31F0))(this);
	}
	template <typename R = void> R AddCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA31FC))(this, newCount);
	}
	template <typename R = void> R ReplaceCyclicYmirSoul(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3300))(this, newCount);
	}
	template <typename R = void> R RemoveCyclicYmirSoul() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3404))(this);
	}
	template <typename R = DailyShopStateComponent*> R get_dailyShopState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3410))(this);
	}
	template <typename R = bool> R get_hasDailyShopState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3498))(this);
	}
	template <typename R = void> R AddDailyShopState(int64_t newResetTime, Il2CppArray<bool>* newSoldSlots, Il2CppArray<uint8_t>* newSlots) {
		return ((R (*)(AccountEntity*, int64_t, Il2CppArray<bool>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1DA34A4))(this, newResetTime, newSoldSlots, newSlots);
	}
	template <typename R = void> R ReplaceDailyShopState(int64_t newResetTime, Il2CppArray<bool>* newSoldSlots, Il2CppArray<uint8_t>* newSlots) {
		return ((R (*)(AccountEntity*, int64_t, Il2CppArray<bool>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x1DA35DC))(this, newResetTime, newSoldSlots, newSlots);
	}
	template <typename R = void> R RemoveDailyShopState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3714))(this);
	}
	template <typename R = DeathCounterComponent*> R get_deathCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3720))(this);
	}
	template <typename R = bool> R get_hasDeathCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA37A8))(this);
	}
	template <typename R = void> R AddDeathCounter(int32_t newCount, float newTimer) {
		return ((R (*)(AccountEntity*, int32_t, float))(Il2CppBase() + 0x1DA37B4))(this, newCount, newTimer);
	}
	template <typename R = void> R ReplaceDeathCounter(int32_t newCount, float newTimer) {
		return ((R (*)(AccountEntity*, int32_t, float))(Il2CppBase() + 0x1DA38C8))(this, newCount, newTimer);
	}
	template <typename R = void> R RemoveDeathCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA39DC))(this);
	}
	template <typename R = bool> R get_isDeepLog() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA39E8))(this);
	}
	template <typename R = void> R set_isDeepLog(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA39F4))(this, value);
	}
	template <typename R = DevToDevComponent*> R get_devToDev() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3B0C))(this);
	}
	template <typename R = bool> R get_hasDevToDev() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3B94))(this);
	}
	template <typename R = void> R AddDevToDev(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA3BA0))(this, newValue);
	}
	template <typename R = void> R ReplaceDevToDev(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA3CB4))(this, newValue);
	}
	template <typename R = void> R RemoveDevToDev() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3DC8))(this);
	}
	template <typename R = bool> R get_toDisconnect() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3DD4))(this);
	}
	template <typename R = void> R set_toDisconnect(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA3DE0))(this, value);
	}
	template <typename R = DistrictLevelComponent*> R get_districtLevel() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3EF8))(this);
	}
	template <typename R = bool> R get_hasDistrictLevel() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA3F80))(this);
	}
	template <typename R = void> R AddDistrictLevel(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA3F8C))(this, newValue);
	}
	template <typename R = void> R ReplaceDistrictLevel(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4090))(this, newValue);
	}
	template <typename R = void> R RemoveDistrictLevel() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4194))(this);
	}
	template <typename R = DistrictStateComponent*> R get_districtState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA41A0))(this);
	}
	template <typename R = bool> R get_hasDistrictState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4228))(this);
	}
	template <typename R = void> R AddDistrictState(DistrictState newType) {
		return ((R (*)(AccountEntity*, DistrictState))(Il2CppBase() + 0x1DA4234))(this, newType);
	}
	template <typename R = void> R ReplaceDistrictState(DistrictState newType) {
		return ((R (*)(AccountEntity*, DistrictState))(Il2CppBase() + 0x1DA4338))(this, newType);
	}
	template <typename R = void> R RemoveDistrictState() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA443C))(this);
	}
	template <typename R = DungeonLastEnterComponent*> R get_dungeonLastEnter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4448))(this);
	}
	template <typename R = bool> R get_hasDungeonLastEnter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA44D0))(this);
	}
	template <typename R = void> R AddDungeonLastEnter(Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>*))(Il2CppBase() + 0x1DA44DC))(this, newValues);
	}
	template <typename R = void> R ReplaceDungeonLastEnter(Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, ValueTuple2<int64_t, int64_t>*>*))(Il2CppBase() + 0x1DA45F0))(this, newValues);
	}
	template <typename R = void> R RemoveDungeonLastEnter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4704))(this);
	}
	template <typename R = EnergyTickComponent*> R get_energyTick() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4710))(this);
	}
	template <typename R = bool> R get_hasEnergyTick() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4798))(this);
	}
	template <typename R = void> R AddEnergyTick(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA47A4))(this, newValue);
	}
	template <typename R = void> R ReplaceEnergyTick(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA48A8))(this, newValue);
	}
	template <typename R = void> R RemoveEnergyTick() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA49AC))(this);
	}
	template <typename R = EventBpPointsAComponent*> R get_eventBpPointsA() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA49B8))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsA() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4A40))(this);
	}
	template <typename R = void> R AddEventBpPointsA(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4A4C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsA(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4B50))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsA() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4C54))(this);
	}
	template <typename R = EventBpPointsBComponent*> R get_eventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4C60))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4CE8))(this);
	}
	template <typename R = void> R AddEventBpPointsB(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4CF4))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsB(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4DF8))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4EFC))(this);
	}
	template <typename R = EventBpPointsCComponent*> R get_eventBpPointsC() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4F08))(this);
	}
	template <typename R = bool> R get_hasEventBpPointsC() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA4F90))(this);
	}
	template <typename R = void> R AddEventBpPointsC(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA4F9C))(this, newCount);
	}
	template <typename R = void> R ReplaceEventBpPointsC(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA50A0))(this, newCount);
	}
	template <typename R = void> R RemoveEventBpPointsC() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA51A4))(this);
	}
	template <typename R = ExitOwnerComponent*> R get_exitOwner() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA51B0))(this);
	}
	template <typename R = bool> R get_hasExitOwner() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5238))(this);
	}
	template <typename R = void> R AddExitOwner(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA5244))(this, newValue);
	}
	template <typename R = void> R ReplaceExitOwner(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA5348))(this, newValue);
	}
	template <typename R = void> R RemoveExitOwner() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA544C))(this);
	}
	template <typename R = ExitTagComponent*> R get_exitTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5458))(this);
	}
	template <typename R = bool> R get_hasExitTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA54E0))(this);
	}
	template <typename R = void> R AddExitTag(Il2CppString* newName) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA54EC))(this, newName);
	}
	template <typename R = void> R ReplaceExitTag(Il2CppString* newName) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA5600))(this, newName);
	}
	template <typename R = void> R RemoveExitTag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5714))(this);
	}
	template <typename R = ExperienceBoosterComponent*> R get_experienceBooster() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5720))(this);
	}
	template <typename R = bool> R get_hasExperienceBooster() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA57A8))(this);
	}
	template <typename R = void> R AddExperienceBooster(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA57B4))(this, newValue);
	}
	template <typename R = void> R ReplaceExperienceBooster(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA58B8))(this, newValue);
	}
	template <typename R = void> R RemoveExperienceBooster() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA59BC))(this);
	}
	template <typename R = ExpertiseComponent*> R get_expertise() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA59C8))(this);
	}
	template <typename R = bool> R get_hasExpertise() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5A50))(this);
	}
	template <typename R = void> R AddExpertise(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5A5C))(this, newValue);
	}
	template <typename R = void> R ReplaceExpertise(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5B60))(this, newValue);
	}
	template <typename R = void> R RemoveExpertise() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5C64))(this);
	}
	template <typename R = ExtraLevelCapComponent*> R get_extraLevelCap() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5C70))(this);
	}
	template <typename R = bool> R get_hasExtraLevelCap() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5CF8))(this);
	}
	template <typename R = void> R AddExtraLevelCap(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5D04))(this, newCount);
	}
	template <typename R = void> R ReplaceExtraLevelCap(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA5E08))(this, newCount);
	}
	template <typename R = void> R RemoveExtraLevelCap() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5F0C))(this);
	}
	template <typename R = FirstClassComponent*> R get_firstClass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5F18))(this);
	}
	template <typename R = bool> R get_hasFirstClass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA5FA0))(this);
	}
	template <typename R = void> R AddFirstClass(Il2CppString* newName) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA5FAC))(this, newName);
	}
	template <typename R = void> R ReplaceFirstClass(Il2CppString* newName) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA60C0))(this, newName);
	}
	template <typename R = void> R RemoveFirstClass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA61D4))(this);
	}
	template <typename R = bool> R get_wasFirstLaunch() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA61E0))(this);
	}
	template <typename R = void> R set_wasFirstLaunch(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA61EC))(this, value);
	}
	template <typename R = FirstTimeEventsComponent*> R get_firstTimeEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6304))(this);
	}
	template <typename R = bool> R get_hasFirstTimeEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA638C))(this);
	}
	template <typename R = void> R AddFirstTimeEvents(bool newGlobalMapEntered) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA6398))(this, newGlobalMapEntered);
	}
	template <typename R = void> R ReplaceFirstTimeEvents(bool newGlobalMapEntered) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA64A0))(this, newGlobalMapEntered);
	}
	template <typename R = void> R RemoveFirstTimeEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA65A8))(this);
	}
	template <typename R = FontanelGradeComponent*> R get_fontanelGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA65B4))(this);
	}
	template <typename R = bool> R get_hasFontanelGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA663C))(this);
	}
	template <typename R = void> R AddFontanelGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA6648))(this, newValue);
	}
	template <typename R = void> R ReplaceFontanelGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA674C))(this, newValue);
	}
	template <typename R = void> R RemoveFontanelGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6850))(this);
	}
	template <typename R = bool> R get_isFreeCraft() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA685C))(this);
	}
	template <typename R = void> R set_isFreeCraft(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA6868))(this, value);
	}
	template <typename R = GameObjectsSaveComponent*> R get_gameObjectsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6980))(this);
	}
	template <typename R = bool> R get_hasGameObjectsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6A08))(this);
	}
	template <typename R = void> R AddGameObjectsSave(Il2CppDictionary<Il2CppString*, Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DA6A14))(this, newValues);
	}
	template <typename R = void> R ReplaceGameObjectsSave(Il2CppDictionary<Il2CppString*, Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DA6B28))(this, newValues);
	}
	template <typename R = void> R RemoveGameObjectsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6C3C))(this);
	}
	template <typename R = GenderComponent*> R get_gender() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6C48))(this);
	}
	template <typename R = bool> R get_hasGender() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6CD0))(this);
	}
	template <typename R = void> R AddGender(Gender newType) {
		return ((R (*)(AccountEntity*, Gender))(Il2CppBase() + 0x1DA6CDC))(this, newType);
	}
	template <typename R = void> R ReplaceGender(Gender newType) {
		return ((R (*)(AccountEntity*, Gender))(Il2CppBase() + 0x1DA6DE0))(this, newType);
	}
	template <typename R = void> R RemoveGender() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6EE4))(this);
	}
	template <typename R = GiantReputationComponent*> R get_giantReputation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6EF0))(this);
	}
	template <typename R = bool> R get_hasGiantReputation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA6F78))(this);
	}
	template <typename R = void> R AddGiantReputation(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA6F84))(this, newCount);
	}
	template <typename R = void> R ReplaceGiantReputation(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA7088))(this, newCount);
	}
	template <typename R = void> R RemoveGiantReputation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA718C))(this);
	}
	template <typename R = GuildBossCoinsComponent*> R get_guildBossCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7198))(this);
	}
	template <typename R = bool> R get_hasGuildBossCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7220))(this);
	}
	template <typename R = void> R AddGuildBossCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA722C))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildBossCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA7330))(this, newCount);
	}
	template <typename R = void> R RemoveGuildBossCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7434))(this);
	}
	template <typename R = GuildCoinsComponent*> R get_guildCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7440))(this);
	}
	template <typename R = bool> R get_hasGuildCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA74C8))(this);
	}
	template <typename R = void> R AddGuildCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA74D4))(this, newCount);
	}
	template <typename R = void> R ReplaceGuildCoins(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA75D8))(this, newCount);
	}
	template <typename R = void> R RemoveGuildCoins() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA76DC))(this);
	}
	template <typename R = GuildComponent*> R get_guild() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA76E8))(this);
	}
	template <typename R = bool> R get_hasGuild() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7770))(this);
	}
	template <typename R = void> R AddGuild(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA777C))(this, newId);
	}
	template <typename R = void> R ReplaceGuild(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7880))(this, newId);
	}
	template <typename R = void> R RemoveGuild() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7984))(this);
	}
	template <typename R = GuildJoinTimeComponent*> R get_guildJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7990))(this);
	}
	template <typename R = bool> R get_hasGuildJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7A18))(this);
	}
	template <typename R = void> R AddGuildJoinTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7A24))(this, newValue);
	}
	template <typename R = void> R ReplaceGuildJoinTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA7B28))(this, newValue);
	}
	template <typename R = void> R RemoveGuildJoinTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7C2C))(this);
	}
	template <typename R = GuildRoleComponent*> R get_guildRole() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7C38))(this);
	}
	template <typename R = bool> R get_hasGuildRole() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7CC0))(this);
	}
	template <typename R = void> R AddGuildRole(GuildRole newType) {
		return ((R (*)(AccountEntity*, GuildRole))(Il2CppBase() + 0x1DA7CCC))(this, newType);
	}
	template <typename R = void> R ReplaceGuildRole(GuildRole newType) {
		return ((R (*)(AccountEntity*, GuildRole))(Il2CppBase() + 0x1DA7DD0))(this, newType);
	}
	template <typename R = void> R RemoveGuildRole() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7ED4))(this);
	}
	template <typename R = HealthCoefComponent*> R get_healthCoef() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7EE0))(this);
	}
	template <typename R = bool> R get_hasHealthCoef() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA7F68))(this);
	}
	template <typename R = void> R AddHealthCoef(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DA7F74))(this, newValue);
	}
	template <typename R = void> R ReplaceHealthCoef(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DA8078))(this, newValue);
	}
	template <typename R = void> R RemoveHealthCoef() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA817C))(this);
	}
	template <typename R = bool> R get_isHideBag() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8188))(this);
	}
	template <typename R = void> R set_isHideBag(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA8194))(this, value);
	}
	template <typename R = bool> R get_isHideHead() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA82AC))(this);
	}
	template <typename R = void> R set_isHideHead(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA82B8))(this, value);
	}
	template <typename R = bool> R get_isHidePet() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA83D0))(this);
	}
	template <typename R = void> R set_isHidePet(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DA83DC))(this, value);
	}
	template <typename R = HomeComponent*> R get_home() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA84F4))(this);
	}
	template <typename R = bool> R get_hasHome() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA857C))(this);
	}
	template <typename R = void> R AddHome(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8588))(this, newValue);
	}
	template <typename R = void> R ReplaceHome(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA868C))(this, newValue);
	}
	template <typename R = void> R RemoveHome() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8790))(this);
	}
	template <typename R = InfluenceComponent*> R get_influence() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA879C))(this);
	}
	template <typename R = bool> R get_hasInfluence() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8824))(this);
	}
	template <typename R = void> R AddInfluence(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8830))(this, newCount);
	}
	template <typename R = void> R ReplaceInfluence(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA8934))(this, newCount);
	}
	template <typename R = void> R RemoveInfluence() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8A38))(this);
	}
	template <typename R = InventoryContentComponent*> R get_inventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8A44))(this);
	}
	template <typename R = bool> R get_hasInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8ACC))(this);
	}
	template <typename R = void> R AddInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DA8AD8))(this, newData);
	}
	template <typename R = void> R ReplaceInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DA8BEC))(this, newData);
	}
	template <typename R = void> R RemoveInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D00))(this);
	}
	template <typename R = InventoryPowerComponent*> R get_inventoryPower() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D0C))(this);
	}
	template <typename R = bool> R get_hasInventoryPower() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8D94))(this);
	}
	template <typename R = void> R AddInventoryPower(InventoryPower newValue) {
		return ((R (*)(AccountEntity*, InventoryPower))(Il2CppBase() + 0x1DA8DA0))(this, newValue);
	}
	template <typename R = void> R ReplaceInventoryPower(InventoryPower newValue) {
		return ((R (*)(AccountEntity*, InventoryPower))(Il2CppBase() + 0x1DA8EBC))(this, newValue);
	}
	template <typename R = void> R RemoveInventoryPower() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8FD8))(this);
	}
	template <typename R = ItemCooldownsComponent*> R get_itemCooldowns() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA8FE4))(this);
	}
	template <typename R = bool> R get_hasItemCooldowns() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA906C))(this);
	}
	template <typename R = void> R AddItemCooldowns(Il2CppList<ItemCooldown>* newList) {
		return ((R (*)(AccountEntity*, Il2CppList<ItemCooldown>*))(Il2CppBase() + 0x1DA9078))(this, newList);
	}
	template <typename R = void> R ReplaceItemCooldowns(Il2CppList<ItemCooldown>* newList) {
		return ((R (*)(AccountEntity*, Il2CppList<ItemCooldown>*))(Il2CppBase() + 0x1DA918C))(this, newList);
	}
	template <typename R = void> R RemoveItemCooldowns() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA92A0))(this);
	}
	template <typename R = KarmaComponent*> R get_karma() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA92AC))(this);
	}
	template <typename R = bool> R get_hasKarma() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9334))(this);
	}
	template <typename R = void> R AddKarma(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA9340))(this, newValue);
	}
	template <typename R = void> R ReplaceKarma(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DA9444))(this, newValue);
	}
	template <typename R = void> R RemoveKarma() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9548))(this);
	}
	template <typename R = KefirIdComponent*> R get_kefirId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9554))(this);
	}
	template <typename R = bool> R get_hasKefirId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA95DC))(this);
	}
	template <typename R = void> R AddKefirId(Il2CppString* newKefirId) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA95E8))(this, newKefirId);
	}
	template <typename R = void> R ReplaceKefirId(Il2CppString* newKefirId) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA96FC))(this, newKefirId);
	}
	template <typename R = void> R RemoveKefirId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9810))(this);
	}
	template <typename R = KickTimeComponent*> R get_kickTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D93CB0))(this);
	}
	template <typename R = bool> R get_hasKickTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D93658))(this);
	}
	template <typename R = void> R AddKickTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D936C8))(this, newValue);
	}
	template <typename R = void> R ReplaceKickTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA981C))(this, newValue);
	}
	template <typename R = void> R RemoveKickTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9920))(this);
	}
	template <typename R = LandComponent*> R get_land() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA992C))(this);
	}
	template <typename R = bool> R get_hasLand() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA99B4))(this);
	}
	template <typename R = void> R AddLand(LandType newType) {
		return ((R (*)(AccountEntity*, LandType))(Il2CppBase() + 0x1DA99C0))(this, newType);
	}
	template <typename R = void> R ReplaceLand(LandType newType) {
		return ((R (*)(AccountEntity*, LandType))(Il2CppBase() + 0x1DA9AC4))(this, newType);
	}
	template <typename R = void> R RemoveLand() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9BC8))(this);
	}
	template <typename R = LanguageComponent*> R get_language() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9BD4))(this);
	}
	template <typename R = bool> R get_hasLanguage() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9C5C))(this);
	}
	template <typename R = void> R AddLanguage(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA9C68))(this, newValue);
	}
	template <typename R = void> R ReplaceLanguage(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DA9D7C))(this, newValue);
	}
	template <typename R = void> R RemoveLanguage() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9E90))(this);
	}
	template <typename R = LastAttackTimeComponent*> R get_lastAttackTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9E9C))(this);
	}
	template <typename R = bool> R get_hasLastAttackTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DA9F24))(this);
	}
	template <typename R = void> R AddLastAttackTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DA9F30))(this, newValue);
	}
	template <typename R = void> R ReplaceLastAttackTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA034))(this, newValue);
	}
	template <typename R = void> R RemoveLastAttackTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA138))(this);
	}
	template <typename R = LastBugReportComponent*> R get_lastBugReport() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA144))(this);
	}
	template <typename R = bool> R get_hasLastBugReport() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA1CC))(this);
	}
	template <typename R = void> R AddLastBugReport(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA1D8))(this, newValue);
	}
	template <typename R = void> R ReplaceLastBugReport(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA2DC))(this, newValue);
	}
	template <typename R = void> R RemoveLastBugReport() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA3E0))(this);
	}
	template <typename R = LastDeathComponent*> R get_lastDeath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA3EC))(this);
	}
	template <typename R = bool> R get_hasLastDeath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA474))(this);
	}
	template <typename R = void> R AddLastDeath(int64_t newTime, int32_t newCount) {
		return ((R (*)(AccountEntity*, int64_t, int32_t))(Il2CppBase() + 0x1DAA480))(this, newTime, newCount);
	}
	template <typename R = void> R ReplaceLastDeath(int64_t newTime, int32_t newCount) {
		return ((R (*)(AccountEntity*, int64_t, int32_t))(Il2CppBase() + 0x1DAA58C))(this, newTime, newCount);
	}
	template <typename R = void> R RemoveLastDeath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA698))(this);
	}
	template <typename R = LastMinimapPingComponent*> R get_lastMinimapPing() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA6A4))(this);
	}
	template <typename R = bool> R get_hasLastMinimapPing() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA72C))(this);
	}
	template <typename R = void> R AddLastMinimapPing(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA738))(this, newValue);
	}
	template <typename R = void> R ReplaceLastMinimapPing(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA83C))(this, newValue);
	}
	template <typename R = void> R RemoveLastMinimapPing() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA940))(this);
	}
	template <typename R = LastOpenPortalsComponent*> R get_lastOpenPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA94C))(this);
	}
	template <typename R = bool> R get_hasLastOpenPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAA9D4))(this);
	}
	template <typename R = void> R AddLastOpenPortals(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAA9E0))(this, newValue);
	}
	template <typename R = void> R ReplaceLastOpenPortals(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAAE4))(this, newValue);
	}
	template <typename R = void> R RemoveLastOpenPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAABE8))(this);
	}
	template <typename R = LastResetEventBpPointsBComponent*> R get_lastResetEventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAABF4))(this);
	}
	template <typename R = bool> R get_hasLastResetEventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAAC7C))(this);
	}
	template <typename R = void> R AddLastResetEventBpPointsB(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAC88))(this, newValue);
	}
	template <typename R = void> R ReplaceLastResetEventBpPointsB(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAD8C))(this, newValue);
	}
	template <typename R = void> R RemoveLastResetEventBpPointsB() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAAE90))(this);
	}
	template <typename R = LastResetPortalsComponent*> R get_lastResetPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAAE9C))(this);
	}
	template <typename R = bool> R get_hasLastResetPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAAF24))(this);
	}
	template <typename R = void> R AddLastResetPortals(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAAF30))(this, newValue);
	}
	template <typename R = void> R ReplaceLastResetPortals(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB034))(this, newValue);
	}
	template <typename R = void> R RemoveLastResetPortals() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB138))(this);
	}
	template <typename R = LastSeasonComponent*> R get_lastSeason() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB144))(this);
	}
	template <typename R = bool> R get_hasLastSeason() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB1CC))(this);
	}
	template <typename R = void> R AddLastSeason(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB1D8))(this, newCount);
	}
	template <typename R = void> R ReplaceLastSeason(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB2DC))(this, newCount);
	}
	template <typename R = void> R RemoveLastSeason() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB3E0))(this);
	}
	template <typename R = LastSeasonNotifiedComponent*> R get_lastSeasonNotified() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB3EC))(this);
	}
	template <typename R = bool> R get_hasLastSeasonNotified() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB474))(this);
	}
	template <typename R = void> R AddLastSeasonNotified(bool newValue) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAB480))(this, newValue);
	}
	template <typename R = void> R ReplaceLastSeasonNotified(bool newValue) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAB588))(this, newValue);
	}
	template <typename R = void> R RemoveLastSeasonNotified() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB690))(this);
	}
	template <typename R = LastSessionComponent*> R get_lastSession() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB69C))(this);
	}
	template <typename R = bool> R get_hasLastSession() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB724))(this);
	}
	template <typename R = void> R AddLastSession(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB730))(this, newId);
	}
	template <typename R = void> R ReplaceLastSession(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAB834))(this, newId);
	}
	template <typename R = void> R RemoveLastSession() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB938))(this);
	}
	template <typename R = LastVisitedLocationComponent*> R get_lastVisitedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB944))(this);
	}
	template <typename R = bool> R get_hasLastVisitedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAB9CC))(this);
	}
	template <typename R = void> R AddLastVisitedLocation(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAB9D8))(this, newValue);
	}
	template <typename R = void> R ReplaceLastVisitedLocation(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DABADC))(this, newValue);
	}
	template <typename R = void> R RemoveLastVisitedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABBE0))(this);
	}
	template <typename R = LastVisitedLocationTicksComponent*> R get_lastVisitedLocationTicks() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABBEC))(this);
	}
	template <typename R = bool> R get_hasLastVisitedLocationTicks() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABC74))(this);
	}
	template <typename R = void> R AddLastVisitedLocationTicks(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DABC80))(this, newValue);
	}
	template <typename R = void> R ReplaceLastVisitedLocationTicks(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DABD84))(this, newValue);
	}
	template <typename R = void> R RemoveLastVisitedLocationTicks() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABE88))(this);
	}
	template <typename R = bool> R get_wasLeaveArenaStarted() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABE94))(this);
	}
	template <typename R = void> R set_wasLeaveArenaStarted(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DABEA0))(this, value);
	}
	template <typename R = LeaveArenaTimeComponent*> R get_leaveArenaTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DABFB8))(this);
	}
	template <typename R = bool> R get_hasLeaveArenaTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC040))(this);
	}
	template <typename R = void> R AddLeaveArenaTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAC04C))(this, newValue);
	}
	template <typename R = void> R ReplaceLeaveArenaTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAC150))(this, newValue);
	}
	template <typename R = void> R RemoveLeaveArenaTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC254))(this);
	}
	template <typename R = LevelComponent*> R get_level() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC260))(this);
	}
	template <typename R = bool> R get_hasLevel() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC2E8))(this);
	}
	template <typename R = void> R AddLevel(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DAC2F4))(this, newValue);
	}
	template <typename R = void> R ReplaceLevel(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DAC3F8))(this, newValue);
	}
	template <typename R = void> R RemoveLevel() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC4FC))(this);
	}
	template <typename R = LocationAutoComponent*> R get_locationAuto() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC508))(this);
	}
	template <typename R = bool> R get_hasLocationAuto() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC590))(this);
	}
	template <typename R = void> R AddLocationAuto(Il2CppDictionary<Il2CppString*, Attempt>* newAttempts) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Attempt>*))(Il2CppBase() + 0x1DAC59C))(this, newAttempts);
	}
	template <typename R = void> R ReplaceLocationAuto(Il2CppDictionary<Il2CppString*, Attempt>* newAttempts) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Attempt>*))(Il2CppBase() + 0x1DAC6B0))(this, newAttempts);
	}
	template <typename R = void> R RemoveLocationAuto() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC7C4))(this);
	}
	template <typename R = LocationResetInfoComponent*> R get_locationResetInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC7D0))(this);
	}
	template <typename R = bool> R get_hasLocationResetInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAC858))(this);
	}
	template <typename R = void> R AddLocationResetInfo(int64_t newResetPriceTime, int64_t newCooldownTime, int32_t newResetCount, CurrencyType newCurrencyType, int32_t newPrice) {
		return ((R (*)(AccountEntity*, int64_t, int64_t, int32_t, CurrencyType, int32_t))(Il2CppBase() + 0x1DAC864))(this, newResetPriceTime, newCooldownTime, newResetCount, newCurrencyType, newPrice);
	}
	template <typename R = void> R ReplaceLocationResetInfo(int64_t newResetPriceTime, int64_t newCooldownTime, int32_t newResetCount, CurrencyType newCurrencyType, int32_t newPrice) {
		return ((R (*)(AccountEntity*, int64_t, int64_t, int32_t, CurrencyType, int32_t))(Il2CppBase() + 0x1DAC990))(this, newResetPriceTime, newCooldownTime, newResetCount, newCurrencyType, newPrice);
	}
	template <typename R = void> R RemoveLocationResetInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACABC))(this);
	}
	template <typename R = MagicSaveComponent*> R get_magicSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACAC8))(this);
	}
	template <typename R = bool> R get_hasMagicSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACB50))(this);
	}
	template <typename R = void> R AddMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x1DACB5C))(this, newItems, newRiding);
	}
	template <typename R = void> R ReplaceMagicSave(Il2CppArray<Item*>* newItems, bool newRiding) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*, bool))(Il2CppBase() + 0x1DACC7C))(this, newItems, newRiding);
	}
	template <typename R = void> R RemoveMagicSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACD9C))(this);
	}
	template <typename R = ManualQuestTrackingOrder*> R get_manualQuestTrackingOrder() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACDA8))(this);
	}
	template <typename R = bool> R get_hasManualQuestTrackingOrder() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DACE30))(this);
	}
	template <typename R = void> R AddManualQuestTrackingOrder(Il2CppString* newQuests, int32_t newCount) {
		return ((R (*)(AccountEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DACE3C))(this, newQuests, newCount);
	}
	template <typename R = void> R ReplaceManualQuestTrackingOrder(Il2CppString* newQuests, int32_t newCount) {
		return ((R (*)(AccountEntity*, Il2CppString*, int32_t))(Il2CppBase() + 0x1DACF58))(this, newQuests, newCount);
	}
	template <typename R = void> R RemoveManualQuestTrackingOrder() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD074))(this);
	}
	template <typename R = MapPathComponent*> R get_mapPath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD080))(this);
	}
	template <typename R = bool> R get_hasMapPath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD108))(this);
	}
	template <typename R = void> R AddMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(AccountEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAD114))(this, newStartId, newEndId);
	}
	template <typename R = void> R ReplaceMapPath(Il2CppString* newStartId, Il2CppString* newEndId) {
		return ((R (*)(AccountEntity*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAD23C))(this, newStartId, newEndId);
	}
	template <typename R = void> R RemoveMapPath() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD364))(this);
	}
	template <typename R = MetabolismComponent*> R get_metabolism() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD370))(this);
	}
	template <typename R = bool> R get_hasMetabolism() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD3F8))(this);
	}
	template <typename R = void> R AddMetabolism(float newHunger, float newThirst) {
		return ((R (*)(AccountEntity*, float, float))(Il2CppBase() + 0x1DAD404))(this, newHunger, newThirst);
	}
	template <typename R = void> R ReplaceMetabolism(float newHunger, float newThirst) {
		return ((R (*)(AccountEntity*, float, float))(Il2CppBase() + 0x1DAD50C))(this, newHunger, newThirst);
	}
	template <typename R = void> R RemoveMetabolism() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD614))(this);
	}
	template <typename R = MountInventoryContentComponent*> R get_mountInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD620))(this);
	}
	template <typename R = bool> R get_hasMountInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD6A8))(this);
	}
	template <typename R = void> R AddMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DAD6B4))(this, newData);
	}
	template <typename R = void> R ReplaceMountInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DAD7C8))(this, newData);
	}
	template <typename R = void> R RemoveMountInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD8DC))(this);
	}
	template <typename R = MountsInventoryGradeComponent*> R get_mountsInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD8E8))(this);
	}
	template <typename R = bool> R get_hasMountsInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAD970))(this);
	}
	template <typename R = void> R AddMountsInventoryGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAD97C))(this, newValue);
	}
	template <typename R = void> R ReplaceMountsInventoryGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DADA80))(this, newValue);
	}
	template <typename R = void> R RemoveMountsInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADB84))(this);
	}
	template <typename R = NextPortalsPointsComponent*> R get_nextPortalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADB90))(this);
	}
	template <typename R = bool> R get_hasNextPortalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADC18))(this);
	}
	template <typename R = void> R AddNextPortalsPoints(int32_t newPoints, int32_t newWorld) {
		return ((R (*)(AccountEntity*, int32_t, int32_t))(Il2CppBase() + 0x1DADC24))(this, newPoints, newWorld);
	}
	template <typename R = void> R ReplaceNextPortalsPoints(int32_t newPoints, int32_t newWorld) {
		return ((R (*)(AccountEntity*, int32_t, int32_t))(Il2CppBase() + 0x1DADD2C))(this, newPoints, newWorld);
	}
	template <typename R = void> R RemoveNextPortalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADE34))(this);
	}
	template <typename R = NotSeenNewClassesComponent*> R get_notSeenNewClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADE40))(this);
	}
	template <typename R = bool> R get_hasNotSeenNewClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DADEC8))(this);
	}
	template <typename R = void> R AddNotSeenNewClasses(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DADED4))(this, newValues);
	}
	template <typename R = void> R ReplaceNotSeenNewClasses(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DADFE8))(this, newValues);
	}
	template <typename R = void> R RemoveNotSeenNewClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE0FC))(this);
	}
	template <typename R = NotSeenNewPetsComponent*> R get_notSeenNewPets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE108))(this);
	}
	template <typename R = bool> R get_hasNotSeenNewPets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE190))(this);
	}
	template <typename R = void> R AddNotSeenNewPets(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE19C))(this, newValues);
	}
	template <typename R = void> R ReplaceNotSeenNewPets(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE2B0))(this, newValues);
	}
	template <typename R = void> R RemoveNotSeenNewPets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE3C4))(this);
	}
	template <typename R = NotSeenNewRecipesComponent*> R get_notSeenNewRecipes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE3D0))(this);
	}
	template <typename R = bool> R get_hasNotSeenNewRecipes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE458))(this);
	}
	template <typename R = void> R AddNotSeenNewRecipes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE464))(this, newValues);
	}
	template <typename R = void> R ReplaceNotSeenNewRecipes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE578))(this, newValues);
	}
	template <typename R = void> R RemoveNotSeenNewRecipes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE68C))(this);
	}
	template <typename R = NotSeenNewRunesComponent*> R get_notSeenNewRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE698))(this);
	}
	template <typename R = bool> R get_hasNotSeenNewRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE720))(this);
	}
	template <typename R = void> R AddNotSeenNewRunes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE72C))(this, newValues);
	}
	template <typename R = void> R ReplaceNotSeenNewRunes(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DAE840))(this, newValues);
	}
	template <typename R = void> R RemoveNotSeenNewRunes() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE954))(this);
	}
	template <typename R = OccupationComponent*> R get_occupation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE960))(this);
	}
	template <typename R = bool> R get_hasOccupation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAE9E8))(this);
	}
	template <typename R = void> R AddOccupation(OccupationType newType) {
		return ((R (*)(AccountEntity*, OccupationType))(Il2CppBase() + 0x1DAE9F4))(this, newType);
	}
	template <typename R = void> R ReplaceOccupation(OccupationType newType) {
		return ((R (*)(AccountEntity*, OccupationType))(Il2CppBase() + 0x1DAEAF8))(this, newType);
	}
	template <typename R = void> R RemoveOccupation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEBFC))(this);
	}
	template <typename R = OdinExpComponent*> R get_odinExp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEC08))(this);
	}
	template <typename R = bool> R get_hasOdinExp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEC90))(this);
	}
	template <typename R = void> R AddOdinExp(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAEC9C))(this, newValue);
	}
	template <typename R = void> R ReplaceOdinExp(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DAEDA0))(this, newValue);
	}
	template <typename R = void> R RemoveOdinExp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEEA4))(this);
	}
	template <typename R = OfflineDeathInfoComponent*> R get_offlineDeathInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEEB0))(this);
	}
	template <typename R = bool> R get_hasOfflineDeathInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAEF38))(this);
	}
	template <typename R = void> R AddOfflineDeathInfo(DamageStatType newType, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newGuildTag, Il2CppString* newClanName, Il2CppString* newLocationName) {
		return ((R (*)(AccountEntity*, DamageStatType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAEF44))(this, newType, newName, newBlueprint, newGuildTag, newClanName, newLocationName);
	}
	template <typename R = void> R ReplaceOfflineDeathInfo(DamageStatType newType, Il2CppString* newName, Il2CppString* newBlueprint, Il2CppString* newGuildTag, Il2CppString* newClanName, Il2CppString* newLocationName) {
		return ((R (*)(AccountEntity*, DamageStatType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1DAF0C0))(this, newType, newName, newBlueprint, newGuildTag, newClanName, newLocationName);
	}
	template <typename R = void> R RemoveOfflineDeathInfo() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF23C))(this);
	}
	template <typename R = OnlineTimeoutComponent*> R get_onlineTimeout() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF248))(this);
	}
	template <typename R = bool> R get_hasOnlineTimeout() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF2D0))(this);
	}
	template <typename R = void> R AddOnlineTimeout(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAF2DC))(this, newValue);
	}
	template <typename R = void> R ReplaceOnlineTimeout(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DAF3E0))(this, newValue);
	}
	template <typename R = void> R RemoveOnlineTimeout() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF4E4))(this);
	}
	template <typename R = PatchCommandsComponent*> R get_patchCommands() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF4F0))(this);
	}
	template <typename R = bool> R get_hasPatchCommands() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF578))(this);
	}
	template <typename R = void> R AddPatchCommands(Il2CppList<PatchCommand>* newList) {
		return ((R (*)(AccountEntity*, Il2CppList<PatchCommand>*))(Il2CppBase() + 0x1DAF584))(this, newList);
	}
	template <typename R = void> R ReplacePatchCommands(Il2CppList<PatchCommand>* newList) {
		return ((R (*)(AccountEntity*, Il2CppList<PatchCommand>*))(Il2CppBase() + 0x1DAF698))(this, newList);
	}
	template <typename R = void> R RemovePatchCommands() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF7AC))(this);
	}
	template <typename R = bool> R get_isPayer() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF7B8))(this);
	}
	template <typename R = void> R set_isPayer(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DAF7C4))(this, value);
	}
	template <typename R = PeerComponent*> R get_peer() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF8DC))(this);
	}
	template <typename R = bool> R get_hasPeer() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAF964))(this);
	}
	template <typename R = void> R AddPeer(uintptr_t newValue, uintptr_t newIp) {
		return ((R (*)(AccountEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAF970))(this, newValue, newIp);
	}
	template <typename R = void> R ReplacePeer(uintptr_t newValue, uintptr_t newIp) {
		return ((R (*)(AccountEntity*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DAFA98))(this, newValue, newIp);
	}
	template <typename R = void> R RemovePeer() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFBC0))(this);
	}
	template <typename R = PersonalEntitiesComponent*> R get_personalEntities() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFBCC))(this);
	}
	template <typename R = bool> R get_hasPersonalEntities() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFC54))(this);
	}
	template <typename R = void> R AddPersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DAFC60))(this, newList);
	}
	template <typename R = void> R ReplacePersonalEntities(Il2CppDictionary<Il2CppString*, Il2CppString*>* newList) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x1DAFD74))(this, newList);
	}
	template <typename R = void> R RemovePersonalEntities() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFE88))(this);
	}
	template <typename R = PetInventoryContentComponent*> R get_petInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFE94))(this);
	}
	template <typename R = bool> R get_hasPetInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DAFF1C))(this);
	}
	template <typename R = void> R AddPetInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DAFF28))(this, newData);
	}
	template <typename R = void> R ReplacePetInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DB003C))(this, newData);
	}
	template <typename R = void> R RemovePetInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0150))(this);
	}
	template <typename R = PlayerIdComponent*> R get_playerId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EB78))(this);
	}
	template <typename R = bool> R get_hasPlayerId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7E4))(this);
	}
	template <typename R = void> R AddPlayerId(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1D9E3A8))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerId(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB015C))(this, newValue);
	}
	template <typename R = void> R RemovePlayerId() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0260))(this);
	}
	template <typename R = bool> R get_isPlayerKill() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB026C))(this);
	}
	template <typename R = void> R set_isPlayerKill(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB0278))(this, value);
	}
	template <typename R = PlayerNameComponent*> R get_playerName() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EAF0))(this);
	}
	template <typename R = bool> R get_hasPlayerName() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9EAE4))(this);
	}
	template <typename R = void> R AddPlayerName(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DB0390))(this, newValue);
	}
	template <typename R = void> R ReplacePlayerName(Il2CppString* newValue) {
		return ((R (*)(AccountEntity*, Il2CppString*))(Il2CppBase() + 0x1DB04A4))(this, newValue);
	}
	template <typename R = void> R RemovePlayerName() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB05B8))(this);
	}
	template <typename R = PortalsPointsComponent*> R get_portalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB05C4))(this);
	}
	template <typename R = bool> R get_hasPortalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB064C))(this);
	}
	template <typename R = void> R AddPortalsPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB0658))(this, newCount);
	}
	template <typename R = void> R ReplacePortalsPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB075C))(this, newCount);
	}
	template <typename R = void> R RemovePortalsPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0860))(this);
	}
	template <typename R = PremiumPassComponent*> R get_premiumPass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB086C))(this);
	}
	template <typename R = bool> R get_hasPremiumPass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB08F4))(this);
	}
	template <typename R = void> R AddPremiumPass(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB0900))(this, newNames);
	}
	template <typename R = void> R ReplacePremiumPass(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB0A14))(this, newNames);
	}
	template <typename R = void> R RemovePremiumPass() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0B28))(this);
	}
	template <typename R = PurchaseHistoryComponent*> R get_purchaseHistory() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0B34))(this);
	}
	template <typename R = bool> R get_hasPurchaseHistory() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0BBC))(this);
	}
	template <typename R = void> R AddPurchaseHistory(Il2CppList<PurchaseEntry*>* newEntries) {
		return ((R (*)(AccountEntity*, Il2CppList<PurchaseEntry*>*))(Il2CppBase() + 0x1DB0BC8))(this, newEntries);
	}
	template <typename R = void> R ReplacePurchaseHistory(Il2CppList<PurchaseEntry*>* newEntries) {
		return ((R (*)(AccountEntity*, Il2CppList<PurchaseEntry*>*))(Il2CppBase() + 0x1DB0CDC))(this, newEntries);
	}
	template <typename R = void> R RemovePurchaseHistory() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0DF0))(this);
	}
	template <typename R = PushBlockedNotificationsComponent*> R get_pushBlockedNotifications() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0DFC))(this);
	}
	template <typename R = bool> R get_hasPushBlockedNotifications() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB0E84))(this);
	}
	template <typename R = void> R AddPushBlockedNotifications(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB0E90))(this, newNames);
	}
	template <typename R = void> R ReplacePushBlockedNotifications(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB0FA4))(this, newNames);
	}
	template <typename R = void> R RemovePushBlockedNotifications() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB10B8))(this);
	}
	template <typename R = bool> R get_isPushNotificationsEnabled() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB10C4))(this);
	}
	template <typename R = void> R set_isPushNotificationsEnabled(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB10D0))(this, value);
	}
	template <typename R = QuestsSaveComponent*> R get_questsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB11E8))(this);
	}
	template <typename R = bool> R get_hasQuestsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1270))(this);
	}
	template <typename R = void> R AddQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DB127C))(this, newVersion, newData);
	}
	template <typename R = void> R ReplaceQuestsSave(int32_t newVersion, Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DB1398))(this, newVersion, newData);
	}
	template <typename R = void> R RemoveQuestsSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB14B4))(this);
	}
	template <typename R = RGSaveComponent*> R get_rGSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB14C0))(this);
	}
	template <typename R = bool> R get_hasRGSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1548))(this);
	}
	template <typename R = void> R AddRGSave(Il2CppDictionary<Il2CppString*, RGSave>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, RGSave>*))(Il2CppBase() + 0x1DB1554))(this, newValues);
	}
	template <typename R = void> R ReplaceRGSave(Il2CppDictionary<Il2CppString*, RGSave>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, RGSave>*))(Il2CppBase() + 0x1DB1668))(this, newValues);
	}
	template <typename R = void> R RemoveRGSave() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB177C))(this);
	}
	template <typename R = RegistrationTimestampComponent*> R get_registrationTimestamp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1788))(this);
	}
	template <typename R = bool> R get_hasRegistrationTimestamp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1810))(this);
	}
	template <typename R = void> R AddRegistrationTimestamp(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB181C))(this, newValue);
	}
	template <typename R = void> R ReplaceRegistrationTimestamp(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB1920))(this, newValue);
	}
	template <typename R = void> R RemoveRegistrationTimestamp() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1A24))(this);
	}
	template <typename R = RenameClanComponent*> R get_renameClan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1A30))(this);
	}
	template <typename R = bool> R get_hasRenameClan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1AB8))(this);
	}
	template <typename R = void> R AddRenameClan(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1AC4))(this, newCount);
	}
	template <typename R = void> R ReplaceRenameClan(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1BC8))(this, newCount);
	}
	template <typename R = void> R RemoveRenameClan() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1CCC))(this);
	}
	template <typename R = RenameComponent*> R get_rename() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1CD8))(this);
	}
	template <typename R = bool> R get_hasRename() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1D60))(this);
	}
	template <typename R = void> R AddRename(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1D6C))(this, newCount);
	}
	template <typename R = void> R ReplaceRename(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB1E70))(this, newCount);
	}
	template <typename R = void> R RemoveRename() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1F74))(this);
	}
	template <typename R = RuneInventoryContentComponent*> R get_runeInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB1F80))(this);
	}
	template <typename R = bool> R get_hasRuneInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2008))(this);
	}
	template <typename R = void> R AddRuneInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DB2014))(this, newData);
	}
	template <typename R = void> R ReplaceRuneInventoryContent(Il2CppArray<Item*>* newData) {
		return ((R (*)(AccountEntity*, Il2CppArray<Item*>*))(Il2CppBase() + 0x1DB2128))(this, newData);
	}
	template <typename R = void> R RemoveRuneInventoryContent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB223C))(this);
	}
	template <typename R = RuneInventoryGradeComponent*> R get_runeInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2248))(this);
	}
	template <typename R = bool> R get_hasRuneInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB22D0))(this);
	}
	template <typename R = void> R AddRuneInventoryGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB22DC))(this, newValue);
	}
	template <typename R = void> R ReplaceRuneInventoryGrade(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB23E0))(this, newValue);
	}
	template <typename R = void> R RemoveRuneInventoryGrade() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB24E4))(this);
	}
	template <typename R = SaveCounterComponent*> R get_saveCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB24F0))(this);
	}
	template <typename R = bool> R get_hasSaveCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2578))(this);
	}
	template <typename R = void> R AddSaveCounter(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2584))(this, newValue);
	}
	template <typename R = void> R ReplaceSaveCounter(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2688))(this, newValue);
	}
	template <typename R = void> R RemoveSaveCounter() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB278C))(this);
	}
	template <typename R = SaviorPointsComponent*> R get_saviorPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2798))(this);
	}
	template <typename R = bool> R get_hasSaviorPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2820))(this);
	}
	template <typename R = void> R AddSaviorPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB282C))(this, newCount);
	}
	template <typename R = void> R ReplaceSaviorPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2930))(this, newCount);
	}
	template <typename R = void> R RemoveSaviorPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2A34))(this);
	}
	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2A40))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2AC8))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2AD4))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB2BD8))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2CDC))(this);
	}
	template <typename R = SeenMapEventsComponent*> R get_seenMapEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2CE8))(this);
	}
	template <typename R = bool> R get_hasSeenMapEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2D70))(this);
	}
	template <typename R = void> R AddSeenMapEvents(Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>* newEventPoints) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>*))(Il2CppBase() + 0x1DB2D7C))(this, newEventPoints);
	}
	template <typename R = void> R ReplaceSeenMapEvents(Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>* newEventPoints) {
		return ((R (*)(AccountEntity*, Il2CppDictionary<Il2CppString*, Il2CppArray<int64_t>*>*))(Il2CppBase() + 0x1DB2E90))(this, newEventPoints);
	}
	template <typename R = void> R RemoveSeenMapEvents() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2FA4))(this);
	}
	template <typename R = SeenSeasonQuestsComponent*> R get_seenSeasonQuests() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB2FB0))(this);
	}
	template <typename R = bool> R get_hasSeenSeasonQuests() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3038))(this);
	}
	template <typename R = void> R AddSeenSeasonQuests(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB3044))(this, newNames);
	}
	template <typename R = void> R ReplaceSeenSeasonQuests(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB3158))(this, newNames);
	}
	template <typename R = void> R RemoveSeenSeasonQuests() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB326C))(this);
	}
	template <typename R = SelectedClassesComponent*> R get_selectedClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3278))(this);
	}
	template <typename R = bool> R get_hasSelectedClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3300))(this);
	}
	template <typename R = void> R AddSelectedClasses(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB330C))(this, newNames);
	}
	template <typename R = void> R ReplaceSelectedClasses(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB3420))(this, newNames);
	}
	template <typename R = void> R RemoveSelectedClasses() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3534))(this);
	}
	template <typename R = SessionComponent*> R get_session() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3540))(this);
	}
	template <typename R = bool> R get_hasSession() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB35C8))(this);
	}
	template <typename R = void> R AddSession(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB35D4))(this, newId);
	}
	template <typename R = void> R ReplaceSession(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB36D8))(this, newId);
	}
	template <typename R = void> R RemoveSession() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB37DC))(this);
	}
	template <typename R = ShowChestMarkerComponent*> R get_showChestMarker() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB37E8))(this);
	}
	template <typename R = bool> R get_hasShowChestMarker() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3870))(this);
	}
	template <typename R = void> R AddShowChestMarker(bool newValue) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB387C))(this, newValue);
	}
	template <typename R = void> R ReplaceShowChestMarker(bool newValue) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB3984))(this, newValue);
	}
	template <typename R = void> R RemoveShowChestMarker() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3A8C))(this);
	}
	template <typename R = SilverComponent*> R get_silver() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3A98))(this);
	}
	template <typename R = bool> R get_hasSilver() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3B20))(this);
	}
	template <typename R = void> R AddSilver(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB3B2C))(this, newCount);
	}
	template <typename R = void> R ReplaceSilver(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB3C30))(this, newCount);
	}
	template <typename R = void> R RemoveSilver() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3D34))(this);
	}
	template <typename R = SocialPlatformsStatusComponent*> R get_socialPlatformsStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3D40))(this);
	}
	template <typename R = bool> R get_hasSocialPlatformsStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3DC8))(this);
	}
	template <typename R = void> R AddSocialPlatformsStatus(bool newIsGooglePlayConnected, bool newIsGamecenterConnected) {
		return ((R (*)(AccountEntity*, bool, bool))(Il2CppBase() + 0x1DB3DD4))(this, newIsGooglePlayConnected, newIsGamecenterConnected);
	}
	template <typename R = void> R ReplaceSocialPlatformsStatus(bool newIsGooglePlayConnected, bool newIsGamecenterConnected) {
		return ((R (*)(AccountEntity*, bool, bool))(Il2CppBase() + 0x1DB3EE8))(this, newIsGooglePlayConnected, newIsGamecenterConnected);
	}
	template <typename R = void> R RemoveSocialPlatformsStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB3FFC))(this);
	}
	template <typename R = SpeedComponent*> R get_speed() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4008))(this);
	}
	template <typename R = bool> R get_hasSpeed() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4090))(this);
	}
	template <typename R = void> R AddSpeed(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB409C))(this, newValue);
	}
	template <typename R = void> R ReplaceSpeed(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB41A0))(this, newValue);
	}
	template <typename R = void> R RemoveSpeed() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB42A4))(this);
	}
	template <typename R = TagsComponent*> R get_tags() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB42B0))(this);
	}
	template <typename R = bool> R get_hasTags() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4338))(this);
	}
	template <typename R = void> R AddTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB4344))(this, newValues);
	}
	template <typename R = void> R ReplaceTags(Il2CppArray<Il2CppString*>* newValues) {
		return ((R (*)(AccountEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1DB4458))(this, newValues);
	}
	template <typename R = void> R RemoveTags() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB456C))(this);
	}
	template <typename R = TestGroupComponent*> R get_testGroup() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7FC))(this);
	}
	template <typename R = bool> R get_hasTestGroup() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1D9E7F0))(this);
	}
	template <typename R = void> R AddTestGroup(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4578))(this, newValue);
	}
	template <typename R = void> R ReplaceTestGroup(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB467C))(this, newValue);
	}
	template <typename R = void> R RemoveTestGroup() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4780))(this);
	}
	template <typename R = TicketsComponent*> R get_tickets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB478C))(this);
	}
	template <typename R = bool> R get_hasTickets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4814))(this);
	}
	template <typename R = void> R AddTickets(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4820))(this, newCount);
	}
	template <typename R = void> R ReplaceTickets(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB4924))(this, newCount);
	}
	template <typename R = void> R RemoveTickets() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4A28))(this);
	}
	template <typename R = TimeLockMoveComponent*> R get_timeLockMove() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4A34))(this);
	}
	template <typename R = bool> R get_hasTimeLockMove() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4ABC))(this);
	}
	template <typename R = void> R AddTimeLockMove(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB4AC8))(this, newValue);
	}
	template <typename R = void> R ReplaceTimeLockMove(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB4BCC))(this, newValue);
	}
	template <typename R = void> R RemoveTimeLockMove() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4CD0))(this);
	}
	template <typename R = TotalDonateComponent*> R get_totalDonate() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4CDC))(this);
	}
	template <typename R = bool> R get_hasTotalDonate() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4D64))(this);
	}
	template <typename R = void> R AddTotalDonate(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB4D70))(this, newValue);
	}
	template <typename R = void> R ReplaceTotalDonate(float newValue) {
		return ((R (*)(AccountEntity*, float))(Il2CppBase() + 0x1DB4E74))(this, newValue);
	}
	template <typename R = void> R RemoveTotalDonate() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4F78))(this);
	}
	template <typename R = TournamentStartSearchingTimeComponent*> R get_tournamentStartSearchingTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB4F84))(this);
	}
	template <typename R = bool> R get_hasTournamentStartSearchingTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB500C))(this);
	}
	template <typename R = void> R AddTournamentStartSearchingTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB5018))(this, newValue);
	}
	template <typename R = void> R ReplaceTournamentStartSearchingTime(int64_t newValue) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB511C))(this, newValue);
	}
	template <typename R = void> R RemoveTournamentStartSearchingTime() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5220))(this);
	}
	template <typename R = TransactionsComponent*> R get_transactions() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB522C))(this);
	}
	template <typename R = bool> R get_hasTransactions() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB52B4))(this);
	}
	template <typename R = void> R AddTransactions(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB52C0))(this, newCount);
	}
	template <typename R = void> R ReplaceTransactions(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB53C4))(this, newCount);
	}
	template <typename R = void> R RemoveTransactions() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB54C8))(this);
	}
	template <typename R = UnlockedEmojisComponent*> R get_unlockedEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB54D4))(this);
	}
	template <typename R = bool> R get_hasUnlockedEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB555C))(this);
	}
	template <typename R = void> R AddUnlockedEmojis(int32_t newNewEmojisCount, Il2CppList<UnlockedEmoji>* newList) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppList<UnlockedEmoji>*))(Il2CppBase() + 0x1DB5568))(this, newNewEmojisCount, newList);
	}
	template <typename R = void> R ReplaceUnlockedEmojis(int32_t newNewEmojisCount, Il2CppList<UnlockedEmoji>* newList) {
		return ((R (*)(AccountEntity*, int32_t, Il2CppList<UnlockedEmoji>*))(Il2CppBase() + 0x1DB5684))(this, newNewEmojisCount, newList);
	}
	template <typename R = void> R RemoveUnlockedEmojis() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB57A0))(this);
	}
	template <typename R = UnlockedFoWComponent*> R get_unlockedFoW() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB57AC))(this);
	}
	template <typename R = bool> R get_hasUnlockedFoW() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5834))(this);
	}
	template <typename R = void> R AddUnlockedFoW(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5840))(this, newNames);
	}
	template <typename R = void> R ReplaceUnlockedFoW(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5954))(this, newNames);
	}
	template <typename R = void> R RemoveUnlockedFoW() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5A68))(this);
	}
	template <typename R = UnlockedLocationComponent*> R get_unlockedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5A74))(this);
	}
	template <typename R = bool> R get_hasUnlockedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5AFC))(this);
	}
	template <typename R = void> R AddUnlockedLocation(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5B08))(this, newNames);
	}
	template <typename R = void> R ReplaceUnlockedLocation(Il2CppList<Il2CppString*>* newNames) {
		return ((R (*)(AccountEntity*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x1DB5C1C))(this, newNames);
	}
	template <typename R = void> R RemoveUnlockedLocation() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5D30))(this);
	}
	template <typename R = UsedPlatformsComponent*> R get_usedPlatforms() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5D3C))(this);
	}
	template <typename R = bool> R get_hasUsedPlatforms() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5DC4))(this);
	}
	template <typename R = void> R AddUsedPlatforms(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB5DD0))(this, newValue);
	}
	template <typename R = void> R ReplaceUsedPlatforms(int32_t newValue) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB5ED4))(this, newValue);
	}
	template <typename R = void> R RemoveUsedPlatforms() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5FD8))(this);
	}
	template <typename R = VIPPointsComponent*> R get_vIPPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB5FE4))(this);
	}
	template <typename R = bool> R get_hasVIPPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB606C))(this);
	}
	template <typename R = void> R AddVIPPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB6078))(this, newCount);
	}
	template <typename R = void> R ReplaceVIPPoints(int32_t newCount) {
		return ((R (*)(AccountEntity*, int32_t))(Il2CppBase() + 0x1DB617C))(this, newCount);
	}
	template <typename R = void> R RemoveVIPPoints() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB6280))(this);
	}
	template <typename R = WorldComponent*> R get_world() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB628C))(this);
	}
	template <typename R = bool> R get_hasWorld() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB6314))(this);
	}
	template <typename R = void> R AddWorld(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB6320))(this, newId);
	}
	template <typename R = void> R ReplaceWorld(int64_t newId) {
		return ((R (*)(AccountEntity*, int64_t))(Il2CppBase() + 0x1DB6424))(this, newId);
	}
	template <typename R = void> R RemoveWorld() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB6528))(this);
	}
	template <typename R = bool> R get_wasWorldSent() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB6534))(this);
	}
	template <typename R = void> R set_wasWorldSent(bool value) {
		return ((R (*)(AccountEntity*, bool))(Il2CppBase() + 0x1DB6540))(this, value);
	}
	template <typename R = WorldStatusComponent*> R get_worldStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB6658))(this);
	}
	template <typename R = bool> R get_hasWorldStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB66E0))(this);
	}
	template <typename R = void> R AddWorldStatus(ProtoModels::WorldStatusType newType) {
		return ((R (*)(AccountEntity*, ProtoModels::WorldStatusType))(Il2CppBase() + 0x1DB66EC))(this, newType);
	}
	template <typename R = void> R ReplaceWorldStatus(ProtoModels::WorldStatusType newType) {
		return ((R (*)(AccountEntity*, ProtoModels::WorldStatusType))(Il2CppBase() + 0x1DB67F0))(this, newType);
	}
	template <typename R = void> R RemoveWorldStatus() {
		return ((R (*)(AccountEntity*))(Il2CppBase() + 0x1DB68F4))(this);
	}

};

