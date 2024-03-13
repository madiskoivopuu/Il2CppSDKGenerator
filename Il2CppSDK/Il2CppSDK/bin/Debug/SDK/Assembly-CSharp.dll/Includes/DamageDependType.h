#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageDependType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageDependType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DamageDependType*> static T& None() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnActorWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnParentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnTargetHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnTargetMaxHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnSourceDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnSourceOrActorWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnActorHealth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnParentWeaponDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DamageDependType*> static T& OnHpHeal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

