#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageStatHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageStatHelper"));
	}


	template <typename R = DamageStat*> static R GetDamageStat(GameEntity* entity, ICommonContexts* world, Il2CppString* itemName) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, Il2CppString*))(Il2CppBase() + 0x164BDBC))(0, entity, world, itemName);
	}
	template <typename R = void> static R ReplaceDamageStat(IDamageStatEntity* entity, ICommonContexts* world, GameEntity* actor, Il2CppString* item) {
		return ((R (*)(void *, IDamageStatEntity*, ICommonContexts*, GameEntity*, Il2CppString*))(Il2CppBase() + 0x164C130))(0, entity, world, actor, item);
	}
	template <typename R = void> static R ReplaceDamageStat_1(IDamageStatEntity* entity, DamageStat* damageStat) {
		return ((R (*)(void *, IDamageStatEntity*, DamageStat*))(Il2CppBase() + 0x164C6BC))(0, entity, damageStat);
	}
	template <typename R = DamageStatType*> static R GetLastDamagerType(GameEntity* entity) {
		return ((R (*)(void *, GameEntity*))(Il2CppBase() + 0x164C7F4))(0, entity);
	}
	template <typename R = bool> static R SetLastDamager(GameEntity* entity, DamageStat* damageStat, int64_t now) {
		return ((R (*)(void *, GameEntity*, DamageStat*, int64_t))(Il2CppBase() + 0x164C840))(0, entity, damageStat, now);
	}

};

