#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientAnalyticsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientAnalyticsManager"));
	}

	template <typename R = DevToDevAnalytics*> R& Dev2DevAnalyticsSystem() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& _lastLocationName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& _emptyAppParam() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _emptyFBParam() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> static R& itemTags() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 IDictionary2<Il2CppString*, Il2CppObject*>*& _firtLaunchData() {
		return *(IDictionary2<Il2CppString*, Il2CppObject*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _launchNumber() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R LogEvent(AnalyticsEntity* e) {
		return ((R (*)(ClientAnalyticsManager*, AnalyticsEntity*))(Il2CppBase() + 0x18FDEBC))(this, e);
	}
	template <typename R = void> R ForceLogEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x18FE638))(this, world);
	}
	template <typename R = void> R LogRealPayment(Il2CppString* transactionId, float price, Il2CppString* name, Il2CppString* currencyCode) {
		return ((R (*)(ClientAnalyticsManager*, Il2CppString*, float, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x18FE8E4))(this, transactionId, price, name, currencyCode);
	}
	template <typename R = void> R SetPlayerId(Il2CppString* uniquePlayerId) {
		return ((R (*)(ClientAnalyticsManager*, Il2CppString*))(Il2CppBase() + 0x18FEADC))(this, uniquePlayerId);
	}
	template <typename R = Il2CppString*> R GetDev2DevId() {
		return ((R (*)(ClientAnalyticsManager*))(Il2CppBase() + 0x18FEB64))(this);
	}
	template <typename R = Il2CppString*> R GetLocationName(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x18FEB80))(this, world);
	}
	template <typename R = void> R OnClassRuneChangedEvent(ICommonClientWorld* world, AccountEntity* accountEntity, PlayerClassType classType, ClassRuneChangedData data) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, AccountEntity*, PlayerClassType, ClassRuneChangedData))(Il2CppBase() + 0x18FED38))(this, world, accountEntity, classType, data);
	}
	template <typename R = void> R OnButtonStealthClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19000C0))(this, world);
	}
	template <typename R = void> R OnButtonBlueprintsClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19001F4))(this, world);
	}
	template <typename R = void> R OnButtonInventoryClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900328))(this, world);
	}
	template <typename R = void> R OnButtonBuildClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190045C))(this, world);
	}
	template <typename R = void> R OnBuild(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1900590))(this, world, blueprintName);
	}
	template <typename R = void> R OnExchange(ICommonClientWorld* world, Il2CppString* eventName, Il2CppString* targetName, Il2CppString* itemName, int32_t count, int32_t points) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x19006BC))(this, world, eventName, targetName, itemName, count, points);
	}
	template <typename R = void> R OnExchangeClaim(ICommonClientWorld* world, Il2CppString* eventName, Il2CppString* itemName, int32_t count) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x19007E0))(this, world, eventName, itemName, count);
	}
	template <typename R = void> R OnWavesEvent(ICommonClientWorld* world, Il2CppString* eventName, int32_t id, bool start) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x190090C))(this, world, eventName, id, start);
	}
	template <typename R = void> R OnButtonChatClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900A60))(this, world);
	}
	template <typename R = void> R OnPlaceFurniture(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900B94))(this, world);
	}
	template <typename R = void> R OnArchitectorClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900CC8))(this, world);
	}
	template <typename R = void> R OnCraftsmanClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900DFC))(this, world);
	}
	template <typename R = void> R OnTavernovnerClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1900F30))(this, world);
	}
	template <typename R = void> R OnScoutClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901064))(this, world);
	}
	template <typename R = void> R OnShamanClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901198))(this, world);
	}
	template <typename R = void> R OnMannequinSwapClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19012CC))(this, world);
	}
	template <typename R = void> R OnBankClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19013E8))(this, world);
	}
	template <typename R = void> R OnDailyShopClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190151C))(this, world);
	}
	template <typename R = void> R OnTraderClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901650))(this, world);
	}
	template <typename R = void> R OnHorseVendorClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901784))(this, world);
	}
	template <typename R = void> R OnStatueClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19018B8))(this, world);
	}
	template <typename R = void> R OnTaxcollectorClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19019EC))(this, world);
	}
	template <typename R = void> R OnCartClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901B20))(this, world);
	}
	template <typename R = void> R OnFontanelClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901C54))(this, world);
	}
	template <typename R = void> R OnWarchiefClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901D88))(this, world);
	}
	template <typename R = void> R OnJaegerClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901EBC))(this, world);
	}
	template <typename R = void> R OnWorkbenchClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1901FF0))(this, world);
	}
	template <typename R = void> R OnExpeditionClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1902124))(this, world);
	}
	template <typename R = void> R OnCrusade(ICommonClientWorld* world, int32_t playerCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1902258))(this, world, playerCount);
	}
	template <typename R = void> R OnButtonAutoModeClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19023B8))(this, world);
	}
	template <typename R = void> R OnSelectTargetPriorityClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19024EC))(this, world);
	}
	template <typename R = void> R OnSeasonButtonClickEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1902620))(this, world);
	}
	template <typename R = void> R OnButtonStoreClickEvent(ICommonClientWorld* world, Il2CppString* storeType) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1902804))(this, world, storeType);
	}
	template <typename R = void> R OnStoreEnter(ICommonClientWorld* world, Il2CppString* storeType) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190294C))(this, world, storeType);
	}
	template <typename R = void> R OnCoinEnter(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1902A6C))(this, world);
	}
	template <typename R = void> R OnBannerEnter(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1902B88))(this, world);
	}
	template <typename R = void> R OnShopSwitchCategory(ICommonClientWorld* world, int32_t tabId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1902CA4))(this, world, tabId);
	}
	template <typename R = void> R OnPaymentEvent(ICommonClientWorld* world, Il2CppString* storeDataBlueprintName, Il2CppString* currencyOrItemName, int32_t currencyOrItemCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x1902DD8))(this, world, storeDataBlueprintName, currencyOrItemName, currencyOrItemCount);
	}
	template <typename R = void> R OnMarketClick(ICommonClientWorld* world, Il2CppString* storeDataBlueprintName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1902FB4))(this, world, storeDataBlueprintName);
	}
	template <typename R = void> R OnVIPDailyChestOpen(ICommonClientWorld* world, int32_t vipLevel) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x19030DC))(this, world, vipLevel);
	}
	template <typename R = void> R OnSetTestingGroup(ICommonClientWorld* world, Il2CppString* testingGroup) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903210))(this, world, testingGroup);
	}
	template <typename R = void> R OnEnterGlobalMapFirstTime(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1903338))(this, world);
	}
	template <typename R = void> R OnTutorialTalkToNPC(ICommonClientWorld* world, Il2CppString* npcId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903458))(this, world, npcId);
	}
	template <typename R = void> R OnTutorialOccupationChoice(ICommonClientWorld* world, int32_t choiceId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1903584))(this, world, choiceId);
	}
	template <typename R = void> R OnTutorialExitVillage(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19036BC))(this, world);
	}
	template <typename R = void> R OnTutorialSkip(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19037DC))(this, world);
	}
	template <typename R = void> R OnQuestComplete(ICommonClientWorld* world, Il2CppString* questId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x19038FC))(this, world, questId);
	}
	template <typename R = void> R OnQuestClaim(ICommonClientWorld* world, Il2CppString* questId, bool isPremium) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x1903A24))(this, world, questId, isPremium);
	}
	template <typename R = void> R OnClassStart(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903B50))(this, world, className);
	}
	template <typename R = void> R OnClassChoice(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903C78))(this, world, className);
	}
	template <typename R = void> R OnClassUse(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903DA0))(this, world, className);
	}
	template <typename R = void> R OnClassLearn(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903EC8))(this, world, className);
	}
	template <typename R = void> R OnClassDonate(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1904128))(this, world, className);
	}
	template <typename R = void> R OnItemDonate(ICommonClientWorld* world, Il2CppString* itemName, int32_t count) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x1904388))(this, world, itemName, count);
	}
	template <typename R = void> R OnClassQuest(ICommonClientWorld* world, Il2CppString* className, Il2CppString* questId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19044AC))(this, world, className, questId);
	}
	template <typename R = void> R OnClassQuestSkip(ICommonClientWorld* world, Il2CppString* className, Il2CppString* questId, int32_t coinsPrice) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x19045C4))(this, world, className, questId, coinsPrice);
	}
	template <typename R = void> R OnShipsMapClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19046E8))(this, world);
	}
	template <typename R = void> R OnShipsTradeClick(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1904804))(this, world);
	}
	template <typename R = void> R OnShipsNPCTalk(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1904920))(this, world);
	}
	template <typename R = void> R OnRaidSearch(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1904A3C))(this, world);
	}
	template <typename R = void> R OnRaidStart(ICommonClientWorld* world, int32_t activePlayersCount, int32_t seconds) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1904B58))(this, world, activePlayersCount, seconds);
	}
	template <typename R = void> R OnAuto(ICommonClientWorld* world, Il2CppString* locationName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1904DB0))(this, world, locationName);
	}
	template <typename R = void> R OnChallengeResult(ICommonClientWorld* world, Il2CppString* challengeType, int64_t challengeId, Il2CppString* place, int32_t points) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1904EC4))(this, world, challengeType, challengeId, place, points);
	}
	template <typename R = void> R OnChallengeUpdate(ICommonClientWorld* world, Il2CppString* challengeType, int64_t challengeId, Il2CppString* resource, int32_t points) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int64_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1904FEC))(this, world, challengeType, challengeId, resource, points);
	}
	template <typename R = void> R OnPerformanceFps(ICommonClientWorld* world, int32_t fps) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1905114))(this, world, fps);
	}
	template <typename R = void> R OnPerformancePing(ICommonClientWorld* world, int32_t ping) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1905250))(this, world, ping);
	}
	template <typename R = void> R OnFogOfWar(ICommonClientWorld* world, Il2CppString* zoneId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190538C))(this, world, zoneId);
	}
	template <typename R = void> R OnDisbandClan(ICommonClientWorld* world, int32_t membersCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x19054B4))(this, world, membersCount);
	}
	template <typename R = void> R OnAdsShowing(ICommonClientWorld* world, AdsActor adsActor) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, AdsActor))(Il2CppBase() + 0x19055DC))(this, world, adsActor);
	}
	template <typename R = void> R OnAdsRewarded(ICommonClientWorld* world, AdsActor adsActor, bool isTimeOut) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, AdsActor, bool))(Il2CppBase() + 0x19057D0))(this, world, adsActor, isTimeOut);
	}
	template <typename R = void> R OnAdsFailed(ICommonClientWorld* world, AdsActor adsActor, Il2CppString* error) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, AdsActor, Il2CppString*))(Il2CppBase() + 0x1905A04))(this, world, adsActor, error);
	}
	template <typename R = void> R OnEnterLocation(ICommonClientWorld* world, int32_t playerCount, int32_t power) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1905BE8))(this, world, playerCount, power);
	}
	template <typename R = void> R OnRaidEnterLocation(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x19064E4))(this, world);
	}
	template <typename R = void> R OnOpenDungeon(ICommonClientWorld* world, Il2CppString* destinationLocationName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x19066FC))(this, world, destinationLocationName);
	}
	template <typename R = void> R OnPassPrerequisite(ICommonClientWorld* world, Il2CppString* destinationLocationName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1906B70))(this, world, destinationLocationName);
	}
	template <typename R = void> R OnCustomisation(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1906EB0))(this, world);
	}
	template <typename R = void> R OnChangeName(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1906FE4))(this, world);
	}
	template <typename R = void> R OnAcceptInvite(ICommonClientWorld* world, int32_t clanSize) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1907118))(this, world, clanSize);
	}
	template <typename R = void> R OnRepair(ICommonClientWorld* world, Il2CppString* blueprintName, int32_t repairPrice) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190733C))(this, world, blueprintName, repairPrice);
	}
	template <typename R = void> R OnEnergyAdd(ICommonClientWorld* world, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1907460))(this, world, price);
	}
	template <typename R = void> R OnBuild_1(ICommonClientWorld* world, Il2CppString* buildName, bool upgrade) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x1907588))(this, world, buildName, upgrade);
	}
	template <typename R = void> R OnPlayerKillMode(ICommonClientWorld* world, bool isOn) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, bool))(Il2CppBase() + 0x19076BC))(this, world, isOn);
	}
	template <typename R = void> R OnNPCFirstDialogue(int32_t dialogueId, ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, int32_t, ICommonClientWorld*))(Il2CppBase() + 0x1907924))(this, dialogueId, world);
	}
	template <typename R = void> R OnGameLoaderStepEvent(Il2CppString* action, Il2CppString* stepName, float stepDuration, Il2CppString* additionalInfo, bool addDeviceInfo) {
		return ((R (*)(ClientAnalyticsManager*, Il2CppString*, Il2CppString*, float, Il2CppString*, bool))(Il2CppBase() + 0x1907DE0))(this, action, stepName, stepDuration, additionalInfo, addDeviceInfo);
	}
	template <typename R = void> R OnGuildCreateEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1907F9C))(this, world);
	}
	template <typename R = void> R OnGuildJoinEvent(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190824C))(this, world);
	}
	template <typename R = void> R OnGuildLeaveEvent(ICommonClientWorld* world, int64_t guildId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x19084FC))(this, world, guildId);
	}
	template <typename R = void> R OnGuildDisbandEvent(ICommonClientWorld* world, int64_t guildId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int64_t))(Il2CppBase() + 0x19086B8))(this, world, guildId);
	}
	template <typename R = void> R OnOpenInventoryContainer(ICommonClientWorld* world, Il2CppString* eventName, bool useKey) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x1908874))(this, world, eventName, useKey);
	}
	template <typename R = void> R OnGlobalTournament(ICommonClientWorld* world, Il2CppString* eventName, int32_t place, int32_t points) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x19089BC))(this, world, eventName, place, points);
	}
	template <typename R = void> R OnCustomizationHud(ICommonClientWorld* world, Il2CppString* action, bool isFirstTimeEvent, int32_t toggle, Il2CppString* element) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x1908AE4))(this, world, action, isFirstTimeEvent, toggle, element);
	}
	template <typename R = void> R OnAnalyticsCommand(ICommonClientWorld* world, uintptr_t reader) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, uintptr_t))(Il2CppBase() + 0x1908C10))(this, world, reader);
	}
	template <typename R = bool> R OnEvent(ICommonClientWorld* world, uint8_t eventId, uintptr_t reader) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, uint8_t, uintptr_t))(Il2CppBase() + 0x1908E70))(this, world, eventId, reader);
	}
	template <typename R = void> R OnFishingStart(ICommonClientWorld* world, Il2CppString* itemName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190F304))(this, world, itemName);
	}
	template <typename R = void> R OnFishingHook(ICommonClientWorld* world, Il2CppString* itemName, bool success) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x190F430))(this, world, itemName, success);
	}
	template <typename R = void> R OnFishingLureUse(ICommonClientWorld* world, Il2CppString* itemName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190F58C))(this, world, itemName);
	}
	template <typename R = void> R OnPetGet(ICommonClientWorld* world, Il2CppString* petParameters, Il2CppString* shardName, int32_t resultCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190EF7C))(this, world, petParameters, shardName, resultCount);
	}
	template <typename R = void> R OnCosmeticGet(ICommonClientWorld* world, Il2CppString* itemName, Il2CppString* shardName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190EE64))(this, world, itemName, shardName);
	}
	template <typename R = void> R OnPetDelete(ICommonClientWorld* world, Il2CppString* petParameters, int32_t resultCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190F0A0))(this, world, petParameters, resultCount);
	}
	template <typename R = void> R OnPetEquip(ICommonClientWorld* world, Il2CppString* petParameters) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190F1D4))(this, world, petParameters);
	}
	template <typename R = void> R OnMountGet(ICommonClientWorld* world, Il2CppString* mountParameters, Il2CppString* shardName, int32_t resultCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190D5B8))(this, world, mountParameters, shardName, resultCount);
	}
	template <typename R = void> R OnMountDelete(ICommonClientWorld* world, Il2CppString* mountParameters, int32_t resultCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190D6DC))(this, world, mountParameters, resultCount);
	}
	template <typename R = void> R OnMountFuse(ICommonClientWorld* world, Il2CppString* mountParameters, Il2CppString* fuseMountParameters, int32_t resultCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190D810))(this, world, mountParameters, fuseMountParameters, resultCount);
	}
	template <typename R = void> R OnMountEquip(ICommonClientWorld* world, Il2CppString* mountParameters) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190D934))(this, world, mountParameters);
	}
	template <typename R = void> R OnMountRide(ICommonClientWorld* world, Il2CppString* type) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190DA64))(this, world, type);
	}
	template <typename R = void> R OnBattlePassPointsAchieved(ICommonClientWorld* world, int32_t currentBattlePassLevel, int32_t currentBattlePassPoints, CurrencyType currencyType) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t, CurrencyType))(Il2CppBase() + 0x190DB94))(this, world, currentBattlePassLevel, currentBattlePassPoints, currencyType);
	}
	template <typename R = void> R OnBattlePassRewardClaim(ICommonClientWorld* world, int32_t currentBattlePassLevel, bool isPremium, CurrencyType currencyType) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, bool, CurrencyType))(Il2CppBase() + 0x190E38C))(this, world, currentBattlePassLevel, isPremium, currencyType);
	}
	template <typename R = void> R OnBattlePassReset(ICommonClientWorld* world, CurrencyType currencyType) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, CurrencyType))(Il2CppBase() + 0x190E4D0))(this, world, currencyType);
	}
	template <typename R = void> R OnPortalsPointsChanged(ICommonClientWorld* world, Il2CppString* questName, int32_t currentPortalsPoints, int32_t delta) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190DCD8))(this, world, questName, currentPortalsPoints, delta);
	}
	template <typename R = void> R OnPortalsBattlePassClaim(ICommonClientWorld* world, int32_t currentBattlePassLevel, bool isPremium) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, bool))(Il2CppBase() + 0x190E24C))(this, world, currentBattlePassLevel, isPremium);
	}
	template <typename R = void> R OnCumulativePackPurchase(ICommonClientWorld* world, Il2CppString* transactionName, int32_t packLevel) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190F6B8))(this, world, transactionName, packLevel);
	}
	template <typename R = void> R OnLevelUp(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190A0BC))(this, world);
	}
	template <typename R = void> R OnDeath(ICommonClientWorld* world, Il2CppString* cause, int32_t allyCount, int32_t power) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190A2D4))(this, world, cause, allyCount, power);
	}
	template <typename R = void> R OnKill(ICommonClientWorld* world, Il2CppString* target, int32_t allyCount, int32_t power) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190A4CC))(this, world, target, allyCount, power);
	}
	template <typename R = void> R OnUse(ICommonClientWorld* world, Il2CppString* itemName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190A738))(this, world, itemName);
	}
	template <typename R = void> R OnLearnBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190A940))(this, world, blueprintName);
	}
	template <typename R = void> R OnCraftBlueprint(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190AA6C))(this, world, blueprintName);
	}
	template <typename R = void> R OnCraftSkip(ICommonClientWorld* world, Il2CppString* blueprintName, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190AC3C))(this, world, blueprintName, price);
	}
	template <typename R = void> R OnUpgradeVaultChest(ICommonClientWorld* world, Il2CppString* blueprintName, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190B0E8))(this, world, blueprintName, price);
	}
	template <typename R = void> R OnRepairSkip(ICommonClientWorld* world, Il2CppString* blueprintName, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190AD68))(this, world, blueprintName, price);
	}
	template <typename R = void> R OnCustomizationForCoins(ICommonClientWorld* world, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x190AE94))(this, world, price);
	}
	template <typename R = void> R OnUpgradeBuilding(ICommonClientWorld* world, Il2CppString* blueprintName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190AFBC))(this, world, blueprintName);
	}
	template <typename R = void> R OnChangeLocation(ICommonClientWorld* world, Il2CppString* locationName, bool isRunning) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x190B214))(this, world, locationName, isRunning);
	}
	template <typename R = void> R OnLeaveClan(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190C0D8))(this, world);
	}
	template <typename R = void> R OnRaidDestroyWall(ICommonClientWorld* world, Il2CppString* blueprint) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190B384))(this, world, blueprint);
	}
	template <typename R = void> R OnRaidUnlockChest(ICommonClientWorld* world, Il2CppString* blueprint, int32_t locationId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190B4AC))(this, world, blueprint, locationId);
	}
	template <typename R = void> R OnPortalItemInsert(ICommonClientWorld* world, Il2CppString* itemName, int32_t itemCount, int32_t locationId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190B68C))(this, world, itemName, itemCount, locationId);
	}
	template <typename R = void> R OnPvPUnlockChest(ICommonClientWorld* world, int32_t locationId) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x190B878))(this, world, locationId);
	}
	template <typename R = void> R OnNorthPvPUnlockChest(ICommonClientWorld* world, int32_t locationId, Il2CppString* rg) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, Il2CppString*))(Il2CppBase() + 0x190BBD0))(this, world, locationId, rg);
	}
	template <typename R = void> R OnTownUpgrade(ICommonClientWorld* world, Il2CppString* type, int32_t grade, int32_t districtLevel) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x190C53C))(this, world, type, grade, districtLevel);
	}
	template <typename R = void> R OnTownCraftsman(ICommonClientWorld* world, int32_t level, int32_t craftbasket) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1910504))(this, world, level, craftbasket);
	}
	template <typename R = void> R OnTownTaxCollector(ICommonClientWorld* world, int32_t level, int32_t collectedCoinsCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x190C678))(this, world, level, collectedCoinsCount);
	}
	template <typename R = void> R OnTownScout(ICommonClientWorld* world, Il2CppString* locationName, Il2CppString* eventName, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190C7B8))(this, world, locationName, eventName, price);
	}
	template <typename R = void> R OnTownDailyShop(ICommonClientWorld* world, Il2CppString* locationName, Il2CppString* itemName, int32_t price) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190C8DC))(this, world, locationName, itemName, price);
	}
	template <typename R = void> R OnTownTavernEvent(ICommonClientWorld* world, Il2CppString* locationName, Il2CppString* eventName, bool status) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190CA00))(this, world, locationName, eventName, status);
	}
	template <typename R = void> R OnGuildQuestStart(ICommonClientWorld* world, Il2CppString* questName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190CB24))(this, world, questName);
	}
	template <typename R = void> R OnSeasonQuest(ICommonClientWorld* world, Il2CppString* questName, int32_t seasonPoints) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190CE68))(this, world, questName, seasonPoints);
	}
	template <typename R = void> R OnSeasonCraft(ICommonClientWorld* world, Il2CppString* resource, int32_t seasonPoints) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, int32_t))(Il2CppBase() + 0x190DEC8))(this, world, resource, seasonPoints);
	}
	template <typename R = void> R OnGlobalEventQuest(ICommonClientWorld* world, Il2CppString* questName, Il2CppString* eventName, bool completed) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190DFF4))(this, world, questName, eventName, completed);
	}
	template <typename R = void> R OnGiftEvent(ICommonClientWorld* world, Il2CppString* questName, Il2CppString* actionName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190E134))(this, world, questName, actionName);
	}
	template <typename R = void> R OnPortalQuest(ICommonClientWorld* world, Il2CppString* questName, NotifyQuestPhase questPhase, int32_t playerCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, NotifyQuestPhase, int32_t))(Il2CppBase() + 0x190CCF8))(this, world, questName, questPhase, playerCount);
	}
	template <typename R = void> R OnGuildRating(ICommonClientWorld* world, int32_t place, int32_t points) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x1910634))(this, world, place, points);
	}
	template <typename R = void> R OnGiantVillageEvent(ICommonClientWorld* world, Il2CppString* actionName, Il2CppString* questName, bool status) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x190CF94))(this, world, actionName, questName, status);
	}
	template <typename R = void> R OnTownScoutEvent(ICommonClientWorld* world, Il2CppString* eventName, bool isPersonal, int32_t influenceCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool, int32_t))(Il2CppBase() + 0x190D1EC))(this, world, eventName, isPersonal, influenceCount);
	}
	template <typename R = void> R OnTutorStepEvent(ICommonClientWorld* world, Il2CppString* step, Il2CppString* questName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190D340))(this, world, step, questName);
	}
	template <typename R = void> R OnTownStatue(ICommonClientWorld* world, int32_t level) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x190D0B8))(this, world, level);
	}
	template <typename R = void> R OnTownBank(ICommonClientWorld* world, int32_t level) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1910930))(this, world, level);
	}
	template <typename R = void> R OnBossLootCollected(ICommonClientWorld* world, Il2CppString* blueprint) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190BD98))(this, world, blueprint);
	}
	template <typename R = void> R OnHelp(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x190C1F4))(this, world);
	}
	template <typename R = void> R OnActivateLockedTreasure(ICommonClientWorld* world, Il2CppString* targetName, Il2CppString* itemName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x190D498))(this, world, targetName, itemName);
	}
	template <typename R = void> R OnRuneOperation(ICommonClientWorld* world, AnalyticsCommands command, Il2CppString* blueprint, int32_t count) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, AnalyticsCommands, Il2CppString*, int32_t))(Il2CppBase() + 0x190E614))(this, world, command, blueprint, count);
	}
	template <typename R = void> R OnRuneInventoryUpgrade(ICommonClientWorld* world, int32_t silverPrice, int32_t grade) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t, int32_t))(Il2CppBase() + 0x190EA90))(this, world, silverPrice, grade);
	}
	template <typename R = void> R OnGuildPortal(ICommonClientWorld* world, Il2CppString* bossId, bool isStart) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, bool))(Il2CppBase() + 0x190EBC0))(this, world, bossId, isStart);
	}
	template <typename R = void> R OnGuildBossBattle(ICommonClientWorld* world, Il2CppString* bossId, Il2CppString* state, int32_t playerCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x190ED34))(this, world, bossId, state, playerCount);
	}
	template <typename R = void> R AFFOnTutorialComplete(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x191081C))(this, world);
	}
	template <typename R = void> R AFFOnCraftItem(ICommonClientWorld* world, Il2CppString* toBeCraftedBlueprint) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190FBB8))(this, world, toBeCraftedBlueprint);
	}
	template <typename R = Il2CppString*> R GetTag(ItemEntity* item, Il2CppArray<Il2CppString*>* tags) {
		return ((R (*)(ClientAnalyticsManager*, ItemEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1910A64))(this, item, tags);
	}
	template <typename R = void> R AFFOnDeath(ICommonClientWorld* world, Il2CppString* reason) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190F7EC))(this, world, reason);
	}
	template <typename R = void> R AFFOnKill(ICommonClientWorld* world, int32_t mobCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x190F920))(this, world, mobCount);
	}
	template <typename R = void> R AFFOnClanJoin(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1907244))(this, world);
	}
	template <typename R = void> R AFFOnDistrictLevel(ICommonClientWorld* world, int32_t districtLevel) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x19103BC))(this, world, districtLevel);
	}
	template <typename R = void> R AFFOnBuyPremium(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1910B00))(this, world);
	}
	template <typename R = void> R AFFOnTournamentStart(ICommonClientWorld* world, int32_t tournamentsCount) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1910C14))(this, world, tournamentsCount);
	}
	template <typename R = void> R AFFOnClassLearn(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1903FF8))(this, world, className);
	}
	template <typename R = void> R AFFOnClassDonate(ICommonClientWorld* world, Il2CppString* className) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1904258))(this, world, className);
	}
	template <typename R = void> R AFFOnAggressionUse(ICommonClientWorld* world, int32_t isOn) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, int32_t))(Il2CppBase() + 0x1907800))(this, world, isOn);
	}
	template <typename R = void> R AFFBunkerStart(ICommonClientWorld* world, Il2CppString* dungeonName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1910D7C))(this, world, dungeonName);
	}
	template <typename R = void> R AFFBunkerComplete(ICommonClientWorld* world, Il2CppString* dungeonName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x1910EAC))(this, world, dungeonName);
	}
	template <typename R = void> R AFFBossComplete(ICommonClientWorld* world, Il2CppString* bossName) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*, Il2CppString*))(Il2CppBase() + 0x190FA88))(this, world, bossName);
	}
	template <typename R = void> R AFFRaid(ICommonClientWorld* world) {
		return ((R (*)(ClientAnalyticsManager*, ICommonClientWorld*))(Il2CppBase() + 0x1904CA0))(this, world);
	}
	template <typename R = void> R SetupUnityAnalytics() {
		return ((R (*)(ClientAnalyticsManager*))(Il2CppBase() + 0x18FDD90))(this);
	}
	template <typename R = void> R CustomEvent(Il2CppString* customEventName) {
		return ((R (*)(ClientAnalyticsManager*, Il2CppString*))(Il2CppBase() + 0x1910FDC))(this, customEventName);
	}
	template <typename R = void> R CustomEvent_1(Il2CppString* customEventName, IDictionary2<Il2CppString*, Il2CppObject*>* eventData) {
		return ((R (*)(ClientAnalyticsManager*, Il2CppString*, IDictionary2<Il2CppString*, Il2CppObject*>*))(Il2CppBase() + 0x1910FE8))(this, customEventName, eventData);
	}

};

