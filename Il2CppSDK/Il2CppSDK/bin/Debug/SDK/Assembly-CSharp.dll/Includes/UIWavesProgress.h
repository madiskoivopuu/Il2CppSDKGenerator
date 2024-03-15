#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView.h" 

class UIWavesProgress : public UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWavesProgress"));
	}

	template <typename R = uintptr_t> R& _progressImage() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _progressText() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Nullable1int32_t>*& _currentTotalCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x58);
	}
	 Nullable1int32_t>*& _currentLeftCount() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R UpdateView(ViewInUI* target) {
		return ((R (*)(UIWavesProgress*, ViewInUI*))(Il2CppBase() + 0x15323C8))(this, target);
	}
	template <typename R = void> R UpdateProgress(int32_t targetId) {
		return ((R (*)(UIWavesProgress*, int32_t))(Il2CppBase() + 0x15323FC))(this, targetId);
	}

};

