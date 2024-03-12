#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseActionCondition" 

class InteractionConditionComponent: BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractionConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(InteractionConditionComponent*, uintptr_t))(Il2CppBase() + 0x146B020))(this, target);
	}

};

}
