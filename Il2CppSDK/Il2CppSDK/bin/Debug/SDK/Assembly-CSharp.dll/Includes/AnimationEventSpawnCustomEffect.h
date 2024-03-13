#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEventSpawnCustomEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventSpawnCustomEffect"));
	}


	template <typename T = void> T SpawnCustomEffect(uintptr_t animationEvent) {
		return ((T (*)(AnimationEventSpawnCustomEffect*, uintptr_t))(Il2CppBase() + 0x188B524))(this, animationEvent);
	}

};

