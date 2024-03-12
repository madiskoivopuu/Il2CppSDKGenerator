#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageAlertHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageAlertHelper"));
	}


	template <typename T = uintptr_t> static T GetDamageAlertWindow(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x164A8C4))(0, manager);
	}
	template <typename T = void> static T ApplyDamage(uintptr_t manager, uintptr_t entity) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x164A998))(0, manager, entity);
	}

};

}
