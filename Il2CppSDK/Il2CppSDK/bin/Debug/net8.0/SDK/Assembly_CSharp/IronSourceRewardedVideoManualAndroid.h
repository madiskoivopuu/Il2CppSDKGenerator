#pragma once

#include "../UnityEngine_AndroidJNIModule/UnityEngine/AndroidJavaProxy.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
namespace System { class Action; }

class IronSourceRewardedVideoManualAndroid : public AndroidJavaProxy {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoManualAndroid"));
	}

	System::Action1<IronSourceError*>*& OnRewardedVideoAdLoadFailed() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)this + 0x20);
	}

	System::Action*& OnRewardedVideoAdReady() {
		return *(System::Action**)((uintptr_t)this + 0x28);
	}

};};
