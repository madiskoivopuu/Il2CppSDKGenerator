#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UnsupportedPlatformAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UnsupportedPlatformAgent"));
	}


	template <typename R = void> R SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat* adFormat) {
		return ((R (*)(UnsupportedPlatformAgent*, WaterfallConfiguration*, AdFormat*))(Il2CppBase() + 0x153B91C))(this, waterfallConfiguration, adFormat);
	}
	template <typename R = void> R start() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B920))(this);
	}
	template <typename R = void> R onApplicationPause(bool pause) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B924))(this, pause);
	}
	template <typename R = Il2CppString*> R getAdvertiserId() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B928))(this);
	}
	template <typename R = void> R validateIntegration() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B96C))(this);
	}
	template <typename R = void> R shouldTrackNetworkState(bool track) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B970))(this, track);
	}
	template <typename R = bool> R setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B974))(this, dynamicUserId);
	}
	template <typename R = void> R setAdaptersDebug(bool enabled) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B97C))(this, enabled);
	}
	template <typename R = void> R setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x153B980))(this, key, value);
	}
	template <typename R = void> R setMetaData_1(Il2CppString* key, Il2CppArray<Il2CppString*>* values) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x153B984))(this, key, values);
	}
	 Nullable1int32_t>* getConversionValue() {
		return ((Nullable1int32_t>* (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B988))(this);
	}
	template <typename R = void> R setManualLoadRewardedVideo(bool isOn) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B990))(this, isOn);
	}
	template <typename R = void> R setNetworkData(Il2CppString* networkKey, Il2CppString* networkDataJson) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x153B994))(this, networkKey, networkDataJson);
	}
	template <typename R = void> R SetPauseGame(bool pause) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153B998))(this, pause);
	}
	template <typename R = void> R setUserId(Il2CppString* userId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B99C))(this, userId);
	}
	template <typename R = void> R init(Il2CppString* appKey) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9A0))(this, appKey);
	}
	template <typename R = void> R init_1(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x153B9A4))(this, appKey, adUnits);
	}
	template <typename R = void> R initISDemandOnly(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x153B9A8))(this, appKey, adUnits);
	}
	template <typename R = void> R loadRewardedVideo() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9AC))(this);
	}
	template <typename R = void> R showRewardedVideo() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9B0))(this);
	}
	template <typename R = void> R showRewardedVideo_1(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9B4))(this, placementName);
	}
	template <typename R = bool> R isRewardedVideoAvailable() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9B8))(this);
	}
	template <typename R = bool> R isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9C0))(this, placementName);
	}
	template <typename R = IronSourcePlacement*> R getPlacementInfo(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9C8))(this, placementName);
	}
	template <typename R = void> R setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x153B9D0))(this, parameters);
	}
	template <typename R = void> R clearRewardedVideoServerParams() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9D4))(this);
	}
	template <typename R = void> R showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9D8))(this, instanceId);
	}
	template <typename R = void> R loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9DC))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9E0))(this, instanceId);
	}
	template <typename R = void> R loadInterstitial() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9E8))(this);
	}
	template <typename R = void> R showInterstitial() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9EC))(this);
	}
	template <typename R = void> R showInterstitial_1(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9F0))(this, placementName);
	}
	template <typename R = bool> R isInterstitialReady() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153B9F4))(this);
	}
	template <typename R = bool> R isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153B9FC))(this, placementName);
	}
	template <typename R = void> R loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA04))(this, instanceId);
	}
	template <typename R = void> R showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA08))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA0C))(this, instanceId);
	}
	template <typename R = void> R showOfferwall() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA14))(this);
	}
	template <typename R = void> R showOfferwall_1(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA18))(this, placementName);
	}
	template <typename R = void> R getOfferwallCredits() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA1C))(this);
	}
	template <typename R = bool> R isOfferwallAvailable() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA20))(this);
	}
	template <typename R = void> R loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition* position) {
		return ((R (*)(UnsupportedPlatformAgent*, IronSourceBannerSize*, IronSourceBannerPosition*))(Il2CppBase() + 0x153BA28))(this, size, position);
	}
	template <typename R = void> R loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition* position, Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, IronSourceBannerSize*, IronSourceBannerPosition*, Il2CppString*))(Il2CppBase() + 0x153BA2C))(this, size, position, placementName);
	}
	template <typename R = void> R destroyBanner() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA30))(this);
	}
	template <typename R = void> R displayBanner() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA34))(this);
	}
	template <typename R = void> R hideBanner() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA38))(this);
	}
	template <typename R = bool> R isBannerPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA3C))(this, placementName);
	}
	template <typename R = void> R setSegment(IronSourceSegment* segment) {
		return ((R (*)(UnsupportedPlatformAgent*, IronSourceSegment*))(Il2CppBase() + 0x153BA44))(this, segment);
	}
	template <typename R = void> R setConsent(bool consent) {
		return ((R (*)(UnsupportedPlatformAgent*, bool))(Il2CppBase() + 0x153BA48))(this, consent);
	}
	template <typename R = void> R loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA4C))(this, consentViewType);
	}
	template <typename R = void> R showConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*))(Il2CppBase() + 0x153BA50))(this, consentViewType);
	}
	template <typename R = void> R setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((R (*)(UnsupportedPlatformAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x153BA54))(this, dataSource, impressionData);
	}
	template <typename R = void> R launchTestSuite() {
		return ((R (*)(UnsupportedPlatformAgent*))(Il2CppBase() + 0x153BA58))(this);
	}

};

