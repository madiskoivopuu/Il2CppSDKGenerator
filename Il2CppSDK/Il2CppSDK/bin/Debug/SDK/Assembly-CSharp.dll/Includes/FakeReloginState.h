#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FakeReloginState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FakeReloginState"));
	}

	template <typename T = uintptr_t> T& _stateMachine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _transition() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T Enter(uintptr_t transition) {
		return ((T (*)(FakeReloginState*, uintptr_t))(Il2CppBase() + 0x16927E0))(this, transition);
	}
	template <typename T = uintptr_t> T Exit(uintptr_t transition) {
		return ((T (*)(FakeReloginState*, uintptr_t))(Il2CppBase() + 0x169283C))(this, transition);
	}
	template <typename T = void> T SetStateMachine(uintptr_t stateMachine) {
		return ((T (*)(FakeReloginState*, uintptr_t))(Il2CppBase() + 0x16928B4))(this, stateMachine);
	}
	template <typename T = void> T OnUpdate(float deltaTime) {
		return ((T (*)(FakeReloginState*, float))(Il2CppBase() + 0x16928BC))(this, deltaTime);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(FakeReloginState*))(Il2CppBase() + 0x1692974))(this);
	}

};

}
