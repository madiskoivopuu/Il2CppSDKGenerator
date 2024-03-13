#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEventSpawnEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventSpawnEffect"));
	}

	template <typename T = uintptr_t> T& Effect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& DestroyAfter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& SpawnAsChild() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& SpawnAtSocket() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& Socket() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T SpawnEffect() {
		return ((T (*)(AnimationEventSpawnEffect*))(Il2CppBase() + 0x188B7BC))(this);
	}

};

