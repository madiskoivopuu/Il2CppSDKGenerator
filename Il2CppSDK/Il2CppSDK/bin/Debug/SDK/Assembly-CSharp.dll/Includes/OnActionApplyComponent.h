#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnActionApplyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnActionApplyComponent"));
	}

	template <typename R = bool> R& BreakSneak() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(OnActionApplyComponent*, Il2CppObject*))(Il2CppBase() + 0x11DBFF4))(this, target);
	}

};

