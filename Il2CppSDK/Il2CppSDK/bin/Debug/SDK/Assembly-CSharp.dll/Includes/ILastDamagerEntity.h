#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ILastDamagerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ILastDamagerEntity"));
	}


	template <typename T = uintptr_t> T get_lastDamager() {
		return ((T (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasLastDamager() {
		return ((T (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddLastDamager(uintptr_t newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(ILastDamagerEntity*, uintptr_t, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T ReplaceLastDamager(uintptr_t newType, int64_t newPlayerId, int64_t newTick, Il2CppString* newBlueprint) {
		return ((T (*)(ILastDamagerEntity*, uintptr_t, int64_t, int64_t, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newPlayerId, newTick, newBlueprint);
	}
	template <typename T = void> T RemoveLastDamager() {
		return ((T (*)(ILastDamagerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
