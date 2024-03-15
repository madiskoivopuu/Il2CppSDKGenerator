#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistributeMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistributeMagicComponent"));
	}

	 Nullable1<float>*& DurationCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& DamageCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x18);
	}
	template <typename R = TargetsSelector*> R& Selector() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DistributeMagicComponent*, Il2CppObject*))(Il2CppBase() + 0x1302860))(this, target);
	}

};

