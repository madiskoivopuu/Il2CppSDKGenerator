#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IState"));
	}


	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(IState*, Transition*))(Il2CppBase() + 0x0))(this, transition);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(IState*, Transition*))(Il2CppBase() + 0x0))(this, transition);
	}
	template <typename R = void> R SetStateMachine(ITriggerTransition* stateMachine) {
		return ((R (*)(IState*, ITriggerTransition*))(Il2CppBase() + 0x0))(this, stateMachine);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(IState*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(IState*))(Il2CppBase() + 0x0))(this);
	}

};

