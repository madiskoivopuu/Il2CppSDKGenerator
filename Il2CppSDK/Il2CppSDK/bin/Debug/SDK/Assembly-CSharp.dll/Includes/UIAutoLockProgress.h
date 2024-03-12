#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView" 

class UIAutoLockProgress: UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAutoLockProgress"));
	}

	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(UIAutoLockProgress*, uintptr_t))(Il2CppBase() + 0x102EEA4))(this, target);
	}
	template <typename T = void> T UpdateProgress(int32_t targetId) {
		return ((T (*)(UIAutoLockProgress*, int32_t))(Il2CppBase() + 0x102EEDC))(this, targetId);
	}

};

}
