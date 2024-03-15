#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListTargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListTargetProcessor"));
	}

	 Il2CppList<GameEntity*>*& Result() {
		return *(Il2CppList<GameEntity*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = bool> R ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((R (*)(ListTargetProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E064))(this, actor, target);
	}

};

