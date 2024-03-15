#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthConditionComponent"));
	}

	 Nullable1bool>*& Full() {
		return *(Nullable1bool>**)((uintptr_t)this + 0x10);
	}
	 Nullable1float>*& MinCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x14);
	}
	 Nullable1float>*& MaxCoef() {
		return *(Nullable1float>**)((uintptr_t)this + 0x1C);
	}
	 Nullable1float>*& MinValue() {
		return *(Nullable1float>**)((uintptr_t)this + 0x24);
	}
	 Nullable1float>*& MaxValue() {
		return *(Nullable1float>**)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(HealthConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x128B100))(this, target);
	}

};

