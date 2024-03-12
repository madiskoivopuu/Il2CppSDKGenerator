#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionRotationStartSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionRotationStartSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(ActionRotationStartSystem*, void*))(Il2CppBase() + 0x18AC5A0))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(ActionRotationStartSystem*, uintptr_t))(Il2CppBase() + 0x18AC7C4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(ActionRotationStartSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x18AC81C))(this, actions);
	}

};

}
