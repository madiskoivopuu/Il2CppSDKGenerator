#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FaderBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FaderBase"));
	}

	template <typename T = uintptr_t> T& _faderImage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _normalColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _fadedColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _duration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _fadeThreshold() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FaderBase*))(Il2CppBase() + 0x16923C8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(FaderBase*))(Il2CppBase() + 0x16923F8))(this);
	}
	template <typename T = void> T FadeInOut(uintptr_t onFadeIn) {
		return ((T (*)(FaderBase*, uintptr_t))(Il2CppBase() + 0x1692400))(this, onFadeIn);
	}
	template <typename T = uintptr_t> T FadeInOutCrt(uintptr_t onFadeIn) {
		return ((T (*)(FaderBase*, uintptr_t))(Il2CppBase() + 0x169242C))(this, onFadeIn);
	}

};

