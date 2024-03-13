#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FakeReloginState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FakeReloginState"));
	}

	template <typename T = ITriggerTransition*> T& _stateMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Transition*> T& _transition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T Enter(Transition* transition) {
		return ((T (*)(FakeReloginState*, Transition*))(Il2CppBase() + 0x16927E0))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(Transition* transition) {
		return ((T (*)(FakeReloginState*, Transition*))(Il2CppBase() + 0x169283C))(this, transition);
	}
	template <typename T = void> T SetStateMachine(ITriggerTransition* stateMachine) {
		return ((T (*)(FakeReloginState*, ITriggerTransition*))(Il2CppBase() + 0x16928B4))(this, stateMachine);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(FakeReloginState*, float))(Il2CppBase() + 0x16928BC))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(FakeReloginState*))(Il2CppBase() + 0x1692974))(this);
	}

};

