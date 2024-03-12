#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageTypeHelper"));
	}


	template <typename T = uintptr_t> static T GetDamageType(uintptr_t damageTypeEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x164B0F8))(0, damageTypeEntity);
	}
	template <typename T = bool> static T Is(uintptr_t damageType, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x164B21C))(0, damageType, flags);
	}
	template <typename T = bool> static T Any(uintptr_t damageType, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x164C964))(0, damageType, flags);
	}

};

}
