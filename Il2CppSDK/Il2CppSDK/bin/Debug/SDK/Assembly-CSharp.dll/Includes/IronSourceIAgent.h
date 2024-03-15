#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceIAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceIAgent"));
	}


	template <typename R = void> R SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat adFormat) {
		return ((R (*)(IronSourceIAgent*, WaterfallConfiguration*, AdFormat))(Il2CppBase() + 0x0))(this, waterfallConfiguration, adFormat);
	}
	template <typename R = void> R onApplicationPause(bool pause) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, pause);
	}
	template <typename R = Il2CppString*> R getAdvertiserId() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R validateIntegration() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R shouldTrackNetworkState(bool track) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, track);
	}
	template <typename R = bool> R setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, dynamicUserId);
	}
	template <typename R = void> R setAdaptersDebug(bool enabled) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, enabled);
	}
	template <typename R = void> R setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = void> R setMetaData_1(Il2CppString* key, Il2CppArray<Il2CppString*>* values) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, key, values);
	}
	 Nullable1<int32_t>* getConversionValue() {
		return ((Nullable1<int32_t>* (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R setManualLoadRewardedVideo(bool isOn) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}
	template <typename R = void> R setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, networkKey, networkData);
	}
	template <typename R = void> R SetPauseGame(bool pause) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, pause);
	}
	template <typename R = void> R setUserId(Il2CppString* userId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, userId);
	}
	template <typename R = void> R init(Il2CppString* appKey) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, appKey);
	}
	template <typename R = void> R init_1(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, appKey, adUnits);
	}
	template <typename R = void> R initISDemandOnly(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, appKey, adUnits);
	}
	template <typename R = void> R loadRewardedVideo() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showRewardedVideo() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showRewardedVideo_1(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = bool> R isRewardedVideoAvailable() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = IronSourcePlacement*> R getPlacementInfo(Il2CppString* name) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((R (*)(IronSourceIAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, parameters);
	}
	template <typename R = void> R clearRewardedVideoServerParams() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = void> R loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = void> R loadInterstitial() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showInterstitial() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showInterstitial_1(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = bool> R isInterstitialReady() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = void> R loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = void> R showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename R = void> R showOfferwall() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R showOfferwall_1(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = bool> R isOfferwallAvailable() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R getOfferwallCredits() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition position) {
		return ((R (*)(IronSourceIAgent*, IronSourceBannerSize*, IronSourceBannerPosition))(Il2CppBase() + 0x0))(this, size, position);
	}
	template <typename R = void> R loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition position, Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, IronSourceBannerSize*, IronSourceBannerPosition, Il2CppString*))(Il2CppBase() + 0x0))(this, size, position, placementName);
	}
	template <typename R = void> R destroyBanner() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R displayBanner() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R hideBanner() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R isBannerPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename R = void> R setSegment(IronSourceSegment* segment) {
		return ((R (*)(IronSourceIAgent*, IronSourceSegment*))(Il2CppBase() + 0x0))(this, segment);
	}
	template <typename R = void> R setConsent(bool consent) {
		return ((R (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, consent);
	}
	template <typename R = void> R loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, consentViewType);
	}
	template <typename R = void> R showConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, consentViewType);
	}
	template <typename R = void> R setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((R (*)(IronSourceIAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, dataSource, impressionData);
	}
	template <typename R = void> R launchTestSuite() {
		return ((R (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}

};

