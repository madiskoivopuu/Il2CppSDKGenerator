#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class FishingTutorialWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingTutorialWindow"));
	}

	template <typename T = uintptr_t> T& _adCloseButton() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _adAcceptButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(FishingTutorialWindow*))(Il2CppBase() + 0x15F6BC8))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(FishingTutorialWindow*))(Il2CppBase() + 0x15F6CA8))(this);
	}

};

}
