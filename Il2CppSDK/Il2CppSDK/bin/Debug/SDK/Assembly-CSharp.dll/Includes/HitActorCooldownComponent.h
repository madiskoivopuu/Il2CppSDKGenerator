#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseApplyCoodownComponent.h" 

class HitActorCooldownComponent : public BaseApplyCoodownComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HitActorCooldownComponent"));
	}

	template <typename R = bool> R& Killed() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(HitActorCooldownComponent*, Il2CppObject*))(Il2CppBase() + 0x1C5342C))(this, targetObject);
	}

};

