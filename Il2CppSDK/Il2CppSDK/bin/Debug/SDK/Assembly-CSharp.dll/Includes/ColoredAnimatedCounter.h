#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColoredAnimatedCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColoredAnimatedCounter"));
	}

	template <typename R = uintptr_t> R& PlusColor() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& MinusColor() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& DefaultColor() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& IsAnimated() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = float> R& AnimationTime() {
		return *(R*)((uintptr_t)this + 0x4C);
	}
	template <typename R = uintptr_t> R& AnimationCurve() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& DefaultScale() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _counterText() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = int32_t> R& _currencyCount() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = uintptr_t> R& _animCoroutine() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(ColoredAnimatedCounter*))(Il2CppBase() + 0xE255F8))(this);
	}
	template <typename R = void> R Bind(int32_t count, bool isAnimated, bool animateOnBind) {
		return ((R (*)(ColoredAnimatedCounter*, int32_t, bool, bool))(Il2CppBase() + 0xE25654))(this, count, isAnimated, animateOnBind);
	}
	template <typename R = void> R Draw(int32_t count) {
		return ((R (*)(ColoredAnimatedCounter*, int32_t))(Il2CppBase() + 0xE25698))(this, count);
	}
	template <typename R = uintptr_t> R OnCurrencyChangedCoroutine(int32_t newCount) {
		return ((R (*)(ColoredAnimatedCounter*, int32_t))(Il2CppBase() + 0xE2578C))(this, newCount);
	}

};

