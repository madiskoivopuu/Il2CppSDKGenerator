#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ColoredAnimatedCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColoredAnimatedCounter"));
	}

	template <typename T = uintptr_t> T& PlusColor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MinusColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DefaultColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsAnimated() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& AnimationTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& AnimationCurve() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& DefaultScale() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _counterText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _currencyCount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _animCoroutine() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ColoredAnimatedCounter*))(Il2CppBase() + 0xE255F8))(this);
	}
	template <typename T = void> T Bind(int32_t count, bool isAnimated, bool animateOnBind) {
		return ((T (*)(ColoredAnimatedCounter*, int32_t, bool, bool))(Il2CppBase() + 0xE25654))(this, count, isAnimated, animateOnBind);
	}
	template <typename T = void> T Draw(int32_t count) {
		return ((T (*)(ColoredAnimatedCounter*, int32_t))(Il2CppBase() + 0xE25698))(this, count);
	}
	template <typename T = uintptr_t> T OnCurrencyChangedCoroutine(int32_t newCount) {
		return ((T (*)(ColoredAnimatedCounter*, int32_t))(Il2CppBase() + 0xE2578C))(this, newCount);
	}

};

