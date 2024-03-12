#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorEffects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEffects"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _effects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _hideHelper() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _proxy() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(uintptr_t hideHelper) {
		return ((T (*)(AnimatorEffects*, uintptr_t))(Il2CppBase() + 0x188D304))(this, hideHelper);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AnimatorEffects*))(Il2CppBase() + 0x188D30C))(this);
	}
	template <typename T = void> T Raise(uintptr_t animationEvent) {
		return ((T (*)(AnimatorEffects*, uintptr_t))(Il2CppBase() + 0x188D524))(this, animationEvent);
	}
	template <typename T = void> T SpawnEffect(uintptr_t effect) {
		return ((T (*)(AnimatorEffects*, uintptr_t))(Il2CppBase() + 0x188D650))(this, effect);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AnimatorEffects*))(Il2CppBase() + 0x188D848))(this);
	}

};

}
