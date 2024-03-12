#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDamageComponent"));
	}

	template <typename T = void*> T& Coef() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& LifeSteal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& AddDamageType() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ChangeDamageComponent*, uintptr_t))(Il2CppBase() + 0x13EA1E0))(this, target);
	}

};

}
