#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAnimationDelayActionSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAnimationDelayActionSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T GetTrigger(void* context) {
		return ((T (*)(StopAnimationDelayActionSystem*, void*))(Il2CppBase() + 0x1404518))(this, context);
	}
	template <typename T = bool> T Filter(uintptr_t action) {
		return ((T (*)(StopAnimationDelayActionSystem*, uintptr_t))(Il2CppBase() + 0x14045E4))(this, action);
	}
	template <typename T = void> T Execute(Il2CppList<uintptr_t>* actions) {
		return ((T (*)(StopAnimationDelayActionSystem*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1404684))(this, actions);
	}

};

}
