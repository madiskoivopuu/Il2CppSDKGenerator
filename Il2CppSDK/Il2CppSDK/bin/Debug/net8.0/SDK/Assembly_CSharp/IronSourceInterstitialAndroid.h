#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"
#include "../mscorlib/System/Action2.h"

class IronSourceError*;
namespace System { class Action; }
class Il2CppString*;

class IronSourceInterstitialAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialAndroid"));
	}

	System::Action1<IronSourceError*>*& OnInterstitialAdShowFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceError*>*& OnInterstitialAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x28);
	}

	System::Action*& OnInterstitialAdReady() {
		return *(System::Action**)((uintptr_t)this + 0x30);
	}

	System::Action*& OnInterstitialAdOpened() {
		return *(System::Action**)((uintptr_t)this + 0x38);
	}

	System::Action*& OnInterstitialAdClosed() {
		return *(System::Action**)((uintptr_t)this + 0x40);
	}

	System::Action*& OnInterstitialAdShowSucceeded() {
		return *(System::Action**)((uintptr_t)this + 0x48);
	}

	System::Action*& OnInterstitialAdClicked() {
		return *(System::Action**)((uintptr_t)this + 0x50);
	}

	System::Action*& OnInterstitialAdRewarded() {
		return *(System::Action**)((uintptr_t)this + 0x58);
	}

	System::Action1<Il2CppString*>*& OnInterstitialAdReadyDemandOnly() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x60);
	}

	System::Action1<Il2CppString*>*& OnInterstitialAdOpenedDemandOnly() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x68);
	}

	System::Action1<Il2CppString*>*& OnInterstitialAdClosedDemandOnly() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}

	System::Action2<Il2CppString*, IronSourceError*>*& OnInterstitialAdLoadFailedDemandOnly() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x78);
	}

	System::Action1<Il2CppString*>*& OnInterstitialAdClickedDemandOnly() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x80);
	}

	System::Action2<Il2CppString*, IronSourceError*>*& OnInterstitialAdShowFailedDemandOnly() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x88);
	}

};};
