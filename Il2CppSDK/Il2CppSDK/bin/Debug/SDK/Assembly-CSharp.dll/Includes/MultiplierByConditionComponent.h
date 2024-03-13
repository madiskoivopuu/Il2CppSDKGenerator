#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MultiplierByConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiplierByConditionComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T GetMultiplier(ICommonContexts* world, GameEntity* target) {
		return ((T (*)(MultiplierByConditionComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x1558310))(this, world, target);
	}
	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(MultiplierByConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x15583E8))(this, target);
	}

};

