#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartItemActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartItemActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StartItemActionSystem*, void*))(Il2CppBase() + 0x148CF38))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(StartItemActionSystem*, uintptr_t))(Il2CppBase() + 0x148D004))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(StartItemActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x148D060))(this, actions);
	}

};

}
