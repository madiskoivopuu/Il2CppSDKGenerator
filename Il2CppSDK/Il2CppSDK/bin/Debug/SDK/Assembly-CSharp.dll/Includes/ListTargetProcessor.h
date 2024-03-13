#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListTargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListTargetProcessor"));
	}

	template <typename T = Il2CppList<GameEntity*>*> T& Result() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((T (*)(ListTargetProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E064))(this, actor, target);
	}

};

