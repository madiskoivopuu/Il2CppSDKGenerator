#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChanceProgressItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChanceProgressItem"));
	}

	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _progressRankImage() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _mountRankText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _rankCanvasGroup() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _fullProgressTime() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _lastRank() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _progressCoroutine() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& OnUpdated() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = float> R& _threshold() {
		return *(R*)((uintptr_t)this + 0x70);
	}
	template <typename R = bool> R& _isFuse() {
		return *(R*)((uintptr_t)this + 0x74);
	}

	template <typename R = void> R UpdateProgress(float targetProgress, int32_t rank, uintptr_t onUpdated, bool checkGradeUp, bool isFuse, bool force) {
		return ((R (*)(ChanceProgressItem*, float, int32_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x13E9A44))(this, targetProgress, rank, onUpdated, checkGradeUp, isFuse, force);
	}
	template <typename R = uintptr_t> R ProgressCoroutine(float newValue) {
		return ((R (*)(ChanceProgressItem*, float))(Il2CppBase() + 0x13E9ECC))(this, newValue);
	}

};

