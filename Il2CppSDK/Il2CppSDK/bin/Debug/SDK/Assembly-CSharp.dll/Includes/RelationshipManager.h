#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipManager"));
	}

	template <typename T = uintptr_t> T& World() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Rule() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> static T& _emptyGameEntitySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _emptyAccountEntitySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_World() {
		return ((T (*)(RelationshipManager*))(Il2CppBase() + 0x139F3D4))(this);
	}
	template <typename T = void> T set_World(uintptr_t value) {
		return ((T (*)(RelationshipManager*, uintptr_t))(Il2CppBase() + 0x139F3DC))(this, value);
	}
	template <typename T = uintptr_t> T get_Rule() {
		return ((T (*)(RelationshipManager*))(Il2CppBase() + 0x139F3E4))(this);
	}
	template <typename T = void> T set_Rule(uintptr_t value) {
		return ((T (*)(RelationshipManager*, uintptr_t))(Il2CppBase() + 0x139F3EC))(this, value);
	}
	template <typename T = bool> T AreEnemies(uintptr_t entity1, uintptr_t entity2) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x139EFF4))(this, entity1, entity2);
	}
	template <typename T = bool> T AreTeammates(uintptr_t entity1, uintptr_t entity2) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x139ED6C))(this, entity1, entity2);
	}
	template <typename T = bool> T AreFriends(uintptr_t entity1, uintptr_t entity2) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x139F428))(this, entity1, entity2);
	}
	template <typename T = bool> T CanAutoOpenDoor(uintptr_t entity, uintptr_t target) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x139F604))(this, entity, target);
	}
	template <typename T = bool> T CanAggro(uintptr_t entity, uintptr_t target) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x139EAEC))(this, entity, target);
	}
	template <typename T = int64_t> T GetTeamId(uintptr_t forEntity) {
		return ((T (*)(RelationshipManager*, uintptr_t))(Il2CppBase() + 0x139E690))(this, forEntity);
	}
	template <typename T = void> T SetTeamId(uintptr_t entity, int64_t teamId) {
		return ((T (*)(RelationshipManager*, uintptr_t, int64_t))(Il2CppBase() + 0x139F2A0))(this, entity, teamId);
	}
	template <typename T = void*> T GetTeamAccounts(uintptr_t forEntity) {
		return ((T (*)(RelationshipManager*, uintptr_t))(Il2CppBase() + 0x139F700))(this, forEntity);
	}
	template <typename T = void*> T GetTeamAvatars(uintptr_t forEntity) {
		return ((T (*)(RelationshipManager*, uintptr_t))(Il2CppBase() + 0x139FB24))(this, forEntity);
	}
	template <typename T = uintptr_t> T GetEntityDiplomacyStatus(uintptr_t actorAccount, uintptr_t target, bool avatartInPlayerKillMode) {
		return ((T (*)(RelationshipManager*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x139FF48))(this, actorAccount, target, avatartInPlayerKillMode);
	}

};

}
