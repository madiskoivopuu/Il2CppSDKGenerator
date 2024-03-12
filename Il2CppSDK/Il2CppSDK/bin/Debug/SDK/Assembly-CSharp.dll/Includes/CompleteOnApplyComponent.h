#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CompleteOnApplyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CompleteOnApplyComponent"));
	}

	template <typename T = bool> T& StopAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CompleteOnApplyComponent*, uintptr_t))(Il2CppBase() + 0xE2D1A8))(this, target);
	}

};

}
