#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTriggerComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = Il2CppString*> R GetName(ICommonContexts* world, GameEntity* actor, GameEntity* target) {
		return ((R (*)(ApplyTriggerComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1895828))(this, world, actor, target);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x1895900))(this, target);
	}

};

