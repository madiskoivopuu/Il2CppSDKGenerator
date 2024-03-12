#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GlobalMapConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GlobalMapConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(GlobalMapConditionComponent*, uintptr_t))(Il2CppBase() + 0x12D782C))(this, target);
	}

};

}
