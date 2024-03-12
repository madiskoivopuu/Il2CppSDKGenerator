#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestroyActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(DestroyActionSystem*, void*))(Il2CppBase() + 0xEBC2C4))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(DestroyActionSystem*, uintptr_t))(Il2CppBase() + 0xEBC390))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(DestroyActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0xEBC3AC))(this, actions);
	}

};

}
