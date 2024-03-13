#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepeatMagicProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepeatMagicProcessor"));
	}

	template <typename T = RepeatMagicComponent*> T& CurrentRepeatMagicComponent() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = MagicEntity*> T& CurrentMagic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = GameEntity*> T& CurrentCenter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = ICommonContexts*> T& World() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T ITargetProcessor_ProcessTarget(GameEntity* actor, GameEntity* target) {
		return ((T (*)(RepeatMagicProcessor*, GameEntity*, GameEntity*))(Il2CppBase() + 0x229E0FC))(this, actor, target);
	}

};

