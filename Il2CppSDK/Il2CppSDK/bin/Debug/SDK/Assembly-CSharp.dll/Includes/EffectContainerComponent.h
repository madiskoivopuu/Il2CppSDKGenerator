#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectContainerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectContainerComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(EffectContainerComponent*, uintptr_t))(Il2CppBase() + 0x1A9DFF4))(this, target);
	}
	template <typename T = Il2CppString*> T GetEffect(uintptr_t world, uintptr_t source, uintptr_t target) {
		return ((T (*)(EffectContainerComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A9E08C))(this, world, source, target);
	}

};

}
