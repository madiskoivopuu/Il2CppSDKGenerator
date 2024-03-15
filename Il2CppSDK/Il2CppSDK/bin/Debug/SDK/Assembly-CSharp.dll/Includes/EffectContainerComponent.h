#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EffectContainerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectContainerComponent"));
	}

	template <typename R = Il2CppArray<Item>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EffectContainerComponent*, Il2CppObject*))(Il2CppBase() + 0x1A9DFF4))(this, target);
	}
	template <typename R = Il2CppString*> R GetEffect(ICommonContexts* world, GameEntity* source, GameEntity* target) {
		return ((R (*)(EffectContainerComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1A9E08C))(this, world, source, target);
	}

};

