#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipExtension"));
	}


	template <typename T = int64_t> static T GetTeamId(IClanGuildEntity* entity, ICommonContexts* world) {
		return ((T (*)(void *, IClanGuildEntity*, ICommonContexts*))(Il2CppBase() + 0x139E5CC))(0, entity, world);
	}
	template <typename T = bool> static T CanAggro(GameEntity* entity, ICommonContexts* world, GameEntity* target) {
		return ((T (*)(void *, GameEntity*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0x139EA20))(0, entity, world, target);
	}
	template <typename T = bool> static T IsTeammate(IClanGuildEntity* entity, ICommonContexts* world, IClanGuildEntity* target) {
		return ((T (*)(void *, IClanGuildEntity*, ICommonContexts*, IClanGuildEntity*))(Il2CppBase() + 0x139ECA0))(0, entity, world, target);
	}
	template <typename T = bool> static T IsEnemy(IClanGuildEntity* entity, ICommonContexts* world, IClanGuildEntity* target) {
		return ((T (*)(void *, IClanGuildEntity*, ICommonContexts*, IClanGuildEntity*))(Il2CppBase() + 0x139EF28))(0, entity, world, target);
	}
	template <typename T = void> static T SetTeamId(IClanGuildEntity* entity, ICommonContexts* world, int64_t teamId) {
		return ((T (*)(void *, IClanGuildEntity*, ICommonContexts*, int64_t))(Il2CppBase() + 0x139F1D4))(0, entity, world, teamId);
	}

};

