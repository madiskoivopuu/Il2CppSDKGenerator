#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IState"));
	}


	template <typename T = uintptr_t> T Enter(Transition* transition) {
		return ((T (*)(IState*, Transition*))(Il2CppBase() + 0x0))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(IState*, Transition*))(Il2CppBase() + 0x0))(this, transition);
	}
	template <typename T = void> T SetStateMachine(ITriggerTransition* stateMachine) {
		return ((T (*)(IState*, ITriggerTransition*))(Il2CppBase() + 0x0))(this, stateMachine);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(IState*, float))(Il2CppBase() + 0x0))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(IState*))(Il2CppBase() + 0x0))(this);
	}

};

