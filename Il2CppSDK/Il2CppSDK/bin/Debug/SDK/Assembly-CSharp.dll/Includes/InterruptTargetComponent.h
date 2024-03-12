#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InterruptTargetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InterruptTargetComponent"));
	}

	template <typename T = bool> T& Action() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Sneak() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& PursuitTarget() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(InterruptTargetComponent*, uintptr_t))(Il2CppBase() + 0x146B22C))(this, target);
	}

};

}
