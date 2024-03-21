#pragma once

#include "../UnityEngine_CoreModule/UnityEngine/MonoBehaviour.h"
#include "../mscorlib/System/Action1.h"

class IronSourceAdInfo*;
class IronSourceError*;
class IUnityLevelPlayBanner*;
class IronSourcePlacement*;

class IronSourceBannerEvents : public MonoBehaviour {
public:

	static Il2CppClass* ClassDef() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceBannerEvents"));
	}

	static System::Action1<IronSourceAdInfo*>*& onAdLoadedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x0);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdLeftApplicationEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x8);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdScreenDismissedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x10);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdScreenPresentedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x18);
	}

	static System::Action1<IronSourceAdInfo*>*& onAdClickedEvent() {
		return *(System::Action1<IronSourceAdInfo*>**)((uintptr_t)ClassDef()->static_fields + 0x20);
	}

	static System::Action1<IronSourceError*>*& onAdLoadFailedEvent() {
		return *(System::Action1<IronSourceError*>**)((uintptr_t)ClassDef()->static_fields + 0x28);
	}

	IUnityLevelPlayBanner*& LevelPlaybannerAndroid() {
		return *(IUnityLevelPlayBanner**)((uintptr_t)this + 0x18);
	}

};};
