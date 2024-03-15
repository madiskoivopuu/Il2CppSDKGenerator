#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AndroidAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AndroidAgent"));
	}

	template <typename R = uintptr_t> static R& _androidBridge() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& AndroidBridge() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = Il2CppString*> static R& REWARD_AMOUNT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& REWARD_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PLACEMENT_NAME() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WATERFALL_CONFIG_FLOOR() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WATERFALL_CONFIG_CEILING() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& WATERFALL_CONFIG_API() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = uintptr_t> R getBridge() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A507C))(this);
	}
	template <typename R = void> R initEventsDispatcher() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A5020))(this);
	}
	template <typename R = void> R SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat* adFormat) {
		return ((R (*)(AndroidAgent*, WaterfallConfiguration*, AdFormat*))(Il2CppBase() + 0x12A5350))(this, waterfallConfiguration, adFormat);
	}
	template <typename R = void> R onApplicationPause(bool pause) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5668))(this, pause);
	}
	template <typename R = Il2CppString*> R getAdvertiserId() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A5784))(this);
	}
	template <typename R = void> R validateIntegration() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A5894))(this);
	}
	template <typename R = void> R shouldTrackNetworkState(bool track) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5990))(this, track);
	}
	template <typename R = bool> R setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A5A9C))(this, dynamicUserId);
	}
	template <typename R = void> R setAdaptersDebug(bool enabled) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5B90))(this, enabled);
	}
	template <typename R = void> R setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A5C9C))(this, key, value);
	}
	template <typename R = void> R setMetaData_1(Il2CppString* key, Il2CppArray<Il2CppString*>* values) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12A5DB4))(this, key, values);
	}
	 Nullable1int32_t>* getConversionValue() {
		return ((Nullable1int32_t>* (*)(AndroidAgent*))(Il2CppBase() + 0x12A5ECC))(this);
	}
	template <typename R = void> R setManualLoadRewardedVideo(bool isOn) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5ED4))(this, isOn);
	}
	template <typename R = void> R setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A5FE0))(this, networkKey, networkData);
	}
	template <typename R = void> R SetPauseGame(bool pause) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A60F8))(this, pause);
	}
	template <typename R = void> R setUserId(Il2CppString* userId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A60FC))(this, userId);
	}
	template <typename R = void> R init(Il2CppString* appKey) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A61DC))(this, appKey);
	}
	template <typename R = void> R init_1(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12A64E8))(this, appKey, adUnits);
	}
	template <typename R = void> R initISDemandOnly(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x12A682C))(this, appKey, adUnits);
	}
	template <typename R = void> R loadRewardedVideo() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A6B70))(this);
	}
	template <typename R = void> R showRewardedVideo() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A6C6C))(this);
	}
	template <typename R = void> R showRewardedVideo_1(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A6D68))(this, placementName);
	}
	template <typename R = bool> R isRewardedVideoAvailable() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A6E48))(this);
	}
	template <typename R = bool> R isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A6F58))(this, placementName);
	}
	template <typename R = IronSourcePlacement*> R getPlacementInfo(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A704C))(this, placementName);
	}
	template <typename R = void> R setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((R (*)(AndroidAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12A72D8))(this, parameters);
	}
	template <typename R = void> R clearRewardedVideoServerParams() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A73C8))(this);
	}
	template <typename R = void> R showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A74C4))(this, instanceId);
	}
	template <typename R = void> R loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A75A4))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7684))(this, instanceId);
	}
	template <typename R = void> R loadInterstitial() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A7778))(this);
	}
	template <typename R = void> R showInterstitial() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A7874))(this);
	}
	template <typename R = void> R showInterstitial_1(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7970))(this, placementName);
	}
	template <typename R = bool> R isInterstitialReady() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A7A50))(this);
	}
	template <typename R = bool> R isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7B60))(this, placementName);
	}
	template <typename R = void> R loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7C54))(this, instanceId);
	}
	template <typename R = void> R showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7D34))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7E14))(this, instanceId);
	}
	template <typename R = void> R showOfferwall() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A7F08))(this);
	}
	template <typename R = void> R showOfferwall_1(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8004))(this, placementName);
	}
	template <typename R = void> R getOfferwallCredits() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A80E4))(this);
	}
	template <typename R = bool> R isOfferwallAvailable() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A81E0))(this);
	}
	template <typename R = void> R loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition* position) {
		return ((R (*)(AndroidAgent*, IronSourceBannerSize*, IronSourceBannerPosition*))(Il2CppBase() + 0x12A82F0))(this, size, position);
	}
	template <typename R = void> R loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition* position, Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, IronSourceBannerSize*, IronSourceBannerPosition*, Il2CppString*))(Il2CppBase() + 0x12A834C))(this, size, position, placementName);
	}
	template <typename R = void> R destroyBanner() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A85E0))(this);
	}
	template <typename R = void> R displayBanner() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A86DC))(this);
	}
	template <typename R = void> R hideBanner() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A87D8))(this);
	}
	template <typename R = bool> R isBannerPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A88D4))(this, placementName);
	}
	template <typename R = void> R setSegment(IronSourceSegment* segment) {
		return ((R (*)(AndroidAgent*, IronSourceSegment*))(Il2CppBase() + 0x12A89C8))(this, segment);
	}
	template <typename R = void> R setConsent(bool consent) {
		return ((R (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A8AC4))(this, consent);
	}
	template <typename R = void> R loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8BD0))(this, consentViewType);
	}
	template <typename R = void> R showConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8BD4))(this, consentViewType);
	}
	template <typename R = void> R setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((R (*)(AndroidAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12A8BD8))(this, dataSource, impressionData);
	}
	template <typename R = void> R launchTestSuite() {
		return ((R (*)(AndroidAgent*))(Il2CppBase() + 0x12A8D00))(this);
	}

};

