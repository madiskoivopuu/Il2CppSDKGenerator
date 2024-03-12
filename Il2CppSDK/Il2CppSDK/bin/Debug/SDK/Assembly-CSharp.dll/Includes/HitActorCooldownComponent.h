#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyCoodownComponent" 

class HitActorCooldownComponent: BaseApplyCoodownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitActorCooldownComponent"));
	}

	template <typename T = bool> T& Killed() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(HitActorCooldownComponent*, uintptr_t))(Il2CppBase() + 0x1C5342C))(this, targetObject);
	}

};

}
