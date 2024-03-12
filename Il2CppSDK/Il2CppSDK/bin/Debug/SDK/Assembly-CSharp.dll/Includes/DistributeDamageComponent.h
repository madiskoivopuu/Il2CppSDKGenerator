#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistributeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistributeDamageComponent"));
	}

	template <typename T = void*> T& Coef() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Selector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& HitEffects() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DistributeDamageComponent*, uintptr_t))(Il2CppBase() + 0x13027A8))(this, target);
	}

};

}
