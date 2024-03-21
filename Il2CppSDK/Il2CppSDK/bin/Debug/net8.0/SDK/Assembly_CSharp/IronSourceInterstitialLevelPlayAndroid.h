#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action2.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
class IronSourceAdInfo*;

class IronSourceInterstitialLevelPlayAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialLevelPlayAndroid"));
	}

	System::Action2<IronSourceError*, IronSourceAdInfo*>*& OnAdShowFailed() {
		return *(System::Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceError*>*& OnAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x28);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdReady() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdOpened() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdClosed() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdShowSucceeded() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x48);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdClicked() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x50);
	}

};};
