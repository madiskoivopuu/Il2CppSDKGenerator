#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StateMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StateMachine"));
	}

	template <typename R = ICommonLogger*> R& Logger() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = IState*> R& CurrentState() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppDictionary<int32_t, IState*>*& _states() {
		return *(Il2CppDictionary<int32_t, IState*>**)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _currentTransitionEnumerator() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = IState*> R& _nextstate() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = ICommonLogger*> R get_Logger() {
		return ((R (*)(StateMachine*))(Il2CppBase() + 0x148EE8C))(this);
	}
	template <typename R = IState*> R get_CurrentState() {
		return ((R (*)(StateMachine*))(Il2CppBase() + 0x148EE94))(this);
	}
	template <typename R = void> R set_CurrentState(IState* value) {
		return ((R (*)(StateMachine*, IState*))(Il2CppBase() + 0x148EE9C))(this, value);
	}
	template <typename R = void> R AddState(int32_t transitionId, IState* state) {
		return ((R (*)(StateMachine*, int32_t, IState*))(Il2CppBase() + 0x148EF44))(this, transitionId, state);
	}
	template <typename R = void> R TriggerTransition(Transition* transition) {
		return ((R (*)(StateMachine*, Transition*))(Il2CppBase() + 0x148F030))(this, transition);
	}
	template <typename R = void> R Update(float deltaTime) {
		return ((R (*)(StateMachine*, float))(Il2CppBase() + 0x148F180))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(StateMachine*))(Il2CppBase() + 0x148F36C))(this);
	}

};

