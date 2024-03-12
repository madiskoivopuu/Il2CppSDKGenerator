#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIView" 

class UIWavesProgress: UIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWavesProgress"));
	}

	template <typename T = uintptr_t> T& _progressImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _progressText() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _currentTotalCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _currentLeftCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(UIWavesProgress*, uintptr_t))(Il2CppBase() + 0x15323C8))(this, target);
	}
	template <typename T = void> T UpdateProgress(int32_t targetId) {
		return ((T (*)(UIWavesProgress*, int32_t))(Il2CppBase() + 0x15323FC))(this, targetId);
	}

};

}
