#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CooldownConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CooldownConditionComponent"));
	}

	template <typename R = bool> R& Has() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<int32_t>*& ArmingIndex() {
		return *(Nullable1<int32_t>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(CooldownConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x13354F8))(this, target);
	}
	template <typename R = bool> R Check(ICommonContexts* world, GameEntity* target) {
		return ((R (*)(CooldownConditionComponent*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x13355B4))(this, world, target);
	}

};

