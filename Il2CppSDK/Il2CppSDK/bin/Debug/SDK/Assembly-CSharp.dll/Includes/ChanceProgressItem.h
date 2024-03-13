#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChanceProgressItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChanceProgressItem"));
	}

	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _progressRankImage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _mountRankText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _rankCanvasGroup() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _fullProgressTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _lastRank() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _progressCoroutine() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& OnUpdated() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& _threshold() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _isFuse() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = void> T UpdateProgress(float targetProgress, int32_t rank, uintptr_t onUpdated, bool checkGradeUp, bool isFuse, bool force) {
		return ((T (*)(ChanceProgressItem*, float, int32_t, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x13E9A44))(this, targetProgress, rank, onUpdated, checkGradeUp, isFuse, force);
	}
	template <typename T = uintptr_t> T ProgressCoroutine(float newValue) {
		return ((T (*)(ChanceProgressItem*, float))(Il2CppBase() + 0x13E9ECC))(this, newValue);
	}

};

