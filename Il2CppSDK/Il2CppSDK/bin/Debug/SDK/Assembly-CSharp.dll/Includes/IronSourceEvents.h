#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEvents"));
	}

	template <typename T = uintptr_t> static T& onSdkInitializationCompletedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& onRewardedVideoAdShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& onRewardedVideoAdOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& onRewardedVideoAdClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& onRewardedVideoAdStartedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& onRewardedVideoAdEndedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = void*> static T& onRewardedVideoAdRewardedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = void*> static T& onRewardedVideoAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = void*> static T& onRewardedVideoAvailabilityChangedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = void*> static T& onRewardedVideoAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& onRewardedVideoAdReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = void*> static T& onRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = void*> static T& onRewardedVideoAdClosedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = void*> static T& onRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = void*> static T& onRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = void*> static T& onRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = void*> static T& onRewardedVideoAdClickedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = void*> static T& onRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& onInterstitialAdReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = void*> static T& onInterstitialAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& onInterstitialAdOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& onInterstitialAdClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& onInterstitialAdShowSucceededEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = void*> static T& onInterstitialAdShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& onInterstitialAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = void*> static T& onInterstitialAdReadyDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = void*> static T& onInterstitialAdOpenedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = void*> static T& onInterstitialAdClosedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = void*> static T& onInterstitialAdLoadFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = void*> static T& onInterstitialAdClickedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = void*> static T& onInterstitialAdShowFailedDemandOnlyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = void*> static T& onOfferwallAvailableEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& onOfferwallOpenedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = void*> static T& onOfferwallAdCreditedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = void*> static T& onGetOfferwallCreditsFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& onOfferwallClosedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = void*> static T& onOfferwallShowFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& onBannerAdLoadedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& onBannerAdLeftApplicationEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& onBannerAdScreenDismissedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& onBannerAdScreenPresentedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& onBannerAdClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = void*> static T& onBannerAdLoadFailedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = void*> static T& onSegmentReceivedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = void*> static T& onImpressionSuccessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = Il2CppString*> static T& ERROR_CODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ERROR_DESCRIPTION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& INSTANCE_ID_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PLACEMENT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& onImpressionDataReadyEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> T& initializationAndroid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rewardedVideoAndroid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& rewardedVideoAndroidManual() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& interstitialAndroid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& offerwallAndroid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& bannerAndroid() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& segmentAndroid() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& impressionDataAndroid() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> static T& _onConsentViewDidFailToLoadWithErrorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = void*> static T& _onConsentViewDidFailToShowWithErrorEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = void*> static T& _onConsentViewDidAcceptEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = void*> static T& _onConsentViewDidDismissEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = void*> static T& _onConsentViewDidLoadSuccessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = void*> static T& _onConsentViewDidShowSuccessEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}

	template <typename T = void> static T add_onSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1250CDC))(0, value);
	}
	template <typename T = void> static T remove_onSdkInitializationCompletedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1250D98))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1250E54))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1250F14))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1250FD4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251094))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251154))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251214))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdStartedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12512D4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdStartedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251394))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdEndedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251454))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdEndedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251514))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdRewardedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12515D4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdRewardedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251694))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdClickedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251754))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdClickedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251814))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAvailabilityChangedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12518D4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAvailabilityChangedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251994))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251A54))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251B14))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdReadyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251BD4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdReadyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1251C94))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdOpenedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251D54))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdOpenedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251E14))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdClosedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251ED4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdClosedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1251F94))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdLoadedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252054))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdLoadedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252114))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdRewardedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12521D4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdRewardedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252294))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdShowFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252354))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdShowFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252414))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdClickedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12524D4))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdClickedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252594))(0, value);
	}
	template <typename T = void> static T add_onRewardedVideoAdLoadFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252654))(0, value);
	}
	template <typename T = void> static T remove_onRewardedVideoAdLoadFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252714))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdReadyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12527D4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdReadyEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252894))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252954))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252A14))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252AD4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252B94))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252C54))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252D14))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdShowSucceededEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252DD4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdShowSucceededEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1252E94))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1252F54))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253014))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdClickedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12530D4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdClickedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1253194))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdReadyDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253254))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdReadyDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253314))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdOpenedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12533D4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdOpenedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253494))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdClosedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253554))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdClosedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253614))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdLoadFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12536D4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdLoadFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253794))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdClickedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253854))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdClickedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253914))(0, value);
	}
	template <typename T = void> static T add_onInterstitialAdShowFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12539D4))(0, value);
	}
	template <typename T = void> static T remove_onInterstitialAdShowFailedDemandOnlyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253A94))(0, value);
	}
	template <typename T = void> static T add_onOfferwallAvailableEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253B54))(0, value);
	}
	template <typename T = void> static T remove_onOfferwallAvailableEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253C14))(0, value);
	}
	template <typename T = void> static T add_onOfferwallOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1253CD4))(0, value);
	}
	template <typename T = void> static T remove_onOfferwallOpenedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1253D94))(0, value);
	}
	template <typename T = void> static T add_onOfferwallAdCreditedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253E54))(0, value);
	}
	template <typename T = void> static T remove_onOfferwallAdCreditedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253F14))(0, value);
	}
	template <typename T = void> static T add_onGetOfferwallCreditsFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1253FD4))(0, value);
	}
	template <typename T = void> static T remove_onGetOfferwallCreditsFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254094))(0, value);
	}
	template <typename T = void> static T add_onOfferwallClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254154))(0, value);
	}
	template <typename T = void> static T remove_onOfferwallClosedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254214))(0, value);
	}
	template <typename T = void> static T add_onOfferwallShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12542D4))(0, value);
	}
	template <typename T = void> static T remove_onOfferwallShowFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254394))(0, value);
	}
	template <typename T = void> static T add_onBannerAdLoadedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254454))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdLoadedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254514))(0, value);
	}
	template <typename T = void> static T add_onBannerAdLeftApplicationEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12545D4))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdLeftApplicationEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254694))(0, value);
	}
	template <typename T = void> static T add_onBannerAdScreenDismissedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254754))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdScreenDismissedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254814))(0, value);
	}
	template <typename T = void> static T add_onBannerAdScreenPresentedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x12548D4))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdScreenPresentedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254994))(0, value);
	}
	template <typename T = void> static T add_onBannerAdClickedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254A54))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdClickedEvent(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1254B14))(0, value);
	}
	template <typename T = void> static T add_onBannerAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254BD4))(0, value);
	}
	template <typename T = void> static T remove_onBannerAdLoadFailedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254C94))(0, value);
	}
	template <typename T = void> static T add_onSegmentReceivedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254D54))(0, value);
	}
	template <typename T = void> static T remove_onSegmentReceivedEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254E14))(0, value);
	}
	template <typename T = void> static T add_onImpressionSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254ED4))(0, value);
	}
	template <typename T = void> static T remove_onImpressionSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1254F94))(0, value);
	}
	template <typename T = void> static T add_onImpressionDataReadyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1255054))(0, value);
	}
	template <typename T = void> static T remove_onImpressionDataReadyEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1255114))(0, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x12551D4))(this);
	}
	template <typename T = void> T registerInitializationEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x125548C))(this);
	}
	template <typename T = void> T registerBannerEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x1257F54))(this);
	}
	template <typename T = void> T registerInterstitialEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x12569B8))(this);
	}
	template <typename T = void> T registerInterstitialDemandOnlyEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x125716C))(this);
	}
	template <typename T = void> T registerOfferwallEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x125784C))(this);
	}
	template <typename T = void> T registerSegmentEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x1258898))(this);
	}
	template <typename T = void> T registerImpressionDataEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x12585FC))(this);
	}
	template <typename T = void> T registerRewardedVideoDemandOnlyEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x12561B0))(this);
	}
	template <typename T = void> T registerRewardedVideoEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x12555F8))(this);
	}
	template <typename T = void> T registerRewardedVideoManualEvents() {
		return ((T (*)(IronSourceEvents*))(Il2CppBase() + 0x1255F10))(this);
	}
	template <typename T = void> static T add__onConsentViewDidFailToLoadWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1258A1C))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidFailToLoadWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1258ADC))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidFailToLoadWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1258B9C))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidFailToLoadWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1258C30))(0, value);
	}
	template <typename T = void> T onConsentViewDidFailToLoadWithError(Il2CppString* args) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1258CC4))(this, args);
	}
	template <typename T = void> static T add__onConsentViewDidFailToShowWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12590E0))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidFailToShowWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12591A0))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidFailToShowWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259260))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidFailToShowWithErrorEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12592F4))(0, value);
	}
	template <typename T = void> T onConsentViewDidFailToShowWithError(Il2CppString* args) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259388))(this, args);
	}
	template <typename T = void> static T add__onConsentViewDidAcceptEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12594E8))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidAcceptEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12595A8))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidAcceptEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259668))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidAcceptEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12596FC))(0, value);
	}
	template <typename T = void> T onConsentViewDidAccept(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259790))(this, consentViewType);
	}
	template <typename T = void> static T add__onConsentViewDidDismissEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x125980C))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidDismissEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x12598CC))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidDismissEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x125998C))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidDismissEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259A20))(0, value);
	}
	template <typename T = void> T onConsentViewDidDismiss(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259AB4))(this, consentViewType);
	}
	template <typename T = void> static T add__onConsentViewDidLoadSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259B30))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidLoadSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259BF0))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidLoadSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259CB0))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidLoadSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259D44))(0, value);
	}
	template <typename T = void> T onConsentViewDidLoadSuccess(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259DD8))(this, consentViewType);
	}
	template <typename T = void> static T add__onConsentViewDidShowSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259E54))(0, value);
	}
	template <typename T = void> static T remove__onConsentViewDidShowSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259F14))(0, value);
	}
	template <typename T = void> static T add_onConsentViewDidShowSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1259FD4))(0, value);
	}
	template <typename T = void> static T remove_onConsentViewDidShowSuccessEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x125A068))(0, value);
	}
	template <typename T = void> T onConsentViewDidShowSuccess(Il2CppString* consentViewType) {
		return ((T (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x125A0FC))(this, consentViewType);
	}
	template <typename T = uintptr_t> T getErrorFromErrorObject(uintptr_t descriptionObject) {
		return ((T (*)(IronSourceEvents*, uintptr_t))(Il2CppBase() + 0x1258E24))(this, descriptionObject);
	}
	template <typename T = uintptr_t> T getPlacementFromObject(uintptr_t placementObject) {
		return ((T (*)(IronSourceEvents*, uintptr_t))(Il2CppBase() + 0x125A178))(this, placementObject);
	}
	template <typename T = void> static T InvokeEvent(void* evt, Il2CppString* args) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x125A3D0))(0, evt, args);
	}

};

}
