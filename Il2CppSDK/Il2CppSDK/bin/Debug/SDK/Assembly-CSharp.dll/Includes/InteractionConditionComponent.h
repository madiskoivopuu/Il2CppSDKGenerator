#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseActionCondition.h" 

class InteractionConditionComponent : public BaseActionCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InteractionConditionComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x2C);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(InteractionConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x146B020))(this, target);
	}

};

