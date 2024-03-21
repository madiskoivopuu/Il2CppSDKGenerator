#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../mscorlib/System/Action2.h"
#include "../mscorlib/System/Action1.h"

class IronSourceError*;
class IronSourceAdInfo*;
class IronSourcePlacement*;
class IUnityLevelPlayRewardedVideo*;
class IUnityLevelPlayRewardedVideoManual*;
namespace System { class Action; }

class IronSourceRewardedVideoEvents : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceRewardedVideoEvents"));
	}

	static System::Action2<IronSourceError*, IronSourceAdInfo*>*& onAdShowFailedEvent() {
		return *(System::Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdOpenedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdClosedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

	static System::Action2<IronSourcePlacement*, IronSourceAdInfo*>*& onAdRewardedEvent() {
		return *(System::Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x18);
	}

	static System::Action2<IronSourcePlacement*, IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(System::Action2<IronSourcePlacement*, IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x20);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdAvailableEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x28);
	}

	static System::Action*& onAdUnavailableEvent() {
		return *(System::Action**)((uintptr_t)ClassDef()->static_fields + 0x30);
	}

	static System::Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x38);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdReadyEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x40);
	}

	IUnityLevelPlayRewardedVideo*& LevelPlayRewardedVideoAndroid() {
		return *(IUnityLevelPlayRewardedVideo**)((uintptr_t)this + 0x18);
	}

	IUnityLevelPlayRewardedVideoManual*& LevelPlayRewardedVideoAndroidManual() {
		return *(IUnityLevelPlayRewardedVideoManual**)((uintptr_t)this + 0x20);
	}

};};
