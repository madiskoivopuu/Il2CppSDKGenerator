#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActorTriggerConditionsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorTriggerConditionsComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& Names() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1float>*& HpCoefLess() {
		return *(Nullable1float>**)((uintptr_t)this + 0x20);
	}
	 Nullable1float>*& HpCoefMore() {
		return *(Nullable1float>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ActorTriggerConditionsComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF074))(this, target);
	}
	template <typename R = bool> R IsValid(ICommonContexts* world, GameEntity* actor, GameEntity* source) {
		return ((R (*)(ActorTriggerConditionsComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x18AF130))(this, world, actor, source);
	}

};

