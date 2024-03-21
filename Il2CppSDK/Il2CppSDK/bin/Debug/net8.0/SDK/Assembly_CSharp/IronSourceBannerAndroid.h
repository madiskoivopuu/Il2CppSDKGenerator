#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
namespace System { class Action; }

class IronSourceBannerAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerAndroid"));
	}

	System::Action*& OnBannerAdLoaded() {
		return *(System::Action**)((uintptr_t)this + 0x20);
	}

	System::Action*& OnBannerAdLeftApplication() {
		return *(System::Action**)((uintptr_t)this + 0x28);
	}

	System::Action*& OnBannerAdScreenDismissed() {
		return *(System::Action**)((uintptr_t)this + 0x30);
	}

	System::Action*& OnBannerAdScreenPresented() {
		return *(System::Action**)((uintptr_t)this + 0x38);
	}

	System::Action*& OnBannerAdClicked() {
		return *(System::Action**)((uintptr_t)this + 0x40);
	}

	System::Action1<IronSourceError*>*& OnBannerAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x48);
	}

};};
