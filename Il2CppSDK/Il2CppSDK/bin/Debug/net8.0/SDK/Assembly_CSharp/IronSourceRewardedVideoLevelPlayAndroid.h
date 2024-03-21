#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action2.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
class IronSourceAdInfo*;
class IronSourcePlacement*;
namespace System { class Action; }

class IronSourceRewardedVideoLevelPlayAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayAndroid"));
	}

	System::Action2<IronSourceError*, IronSourceAdInfo*>*& OnAdShowFailed() {
		return *(System::Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdOpened() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdClosed() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x30);
	}

	System::Action2<IronSourcePlacement*, IronSourceAdInfo*>*& OnAdRewarded() {
		return *(System::Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x38);
	}

	System::Action2<IronSourcePlacement*, IronSourceAdInfo*>*& OnAdClicked() {
		return *(System::Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)this + 0x40);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdAvailable() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x48);
	}

	System::Action*& OnAdUnavailable() {
		return *(System::Action**)((uintptr_t)this + 0x50);
	}

};};
