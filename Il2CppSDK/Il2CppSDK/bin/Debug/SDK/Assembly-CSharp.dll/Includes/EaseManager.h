#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EaseManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EaseManager"));
	}

	template <typename T = float> static T& _PiOver2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& _TwoPi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> static T Evaluate(uintptr_t easeType, float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, uintptr_t, float, float, float, float))(Il2CppBase() + 0x1A9A0E4))(0, easeType, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T BounceEaseIn(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AC50))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename T = float> static T BounceEaseOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AC70))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename T = float> static T BounceEaseInOut(float time, float duration, float unusedOvershootOrAmplitude, float unusedPeriod) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AD34))(0, time, duration, unusedOvershootOrAmplitude, unusedPeriod);
	}
	template <typename T = float> static T FlashEase(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AD88))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T FlashEaseIn(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AE64))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T FlashEaseOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9AF44))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T FlashEaseInOut(float time, float duration, float overshootOrAmplitude, float period) {
		return ((T (*)(void *, float, float, float, float))(Il2CppBase() + 0x1A9B02C))(0, time, duration, overshootOrAmplitude, period);
	}
	template <typename T = float> static T WeightedEase(float overshootOrAmplitude, float period, int32_t stepIndex, float stepDuration, float dir, float res) {
		return ((T (*)(void *, float, float, int32_t, float, float, float))(Il2CppBase() + 0x1A9B140))(0, overshootOrAmplitude, period, stepIndex, stepDuration, dir, res);
	}

};

}
