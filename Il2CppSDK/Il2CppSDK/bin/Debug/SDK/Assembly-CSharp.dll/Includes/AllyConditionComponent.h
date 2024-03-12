#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllyConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllyConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(AllyConditionComponent*, uintptr_t))(Il2CppBase() + 0x129E420))(this, target);
	}

};

}
