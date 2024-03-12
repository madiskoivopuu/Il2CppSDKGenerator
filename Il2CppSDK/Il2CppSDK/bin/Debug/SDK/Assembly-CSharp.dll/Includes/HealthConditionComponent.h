#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HealthConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HealthConditionComponent"));
	}

	template <typename T = void*> T& Full() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MinCoef() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& MaxCoef() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& MinValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& MaxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(HealthConditionComponent*, uintptr_t))(Il2CppBase() + 0x128B100))(this, target);
	}

};

}
