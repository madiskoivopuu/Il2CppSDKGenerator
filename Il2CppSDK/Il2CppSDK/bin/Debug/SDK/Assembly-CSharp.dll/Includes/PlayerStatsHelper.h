#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatsHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatsHelper"));
	}

	template <typename R = Il2CppArray<Info*>*> static R& _data() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static Nullable1float>* GetStatValue(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((Nullable1float>* (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156EB10))(0, player, world, type);
	}
	template <typename R = bool> static R HasStatBuff(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156F09C))(0, player, world, type);
	}
	template <typename R = bool> static R HasStatDebuff(GameEntity* player, ICommonContexts* world, PlayerStatType* type) {
		return ((R (*)(void *, GameEntity*, ICommonContexts*, PlayerStatType*))(Il2CppBase() + 0x156EF4C))(0, player, world, type);
	}

};

