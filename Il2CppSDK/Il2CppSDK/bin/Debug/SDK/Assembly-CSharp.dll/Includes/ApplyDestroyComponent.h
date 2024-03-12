#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyComponent"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Instantly() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ApplyDestroyComponent*, uintptr_t))(Il2CppBase() + 0x1894184))(this, targetObject);
	}

};

}
