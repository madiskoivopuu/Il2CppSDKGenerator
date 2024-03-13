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

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(OnActionApplyComponent*, Il2CppObject*))(Il2CppBase() + 0x11DBFF4))(this, target);
	}

};

