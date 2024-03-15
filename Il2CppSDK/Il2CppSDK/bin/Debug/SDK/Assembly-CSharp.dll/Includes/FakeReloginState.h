#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FakeReloginState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FakeReloginState"));
	}

	template <typename R = ITriggerTransition*> R& _stateMachine() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Transition*> R& _transition() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = uintptr_t> R Enter(Transition* transition) {
		return ((R (*)(FakeReloginState*, Transition*))(Il2CppBase() + 0x16927E0))(this, transition);
	}
	template <typename R = uintptr_t> R Exit(Transition* transition) {
		return ((R (*)(FakeReloginState*, Transition*))(Il2CppBase() + 0x169283C))(this, transition);
	}
	template <typename R = void> R SetStateMachine(ITriggerTransition* stateMachine) {
		return ((R (*)(FakeReloginState*, ITriggerTransition*))(Il2CppBase() + 0x16928B4))(this, stateMachine);
	}
	template <typename R = void> R OnUpdate(float deltaTime) {
		return ((R (*)(FakeReloginState*, float))(Il2CppBase() + 0x16928BC))(this, deltaTime);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(FakeReloginState*))(Il2CppBase() + 0x1692974))(this);
	}

};

