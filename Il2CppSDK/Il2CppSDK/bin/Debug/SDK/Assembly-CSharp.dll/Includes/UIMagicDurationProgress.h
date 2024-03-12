#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView" 

class UIMagicDurationProgress: UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMagicDurationProgress"));
	}

	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _magicId() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = float> T get_Progress() {
		return ((T (*)(UIMagicDurationProgress*))(Il2CppBase() + 0x152C908))(this);
	}
	template <typename T = void> T set_Progress(float value) {
		return ((T (*)(UIMagicDurationProgress*, float))(Il2CppBase() + 0x152C924))(this, value);
	}
	template <typename T = void> T Init(uintptr_t controller, uintptr_t target) {
		return ((T (*)(UIMagicDurationProgress*, uintptr_t, uintptr_t))(Il2CppBase() + 0x152C960))(this, controller, target);
	}
	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(UIMagicDurationProgress*, uintptr_t))(Il2CppBase() + 0x152CDF8))(this, target);
	}
	template <typename T = void> T UpdateProgress() {
		return ((T (*)(UIMagicDurationProgress*))(Il2CppBase() + 0x152CEE4))(this);
	}
	template <typename T = void*> T GetMagicProgress(uintptr_t magic, int64_t now) {
		return ((T (*)(UIMagicDurationProgress*, uintptr_t, int64_t))(Il2CppBase() + 0x152D268))(this, magic, now);
	}

};

}
