#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseActionCondition.h" 

class InteractionConditionComponent : public BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractionConditionComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(InteractionConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x146B020))(this, target);
	}

};

