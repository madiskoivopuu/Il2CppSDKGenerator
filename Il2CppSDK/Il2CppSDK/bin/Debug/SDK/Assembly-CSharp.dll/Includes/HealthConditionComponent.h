#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthConditionComponent"));
	}

	 Nullable1<bool>*& Full() {
		return *(Nullable1<bool>**)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& MinCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x14);
	}
	 Nullable1<float>*& MaxCoef() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x1C);
	}
	 Nullable1<float>*& MinValue() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x24);
	}
	 Nullable1<float>*& MaxValue() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(HealthConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x128B100))(this, target);
	}

};

