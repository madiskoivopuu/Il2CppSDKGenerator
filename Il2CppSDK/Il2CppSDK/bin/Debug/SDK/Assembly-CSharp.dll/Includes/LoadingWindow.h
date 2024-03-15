#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LoadingWindow : public UIWindow1<LoadingWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindow"));
	}

	template <typename R = uintptr_t> R& _backCyclicColor() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _background() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _locationCaption() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _locationImage() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _hintCaption() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _hintText() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _hintIcon() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = uintptr_t> R& Version() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& Region() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& CyclicPrizeText() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& TimerText() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = uintptr_t> R& TimerGameObject() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = uintptr_t> R& BetaWarning() {
		return *(R*)((uintptr_t)this + 0xD8);
	}
	template <typename R = HintDataContext*> R& _hintContext() {
		return *(R*)((uintptr_t)this + 0xE0);
	}
	template <typename R = LoadingDataContext*> R& _loadingContext() {
		return *(R*)((uintptr_t)this + 0xE8);
	}
	template <typename R = ScrollAnimator*> R& scrollAnimator() {
		return *(R*)((uintptr_t)this + 0xF0);
	}
	template <typename R = ScrollAnimator*> R& scrollCyclicAnimator() {
		return *(R*)((uintptr_t)this + 0xF8);
	}
	template <typename R = uintptr_t> R& LoadingRelocation() {
		return *(R*)((uintptr_t)this + 0x100);
	}
	template <typename R = uintptr_t> R& CameraObject() {
		return *(R*)((uintptr_t)this + 0x108);
	}
	template <typename R = int64_t> R& _ticksFromShow() {
		return *(R*)((uintptr_t)this + 0x110);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(LoadingWindow*))(Il2CppBase() + 0x1433468))(this);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(LoadingWindow*))(Il2CppBase() + 0x1434264))(this);
	}
	template <typename R = void> R SetText() {
		return ((R (*)(LoadingWindow*))(Il2CppBase() + 0x1433DD8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LoadingWindow*, float))(Il2CppBase() + 0x143440C))(this, deltaTime);
	}

};

