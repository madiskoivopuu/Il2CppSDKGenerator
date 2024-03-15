#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIMagicDurationProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMagicDurationProgress"));
	}

	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& _magicId() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = float> R get_Progress() {
		return ((R (*)(UIMagicDurationProgress*))(Il2CppBase() + 0x152C908))(this);
	}
	template <typename R = void> R set_Progress(float value) {
		return ((R (*)(UIMagicDurationProgress*, float))(Il2CppBase() + 0x152C924))(this, value);
	}
	template <typename R = void> R Init(UIViewController* controller, ViewInUI* target) {
		return ((R (*)(UIMagicDurationProgress*, UIViewController*, ViewInUI*))(Il2CppBase() + 0x152C960))(this, controller, target);
	}
	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIMagicDurationProgress*, ViewInUI*))(Il2CppBase() + 0x152CDF8))(this, target);
	}
	template <typename R = void> R UpdateProgress() {
		return ((R (*)(UIMagicDurationProgress*))(Il2CppBase() + 0x152CEE4))(this);
	}
	 ValueTuple2<float, float>* GetMagicProgress(MagicEntity* magic, int64_t now) {
		return ((ValueTuple2<float, float>* (*)(UIMagicDurationProgress*, MagicEntity*, int64_t))(Il2CppBase() + 0x152D268))(this, magic, now);
	}

};

