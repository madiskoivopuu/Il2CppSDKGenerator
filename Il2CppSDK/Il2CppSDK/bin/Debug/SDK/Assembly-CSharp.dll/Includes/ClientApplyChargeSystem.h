#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientApplyChargeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientApplyChargeSystem"));
	}

	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientApplyChargeSystem*))(Il2CppBase() + 0x191124C))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientApplyChargeSystem*))(Il2CppBase() + 0x19113D0))(this);
	}
	template <typename T = bool> T MoveToEntity(uintptr_t actor, uintptr_t target, float speed, float minDistance, int64_t now) {
		return ((T (*)(ClientApplyChargeSystem*, uintptr_t, uintptr_t, float, float, int64_t))(Il2CppBase() + 0x1911B24))(this, actor, target, speed, minDistance, now);
	}

};

}
