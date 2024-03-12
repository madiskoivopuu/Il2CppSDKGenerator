#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTriggerComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetName(uintptr_t world, uintptr_t actor, uintptr_t target) {
		return ((T (*)(ApplyTriggerComponent*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1895828))(this, world, actor, target);
	}
	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ApplyTriggerComponent*, uintptr_t))(Il2CppBase() + 0x1895900))(this, target);
	}

};

}
