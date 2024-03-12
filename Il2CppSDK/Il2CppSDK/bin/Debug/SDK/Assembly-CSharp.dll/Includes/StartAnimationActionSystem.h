#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartAnimationActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StartAnimationActionSystem*, void*))(Il2CppBase() + 0x148C048))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(StartAnimationActionSystem*, uintptr_t))(Il2CppBase() + 0x148C114))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(StartAnimationActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x148C174))(this, actions);
	}
	template <typename T = void> static T ApplyAnimatorParams(uintptr_t world, uintptr_t actor, uintptr_t action) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x148C398))(0, world, actor, action);
	}

};

}
