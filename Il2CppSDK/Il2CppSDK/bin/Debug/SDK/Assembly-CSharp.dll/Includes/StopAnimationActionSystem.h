#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StopAnimationActionSystem*, void*))(Il2CppBase() + 0x1496E0C))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(StopAnimationActionSystem*, uintptr_t))(Il2CppBase() + 0x1496ED8))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(StopAnimationActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1496F38))(this, actions);
	}

};

}
