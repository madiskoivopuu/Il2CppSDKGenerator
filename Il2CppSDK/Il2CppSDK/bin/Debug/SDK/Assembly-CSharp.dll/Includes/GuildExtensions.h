#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildExtensions"));
	}


	template <typename T = bool> static T AreGuildMembers(uintptr_t entity1, uintptr_t entity2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2408C))(0, entity1, entity2);
	}
	template <typename T = Il2CppString*> static T GetGuildName(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B24298))(0, entity, world);
	}
	template <typename T = bool> static T UpdateGuildTag(uintptr_t entity, uintptr_t guilds) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, entity, guilds);
	}
	template <typename T = Il2CppString*> static T GetGuildTag(uintptr_t entity, uintptr_t world) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B24484))(0, entity, world);
	}
	template <typename T = uintptr_t> static T GetGuildRole(uintptr_t entity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B2478C))(0, entity);
	}
	template <typename T = bool> static T IsOfficerOrLeader(uintptr_t role) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B248B0))(0, role);
	}
	template <typename T = bool> static T ReplaceGuildIfNeed(uintptr_t entity, int64_t newGuildId, bool removeOnZero) {
		return ((T (*)(void *, uintptr_t, int64_t, bool))(Il2CppBase() + 0x1B248C0))(0, entity, newGuildId, removeOnZero);
	}
	template <typename T = bool> static T CloneGuildIdFrom(uintptr_t entity, uintptr_t target, bool removeOnZero) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1B24B18))(0, entity, target, removeOnZero);
	}

};

}
