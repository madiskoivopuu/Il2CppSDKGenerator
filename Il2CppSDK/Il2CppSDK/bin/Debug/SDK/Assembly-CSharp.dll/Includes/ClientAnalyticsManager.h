#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientAnalyticsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientAnalyticsManager"));
	}

	template <typename T = uintptr_t> T& Dev2DevAnalyticsSystem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _lastLocationName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _logger() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& _emptyAppParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _emptyFBParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& itemTags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& _firtLaunchData() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _launchNumber() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T LogEvent(uintptr_t e) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x18FDEBC))(this, e);
	}
	template <typename T = void> T ForceLogEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x18FE638))(this, world);
	}
	template <typename T = void> T LogRealPayment(Il2CppString* transactionId, float price, Il2CppString* name, Il2CppString* currencyCode) {
		return ((T (*)(ClientAnalyticsManager*, Il2CppString*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18FE8E4))(this, transactionId, price, name, currencyCode);
	}
	template <typename T = void> T SetPlayerId(Il2CppString* uniquePlayerId) {
		return ((T (*)(ClientAnalyticsManager*, Il2CppString*))(Il2CppBase() + 0x18FEADC))(this, uniquePlayerId);
	}
	template <typename T = Il2CppString*> T GetDev2DevId() {
		return ((T (*)(ClientAnalyticsManager*))(Il2CppBase() + 0x18FEB64))(this);
	}
	template <typename T = Il2CppString*> T GetLocationName(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x18FEB80))(this, world);
	}
	template <typename T = void> T OnClassRuneChangedEvent(uintptr_t world, uintptr_t accountEntity, uintptr_t classType, uintptr_t data) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18FED38))(this, world, accountEntity, classType, data);
	}
	template <typename T = void> T OnButtonStealthClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19000C0))(this, world);
	}
	template <typename T = void> T OnButtonBlueprintsClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19001F4))(this, world);
	}
	template <typename T = void> T OnButtonInventoryClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900328))(this, world);
	}
	template <typename T = void> T OnButtonBuildClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190045C))(this, world);
	}
	template <typename T = void> T OnBuild(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1900590))(this, world, blueprintName);
	}
	template <typename T = void> T OnExchange(uintptr_t world, Il2CppString* eventName, Il2CppString* targetName, Il2CppString* itemName, int32_t count, int32_t points) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x19006BC))(this, world, eventName, targetName, itemName, count, points);
	}
	template <typename T = void> T OnExchangeClaim(uintptr_t world, Il2CppString* eventName, Il2CppString* itemName, int32_t count) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x19007E0))(this, world, eventName, itemName, count);
	}
	template <typename T = void> T OnWavesEvent(uintptr_t world, Il2CppString* eventName, int32_t id, bool start) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x190090C))(this, world, eventName, id, start);
	}
	template <typename T = void> T OnButtonChatClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900A60))(this, world);
	}
	template <typename T = void> T OnPlaceFurniture(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900B94))(this, world);
	}
	template <typename T = void> T OnArchitectorClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900CC8))(this, world);
	}
	template <typename T = void> T OnCraftsmanClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900DFC))(this, world);
	}
	template <typename T = void> T OnTavernovnerClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1900F30))(this, world);
	}
	template <typename T = void> T OnScoutClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901064))(this, world);
	}
	template <typename T = void> T OnShamanClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901198))(this, world);
	}
	template <typename T = void> T OnMannequinSwapClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19012CC))(this, world);
	}
	template <typename T = void> T OnBankClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19013E8))(this, world);
	}
	template <typename T = void> T OnDailyShopClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190151C))(this, world);
	}
	template <typename T = void> T OnTraderClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901650))(this, world);
	}
	template <typename T = void> T OnHorseVendorClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901784))(this, world);
	}
	template <typename T = void> T OnStatueClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19018B8))(this, world);
	}
	template <typename T = void> T OnTaxcollectorClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19019EC))(this, world);
	}
	template <typename T = void> T OnCartClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901B20))(this, world);
	}
	template <typename T = void> T OnFontanelClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901C54))(this, world);
	}
	template <typename T = void> T OnWarchiefClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901D88))(this, world);
	}
	template <typename T = void> T OnJaegerClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901EBC))(this, world);
	}
	template <typename T = void> T OnWorkbenchClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1901FF0))(this, world);
	}
	template <typename T = void> T OnExpeditionClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1902124))(this, world);
	}
	template <typename T = void> T OnCrusade(uintptr_t world, int32_t playerCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1902258))(this, world, playerCount);
	}
	template <typename T = void> T OnButtonAutoModeClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19023B8))(this, world);
	}
	template <typename T = void> T OnSelectTargetPriorityClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19024EC))(this, world);
	}
	template <typename T = void> T OnSeasonButtonClickEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1902620))(this, world);
	}
	template <typename T = void> T OnButtonStoreClickEvent(uintptr_t world, Il2CppString* storeType) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1902804))(this, world, storeType);
	}
	template <typename T = void> T OnStoreEnter(uintptr_t world, Il2CppString* storeType) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190294C))(this, world, storeType);
	}
	template <typename T = void> T OnCoinEnter(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1902A6C))(this, world);
	}
	template <typename T = void> T OnBannerEnter(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1902B88))(this, world);
	}
	template <typename T = void> T OnShopSwitchCategory(uintptr_t world, int32_t tabId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1902CA4))(this, world, tabId);
	}
	template <typename T = void> T OnPaymentEvent(uintptr_t world, Il2CppString* storeDataBlueprintName, Il2CppString* currencyOrItemName, int32_t currencyOrItemCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1902DD8))(this, world, storeDataBlueprintName, currencyOrItemName, currencyOrItemCount);
	}
	template <typename T = void> T OnMarketClick(uintptr_t world, Il2CppString* storeDataBlueprintName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1902FB4))(this, world, storeDataBlueprintName);
	}
	template <typename T = void> T OnVIPDailyChestOpen(uintptr_t world, int32_t vipLevel) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x19030DC))(this, world, vipLevel);
	}
	template <typename T = void> T OnSetTestingGroup(uintptr_t world, Il2CppString* testingGroup) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903210))(this, world, testingGroup);
	}
	template <typename T = void> T OnEnterGlobalMapFirstTime(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1903338))(this, world);
	}
	template <typename T = void> T OnTutorialTalkToNPC(uintptr_t world, Il2CppString* npcId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903458))(this, world, npcId);
	}
	template <typename T = void> T OnTutorialOccupationChoice(uintptr_t world, int32_t choiceId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1903584))(this, world, choiceId);
	}
	template <typename T = void> T OnTutorialExitVillage(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19036BC))(this, world);
	}
	template <typename T = void> T OnTutorialSkip(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19037DC))(this, world);
	}
	template <typename T = void> T OnQuestComplete(uintptr_t world, Il2CppString* questId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19038FC))(this, world, questId);
	}
	template <typename T = void> T OnQuestClaim(uintptr_t world, Il2CppString* questId, bool isPremium) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1903A24))(this, world, questId, isPremium);
	}
	template <typename T = void> T OnClassStart(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903B50))(this, world, className);
	}
	template <typename T = void> T OnClassChoice(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903C78))(this, world, className);
	}
	template <typename T = void> T OnClassUse(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903DA0))(this, world, className);
	}
	template <typename T = void> T OnClassLearn(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903EC8))(this, world, className);
	}
	template <typename T = void> T OnClassDonate(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1904128))(this, world, className);
	}
	template <typename T = void> T OnItemDonate(uintptr_t world, Il2CppString* itemName, int32_t count) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1904388))(this, world, itemName, count);
	}
	template <typename T = void> T OnClassQuest(uintptr_t world, Il2CppString* className, Il2CppString* questId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19044AC))(this, world, className, questId);
	}
	template <typename T = void> T OnClassQuestSkip(uintptr_t world, Il2CppString* className, Il2CppString* questId, int32_t coinsPrice) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x19045C4))(this, world, className, questId, coinsPrice);
	}
	template <typename T = void> T OnShipsMapClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19046E8))(this, world);
	}
	template <typename T = void> T OnShipsTradeClick(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1904804))(this, world);
	}
	template <typename T = void> T OnShipsNPCTalk(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1904920))(this, world);
	}
	template <typename T = void> T OnRaidSearch(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1904A3C))(this, world);
	}
	template <typename T = void> T OnRaidStart(uintptr_t world, int32_t activePlayersCount, int32_t seconds) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1904B58))(this, world, activePlayersCount, seconds);
	}
	template <typename T = void> T OnAuto(uintptr_t world, Il2CppString* locationName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1904DB0))(this, world, locationName);
	}
	template <typename T = void> T OnChallengeResult(uintptr_t world, Il2CppString* challengeType, int64_t challengeId, Il2CppString* place, int32_t points) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1904EC4))(this, world, challengeType, challengeId, place, points);
	}
	template <typename T = void> T OnChallengeUpdate(uintptr_t world, Il2CppString* challengeType, int64_t challengeId, Il2CppString* resource, int32_t points) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1904FEC))(this, world, challengeType, challengeId, resource, points);
	}
	template <typename T = void> T OnPerformanceFps(uintptr_t world, int32_t fps) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1905114))(this, world, fps);
	}
	template <typename T = void> T OnPerformancePing(uintptr_t world, int32_t ping) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1905250))(this, world, ping);
	}
	template <typename T = void> T OnFogOfWar(uintptr_t world, Il2CppString* zoneId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190538C))(this, world, zoneId);
	}
	template <typename T = void> T OnDisbandClan(uintptr_t world, int32_t membersCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x19054B4))(this, world, membersCount);
	}
	template <typename T = void> T OnAdsShowing(uintptr_t world, uintptr_t adsActor) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19055DC))(this, world, adsActor);
	}
	template <typename T = void> T OnAdsRewarded(uintptr_t world, uintptr_t adsActor, bool isTimeOut) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x19057D0))(this, world, adsActor, isTimeOut);
	}
	template <typename T = void> T OnAdsFailed(uintptr_t world, uintptr_t adsActor, Il2CppString* error) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1905A04))(this, world, adsActor, error);
	}
	template <typename T = void> T OnEnterLocation(uintptr_t world, int32_t playerCount, int32_t power) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1905BE8))(this, world, playerCount, power);
	}
	template <typename T = void> T OnRaidEnterLocation(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x19064E4))(this, world);
	}
	template <typename T = void> T OnOpenDungeon(uintptr_t world, Il2CppString* destinationLocationName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19066FC))(this, world, destinationLocationName);
	}
	template <typename T = void> T OnPassPrerequisite(uintptr_t world, Il2CppString* destinationLocationName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1906B70))(this, world, destinationLocationName);
	}
	template <typename T = void> T OnCustomisation(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1906EB0))(this, world);
	}
	template <typename T = void> T OnChangeName(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1906FE4))(this, world);
	}
	template <typename T = void> T OnAcceptInvite(uintptr_t world, int32_t clanSize) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1907118))(this, world, clanSize);
	}
	template <typename T = void> T OnRepair(uintptr_t world, Il2CppString* blueprintName, int32_t repairPrice) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190733C))(this, world, blueprintName, repairPrice);
	}
	template <typename T = void> T OnEnergyAdd(uintptr_t world, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1907460))(this, world, price);
	}
	template <typename T = void> T OnBuild_1(uintptr_t world, Il2CppString* buildName, bool upgrade) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1907588))(this, world, buildName, upgrade);
	}
	template <typename T = void> T OnPlayerKillMode(uintptr_t world, bool isOn) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, bool))(Il2CppBase() + 0x19076BC))(this, world, isOn);
	}
	template <typename T = void> T OnNPCFirstDialogue(int32_t dialogueId, uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, int32_t, uintptr_t))(Il2CppBase() + 0x1907924))(this, dialogueId, world);
	}
	template <typename T = void> T OnGameLoaderStepEvent(Il2CppString* action, Il2CppString* stepName, float stepDuration, Il2CppString* additionalInfo, bool addDeviceInfo) {
		return ((T (*)(ClientAnalyticsManager*, Il2CppString*, Il2CppString*, float, Il2CppString*, bool))(Il2CppBase() + 0x1907DE0))(this, action, stepName, stepDuration, additionalInfo, addDeviceInfo);
	}
	template <typename T = void> T OnGuildCreateEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1907F9C))(this, world);
	}
	template <typename T = void> T OnGuildJoinEvent(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190824C))(this, world);
	}
	template <typename T = void> T OnGuildLeaveEvent(uintptr_t world, int64_t guildId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int64_t))(Il2CppBase() + 0x19084FC))(this, world, guildId);
	}
	template <typename T = void> T OnGuildDisbandEvent(uintptr_t world, int64_t guildId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int64_t))(Il2CppBase() + 0x19086B8))(this, world, guildId);
	}
	template <typename T = void> T OnOpenInventoryContainer(uintptr_t world, Il2CppString* eventName, bool useKey) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x1908874))(this, world, eventName, useKey);
	}
	template <typename T = void> T OnGlobalTournament(uintptr_t world, Il2CppString* eventName, int32_t place, int32_t points) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x19089BC))(this, world, eventName, place, points);
	}
	template <typename T = void> T OnCustomizationHud(uintptr_t world, Il2CppString* action, bool isFirstTimeEvent, int32_t toggle, Il2CppString* element) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1908AE4))(this, world, action, isFirstTimeEvent, toggle, element);
	}
	template <typename T = void> T OnAnalyticsCommand(uintptr_t world, uintptr_t reader) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1908C10))(this, world, reader);
	}
	template <typename T = bool> T OnEvent(uintptr_t world, unsigned char eventId, uintptr_t reader) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, unsigned char, uintptr_t))(Il2CppBase() + 0x1908E70))(this, world, eventId, reader);
	}
	template <typename T = void> T OnFishingStart(uintptr_t world, Il2CppString* itemName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190F304))(this, world, itemName);
	}
	template <typename T = void> T OnFishingHook(uintptr_t world, Il2CppString* itemName, bool success) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x190F430))(this, world, itemName, success);
	}
	template <typename T = void> T OnFishingLureUse(uintptr_t world, Il2CppString* itemName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190F58C))(this, world, itemName);
	}
	template <typename T = void> T OnPetGet(uintptr_t world, Il2CppString* petParameters, Il2CppString* shardName, int32_t resultCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190EF7C))(this, world, petParameters, shardName, resultCount);
	}
	template <typename T = void> T OnCosmeticGet(uintptr_t world, Il2CppString* itemName, Il2CppString* shardName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190EE64))(this, world, itemName, shardName);
	}
	template <typename T = void> T OnPetDelete(uintptr_t world, Il2CppString* petParameters, int32_t resultCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190F0A0))(this, world, petParameters, resultCount);
	}
	template <typename T = void> T OnPetEquip(uintptr_t world, Il2CppString* petParameters) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190F1D4))(this, world, petParameters);
	}
	template <typename T = void> T OnMountGet(uintptr_t world, Il2CppString* mountParameters, Il2CppString* shardName, int32_t resultCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190D5B8))(this, world, mountParameters, shardName, resultCount);
	}
	template <typename T = void> T OnMountDelete(uintptr_t world, Il2CppString* mountParameters, int32_t resultCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190D6DC))(this, world, mountParameters, resultCount);
	}
	template <typename T = void> T OnMountFuse(uintptr_t world, Il2CppString* mountParameters, Il2CppString* fuseMountParameters, int32_t resultCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190D810))(this, world, mountParameters, fuseMountParameters, resultCount);
	}
	template <typename T = void> T OnMountEquip(uintptr_t world, Il2CppString* mountParameters) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190D934))(this, world, mountParameters);
	}
	template <typename T = void> T OnMountRide(uintptr_t world, Il2CppString* type) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190DA64))(this, world, type);
	}
	template <typename T = void> T OnBattlePassPointsAchieved(uintptr_t world, int32_t currentBattlePassLevel, int32_t currentBattlePassPoints, uintptr_t currencyType) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x190DB94))(this, world, currentBattlePassLevel, currentBattlePassPoints, currencyType);
	}
	template <typename T = void> T OnBattlePassRewardClaim(uintptr_t world, int32_t currentBattlePassLevel, bool isPremium, uintptr_t currencyType) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x190E38C))(this, world, currentBattlePassLevel, isPremium, currencyType);
	}
	template <typename T = void> T OnBattlePassReset(uintptr_t world, uintptr_t currencyType) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x190E4D0))(this, world, currencyType);
	}
	template <typename T = void> T OnPortalsPointsChanged(uintptr_t world, Il2CppString* questName, int32_t currentPortalsPoints, int32_t delta) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190DCD8))(this, world, questName, currentPortalsPoints, delta);
	}
	template <typename T = void> T OnPortalsBattlePassClaim(uintptr_t world, int32_t currentBattlePassLevel, bool isPremium) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x190E24C))(this, world, currentBattlePassLevel, isPremium);
	}
	template <typename T = void> T OnCumulativePackPurchase(uintptr_t world, Il2CppString* transactionName, int32_t packLevel) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190F6B8))(this, world, transactionName, packLevel);
	}
	template <typename T = void> T OnLevelUp(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190A0BC))(this, world);
	}
	template <typename T = void> T OnDeath(uintptr_t world, Il2CppString* cause, int32_t allyCount, int32_t power) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190A2D4))(this, world, cause, allyCount, power);
	}
	template <typename T = void> T OnKill(uintptr_t world, Il2CppString* target, int32_t allyCount, int32_t power) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190A4CC))(this, world, target, allyCount, power);
	}
	template <typename T = void> T OnUse(uintptr_t world, Il2CppString* itemName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190A738))(this, world, itemName);
	}
	template <typename T = void> T OnLearnBlueprint(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190A940))(this, world, blueprintName);
	}
	template <typename T = void> T OnCraftBlueprint(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190AA6C))(this, world, blueprintName);
	}
	template <typename T = void> T OnCraftSkip(uintptr_t world, Il2CppString* blueprintName, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190AC3C))(this, world, blueprintName, price);
	}
	template <typename T = void> T OnUpgradeVaultChest(uintptr_t world, Il2CppString* blueprintName, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190B0E8))(this, world, blueprintName, price);
	}
	template <typename T = void> T OnRepairSkip(uintptr_t world, Il2CppString* blueprintName, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190AD68))(this, world, blueprintName, price);
	}
	template <typename T = void> T OnCustomizationForCoins(uintptr_t world, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x190AE94))(this, world, price);
	}
	template <typename T = void> T OnUpgradeBuilding(uintptr_t world, Il2CppString* blueprintName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190AFBC))(this, world, blueprintName);
	}
	template <typename T = void> T OnChangeLocation(uintptr_t world, Il2CppString* locationName, bool isRunning) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x190B214))(this, world, locationName, isRunning);
	}
	template <typename T = void> T OnLeaveClan(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190C0D8))(this, world);
	}
	template <typename T = void> T OnRaidDestroyWall(uintptr_t world, Il2CppString* blueprint) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190B384))(this, world, blueprint);
	}
	template <typename T = void> T OnRaidUnlockChest(uintptr_t world, Il2CppString* blueprint, int32_t locationId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190B4AC))(this, world, blueprint, locationId);
	}
	template <typename T = void> T OnPortalItemInsert(uintptr_t world, Il2CppString* itemName, int32_t itemCount, int32_t locationId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190B68C))(this, world, itemName, itemCount, locationId);
	}
	template <typename T = void> T OnPvPUnlockChest(uintptr_t world, int32_t locationId) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x190B878))(this, world, locationId);
	}
	template <typename T = void> T OnNorthPvPUnlockChest(uintptr_t world, int32_t locationId, Il2CppString* rg) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x190BBD0))(this, world, locationId, rg);
	}
	template <typename T = void> T OnTownUpgrade(uintptr_t world, Il2CppString* type, int32_t grade, int32_t districtLevel) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190C53C))(this, world, type, grade, districtLevel);
	}
	template <typename T = void> T OnTownCraftsman(uintptr_t world, int32_t level, int32_t craftbasket) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1910504))(this, world, level, craftbasket);
	}
	template <typename T = void> T OnTownTaxCollector(uintptr_t world, int32_t level, int32_t collectedCoinsCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x190C678))(this, world, level, collectedCoinsCount);
	}
	template <typename T = void> T OnTownScout(uintptr_t world, Il2CppString* locationName, Il2CppString* eventName, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190C7B8))(this, world, locationName, eventName, price);
	}
	template <typename T = void> T OnTownDailyShop(uintptr_t world, Il2CppString* locationName, Il2CppString* itemName, int32_t price) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190C8DC))(this, world, locationName, itemName, price);
	}
	template <typename T = void> T OnTownTavernEvent(uintptr_t world, Il2CppString* locationName, Il2CppString* eventName, bool status) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190CA00))(this, world, locationName, eventName, status);
	}
	template <typename T = void> T OnGuildQuestStart(uintptr_t world, Il2CppString* questName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190CB24))(this, world, questName);
	}
	template <typename T = void> T OnSeasonQuest(uintptr_t world, Il2CppString* questName, int32_t seasonPoints) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190CE68))(this, world, questName, seasonPoints);
	}
	template <typename T = void> T OnSeasonCraft(uintptr_t world, Il2CppString* resource, int32_t seasonPoints) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190DEC8))(this, world, resource, seasonPoints);
	}
	template <typename T = void> T OnGlobalEventQuest(uintptr_t world, Il2CppString* questName, Il2CppString* eventName, bool completed) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190DFF4))(this, world, questName, eventName, completed);
	}
	template <typename T = void> T OnGiftEvent(uintptr_t world, Il2CppString* questName, Il2CppString* actionName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190E134))(this, world, questName, actionName);
	}
	template <typename T = void> T OnPortalQuest(uintptr_t world, Il2CppString* questName, uintptr_t questPhase, int32_t playerCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, uintptr_t, int32_t))(Il2CppBase() + 0x190CCF8))(this, world, questName, questPhase, playerCount);
	}
	template <typename T = void> T OnGuildRating(uintptr_t world, int32_t place, int32_t points) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1910634))(this, world, place, points);
	}
	template <typename T = void> T OnGiantVillageEvent(uintptr_t world, Il2CppString* actionName, Il2CppString* questName, bool status) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190CF94))(this, world, actionName, questName, status);
	}
	template <typename T = void> T OnTownScoutEvent(uintptr_t world, Il2CppString* eventName, bool isPersonal, int32_t influenceCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x190D1EC))(this, world, eventName, isPersonal, influenceCount);
	}
	template <typename T = void> T OnTutorStepEvent(uintptr_t world, Il2CppString* step, Il2CppString* questName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190D340))(this, world, step, questName);
	}
	template <typename T = void> T OnTownStatue(uintptr_t world, int32_t level) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x190D0B8))(this, world, level);
	}
	template <typename T = void> T OnTownBank(uintptr_t world, int32_t level) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1910930))(this, world, level);
	}
	template <typename T = void> T OnBossLootCollected(uintptr_t world, Il2CppString* blueprint) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190BD98))(this, world, blueprint);
	}
	template <typename T = void> T OnHelp(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x190C1F4))(this, world);
	}
	template <typename T = void> T OnActivateLockedTreasure(uintptr_t world, Il2CppString* targetName, Il2CppString* itemName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190D498))(this, world, targetName, itemName);
	}
	template <typename T = void> T OnRuneOperation(uintptr_t world, uintptr_t command, Il2CppString* blueprint, int32_t count) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x190E614))(this, world, command, blueprint, count);
	}
	template <typename T = void> T OnRuneInventoryUpgrade(uintptr_t world, int32_t silverPrice, int32_t grade) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x190EA90))(this, world, silverPrice, grade);
	}
	template <typename T = void> T OnGuildPortal(uintptr_t world, Il2CppString* bossId, bool isStart) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x190EBC0))(this, world, bossId, isStart);
	}
	template <typename T = void> T OnGuildBossBattle(uintptr_t world, Il2CppString* bossId, Il2CppString* state, int32_t playerCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190ED34))(this, world, bossId, state, playerCount);
	}
	template <typename T = void> T AFFOnTutorialComplete(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x191081C))(this, world);
	}
	template <typename T = void> T AFFOnCraftItem(uintptr_t world, Il2CppString* toBeCraftedBlueprint) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190FBB8))(this, world, toBeCraftedBlueprint);
	}
	template <typename T = Il2CppString*> T GetTag(uintptr_t item, Il2CppArray<uintptr_t>* tags) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1910A64))(this, item, tags);
	}
	template <typename T = void> T AFFOnDeath(uintptr_t world, Il2CppString* reason) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190F7EC))(this, world, reason);
	}
	template <typename T = void> T AFFOnKill(uintptr_t world, int32_t mobCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x190F920))(this, world, mobCount);
	}
	template <typename T = void> T AFFOnClanJoin(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1907244))(this, world);
	}
	template <typename T = void> T AFFOnDistrictLevel(uintptr_t world, int32_t districtLevel) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x19103BC))(this, world, districtLevel);
	}
	template <typename T = void> T AFFOnBuyPremium(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1910B00))(this, world);
	}
	template <typename T = void> T AFFOnTournamentStart(uintptr_t world, int32_t tournamentsCount) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1910C14))(this, world, tournamentsCount);
	}
	template <typename T = void> T AFFOnClassLearn(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1903FF8))(this, world, className);
	}
	template <typename T = void> T AFFOnClassDonate(uintptr_t world, Il2CppString* className) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1904258))(this, world, className);
	}
	template <typename T = void> T AFFOnAggressionUse(uintptr_t world, int32_t isOn) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, int32_t))(Il2CppBase() + 0x1907800))(this, world, isOn);
	}
	template <typename T = void> T AFFBunkerStart(uintptr_t world, Il2CppString* dungeonName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1910D7C))(this, world, dungeonName);
	}
	template <typename T = void> T AFFBunkerComplete(uintptr_t world, Il2CppString* dungeonName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1910EAC))(this, world, dungeonName);
	}
	template <typename T = void> T AFFBossComplete(uintptr_t world, Il2CppString* bossName) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x190FA88))(this, world, bossName);
	}
	template <typename T = void> T AFFRaid(uintptr_t world) {
		return ((T (*)(ClientAnalyticsManager*, uintptr_t))(Il2CppBase() + 0x1904CA0))(this, world);
	}
	template <typename T = void> T SetupUnityAnalytics() {
		return ((T (*)(ClientAnalyticsManager*))(Il2CppBase() + 0x18FDD90))(this);
	}
	template <typename T = void> T CustomEvent(Il2CppString* customEventName) {
		return ((T (*)(ClientAnalyticsManager*, Il2CppString*))(Il2CppBase() + 0x1910FDC))(this, customEventName);
	}
	template <typename T = void> T CustomEvent_1(Il2CppString* customEventName, void* eventData) {
		return ((T (*)(ClientAnalyticsManager*, Il2CppString*, void*))(Il2CppBase() + 0x1910FE8))(this, customEventName, eventData);
	}

};

}
