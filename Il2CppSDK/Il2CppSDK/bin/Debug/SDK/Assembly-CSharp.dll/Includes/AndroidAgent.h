#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AndroidAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AndroidAgent"));
	}

	template <typename T = uintptr_t> static T& _androidBridge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AndroidBridge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& REWARD_AMOUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& REWARD_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PLACEMENT_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WATERFALL_CONFIG_FLOOR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WATERFALL_CONFIG_CEILING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WATERFALL_CONFIG_API() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T getBridge() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A507C))(this);
	}
	template <typename T = void> T initEventsDispatcher() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A5020))(this);
	}
	template <typename T = void> T SetWaterfallConfiguration(uintptr_t waterfallConfiguration, uintptr_t adFormat) {
		return ((T (*)(AndroidAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12A5350))(this, waterfallConfiguration, adFormat);
	}
	template <typename T = void> T onApplicationPause(bool pause) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5668))(this, pause);
	}
	template <typename T = Il2CppString*> T getAdvertiserId() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A5784))(this);
	}
	template <typename T = void> T validateIntegration() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A5894))(this);
	}
	template <typename T = void> T shouldTrackNetworkState(bool track) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5990))(this, track);
	}
	template <typename T = bool> T setDynamicUserId(Il2CppString* dynamicUserId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A5A9C))(this, dynamicUserId);
	}
	template <typename T = void> T setAdaptersDebug(bool enabled) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5B90))(this, enabled);
	}
	template <typename T = void> T setMetaData(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A5C9C))(this, key, value);
	}
	template <typename T = void> T setMetaData_1(Il2CppString* key, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A5DB4))(this, key, values);
	}
	template <typename T = void*> T getConversionValue() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A5ECC))(this);
	}
	template <typename T = void> T setManualLoadRewardedVideo(bool isOn) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A5ED4))(this, isOn);
	}
	template <typename T = void> T setNetworkData(Il2CppString* networkKey, Il2CppString* networkData) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x12A5FE0))(this, networkKey, networkData);
	}
	template <typename T = void> T SetPauseGame(bool pause) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A60F8))(this, pause);
	}
	template <typename T = void> T setUserId(Il2CppString* userId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A60FC))(this, userId);
	}
	template <typename T = void> T init(Il2CppString* appKey) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A61DC))(this, appKey);
	}
	template <typename T = void> T init_1(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A64E8))(this, appKey, adUnits);
	}
	template <typename T = void> T initISDemandOnly(Il2CppString* appKey, Il2CppArray<uintptr_t>* adUnits) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x12A682C))(this, appKey, adUnits);
	}
	template <typename T = void> T loadRewardedVideo() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A6B70))(this);
	}
	template <typename T = void> T showRewardedVideo() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A6C6C))(this);
	}
	template <typename T = void> T showRewardedVideo_1(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A6D68))(this, placementName);
	}
	template <typename T = bool> T isRewardedVideoAvailable() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A6E48))(this);
	}
	template <typename T = bool> T isRewardedVideoPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A6F58))(this, placementName);
	}
	template <typename T = uintptr_t> T getPlacementInfo(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A704C))(this, placementName);
	}
	template <typename T = void> T setRewardedVideoServerParams(Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters) {
		return ((T (*)(AndroidAgent*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12A72D8))(this, parameters);
	}
	template <typename T = void> T clearRewardedVideoServerParams() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A73C8))(this);
	}
	template <typename T = void> T showISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A74C4))(this, instanceId);
	}
	template <typename T = void> T loadISDemandOnlyRewardedVideo(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A75A4))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyRewardedVideoAvailable(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7684))(this, instanceId);
	}
	template <typename T = void> T loadInterstitial() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A7778))(this);
	}
	template <typename T = void> T showInterstitial() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A7874))(this);
	}
	template <typename T = void> T showInterstitial_1(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7970))(this, placementName);
	}
	template <typename T = bool> T isInterstitialReady() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A7A50))(this);
	}
	template <typename T = bool> T isInterstitialPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7B60))(this, placementName);
	}
	template <typename T = void> T loadISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7C54))(this, instanceId);
	}
	template <typename T = void> T showISDemandOnlyInterstitial(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7D34))(this, instanceId);
	}
	template <typename T = bool> T isISDemandOnlyInterstitialReady(Il2CppString* instanceId) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A7E14))(this, instanceId);
	}
	template <typename T = void> T showOfferwall() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A7F08))(this);
	}
	template <typename T = void> T showOfferwall_1(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8004))(this, placementName);
	}
	template <typename T = void> T getOfferwallCredits() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A80E4))(this);
	}
	template <typename T = bool> T isOfferwallAvailable() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A81E0))(this);
	}
	template <typename T = void> T loadBanner(uintptr_t size, uintptr_t position) {
		return ((T (*)(AndroidAgent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x12A82F0))(this, size, position);
	}
	template <typename T = void> T loadBanner_1(uintptr_t size, uintptr_t position, Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x12A834C))(this, size, position, placementName);
	}
	template <typename T = void> T destroyBanner() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A85E0))(this);
	}
	template <typename T = void> T displayBanner() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A86DC))(this);
	}
	template <typename T = void> T hideBanner() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A87D8))(this);
	}
	template <typename T = bool> T isBannerPlacementCapped(Il2CppString* placementName) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A88D4))(this, placementName);
	}
	template <typename T = void> T setSegment(uintptr_t segment) {
		return ((T (*)(AndroidAgent*, uintptr_t))(Il2CppBase() + 0x12A89C8))(this, segment);
	}
	template <typename T = void> T setConsent(bool consent) {
		return ((T (*)(AndroidAgent*, bool))(Il2CppBase() + 0x12A8AC4))(this, consent);
	}
	template <typename T = void> T loadConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8BD0))(this, consentViewType);
	}
	template <typename T = void> T showConsentViewWithType(Il2CppString* consentViewType) {
		return ((T (*)(AndroidAgent*, Il2CppString*))(Il2CppBase() + 0x12A8BD4))(this, consentViewType);
	}
	template <typename T = void> T setAdRevenueData(Il2CppString* dataSource, Il2CppDictionary<Il2CppString*, Il2CppString*>* impressionData) {
		return ((T (*)(AndroidAgent*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x12A8BD8))(this, dataSource, impressionData);
	}
	template <typename T = void> T launchTestSuite() {
		return ((T (*)(AndroidAgent*))(Il2CppBase() + 0x12A8D00))(this);
	}

};

}
