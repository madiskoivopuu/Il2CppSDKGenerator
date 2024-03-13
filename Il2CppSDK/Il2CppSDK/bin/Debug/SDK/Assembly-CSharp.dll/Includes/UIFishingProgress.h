#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIFishingProgress : public UIView
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
	template <typename T = void> T Init(UIViewController* controller, ViewInUI* target) {
		return ((T (*)(UIFishingProgress*, UIViewController*, ViewInUI*))(Il2CppBase() + 0x102F974))(this, controller, target);
	}
	template <typename T = void> T UpdateView(ViewInUI* target) {
		return ((T (*)(UIFishingProgress*, ViewInUI*))(Il2CppBase() + 0x102F9F8))(this, target);
	}
	template <typename T = void> T UpdateProgress(ViewInUI* uiTarget) {
		return ((T (*)(UIFishingProgress*, ViewInUI*))(Il2CppBase() + 0x102FA28))(this, uiTarget);
	}

};

