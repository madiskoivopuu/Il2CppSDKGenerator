#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActorTriggerConditionsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorTriggerConditionsComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1float>*> T& HpCoefLess() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& HpCoefMore() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ActorTriggerConditionsComponent*, Il2CppObject*))(Il2CppBase() + 0x18AF074))(this, target);
	}
	template <typename T = bool> T IsValid(ICommonContexts* world, GameEntity* actor, GameEntity* source) {
		return ((T (*)(ActorTriggerConditionsComponent*, ICommonContexts*, GameEntity*, GameEntity*))(Il2CppBase() + 0x18AF130))(this, world, actor, source);
	}

};

