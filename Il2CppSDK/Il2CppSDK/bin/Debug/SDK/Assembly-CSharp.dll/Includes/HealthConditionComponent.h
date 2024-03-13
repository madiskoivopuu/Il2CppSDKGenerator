#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthConditionComponent"));
	}

	template <typename T = Nullable1bool>*> T& Full() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Nullable1float>*> T& MinCoef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1float>*> T& MaxCoef() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Nullable1float>*> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Nullable1float>*> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(HealthConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x128B100))(this, target);
	}

};

