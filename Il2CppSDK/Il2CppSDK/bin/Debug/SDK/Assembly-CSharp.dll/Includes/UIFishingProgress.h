#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView" 

class UIFishingProgress: UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFishingProgress"));
	}

	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _currentLureName() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = float> T get_Progress() {
		return ((T (*)(UIFishingProgress*))(Il2CppBase() + 0x102F91C))(this);
	}
	template <typename T = void> T set_Progress(float value) {
		return ((T (*)(UIFishingProgress*, float))(Il2CppBase() + 0x102F938))(this, value);
	}
	template <typename T = void> T Init(uintptr_t controller, uintptr_t target) {
		return ((T (*)(UIFishingProgress*, uintptr_t, uintptr_t))(Il2CppBase() + 0x102F974))(this, controller, target);
	}
	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(UIFishingProgress*, uintptr_t))(Il2CppBase() + 0x102F9F8))(this, target);
	}
	template <typename T = void> T UpdateProgress(uintptr_t uiTarget) {
		return ((T (*)(UIFishingProgress*, uintptr_t))(Il2CppBase() + 0x102FA28))(this, uiTarget);
	}

};

}
