#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistributeMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistributeMagicComponent"));
	}

	template <typename T = void*> T& DurationCoef() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& DamageCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Selector() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(DistributeMagicComponent*, uintptr_t))(Il2CppBase() + 0x1302860))(this, target);
	}

};

}
