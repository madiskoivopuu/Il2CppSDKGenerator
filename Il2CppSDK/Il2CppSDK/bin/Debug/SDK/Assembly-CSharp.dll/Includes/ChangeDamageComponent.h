#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeDamageComponent"));
	}

	 Nullable1<float>*& Coef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& LifeSteal() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x18);
	}
	template <typename R = DamageType> R& AddDamageType() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ChangeDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x13EA1E0))(this, target);
	}

};

