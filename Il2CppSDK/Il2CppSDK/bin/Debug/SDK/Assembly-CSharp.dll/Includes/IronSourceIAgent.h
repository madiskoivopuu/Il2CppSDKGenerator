#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceIAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceIAgent"));
	}


	template <typename T = void> T SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat* adFormat) {
		return ((T (*)(IronSourceIAgent*, WaterfallConfiguration*, AdFormat*))(Il2CppBase() + 0x0))(this, waterfallConfiguration, adFormat);
	}
	template <typename T = void> T onApplicationPause(bool pause) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, pause);
	}
	template <typename T = Il2CppString*> T getAdvertiserId() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T validateIntegration() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T shouldTrackNetworkState(bool track) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, track);
	}
	template <typename T = bool> T setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, dynamicUserId);
	}
	template <typename T = void> T setAdaptersDebug(bool enabled) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, enabled);
	}
	template <typename T = void> T setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T setMetaData_1(Il2CppString* key, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, key, values);
	}
	template <typename T = Nullable1int32_t>*> T getConversionValue() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T setManualLoadRewardedVideo(bool isOn) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, isOn);
	}
	template <typename T = void> T setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, networkKey, networkData);
	}
	template <typename T = void> T SetPauseGame(bool pause) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, pause);
	}
	template <typename T = void> T setUserId(Il2CppString* userId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, userId);
	}
	template <typename T = void> T init(Il2CppString* appKey) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, appKey);
	}
	template <typename T = void> T init_1(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, appKey, adUnits);
	}
	template <typename T = void> T initISDemandOnly(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, appKey, adUnits);
	}
	template <typename T = void> T loadRewardedVideo() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showRewardedVideo() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showRewardedVideo_1(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = bool> T isRewardedVideoAvailable() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = IronSourcePlacement*> T getPlacementInfo(Il2CppString* name) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((T (*)(IronSourceIAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, parameters);
	}
	template <typename T = void> T clearRewardedVideoServerParams() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = void> T loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = void> T loadInterstitial() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showInterstitial() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showInterstitial_1(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = bool> T isInterstitialReady() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = void> T loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = void> T showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, instanceId);
	}
	template <typename T = void> T showOfferwall() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T showOfferwall_1(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = bool> T isOfferwallAvailable() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T getOfferwallCredits() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition* position) {
		return ((T (*)(IronSourceIAgent*, IronSourceBannerSize*, IronSourceBannerPosition*))(Il2CppBase() + 0x0))(this, size, position);
	}
	template <typename T = void> T loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition* position, Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, IronSourceBannerSize*, IronSourceBannerPosition*, Il2CppString*))(Il2CppBase() + 0x0))(this, size, position, placementName);
	}
	template <typename T = void> T destroyBanner() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T displayBanner() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T hideBanner() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T isBannerPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, placementName);
	}
	template <typename T = void> T setSegment(IronSourceSegment* segment) {
		return ((T (*)(IronSourceIAgent*, IronSourceSegment*))(Il2CppBase() + 0x0))(this, segment);
	}
	template <typename T = void> T setConsent(bool consent) {
		return ((T (*)(IronSourceIAgent*, bool))(Il2CppBase() + 0x0))(this, consent);
	}
	template <typename T = void> T loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, consentViewType);
	}
	template <typename T = void> T showConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*))(Il2CppBase() + 0x0))(this, consentViewType);
	}
	template <typename T = void> T setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((T (*)(IronSourceIAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, dataSource, impressionData);
	}
	template <typename T = void> T launchTestSuite() {
		return ((T (*)(IronSourceIAgent*))(Il2CppBase() + 0x0))(this);
	}

};

