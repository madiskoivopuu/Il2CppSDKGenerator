#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILastDamagerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILastDamagerEntity"));
	}


	template <typename R = LastDamagerComponent*> R get_lastDamager() {
		return ((R (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasLastDamager() {
		return ((R (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(ILastDamagerEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R ReplaceLastDamager(DamageStatType* newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((R (*)(ILastDamagerEntity*, DamageStatType*, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename R = void> R RemoveLastDamager() {
		return ((R (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

