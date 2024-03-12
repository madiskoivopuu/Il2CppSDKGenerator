#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyHookComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyHookComponent"));
	}

	template <typename T = uintptr_t> T& Param() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyHookComponent*, uintptr_t))(Il2CppBase() + 0x18944D0))(this, targetObject);
	}

};

}
