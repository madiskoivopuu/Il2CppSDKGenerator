#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSource"));
	}

	template <typename T = uintptr_t> T& _platformAgent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UNITY_PLUGIN_VERSION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& isUnsupportedPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T get_Agent() {
		return ((T (*)(void *))(Il2CppBase() + 0x1248EDC))(0);
	}
	template <typename T = Il2CppString*> static T pluginVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x1248FA0))(0);
	}
	template <typename T = Il2CppString*> static T unityVersion() {
		return ((T (*)(void *))(Il2CppBase() + 0x1249004))(0);
	}
	template <typename T = void> static T setUnsupportedPlatform() {
		return ((T (*)(void *))(Il2CppBase() + 0x124900C))(0);
	}
	template <typename T = void> T SetWaterfallConfiguration(uintptr_t waterfallConfiguration, uintptr_t adFormat) {
		return ((T (*)(IronSource*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1249074))(this, waterfallConfiguration, adFormat);
	}
	template <typename T = void> T onApplicationPause(bool pause) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x1249138))(this, pause);
	}
	template <typename T = Il2CppString*> T getAdvertiserId() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x12491F8))(this);
	}
	template <typename T = void> T validateIntegration() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x12492A8))(this);
	}
	template <typename T = void> T shouldTrackNetworkState(bool track) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x1249358))(this, track);
	}
	template <typename T = bool> T setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249418))(this, dynamicUserId);
	}
	template <typename T = void> T setAdaptersDebug(bool enabled) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x12494D8))(this, enabled);
	}
	template <typename T = void> T setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1249598))(this, key, value);
	}
	template <typename T = void> T setMetaData_1(Il2CppString* key, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1249660))(this, key, values);
	}
	template <typename T = void*> T getConversionValue() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x1249728))(this);
	}
	template <typename T = void> T setManualLoadRewardedVideo(bool isOn) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x12497D8))(this, isOn);
	}
	template <typename T = void> T setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1249898))(this, networkKey, networkData);
	}
	template <typename T = void> T SetPauseGame(bool pause) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x1249960))(this, pause);
	}
	template <typename T = void> T setUserId(Il2CppString* userId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249A20))(this, userId);
	}
	template <typename T = void> T init(Il2CppString* appKey) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249AE0))(this, appKey);
	}
	template <typename T = void> T init_1(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1249BA0))(this, appKey, adUnits);
	}
	template <typename T = void> T initISDemandOnly(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1249C68))(this, appKey, adUnits);
	}
	template <typename T = void> T loadRewardedVideo() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x1249D30))(this);
	}
	template <typename T = void> T showRewardedVideo() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x1249DE0))(this);
	}
	template <typename T = void> T showRewardedVideo_1(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249E90))(this, placementName);
	}
	template <typename T = uintptr_t> T getPlacementInfo(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x1249F50))(this, placementName);
	}
	template <typename T = bool> T isRewardedVideoAvailable() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124A010))(this);
	}
	template <typename T = bool> T isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A0C0))(this, placementName);
	}
	template <typename T = void> T setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((T (*)(IronSource*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x124A180))(this, parameters);
	}
	template <typename T = void> T clearRewardedVideoServerParams() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124A240))(this);
	}
	template <typename T = void> T showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A2F0))(this, instanceId);
	}
	template <typename T = void> T loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A3B0))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A470))(this, instanceId);
	}
	template <typename T = void> T loadInterstitial() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124A530))(this);
	}
	template <typename T = void> T showInterstitial() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124A5E0))(this);
	}
	template <typename T = void> T showInterstitial_1(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A690))(this, placementName);
	}
	template <typename T = bool> T isInterstitialReady() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124A750))(this);
	}
	template <typename T = bool> T isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A800))(this, placementName);
	}
	template <typename T = void> T loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A8C0))(this, instanceId);
	}
	template <typename T = void> T showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124A980))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124AA40))(this, instanceId);
	}
	template <typename T = void> T showOfferwall() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124AB00))(this);
	}
	template <typename T = void> T showOfferwall_1(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124ABB0))(this, placementName);
	}
	template <typename T = void> T getOfferwallCredits() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124AC70))(this);
	}
	template <typename T = bool> T isOfferwallAvailable() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124AD20))(this);
	}
	template <typename T = void> T loadBanner(uintptr_t size, uintptr_t position) {
		return ((T (*)(IronSource*, uintptr_t, uintptr_t))(Il2CppBase() + 0x124ADD0))(this, size, position);
	}
	template <typename T = void> T loadBanner_1(uintptr_t size, uintptr_t position, Il2CppString* placementName) {
		return ((T (*)(IronSource*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x124AE98))(this, size, position, placementName);
	}
	template <typename T = void> T destroyBanner() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124AF70))(this);
	}
	template <typename T = void> T displayBanner() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124B020))(this);
	}
	template <typename T = void> T hideBanner() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124B0D0))(this);
	}
	template <typename T = bool> T isBannerPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B180))(this, placementName);
	}
	template <typename T = void> T setSegment(uintptr_t segment) {
		return ((T (*)(IronSource*, uintptr_t))(Il2CppBase() + 0x124B240))(this, segment);
	}
	template <typename T = void> T setConsent(bool consent) {
		return ((T (*)(IronSource*, bool))(Il2CppBase() + 0x124B300))(this, consent);
	}
	template <typename T = void> T loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B3C0))(this, consentViewType);
	}
	template <typename T = void> T showConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(IronSource*, Il2CppString*))(Il2CppBase() + 0x124B480))(this, consentViewType);
	}
	template <typename T = void> T setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((T (*)(IronSource*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x124B540))(this, dataSource, impressionData);
	}
	template <typename T = void> T launchTestSuite() {
		return ((T (*)(IronSource*))(Il2CppBase() + 0x124B608))(this);
	}

};

}
