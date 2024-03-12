#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DurabilityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DurabilityHelper"));
	}


	template <typename T = bool> static T NeedClearStack(uintptr_t slot, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A971EC))(0, slot, world);
	}
	template <typename T = void*> static T GetDurabilityCoef(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A97330))(0, entity);
	}
	template <typename T = bool> static T SetDurabilityCoef(uintptr_t entity, void* coef) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x1A97488))(0, entity, coef);
	}
	template <typename T = void*> static T GetDurability(uintptr_t item, float durabilityCoef) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x1A976BC))(0, item, durabilityCoef);
	}
	template <typename T = void*> static T GetDurability_1(uintptr_t entity, uintptr_t itemContext) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, entity, itemContext);
	}
	template <typename T = bool> static T ChangeDurability(uintptr_t entity, uintptr_t itemContext, float delta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x0))(0, entity, itemContext, delta);
	}

};

}
