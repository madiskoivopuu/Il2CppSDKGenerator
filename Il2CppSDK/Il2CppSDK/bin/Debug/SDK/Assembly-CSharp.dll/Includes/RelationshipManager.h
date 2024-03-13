#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipManager"));
	}

	template <typename T = ICommonContexts*> T& World() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = RelationshipRules*> T& Rule() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HashSet1GameEntity*>*> static T& _emptyGameEntitySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = HashSet1AccountEntity*>*> static T& _emptyAccountEntitySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = ICommonContexts*> T get_World() {
		return ((T (*)(RelationshipManager*))(Il2CppBase() + 0x139F3D4))(this);
	}
	template <typename T = void> T set_World(ICommonContexts* value) {
		return ((T (*)(RelationshipManager*, ICommonContexts*))(Il2CppBase() + 0x139F3DC))(this, value);
	}
	template <typename T = RelationshipRules*> T get_Rule() {
		return ((T (*)(RelationshipManager*))(Il2CppBase() + 0x139F3E4))(this);
	}
	template <typename T = void> T set_Rule(RelationshipRules* value) {
		return ((T (*)(RelationshipManager*, RelationshipRules*))(Il2CppBase() + 0x139F3EC))(this, value);
	}
	template <typename T = bool> T AreEnemies(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139EFF4))(this, entity1, entity2);
	}
	template <typename T = bool> T AreTeammates(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139ED6C))(this, entity1, entity2);
	}
	template <typename T = bool> T AreFriends(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139F428))(this, entity1, entity2);
	}
	template <typename T = bool> T CanAutoOpenDoor(GameEntity* entity, GameEntity* target) {
		return ((T (*)(RelationshipManager*, GameEntity*, GameEntity*))(Il2CppBase() + 0x139F604))(this, entity, target);
	}
	template <typename T = bool> T CanAggro(GameEntity* entity, GameEntity* target) {
		return ((T (*)(RelationshipManager*, GameEntity*, GameEntity*))(Il2CppBase() + 0x139EAEC))(this, entity, target);
	}
	template <typename T = int64_t> T GetTeamId(IClanGuildEntity* forEntity) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139E690))(this, forEntity);
	}
	template <typename T = void> T SetTeamId(IClanGuildEntity* entity, int64_t teamId) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*, int64_t))(Il2CppBase() + 0x139F2A0))(this, entity, teamId);
	}
	template <typename T = HashSet1AccountEntity*>*> T GetTeamAccounts(IClanGuildEntity* forEntity) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139F700))(this, forEntity);
	}
	template <typename T = HashSet1GameEntity*>*> T GetTeamAvatars(IClanGuildEntity* forEntity) {
		return ((T (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139FB24))(this, forEntity);
	}
	template <typename T = EntityDiplomaticStatus*> T GetEntityDiplomacyStatus(AccountEntity* actorAccount, GameEntity* target, bool avatartInPlayerKillMode) {
		return ((T (*)(RelationshipManager*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x139FF48))(this, actorAccount, target, avatartInPlayerKillMode);
	}

};

