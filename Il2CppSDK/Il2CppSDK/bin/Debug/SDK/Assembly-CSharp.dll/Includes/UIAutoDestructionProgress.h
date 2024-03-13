#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIAutoDestructionProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAutoDestructionProgress"));
	}

	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T UpdateView(ViewInUI* target) {
		return ((T (*)(UIAutoDestructionProgress*, ViewInUI*))(Il2CppBase() + 0x102E7AC))(this, target);
	}
	template <typename T = bool> T UpdateProgress(int32_t targetId) {
		return ((T (*)(UIAutoDestructionProgress*, int32_t))(Il2CppBase() + 0x102E85C))(this, targetId);
	}

};

