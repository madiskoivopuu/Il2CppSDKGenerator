#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDamageComponent"));
	}

	template <typename T = Nullable1float>*> T& Coef() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1float>*> T& LifeSteal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = DamageType*> T& AddDamageType() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ChangeDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA1E0))(this, target);
	}

};

