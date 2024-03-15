#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSource"));
	}

	template <typename R = IronSourceIAgent*> R& _platformAgent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IronSource*> static R& _instance() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& UNITY_PLUGIN_VERSION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = bool> static R& isUnsupportedPlatform() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = IronSource*> static R get_Agent() {
		return ((R (*)(void *))(Il2CppBase() + 0x1248EDC))(0);
	}
	template <typename R = Il2CppString*> static R pluginVersion() {
		return ((R (*)(void *))(Il2CppBase() + 0x1248FA0))(0);
	}
	template <typename R = Il2CppString*> static R unityVersion() {
		return ((R (*)(void *))(Il2CppBase() + 0x1249004))(0);
	}
	template <typename R = void> static R setUnsupportedPlatform() {
		return ((R (*)(void *))(Il2CppBase() + 0x124900C))(0);
	}
	template <typename R = void> R SetWaterfallConfiguration(WaterfallConfiguration* waterfallConfiguration, AdFormat adFormat) {
		return ((R (*)(IronSource*, WaterfallConfiguration*, AdFormat))(Il2CppBase() + 0x1249074))(this, waterfallConfiguration, adFormat);
	}
	template <typename R = void> R onApplicationPause(bool pause) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x1249138))(this, pause);
	}
	template <typename R = Il2CppString*> R getAdvertiserId() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x12491F8))(this);
	}
	template <typename R = void> R validateIntegration() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x12492A8))(this);
	}
	template <typename R = void> R shouldTrackNetworkState(bool track) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x1249358))(this, track);
	}
	template <typename R = bool> R setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249418))(this, dynamicUserId);
	}
	template <typename R = void> R setAdaptersDebug(bool enabled) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x12494D8))(this, enabled);
	}
	template <typename R = void> R setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1249598))(this, key, value);
	}
	template <typename R = void> R setMetaData_1(Il2CppString* key, Il2CppArray<Il2CppString*>* values) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1249660))(this, key, values);
	}
	 Nullable1<int32_t>* getConversionValue() {
		return ((Nullable1<int32_t>* (*)(IronSource*))(Il2CppBase() + 0x1249728))(this);
	}
	template <typename R = void> R setManualLoadRewardedVideo(bool isOn) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x12497D8))(this, isOn);
	}
	template <typename R = void> R setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1249898))(this, networkKey, networkData);
	}
	template <typename R = void> R SetPauseGame(bool pause) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x1249960))(this, pause);
	}
	template <typename R = void> R setUserId(Il2CppString* userId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249A20))(this, userId);
	}
	template <typename R = void> R init(Il2CppString* appKey) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249AE0))(this, appKey);
	}
	template <typename R = void> R init_1(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1249BA0))(this, appKey, adUnits);
	}
	template <typename R = void> R initISDemandOnly(Il2CppString* appKey, Il2CppArray<Il2CppString*>* adUnits) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x1249C68))(this, appKey, adUnits);
	}
	template <typename R = void> R loadRewardedVideo() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x1249D30))(this);
	}
	template <typename R = void> R showRewardedVideo() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x1249DE0))(this);
	}
	template <typename R = void> R showRewardedVideo_1(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249E90))(this, placementName);
	}
	template <typename R = IronSourcePlacement*> R getPlacementInfo(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249F50))(this, placementName);
	}
	template <typename R = bool> R isRewardedVideoAvailable() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124A010))(this);
	}
	template <typename R = bool> R isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A0C0))(this, placementName);
	}
	template <typename R = void> R setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((R (*)(IronSource*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x124A180))(this, parameters);
	}
	template <typename R = void> R clearRewardedVideoServerParams() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124A240))(this);
	}
	template <typename R = void> R showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A2F0))(this, instanceId);
	}
	template <typename R = void> R loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A3B0))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A470))(this, instanceId);
	}
	template <typename R = void> R loadInterstitial() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124A530))(this);
	}
	template <typename R = void> R showInterstitial() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124A5E0))(this);
	}
	template <typename R = void> R showInterstitial_1(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A690))(this, placementName);
	}
	template <typename R = bool> R isInterstitialReady() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124A750))(this);
	}
	template <typename R = bool> R isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A800))(this, placementName);
	}
	template <typename R = void> R loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A8C0))(this, instanceId);
	}
	template <typename R = void> R showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A980))(this, instanceId);
	}
	template <typename R = bool> R isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124AA40))(this, instanceId);
	}
	template <typename R = void> R showOfferwall() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124AB00))(this);
	}
	template <typename R = void> R showOfferwall_1(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124ABB0))(this, placementName);
	}
	template <typename R = void> R getOfferwallCredits() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124AC70))(this);
	}
	template <typename R = bool> R isOfferwallAvailable() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124AD20))(this);
	}
	template <typename R = void> R loadBanner(IronSourceBannerSize* size, IronSourceBannerPosition position) {
		return ((R (*)(IronSource*, IronSourceBannerSize*, IronSourceBannerPosition))(Il2CppBase() + 0x124ADD0))(this, size, position);
	}
	template <typename R = void> R loadBanner_1(IronSourceBannerSize* size, IronSourceBannerPosition position, Il2CppString* placementName) {
		return ((R (*)(IronSource*, IronSourceBannerSize*, IronSourceBannerPosition, Il2CppString*))(Il2CppBase() + 0x124AE98))(this, size, position, placementName);
	}
	template <typename R = void> R destroyBanner() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124AF70))(this);
	}
	template <typename R = void> R displayBanner() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124B020))(this);
	}
	template <typename R = void> R hideBanner() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124B0D0))(this);
	}
	template <typename R = bool> R isBannerPlacementCapped(Il2CppString* placementName) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B180))(this, placementName);
	}
	template <typename R = void> R setSegment(IronSourceSegment* segment) {
		return ((R (*)(IronSource*, IronSourceSegment*))(Il2CppBase() + 0x124B240))(this, segment);
	}
	template <typename R = void> R setConsent(bool consent) {
		return ((R (*)(IronSource*, bool))(Il2CppBase() + 0x124B300))(this, consent);
	}
	template <typename R = void> R loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B3C0))(this, consentViewType);
	}
	template <typename R = void> R showConsentViewWithType(Il2CppString* consentViewType) {
		return ((R (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B480))(this, consentViewType);
	}
	template <typename R = void> R setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((R (*)(IronSource*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x124B540))(this, dataSource, impressionData);
	}
	template <typename R = void> R launchTestSuite() {
		return ((R (*)(IronSource*))(Il2CppBase() + 0x124B608))(this);
	}

};

