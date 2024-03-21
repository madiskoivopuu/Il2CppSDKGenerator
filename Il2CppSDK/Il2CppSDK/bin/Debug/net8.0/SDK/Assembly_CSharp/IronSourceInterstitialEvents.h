#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../mscorlib/System/Action1.h"
#include "../mscorlib/System/Action2.h"

class IronSourceAdInfo*;
class IronSourceError*;
class IUnityLevelPlayInterstitial*;
class IronSourcePlacement*;

class IronSourceInterstitialEvents : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceInterstitialEvents"));
	}

	static System::Action1<IronSourceAdInfo*>*& onAdReadyEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System::Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdOpenedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdClosedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x18);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdShowSucceededEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x20);
	}

	static System::Action2<IronSourceError*, IronSourceAdInfo*>*& onAdShowFailedEvent() {
		return *(System::Action2<IronSourceError*, IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x28);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x30);
	}

	IUnityLevelPlayInterstitial*& LevelPlayInterstitialAndroid() {
		return *(IUnityLevelPlayInterstitial**)((uintptr_t)this + 0x18);
	}

};};
