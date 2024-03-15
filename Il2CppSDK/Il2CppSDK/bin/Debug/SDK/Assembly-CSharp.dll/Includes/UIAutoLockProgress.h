#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIAutoLockProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAutoLockProgress"));
	}

	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIAutoLockProgress*, ViewInUI*))(Il2CppBase() + 0x102EEA4))(this, target);
	}
	template <typename R = void> R UpdateProgress(int32_t targetId) {
		return ((R (*)(UIAutoLockProgress*, int32_t))(Il2CppBase() + 0x102EEDC))(this, targetId);
	}

};

