#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatMagicProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicProcessor"));
	}

	template <typename R = RepeatMagicComponent*> R& CurrentRepeatMagicComponent() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = MagicEntity*> R& CurrentMagic() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = GameEntity*> R& CurrentCenter() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = ICommonContexts*> R& World() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = bool> R ITargetProcessor_ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((R (*)(RepeatMagicProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E0FC))(this, actor, target);
	}

};

