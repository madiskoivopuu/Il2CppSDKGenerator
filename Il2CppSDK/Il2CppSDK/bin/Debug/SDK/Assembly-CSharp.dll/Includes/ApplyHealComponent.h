#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyHealComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyHealComponent"));
	}

	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Params() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyHealComponent*, uintptr_t))(Il2CppBase() + 0x189442C))(this, target);
	}

};

}
