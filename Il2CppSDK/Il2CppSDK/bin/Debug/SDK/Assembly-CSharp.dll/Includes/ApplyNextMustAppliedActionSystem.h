#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyNextMustAppliedActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyNextMustAppliedActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, void*))(Il2CppBase() + 0x1894AB4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, uintptr_t))(Il2CppBase() + 0x1894ABC))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1894AC4))(this, actions);
	}
	template <typename T = void> T Execute_1(uintptr_t action, uintptr_t actor) {
		return ((T (*)(ApplyNextMustAppliedActionSystem*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1894C54))(this, action, actor);
	}

};

}
