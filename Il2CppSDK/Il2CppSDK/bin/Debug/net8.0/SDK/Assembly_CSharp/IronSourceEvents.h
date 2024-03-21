#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../mscorlib/System/Action1.h"
#include "../mscorlib/System/Boolean.h"
#include "../mscorlib/System/Action2.h"
#include "../mscorlib/System_Collections_Generic/Dictionary2.h"

class IronSourceError*;
class IronSourcePlacement*;
class IronSourceImpressionData*;
class IUnityInitialization*;
class IUnityRewardedVideo*;
class IUnityRewardedVideoManual*;
class IUnityInterstitial*;
class IUnityOfferwall*;
class IUnityBanner*;
class IUnitySegment*;
class IUnityImpressionData*;
namespace System { class Action; }
class Il2CppString*;
class Il2CppObject*;

class IronSourceEvents : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceEvents"));
	}

	static System::Action*& onSdkInitializationCompletedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System::Action1<IronSourceError*>*& onRewardedVideoAdShowFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static System::Action*& onRewardedVideoAdOpenedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

	static System::Action*& onRewardedVideoAdClosedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x18);
	}

	static System::Action*& onRewardedVideoAdStartedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x20);
	}

	static System::Action*& onRewardedVideoAdEndedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x28);
	}

	static System::Action1<IronSourcePlacement*>*& onRewardedVideoAdRewardedEvent() {
		return *(System::Action1<IronSourcePlacement*>**)((uintptr_t)ClassDef()->static_fields + 0x30);
	}

	static System::Action1<IronSourcePlacement*>*& onRewardedVideoAdClickedEvent() {
		return *(System::Action1<IronSourcePlacement*>**)((uintptr_t)ClassDef()->static_fields + 0x38);
	}

	static System::Action1<bool>*& onRewardedVideoAvailabilityChangedEvent() {
		return *(System::Action1<bool>**)((uintptr_t)ClassDef()->static_fields + 0x40);
	}

	static System::Action1<IronSourceError*>*& onRewardedVideoAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x48);
	}

	static System::Action*& onRewardedVideoAdReadyEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x50);
	}

	static System::Action1<Il2CppString*>*& onRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x58);
	}

	static System::Action1<Il2CppString*>*& onRewardedVideoAdClosedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x60);
	}

	static System::Action1<Il2CppString*>*& onRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x68);
	}

	static System::Action1<Il2CppString*>*& onRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x70);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& onRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x78);
	}

	static System::Action1<Il2CppString*>*& onRewardedVideoAdClickedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x80);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& onRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x88);
	}

	static System::Action*& onInterstitialAdReadyEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x90);
	}

	static System::Action1<IronSourceError*>*& onInterstitialAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x98);
	}

	static System::Action*& onInterstitialAdOpenedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0xA0);
	}

	static System::Action*& onInterstitialAdClosedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0xA8);
	}

	static System::Action*& onInterstitialAdShowSucceededEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0xB0);
	}

	static System::Action1<IronSourceError*>*& onInterstitialAdShowFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0xB8);
	}

	static System::Action*& onInterstitialAdClickedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0xC0);
	}

	static System::Action1<Il2CppString*>*& onInterstitialAdReadyDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0xC8);
	}

	static System::Action1<Il2CppString*>*& onInterstitialAdOpenedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0xD0);
	}

	static System::Action1<Il2CppString*>*& onInterstitialAdClosedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0xD8);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& onInterstitialAdLoadFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0xE0);
	}

	static System::Action1<Il2CppString*>*& onInterstitialAdClickedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0xE8);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& onInterstitialAdShowFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0xF0);
	}

	static System::Action1<bool>*& onOfferwallAvailableEvent() {
		return *(System::Action1<bool>**)((uintptr_t)ClassDef()->static_fields + 0xF8);
	}

	static System::Action*& onOfferwallOpenedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x100);
	}

	static System::Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>*& onOfferwallAdCreditedEvent() {
		return *(System::Action1<Il2CppDictionary<Il2CppString*, Il2CppObject*>*>**)((uintptr_t)ClassDef()->static_fields + 0x108);
	}

	static System::Action1<IronSourceError*>*& onGetOfferwallCreditsFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x110);
	}

	static System::Action*& onOfferwallClosedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x118);
	}

	static System::Action1<IronSourceError*>*& onOfferwallShowFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x120);
	}

	static System::Action*& onBannerAdLoadedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x128);
	}

	static System::Action*& onBannerAdLeftApplicationEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x130);
	}

	static System::Action*& onBannerAdScreenDismissedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x138);
	}

	static System::Action*& onBannerAdScreenPresentedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x140);
	}

	static System::Action*& onBannerAdClickedEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x148);
	}

	static System::Action1<IronSourceError*>*& onBannerAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x150);
	}

	static System::Action1<Il2CppString*>*& onSegmentReceivedEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x158);
	}

	static System::Action1<IronSourceImpressionData*>*& onImpressionSuccessEvent() {
		return *(System::Action1<IronSourceImpressionData*>**)((uintptr_t)ClassDef()->static_fields + 0x160);
	}

	static Il2CppString*& ERROR_CODE() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& ERROR_DESCRIPTION() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& INSTANCE_ID_KEY() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static Il2CppString*& PLACEMENT_KEY() {
		return *(Il2CppString**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System::Action1<IronSourceImpressionData*>*& onImpressionDataReadyEvent() {
		return *(System::Action1<IronSourceImpressionData*>**)((uintptr_t)ClassDef()->static_fields + 0x168);
	}

	IUnityInitialization*& initializationAndroid() {
		return *(IUnityInitialization**)((uintptr_t)this + 0x18);
	}

	IUnityRewardedVideo*& rewardedVideoAndroid() {
		return *(IUnityRewardedVideo**)((uintptr_t)this + 0x20);
	}

	IUnityRewardedVideoManual*& rewardedVideoAndroidManual() {
		return *(IUnityRewardedVideoManual**)((uintptr_t)this + 0x28);
	}

	IUnityInterstitial*& interstitialAndroid() {
		return *(IUnityInterstitial**)((uintptr_t)this + 0x30);
	}

	IUnityOfferwall*& offerwallAndroid() {
		return *(IUnityOfferwall**)((uintptr_t)this + 0x38);
	}

	IUnityBanner*& bannerAndroid() {
		return *(IUnityBanner**)((uintptr_t)this + 0x40);
	}

	IUnitySegment*& segmentAndroid() {
		return *(IUnitySegment**)((uintptr_t)this + 0x48);
	}

	IUnityImpressionData*& impressionDataAndroid() {
		return *(IUnityImpressionData**)((uintptr_t)this + 0x50);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& _onConsentViewDidFailToLoadWithErrorEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x170);
	}

	static System::Action2<Il2CppString*, IronSourceError*>*& _onConsentViewDidFailToShowWithErrorEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x178);
	}

	static System::Action1<Il2CppString*>*& _onConsentViewDidAcceptEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x180);
	}

	static System::Action1<Il2CppString*>*& _onConsentViewDidDismissEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x188);
	}

	static System::Action1<Il2CppString*>*& _onConsentViewDidLoadSuccessEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x190);
	}

	static System::Action1<Il2CppString*>*& _onConsentViewDidShowSuccessEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)ClassDef()->static_fields + 0x198);
	}

};};
