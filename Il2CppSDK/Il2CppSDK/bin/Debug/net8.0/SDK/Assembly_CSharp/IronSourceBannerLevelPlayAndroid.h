#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class IronSourceAdInfo*;
class IronSourceError*;

class IronSourceBannerLevelPlayAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerLevelPlayAndroid"));
	}

	System::Action1<IronSourceAdInfo*>*& OnAdLoaded() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdLeftApplication() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdScreenDismissed() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdScreenPresented() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdClicked() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}

	System::Action1<IronSourceError*>*& OnAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x48);
	}

};};
