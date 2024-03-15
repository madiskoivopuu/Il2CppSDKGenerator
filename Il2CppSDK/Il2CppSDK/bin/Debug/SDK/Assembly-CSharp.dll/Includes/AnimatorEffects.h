#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimatorEffects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimatorEffects"));
	}

	template <typename R = Il2CppArray<Effect*>*> R& _effects() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = HideHelper*> R& _hideHelper() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = AnimatorEventsProxy*> R& _proxy() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Init(HideHelper* hideHelper) {
		return ((R (*)(AnimatorEffects*, HideHelper*))(Il2CppBase() + 0x188D304))(this, hideHelper);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(AnimatorEffects*))(Il2CppBase() + 0x188D30C))(this);
	}
	template <typename R = void> R Raise(uintptr_t animationEvent) {
		return ((R (*)(AnimatorEffects*, uintptr_t))(Il2CppBase() + 0x188D524))(this, animationEvent);
	}
	template <typename R = void> R SpawnEffect(Effect* effect) {
		return ((R (*)(AnimatorEffects*, Effect*))(Il2CppBase() + 0x188D650))(this, effect);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(AnimatorEffects*))(Il2CppBase() + 0x188D848))(this);
	}

};

