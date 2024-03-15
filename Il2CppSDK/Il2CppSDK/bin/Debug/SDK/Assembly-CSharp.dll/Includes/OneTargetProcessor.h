#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OneTargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OneTargetProcessor"));
	}

	template <typename R = GameEntity*> R& Result() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((R (*)(OneTargetProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E0D4))(this, actor, target);
	}

};

