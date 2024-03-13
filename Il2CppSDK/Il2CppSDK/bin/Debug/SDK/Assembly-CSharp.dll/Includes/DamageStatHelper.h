#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageStatHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStatHelper"));
	}


	template <typename T = DamageStat*> static T GetDamageStat(GameEntity* entity, ICommonContexts* world, Il2CppString* itemName) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x164BDBC))(0, entity, world, itemName);
	}
	template <typename T = void> static T ReplaceDamageStat(IDamageStatEntity* entity, ICommonContexts* world, GameEntity* actor, Il2CppString* item) {
		return ((T (*)(void *, IDamageStatEntity*, ICommonContexts*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x164C130))(0, entity, world, actor, item);
	}
	template <typename T = void> static T ReplaceDamageStat_1(IDamageStatEntity* entity, DamageStat* damageStat) {
		return ((T (*)(void *, IDamageStatEntity*, DamageStat*))(Il2CppBase() + 0x164C6BC))(0, entity, damageStat);
	}
	template <typename T = DamageStatType*> static T GetLastDamagerType(GameEntity* entity) {
		return ((T (*)(void *, GameEntity*))(Il2CppBase() + 0x164C7F4))(0, entity);
	}
	template <typename T = bool> static T SetLastDamager(GameEntity* entity, DamageStat* damageStat, int64_t now) {
		return ((T (*)(void *, GameEntity*, DamageStat*, int64_t))(Il2CppBase() + 0x164C840))(0, entity, damageStat, now);
	}

};

