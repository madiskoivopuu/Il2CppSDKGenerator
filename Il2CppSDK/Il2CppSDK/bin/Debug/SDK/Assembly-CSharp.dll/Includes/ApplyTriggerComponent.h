#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyTriggerComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyTriggerComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppString*> T GetName(ICommonContexts* world, GameEntity* actor, GameEntity* target) {
		return ((T (*)(ApplyTriggerComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x1895828))(this, world, actor, target);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyTriggerComponent*, Il2CppObject*))(Il2CppBase() + 0x1895900))(this, target);
	}

};

