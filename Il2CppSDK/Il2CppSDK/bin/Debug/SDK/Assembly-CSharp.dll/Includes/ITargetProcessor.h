#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ITargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ITargetProcessor"));
	}


	template <typename R = bool> R ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((R (*)(ITargetProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x0))(this, actor, target);
	}

};

