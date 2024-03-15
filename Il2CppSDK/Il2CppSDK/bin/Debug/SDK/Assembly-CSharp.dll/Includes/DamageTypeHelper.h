#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageTypeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageTypeHelper"));
	}


	template <typename R = DamageType> static R GetDamageType(IDamageTypeEntity* damageTypeEntity) {
		return ((R (*)(void *, IDamageTypeEntity*))(Il2CppBase() + 0x164B0F8))(0, damageTypeEntity);
	}
	template <typename R = bool> static R Is(DamageType damageType, DamageType flags) {
		return ((R (*)(void *, DamageType, DamageType))(Il2CppBase() + 0x164B21C))(0, damageType, flags);
	}
	template <typename R = bool> static R Any(DamageType damageType, DamageType flags) {
		return ((R (*)(void *, DamageType, DamageType))(Il2CppBase() + 0x164C964))(0, damageType, flags);
	}

};

