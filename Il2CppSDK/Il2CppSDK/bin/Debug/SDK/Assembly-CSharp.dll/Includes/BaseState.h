#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseState"));
	}

	template <typename R = ITriggerTransition*> R& _stateMachine() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& _enumerator() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& OnStateEnter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& OnStateExit() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R add_OnStateEnter(uintptr_t value) {
		return ((R (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670CB4))(this, value);
	}
	template <typename R = void> R remove_OnStateEnter(uintptr_t value) {
		return ((R (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670D54))(this, value);
	}
	template <typename R = void> R add_OnStateExit(uintptr_t value) {
		return ((R (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670DF4))(this, value);
	}
	template <typename R = void> R remove_OnStateExit(uintptr_t value) {
		return ((R (*)(BaseState*, uintptr_t))(Il2CppBase() + 0x1670E94))(this, value);
	}
	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(BaseState*, Transition*))(Il2CppBase() + 0x1670F34))(this, transition);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(BaseState*, Transition*))(Il2CppBase() + 0x1670FAC))(this, transition);
	}
	template <typename R = void> R SetStateMachine(ITriggerTransition* stateMachine) {
		return ((R (*)(BaseState*, ITriggerTransition*))(Il2CppBase() + 0x1671024))(this, stateMachine);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(BaseState*, float))(Il2CppBase() + 0x167102C))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(BaseState*))(Il2CppBase() + 0x1671030))(this);
	}
	template <typename R = uintptr_t> R WaitForSeconds(float time) {
		return ((R (*)(BaseState*, float))(Il2CppBase() + 0x1671034))(this, time);
	}

};

