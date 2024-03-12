#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AoeConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AoeConditionComponent"));
	}

	template <typename T = uintptr_t> T& Selector() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AoeConditionComponent*, uintptr_t))(Il2CppBase() + 0x188EC74))(this, target);
	}

};

}
