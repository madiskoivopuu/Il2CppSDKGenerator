#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatsHelper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _data() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Nullable1float>*> static T GetStatValue(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156EB10))(0, player, world, type);
	}
	template <typename T = bool> static T HasStatBuff(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156F09C))(0, player, world, type);
	}
	template <typename T = bool> static T HasStatDebuff(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156EF4C))(0, player, world, type);
	}

};

