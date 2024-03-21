#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
class IronSourceAdInfo*;

class IronSourceRewardedVideoLevelPlayManualAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoLevelPlayManualAndroid"));
	}

	System::Action1<IronSourceError*>*& OnAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}

	System::Action1<IronSourceAdInfo*>*& OnAdReady() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)this + 0x28);
	}

};};
