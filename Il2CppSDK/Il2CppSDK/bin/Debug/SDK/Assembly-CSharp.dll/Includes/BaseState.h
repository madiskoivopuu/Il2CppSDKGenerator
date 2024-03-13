#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseState"));
	}

	template <typename T = ITriggerTransition*> T& _stateMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _enumerator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& OnStateEnter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OnStateExit() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T add_OnStateEnter(uintptr_t value) {
		return ((T (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670CB4))(this, value);
	}
	template <typename T = void> T remove_OnStateEnter(uintptr_t value) {
		return ((T (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670D54))(this, value);
	}
	template <typename T = void> T add_OnStateExit(uintptr_t value) {
		return ((T (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670DF4))(this, value);
	}
	template <typename T = void> T remove_OnStateExit(uintptr_t value) {
		return ((T (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670E94))(this, value);
	}
	template <typename T = uintptr_t> T Enter(Transition* transition) {
		return ((T (*)(BaseState*, Transition*))(Il2CppBase() + 0x1670F34))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(BaseState*, Transition*))(Il2CppBase() + 0x1670FAC))(this, transition);
	}
	template <typename T = void> T SetStateMachine(ITriggerTransition* stateMachine) {
		return ((T (*)(BaseState*, ITriggerTransition*))(Il2CppBase() + 0x1671024))(this, stateMachine);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(BaseState*, float))(Il2CppBase() + 0x167102C))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(BaseState*))(Il2CppBase() + 0x1671030))(this);
	}
	template <typename T = uintptr_t> T WaitForSeconds(float time) {
		return ((T (*)(BaseState*, float))(Il2CppBase() + 0x1671034))(this, time);
	}

};

