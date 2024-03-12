#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageStatHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStatHelper"));
	}


	template <typename T = uintptr_t> static T GetDamageStat(uintptr_t entity, uintptr_t world, Il2CppString* itemName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x164BDBC))(0, entity, world, itemName);
	}
	template <typename T = void> static T ReplaceDamageStat(uintptr_t entity, uintptr_t world, uintptr_t actor, Il2CppString* item) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x164C130))(0, entity, world, actor, item);
	}
	template <typename T = void> static T ReplaceDamageStat_1(uintptr_t entity, uintptr_t damageStat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x164C6BC))(0, entity, damageStat);
	}
	template <typename T = uintptr_t> static T GetLastDamagerType(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x164C7F4))(0, entity);
	}
	template <typename T = bool> static T SetLastDamager(uintptr_t entity, uintptr_t damageStat, int64_t now) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x164C840))(0, entity, damageStat, now);
	}

};

}
