#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FaderBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FaderBase"));
	}

	template <typename R = uintptr_t> R& _faderImage() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _normalColor() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _fadedColor() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _duration() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _fadeThreshold() {
		return *(R*)((uintptr_t)this + 0x44);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(FaderBase*))(Il2CppBase() + 0x16923C8))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(FaderBase*))(Il2CppBase() + 0x16923F8))(this);
	}
	template <typename R = void> R FadeInOut(uintptr_t onFadeIn) {
		return ((R (*)(FaderBase*, uintptr_t))(Il2CppBase() + 0x1692400))(this, onFadeIn);
	}
	template <typename R = uintptr_t> R FadeInOutCrt(uintptr_t onFadeIn) {
		return ((R (*)(FaderBase*, uintptr_t))(Il2CppBase() + 0x169242C))(this, onFadeIn);
	}

};

