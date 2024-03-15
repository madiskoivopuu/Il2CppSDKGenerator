#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SplashTargetProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SplashTargetProcessor"));
	}

	template <typename R = SplashComponent*> R& CurrentSplashComponent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = MagicEntity*> R& CurrentSplash() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GameEntity*> R& CurrentSplashCenter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ICommonContexts*> R& World() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = bool> R ITargetProcessor_ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((R (*)(SplashTargetProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E3A4))(this, actor, target);
	}

};

