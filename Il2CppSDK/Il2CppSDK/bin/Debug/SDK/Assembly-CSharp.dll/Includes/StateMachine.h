#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateMachine"));
	}

	template <typename T = uintptr_t> T& Logger() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CurrentState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _states() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _currentTransitionEnumerator() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _nextstate() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_Logger() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x148EE8C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentState() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x148EE94))(this);
	}
	template <typename T = void> T set_CurrentState(uintptr_t value) {
		return ((T (*)(StateMachine*, uintptr_t))(Il2CppBase() + 0x148EE9C))(this, value);
	}
	template <typename T = void> T AddState(int32_t transitionId, uintptr_t state) {
		return ((T (*)(StateMachine*, int32_t, uintptr_t))(Il2CppBase() + 0x148EF44))(this, transitionId, state);
	}
	template <typename T = void> T TriggerTransition(uintptr_t transition) {
		return ((T (*)(StateMachine*, uintptr_t))(Il2CppBase() + 0x148F030))(this, transition);
	}
	template <typename T = void> T Update(float deltaTime) {
		return ((T (*)(StateMachine*, float))(Il2CppBase() + 0x148F180))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(StateMachine*))(Il2CppBase() + 0x148F36C))(this);
	}

};

}
