#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageTypeHelper"));
	}


	template <typename T = DamageType*> static T GetDamageType(IDamageTypeEntity* damageTypeEntity) {
		return ((T (*)(void *, IDamageTypeEntity*))(Il2CppBase() + 0x164B0F8))(0, damageTypeEntity);
	}
	template <typename T = bool> static T Is(DamageType* damageType, DamageType* flags) {
		return ((T (*)(void *, DamageType*, DamageType*))(Il2CppBase() + 0x164B21C))(0, damageType, flags);
	}
	template <typename T = bool> static T Any(DamageType* damageType, DamageType* flags) {
		return ((T (*)(void *, DamageType*, DamageType*))(Il2CppBase() + 0x164C964))(0, damageType, flags);
	}

};

