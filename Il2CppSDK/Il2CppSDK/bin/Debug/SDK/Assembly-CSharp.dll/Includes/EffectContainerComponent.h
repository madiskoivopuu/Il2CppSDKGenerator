#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectContainerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectContainerComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(EffectContainerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A9DFF4))(this, target);
	}
	template <typename T = Il2CppString*> T GetEffect(ICommonContexts* world, GameEntity* source, GameEntity* target) {
		return ((T (*)(EffectContainerComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1A9E08C))(this, world, source, target);
	}

};

