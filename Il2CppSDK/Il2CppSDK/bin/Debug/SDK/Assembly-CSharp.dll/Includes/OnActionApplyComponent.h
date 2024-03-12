#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnActionApplyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnActionApplyComponent"));
	}

	template <typename T = bool> T& BreakSneak() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(OnActionApplyComponent*, uintptr_t))(Il2CppBase() + 0x11DBFF4))(this, target);
	}

};

}
