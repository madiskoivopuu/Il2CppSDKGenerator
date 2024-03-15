#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIFishingProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFishingProgress"));
	}

	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _currentLureName() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = float> R get_Progress() {
		return ((R (*)(UIFishingProgress*))(Il2CppBase() + 0x102F91C))(this);
	}
	template <typename R = void> R set_Progress(float value) {
		return ((R (*)(UIFishingProgress*, float))(Il2CppBase() + 0x102F938))(this, value);
	}
	template <typename R = void> R Init(UIViewController* controller, ViewInUI* target) {
		return ((R (*)(UIFishingProgress*, UIViewController*, ViewInUI*))(Il2CppBase() + 0x102F974))(this, controller, target);
	}
	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIFishingProgress*, ViewInUI*))(Il2CppBase() + 0x102F9F8))(this, target);
	}
	template <typename R = void> R UpdateProgress(ViewInUI* uiTarget) {
		return ((R (*)(UIFishingProgress*, ViewInUI*))(Il2CppBase() + 0x102FA28))(this, uiTarget);
	}

};

