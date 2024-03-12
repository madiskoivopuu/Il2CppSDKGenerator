#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyDestroyTargetsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyDestroyTargetsComponent"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Save() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyDestroyTargetsComponent*, uintptr_t))(Il2CppBase() + 0x1894228))(this, target);
	}

};

}
