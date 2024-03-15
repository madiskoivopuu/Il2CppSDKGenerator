#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MultiplierByConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiplierByConditionComponent"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = float> R GetMultiplier(ICommonContexts* world, GameEntity* target) {
		return ((R (*)(MultiplierByConditionComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1558310))(this, world, target);
	}
	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(MultiplierByConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15583E8))(this, target);
	}

};

