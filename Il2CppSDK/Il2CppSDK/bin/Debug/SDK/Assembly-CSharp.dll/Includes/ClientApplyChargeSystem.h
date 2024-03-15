#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientApplyChargeSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientApplyChargeSystem"));
	}

	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<ActionEntity*>*& _actions() {
		return *(IGroup1<ActionEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientApplyChargeSystem*))(Il2CppBase() + 0x191124C))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientApplyChargeSystem*))(Il2CppBase() + 0x19113D0))(this);
	}
	template <typename R = bool> R MoveToEntity(GameEntity* actor, GameEntity* target, float speed, float minDistance, int64_t now) {
		return ((R (*)(ClientApplyChargeSystem*, GameEntity*, GameEntity*, float, float, int64_t))(Il2CppBase() + 0x1911B24))(this, actor, target, speed, minDistance, now);
	}

};

