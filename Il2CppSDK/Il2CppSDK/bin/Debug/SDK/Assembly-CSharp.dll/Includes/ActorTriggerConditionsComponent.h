#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActorTriggerConditionsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorTriggerConditionsComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& HpCoefLess() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& HpCoefMore() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ActorTriggerConditionsComponent*, uintptr_t))(Il2CppBase() + 0x18AF074))(this, target);
	}
	template <typename T = bool> T IsValid(uintptr_t world, uintptr_t actor, uintptr_t source) {
		return ((T (*)(ActorTriggerConditionsComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18AF130))(this, world, actor, source);
	}

};

}
