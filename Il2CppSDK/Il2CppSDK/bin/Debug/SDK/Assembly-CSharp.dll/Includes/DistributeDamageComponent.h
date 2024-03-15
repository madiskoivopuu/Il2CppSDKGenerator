#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistributeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistributeDamageComponent"));
	}

	 Nullable1float>*& Coef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x10);
	}
	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& HitEffects() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DistributeDamageComponent*, Il2CppObject*))(Il2CppBase() + 0x13027A8))(this, target);
	}

};

