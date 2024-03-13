#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIMagicDurationProgress : public UIView
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
	template <typename T = void> T Init(UIViewController* controller, ViewInUI* target) {
		return ((T (*)(UIMagicDurationProgress*, UIViewController*, ViewInUI*))(Il2CppBase() + 0x152C960))(this, controller, target);
	}
	template <typename T = void> T UpdateView(ViewInUI* target) {
		return ((T (*)(UIMagicDurationProgress*, ViewInUI*))(Il2CppBase() + 0x152CDF8))(this, target);
	}
	template <typename T = void> T UpdateProgress() {
		return ((T (*)(UIMagicDurationProgress*))(Il2CppBase() + 0x152CEE4))(this);
	}
	template <typename T = ValueTuple2float, float>*> T GetMagicProgress(MagicEntity* magic, int64_t now) {
		return ((T (*)(UIMagicDurationProgress*, MagicEntity*, int64_t))(Il2CppBase() + 0x152D268))(this, magic, now);
	}

};

