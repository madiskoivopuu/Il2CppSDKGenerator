#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnsupportedPlatformAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnsupportedPlatformAgent"));
	}


	template <typename T = void> T SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat* adFormat) {
		return ((T (*)(UnsupportedPlatformAgent*, WaterfallConfiguration*, AdFormat*))(Il2CppBase() + 0x153B91C))(this, waterfallConfiguration, adFormat);
	}
	template <typename T = void> T start() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B920))(this);
	}
	template <typename T = void> T onApplicationPause(bool pause) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B924))(this, pause);
	}
	template <typename T = Il2CppString*> T getAdvertiserId() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B928))(this);
	}
	template <typename T = void> T validateIntegration() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B96C))(this);
	}
	template <typename T = void> T shouldTrackNetworkState(bool track) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B970))(this, track);
	}
	template <typename T = bool> T setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B974))(this, dynamicUserId);
	}
	template <typename T = void> T setAdaptersDebug(bool enabled) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B97C))(this, enabled);
	}
	template <typename T = void> T setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x153B980))(this, key, value);
	}
	template <typename T = void> T setMetaData_1(Il2CppString* key, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x153B984))(this, key, values);
	}
	template <typename T = Nullable1int32_t>*> T getConversionValue() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B988))(this);
	}
	template <typename T = void> T setManualLoadRewardedVideo(bool isOn) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B990))(this, isOn);
	}
	template <typename T = void> T setNetworkData(Il2CppString* networkKey, Il2CppString* networkDataJson) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x153B994))(this, networkKey, networkDataJson);
	}
	template <typename T = void> T SetPauseGame(bool pause) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B998))(this, pause);
	}
	template <typename T = void> T setUserId(Il2CppString* userId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B99C))(this, userId);
	}
	template <typename T = void> T init(Il2CppString* appKey) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9A0))(this, appKey);
	}
	template <typename T = void> T init_1(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x153B9A4))(this, appKey, adUnits);
	}
	template <typename T = void> T initISDemandOnly(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x153B9A8))(this, appKey, adUnits);
	}
	template <typename T = void> T loadRewardedVideo() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9AC))(this);
	}
	template <typename T = void> T showRewardedVideo() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9B0))(this);
	}
	template <typename T = void> T showRewardedVideo_1(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9B4))(this, placementName);
	}
	template <typename T = bool> T isRewardedVideoAvailable() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9B8))(this);
	}
	template <typename T = bool> T isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9C0))(this, placementName);
	}
	template <typename T = IronSourcePlacement*> T getPlacementInfo(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9C8))(this, placementName);
	}
	template <typename T = void> T setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x153B9D0))(this, parameters);
	}
	template <typename T = void> T clearRewardedVideoServerParams() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9D4))(this);
	}
	template <typename T = void> T showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9D8))(this, instanceId);
	}
	template <typename T = void> T loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9DC))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9E0))(this, instanceId);
	}
	template <typename T = void> T loadInterstitial() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9E8))(this);
	}
	template <typename T = void> T showInterstitial() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9EC))(this);
	}
	template <typename T = void> T showInterstitial_1(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9F0))(this, placementName);
	}
	template <typename T = bool> T isInterstitialReady() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9F4))(this);
	}
	template <typename T = bool> T isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9FC))(this, placementName);
	}
	template <typename T = void> T loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA04))(this, instanceId);
	}
	template <typename T = void> T showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA08))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA0C))(this, instanceId);
	}
	template <typename T = void> T showOfferwall() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA14))(this);
	}
	template <typename T = void> T showOfferwall_1(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA18))(this, placementName);
	}
	template <typename T = void> T getOfferwallCredits() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA1C))(this);
	}
	template <typename T = bool> T isOfferwallAvailable() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA20))(this);
	}
	template <typename T = void> T loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition* position) {
		return ((T (*)(UnsupportedPlatformAgent*, IronSourceBannerSize*, IronSourceBannerPosition*))(Il2CppBase() + 0x153BA28))(this, size, position);
	}
	template <typename T = void> T loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition* position, Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, IronSourceBannerSize*, IronSourceBannerPosition*, Il2CppString*))(Il2CppBase() + 0x153BA2C))(this, size, position, placementName);
	}
	template <typename T = void> T destroyBanner() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA30))(this);
	}
	template <typename T = void> T displayBanner() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA34))(this);
	}
	template <typename T = void> T hideBanner() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA38))(this);
	}
	template <typename T = bool> T isBannerPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA3C))(this, placementName);
	}
	template <typename T = void> T setSegment(IronSourceSegment* segment) {
		return ((T (*)(UnsupportedPlatformAgent*, IronSourceSegment*))(Il2CppBase() + 0x153BA44))(this, segment);
	}
	template <typename T = void> T setConsent(bool consent) {
		return ((T (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153BA48))(this, consent);
	}
	template <typename T = void> T loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA4C))(this, consentViewType);
	}
	template <typename T = void> T showConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA50))(this, consentViewType);
	}
	template <typename T = void> T setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((T (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x153BA54))(this, dataSource, impressionData);
	}
	template <typename T = void> T launchTestSuite() {
		return ((T (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA58))(this);
	}

};

