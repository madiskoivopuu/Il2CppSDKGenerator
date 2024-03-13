#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LoadingWindow : public UIWindow1<LoadingWindowContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingWindow"));
	}

	template <typename T = uintptr_t> T& _backCyclicColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _background() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _locationCaption() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _locationImage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _hintCaption() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _hintText() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _hintIcon() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Version() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& Region() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CyclicPrizeText() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TimerText() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& TimerGameObject() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BetaWarning() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = HintDataContext*> T& _hintContext() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = LoadingDataContext*> T& _loadingContext() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = ScrollAnimator*> T& scrollAnimator() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = ScrollAnimator*> T& scrollCyclicAnimator() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& LoadingRelocation() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CameraObject() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int64_t> T& _ticksFromShow() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T OnShow() {
		return ((T (*)(LoadingWindow*))(Il2CppBase() + 0x1433468))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadingWindow*))(Il2CppBase() + 0x1434264))(this);
	}
	template <typename T = void> T SetText() {
		return ((T (*)(LoadingWindow*))(Il2CppBase() + 0x1433DD8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LoadingWindow*, float))(Il2CppBase() + 0x143440C))(this, deltaTime);
	}

};

