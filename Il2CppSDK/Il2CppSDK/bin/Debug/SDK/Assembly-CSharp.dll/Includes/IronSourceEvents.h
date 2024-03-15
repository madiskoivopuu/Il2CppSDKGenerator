#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEvents"));
	}

	template <typename R = uintptr_t> static R& onSdkInitializationCompletedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1<IronSourceError*>*& onRewardedVideoAdShowFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename R = uintptr_t> static R& onRewardedVideoAdOpenedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename R = uintptr_t> static R& onRewardedVideoAdClosedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename R = uintptr_t> static R& onRewardedVideoAdStartedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename R = uintptr_t> static R& onRewardedVideoAdEndedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 static Action1<IronSourcePlacement*>*& onRewardedVideoAdRewardedEvent() {
		return *(Action1<IronSourcePlacement*>**)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	 static Action1<IronSourcePlacement*>*& onRewardedVideoAdClickedEvent() {
		return *(Action1<IronSourcePlacement*>**)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	 static Action1<bool>*& onRewardedVideoAvailabilityChangedEvent() {
		return *(Action1<bool>**)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	 static Action1<IronSourceError*>*& onRewardedVideoAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename R = uintptr_t> static R& onRewardedVideoAdReadyEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	 static Action1<Il2CppString*>*& onRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	 static Action1<Il2CppString*>*& onRewardedVideoAdClosedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	 static Action1<Il2CppString*>*& onRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	 static Action1<Il2CppString*>*& onRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& onRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	 static Action1<Il2CppString*>*& onRewardedVideoAdClickedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& onRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename R = uintptr_t> static R& onInterstitialAdReadyEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	 static Action1<IronSourceError*>*& onInterstitialAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename R = uintptr_t> static R& onInterstitialAdOpenedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename R = uintptr_t> static R& onInterstitialAdClosedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename R = uintptr_t> static R& onInterstitialAdShowSucceededEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	 static Action1<IronSourceError*>*& onInterstitialAdShowFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename R = uintptr_t> static R& onInterstitialAdClickedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	 static Action1<Il2CppString*>*& onInterstitialAdReadyDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	 static Action1<Il2CppString*>*& onInterstitialAdOpenedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	 static Action1<Il2CppString*>*& onInterstitialAdClosedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& onInterstitialAdLoadFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	 static Action1<Il2CppString*>*& onInterstitialAdClickedDemandOnlyEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& onInterstitialAdShowFailedDemandOnlyEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	 static Action1<bool>*& onOfferwallAvailableEvent() {
		return *(Action1<bool>**)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename R = uintptr_t> static R& onOfferwallOpenedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	 static Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*& onOfferwallAdCreditedEvent() {
		return *(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>**)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	 static Action1<IronSourceError*>*& onGetOfferwallCreditsFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename R = uintptr_t> static R& onOfferwallClosedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	 static Action1<IronSourceError*>*& onOfferwallShowFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename R = uintptr_t> static R& onBannerAdLoadedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename R = uintptr_t> static R& onBannerAdLeftApplicationEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename R = uintptr_t> static R& onBannerAdScreenDismissedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename R = uintptr_t> static R& onBannerAdScreenPresentedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename R = uintptr_t> static R& onBannerAdClickedEvent() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	 static Action1<IronSourceError*>*& onBannerAdLoadFailedEvent() {
		return *(Action1<IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	 static Action1<Il2CppString*>*& onSegmentReceivedEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	 static Action1<IronSourceImpressionData*>*& onImpressionSuccessEvent() {
		return *(Action1<IronSourceImpressionData*>**)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename R = Il2CppString*> static R& ERROR_CODE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ERROR_DESCRIPTION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& INSTANCE_ID_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PLACEMENT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Action1<IronSourceImpressionData*>*& onImpressionDataReadyEvent() {
		return *(Action1<IronSourceImpressionData*>**)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename R = IUnityInitialization*> R& initializationAndroid() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = IUnityRewardedVideo*> R& rewardedVideoAndroid() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = IUnityRewardedVideoManual*> R& rewardedVideoAndroidManual() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = IUnityInterstitial*> R& interstitialAndroid() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = IUnityOfferwall*> R& offerwallAndroid() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = IUnityBanner*> R& bannerAndroid() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = IUnitySegment*> R& segmentAndroid() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = IUnityImpressionData*> R& impressionDataAndroid() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& _onConsentViewDidFailToLoadWithErrorEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	 static Action2<Il2CppString*, IronSourceError*>*& _onConsentViewDidFailToShowWithErrorEvent() {
		return *(Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	 static Action1<Il2CppString*>*& _onConsentViewDidAcceptEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	 static Action1<Il2CppString*>*& _onConsentViewDidDismissEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	 static Action1<Il2CppString*>*& _onConsentViewDidLoadSuccessEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	 static Action1<Il2CppString*>*& _onConsentViewDidShowSuccessEvent() {
		return *(Action1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x198);
	}

	template <typename R = void> static R add_onSdkInitializationCompletedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1250CDC))(0, value);
	}
	template <typename R = void> static R remove_onSdkInitializationCompletedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1250D98))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1250E54))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1250F14))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1250FD4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251094))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251154))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251214))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdStartedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12512D4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdStartedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251394))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdEndedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251454))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdEndedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251514))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdRewardedEvent(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(void *, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x12515D4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdRewardedEvent(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(void *, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x1251694))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdClickedEvent(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(void *, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x1251754))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdClickedEvent(Action1<IronSourcePlacement*>* value) {
		return ((R (*)(void *, Action1<IronSourcePlacement*>*))(Il2CppBase() + 0x1251814))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAvailabilityChangedEvent(Action1<bool>* value) {
		return ((R (*)(void *, Action1<bool>*))(Il2CppBase() + 0x12518D4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAvailabilityChangedEvent(Action1<bool>* value) {
		return ((R (*)(void *, Action1<bool>*))(Il2CppBase() + 0x1251994))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1251A54))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1251B14))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdReadyEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251BD4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdReadyEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1251C94))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1251D54))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1251E14))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1251ED4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1251F94))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1252054))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdLoadedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1252114))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12521D4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdRewardedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1252294))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1252354))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1252414))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12524D4))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1252594))(0, value);
	}
	template <typename R = void> static R add_onRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1252654))(0, value);
	}
	template <typename R = void> static R remove_onRewardedVideoAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1252714))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdReadyEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12527D4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdReadyEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252894))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1252954))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1252A14))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252AD4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252B94))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252C54))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252D14))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdShowSucceededEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252DD4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdShowSucceededEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1252E94))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1252F54))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1253014))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdClickedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12530D4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdClickedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1253194))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdReadyDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253254))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdReadyDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253314))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12533D4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdOpenedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253494))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253554))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdClosedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253614))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x12536D4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdLoadFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1253794))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253854))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdClickedDemandOnlyEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1253914))(0, value);
	}
	template <typename R = void> static R add_onInterstitialAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x12539D4))(0, value);
	}
	template <typename R = void> static R remove_onInterstitialAdShowFailedDemandOnlyEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1253A94))(0, value);
	}
	template <typename R = void> static R add_onOfferwallAvailableEvent(Action1<bool>* value) {
		return ((R (*)(void *, Action1<bool>*))(Il2CppBase() + 0x1253B54))(0, value);
	}
	template <typename R = void> static R remove_onOfferwallAvailableEvent(Action1<bool>* value) {
		return ((R (*)(void *, Action1<bool>*))(Il2CppBase() + 0x1253C14))(0, value);
	}
	template <typename R = void> static R add_onOfferwallOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1253CD4))(0, value);
	}
	template <typename R = void> static R remove_onOfferwallOpenedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1253D94))(0, value);
	}
	template <typename R = void> static R add_onOfferwallAdCreditedEvent(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(void *, Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x1253E54))(0, value);
	}
	template <typename R = void> static R remove_onOfferwallAdCreditedEvent(Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>* value) {
		return ((R (*)(void *, Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*))(Il2CppBase() + 0x1253F14))(0, value);
	}
	template <typename R = void> static R add_onGetOfferwallCreditsFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1253FD4))(0, value);
	}
	template <typename R = void> static R remove_onGetOfferwallCreditsFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1254094))(0, value);
	}
	template <typename R = void> static R add_onOfferwallClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254154))(0, value);
	}
	template <typename R = void> static R remove_onOfferwallClosedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254214))(0, value);
	}
	template <typename R = void> static R add_onOfferwallShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x12542D4))(0, value);
	}
	template <typename R = void> static R remove_onOfferwallShowFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1254394))(0, value);
	}
	template <typename R = void> static R add_onBannerAdLoadedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254454))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdLoadedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254514))(0, value);
	}
	template <typename R = void> static R add_onBannerAdLeftApplicationEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12545D4))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdLeftApplicationEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254694))(0, value);
	}
	template <typename R = void> static R add_onBannerAdScreenDismissedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254754))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdScreenDismissedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254814))(0, value);
	}
	template <typename R = void> static R add_onBannerAdScreenPresentedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x12548D4))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdScreenPresentedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254994))(0, value);
	}
	template <typename R = void> static R add_onBannerAdClickedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254A54))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdClickedEvent(uintptr_t value) {
		return ((R (*)(void *, uintptr_t))(Il2CppBase() + 0x1254B14))(0, value);
	}
	template <typename R = void> static R add_onBannerAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1254BD4))(0, value);
	}
	template <typename R = void> static R remove_onBannerAdLoadFailedEvent(Action1<IronSourceError*>* value) {
		return ((R (*)(void *, Action1<IronSourceError*>*))(Il2CppBase() + 0x1254C94))(0, value);
	}
	template <typename R = void> static R add_onSegmentReceivedEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1254D54))(0, value);
	}
	template <typename R = void> static R remove_onSegmentReceivedEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1254E14))(0, value);
	}
	template <typename R = void> static R add_onImpressionSuccessEvent(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(void *, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x1254ED4))(0, value);
	}
	template <typename R = void> static R remove_onImpressionSuccessEvent(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(void *, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x1254F94))(0, value);
	}
	template <typename R = void> static R add_onImpressionDataReadyEvent(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(void *, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x1255054))(0, value);
	}
	template <typename R = void> static R remove_onImpressionDataReadyEvent(Action1<IronSourceImpressionData*>* value) {
		return ((R (*)(void *, Action1<IronSourceImpressionData*>*))(Il2CppBase() + 0x1255114))(0, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x12551D4))(this);
	}
	template <typename R = void> R registerInitializationEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x125548C))(this);
	}
	template <typename R = void> R registerBannerEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x1257F54))(this);
	}
	template <typename R = void> R registerInterstitialEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x12569B8))(this);
	}
	template <typename R = void> R registerInterstitialDemandOnlyEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x125716C))(this);
	}
	template <typename R = void> R registerOfferwallEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x125784C))(this);
	}
	template <typename R = void> R registerSegmentEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x1258898))(this);
	}
	template <typename R = void> R registerImpressionDataEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x12585FC))(this);
	}
	template <typename R = void> R registerRewardedVideoDemandOnlyEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x12561B0))(this);
	}
	template <typename R = void> R registerRewardedVideoEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x12555F8))(this);
	}
	template <typename R = void> R registerRewardedVideoManualEvents() {
		return ((R (*)(IronSourceEvents*))(Il2CppBase() + 0x1255F10))(this);
	}
	template <typename R = void> static R add__onConsentViewDidFailToLoadWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1258A1C))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidFailToLoadWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1258ADC))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidFailToLoadWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1258B9C))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidFailToLoadWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1258C30))(0, value);
	}
	template <typename R = void> R onConsentViewDidFailToLoadWithError(Il2CppString* args) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1258CC4))(this, args);
	}
	template <typename R = void> static R add__onConsentViewDidFailToShowWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x12590E0))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidFailToShowWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x12591A0))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidFailToShowWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x1259260))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidFailToShowWithErrorEvent(Action2<Il2CppString*, IronSourceError*>* value) {
		return ((R (*)(void *, Action2<Il2CppString*, IronSourceError*>*))(Il2CppBase() + 0x12592F4))(0, value);
	}
	template <typename R = void> R onConsentViewDidFailToShowWithError(Il2CppString* args) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259388))(this, args);
	}
	template <typename R = void> static R add__onConsentViewDidAcceptEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12594E8))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidAcceptEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12595A8))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidAcceptEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259668))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidAcceptEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12596FC))(0, value);
	}
	template <typename R = void> R onConsentViewDidAccept(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259790))(this, consentViewType);
	}
	template <typename R = void> static R add__onConsentViewDidDismissEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x125980C))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidDismissEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x12598CC))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidDismissEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x125998C))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidDismissEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259A20))(0, value);
	}
	template <typename R = void> R onConsentViewDidDismiss(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259AB4))(this, consentViewType);
	}
	template <typename R = void> static R add__onConsentViewDidLoadSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259B30))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidLoadSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259BF0))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidLoadSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259CB0))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidLoadSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259D44))(0, value);
	}
	template <typename R = void> R onConsentViewDidLoadSuccess(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x1259DD8))(this, consentViewType);
	}
	template <typename R = void> static R add__onConsentViewDidShowSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259E54))(0, value);
	}
	template <typename R = void> static R remove__onConsentViewDidShowSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259F14))(0, value);
	}
	template <typename R = void> static R add_onConsentViewDidShowSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x1259FD4))(0, value);
	}
	template <typename R = void> static R remove_onConsentViewDidShowSuccessEvent(Action1<Il2CppString*>* value) {
		return ((R (*)(void *, Action1<Il2CppString*>*))(Il2CppBase() + 0x125A068))(0, value);
	}
	template <typename R = void> R onConsentViewDidShowSuccess(Il2CppString* consentViewType) {
		return ((R (*)(IronSourceEvents*, Il2CppString*))(Il2CppBase() + 0x125A0FC))(this, consentViewType);
	}
	template <typename R = IronSourceError*> R getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((R (*)(IronSourceEvents*, Il2CppObject*))(Il2CppBase() + 0x1258E24))(this, descriptionObject);
	}
	template <typename R = IronSourcePlacement*> R getPlacementFromObject(Il2CppObject* placementObject) {
		return ((R (*)(IronSourceEvents*, Il2CppObject*))(Il2CppBase() + 0x125A178))(this, placementObject);
	}
	template <typename R = void> static R InvokeEvent(Action1<IronSourceImpressionData*>* evt, Il2CppString* args) {
		return ((R (*)(void *, Action1<IronSourceImpressionData*>*, Il2CppString*))(Il2CppBase() + 0x125A3D0))(0, evt, args);
	}

};

