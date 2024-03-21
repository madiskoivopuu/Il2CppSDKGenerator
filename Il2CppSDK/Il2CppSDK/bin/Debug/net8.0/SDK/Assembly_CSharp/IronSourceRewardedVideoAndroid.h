#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"
#include "../mscorlib/System/Boolean.h"
#include "../mscorlib/System/Action2.h"

class IronSourceError*;
class IronSourcePlacement*;
namespace System { class Action; }
class Il2CppString*;

class IronSourceRewardedVideoAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoAndroid"));
	}

	System::Action1<IronSourceError*>*& OnRewardedVideoAdShowFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}

	System::Action*& OnRewardedVideoAdOpened() {
		return *(System::Action**)((uintptr_t)this + 0x28);
	}

	System::Action*& OnRewardedVideoAdClosed() {
		return *(System::Action**)((uintptr_t)this + 0x30);
	}

	System::Action*& OnRewardedVideoAdStarted() {
		return *(System::Action**)((uintptr_t)this + 0x38);
	}

	System::Action*& OnRewardedVideoAdEnded() {
		return *(System::Action**)((uintptr_t)this + 0x40);
	}

	System::Action1<IronSourcePlacement*>*& OnRewardedVideoAdRewarded() {
		return *(System::Action1<IronSourcePlacement*>**)((uintptr_t)this + 0x48);
	}

	System::Action1<IronSourcePlacement*>*& OnRewardedVideoAdClicked() {
		return *(System::Action1<IronSourcePlacement*>**)((uintptr_t)this + 0x50);
	}

	System::Action1<bool>*& OnRewardedVideoAvailabilityChanged() {
		return *(System::Action1<bool>**)((uintptr_t)this + 0x58);
	}

	System::Action1<Il2CppString*>*& OnRewardedVideoAdOpenedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x60);
	}

	System::Action1<Il2CppString*>*& OnRewardedVideoAdClosedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x68);
	}

	System::Action1<Il2CppString*>*& OnRewardedVideoAdLoadedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x70);
	}

	System::Action1<Il2CppString*>*& OnRewardedVideoAdRewardedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x78);
	}

	System::Action2<Il2CppString*, IronSourceError*>*& OnRewardedVideoAdShowFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x80);
	}

	System::Action1<Il2CppString*>*& OnRewardedVideoAdClickedDemandOnlyEvent() {
		return *(System::Action1<Il2CppString*>**)((uintptr_t)this + 0x88);
	}

	System::Action2<Il2CppString*, IronSourceError*>*& OnRewardedVideoAdLoadFailedDemandOnlyEvent() {
		return *(System::Action2<Il2CppString*, IronSourceError*>**)((uintptr_t)this + 0x90);
	}

};};
