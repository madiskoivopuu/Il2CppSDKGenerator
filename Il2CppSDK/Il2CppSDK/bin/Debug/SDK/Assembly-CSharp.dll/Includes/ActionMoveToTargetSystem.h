#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionMoveToTargetSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionMoveToTargetSystem"));
	}

	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R Execute() {
		return ((R (*)(ActionMoveToTargetSystem*))(Il2CppBase() + 0x18A96C4))(this);
	}
	template <typename R = GameEntity*> R SetupMoveToTarget(GameEntity* target, GameEntity* actor, int32_t actionId) {
		return ((R (*)(ActionMoveToTargetSystem*, GameEntity*, GameEntity*, int32_t))(Il2CppBase() + 0x18A9D4C))(this, target, actor, actionId);
	}

};

