#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class FishingTutorialWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingTutorialWindow"));
	}

	template <typename R = uintptr_t> R& _adCloseButton() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _adAcceptButton() {
		return *(R*)((uintptr_t)this + 0x80);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(FishingTutorialWindow*))(Il2CppBase() + 0x15F6BC8))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(FishingTutorialWindow*))(Il2CppBase() + 0x15F6CA8))(this);
	}

};

