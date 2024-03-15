#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EaseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EaseManager"));
	}

	template <typename R = float> static R& _PiOver2() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = float> static R& _TwoPi() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = float> static R Evaluate(Ease easeType, float time, float duration, float overshootOrAmplitude, float period) {
		return ((R (*)(void *, Ease, float, float, float, float))(Il2CppBase() + 0x1A9A0E4))(0, easeType, time, duration, overshootOrAmplitude, period);
	}
	template <typename R = float> static R BounceEaseIn(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AC50))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename R = float> static R BounceEaseOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AC70))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename R = float> static R BounceEaseInOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AD34))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename R = float> static R FlashEase(float time, float duration, float overshootOrAmplitude, float period) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AD88))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename R = float> static R FlashEaseIn(float time, float duration, float overshootOrAmplitude, float period) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AE64))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename R = float> static R FlashEaseOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AF44))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename R = float> static R FlashEaseInOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((R (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9B02C))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename R = float> static R WeightedEase(float overshootOrAmplitude, float period, int32_t stepIndex, float stepDuration, float dir, float res) {
		return ((R (*)(void *, float, float, int32_t, float, float, float))(Il2CppBase() + 0x1A9B140))(0, overshootOrAmplitude, period, stepIndex, stepDuration, dir, res);
	}

};

