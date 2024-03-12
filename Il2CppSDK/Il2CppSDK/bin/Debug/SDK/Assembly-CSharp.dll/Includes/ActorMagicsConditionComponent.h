#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "MagicCondition" 

class ActorMagicsConditionComponent: MagicCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActorMagicsConditionComponent"));
	}

	template <typename T = void*> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ActorMagicsConditionComponent*, uintptr_t))(Il2CppBase() + 0x18AEFB0))(this, target);
	}

};

}
