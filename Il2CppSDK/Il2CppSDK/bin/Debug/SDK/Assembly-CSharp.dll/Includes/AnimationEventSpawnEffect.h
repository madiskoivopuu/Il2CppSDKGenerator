#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimationEventSpawnEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimationEventSpawnEffect"));
	}

	template <typename R = uintptr_t> R& Effect() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& DestroyAfter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& SpawnAsChild() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& SpawnAtSocket() {
		return *(R*)((uintptr_t)this + 0x25);
	}
	template <typename R = uintptr_t> R& Socket() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R SpawnEffect() {
		return ((R (*)(AnimationEventSpawnEffect*))(Il2CppBase() + 0x188B7BC))(this);
	}

};

