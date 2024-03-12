#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipExtension"));
	}


	template <typename T = int64_t> static T GetTeamId(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x139E5CC))(0, entity, world);
	}
	template <typename T = bool> static T CanAggro(uintptr_t entity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x139EA20))(0, entity, world, target);
	}
	template <typename T = bool> static T IsTeammate(uintptr_t entity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x139ECA0))(0, entity, world, target);
	}
	template <typename T = bool> static T IsEnemy(uintptr_t entity, uintptr_t world, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x139EF28))(0, entity, world, target);
	}
	template <typename T = void> static T SetTeamId(uintptr_t entity, uintptr_t world, int64_t teamId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x139F1D4))(0, entity, world, teamId);
	}

};

}
