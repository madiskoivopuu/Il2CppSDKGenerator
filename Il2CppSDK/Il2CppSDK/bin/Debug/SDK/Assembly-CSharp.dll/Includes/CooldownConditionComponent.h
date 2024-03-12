#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownConditionComponent"));
	}

	template <typename T = bool> T& Has() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& ArmingIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(CooldownConditionComponent*, uintptr_t))(Il2CppBase() + 0x13354F8))(this, target);
	}
	template <typename T = bool> T Check(uintptr_t world, uintptr_t target) {
		return ((T (*)(CooldownConditionComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x13355B4))(this, world, target);
	}

};

}
