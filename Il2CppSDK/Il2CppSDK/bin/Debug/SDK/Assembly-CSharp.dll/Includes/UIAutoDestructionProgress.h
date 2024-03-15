#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIAutoDestructionProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAutoDestructionProgress"));
	}

	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _timer() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIAutoDestructionProgress*, ViewInUI*))(Il2CppBase() + 0x102E7AC))(this, target);
	}
	template <typename R = bool> R UpdateProgress(int32_t targetId) {
		return ((R (*)(UIAutoDestructionProgress*, int32_t))(Il2CppBase() + 0x102E85C))(this, targetId);
	}

};

