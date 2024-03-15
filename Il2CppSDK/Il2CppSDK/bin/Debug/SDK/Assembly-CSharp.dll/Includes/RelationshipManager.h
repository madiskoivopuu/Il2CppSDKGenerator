#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RelationshipManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelationshipManager"));
	}

	template <typename R = ICommonContexts*> R& World() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = RelationshipRules*> R& Rule() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 static HashSet1GameEntity*>*& _emptyGameEntitySet() {
		return *(HashSet1GameEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static HashSet1AccountEntity*>*& _emptyAccountEntitySet() {
		return *(HashSet1AccountEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename R = ICommonContexts*> R get_World() {
		return ((R (*)(RelationshipManager*))(Il2CppBase() + 0x139F3D4))(this);
	}
	template <typename R = void> R set_World(ICommonContexts* value) {
		return ((R (*)(RelationshipManager*, ICommonContexts*))(Il2CppBase() + 0x139F3DC))(this, value);
	}
	template <typename R = RelationshipRules*> R get_Rule() {
		return ((R (*)(RelationshipManager*))(Il2CppBase() + 0x139F3E4))(this);
	}
	template <typename R = void> R set_Rule(RelationshipRules* value) {
		return ((R (*)(RelationshipManager*, RelationshipRules*))(Il2CppBase() + 0x139F3EC))(this, value);
	}
	template <typename R = bool> R AreEnemies(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((R (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139EFF4))(this, entity1, entity2);
	}
	template <typename R = bool> R AreTeammates(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((R (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139ED6C))(this, entity1, entity2);
	}
	template <typename R = bool> R AreFriends(IClanGuildEntity* entity1, IClanGuildEntity* entity2) {
		return ((R (*)(RelationshipManager*, IClanGuildEntity*, IClanGuildEntity*))(Il2CppBase() + 0x139F428))(this, entity1, entity2);
	}
	template <typename R = bool> R CanAutoOpenDoor(GameEntity* entity, GameEntity* target) {
		return ((R (*)(RelationshipManager*, GameEntity*, GameEntity*))(Il2CppBase() + 0x139F604))(this, entity, target);
	}
	template <typename R = bool> R CanAggro(GameEntity* entity, GameEntity* target) {
		return ((R (*)(RelationshipManager*, GameEntity*, GameEntity*))(Il2CppBase() + 0x139EAEC))(this, entity, target);
	}
	template <typename R = int64_t> R GetTeamId(IClanGuildEntity* forEntity) {
		return ((R (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139E690))(this, forEntity);
	}
	template <typename R = void> R SetTeamId(IClanGuildEntity* entity, int64_t teamId) {
		return ((R (*)(RelationshipManager*, IClanGuildEntity*, int64_t))(Il2CppBase() + 0x139F2A0))(this, entity, teamId);
	}
	 HashSet1AccountEntity*>* GetTeamAccounts(IClanGuildEntity* forEntity) {
		return ((HashSet1AccountEntity*>* (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139F700))(this, forEntity);
	}
	 HashSet1GameEntity*>* GetTeamAvatars(IClanGuildEntity* forEntity) {
		return ((HashSet1GameEntity*>* (*)(RelationshipManager*, IClanGuildEntity*))(Il2CppBase() + 0x139FB24))(this, forEntity);
	}
	template <typename R = EntityDiplomaticStatus*> R GetEntityDiplomacyStatus(AccountEntity* actorAccount, GameEntity* target, bool avatartInPlayerKillMode) {
		return ((R (*)(RelationshipManager*, AccountEntity*, GameEntity*, bool))(Il2CppBase() + 0x139FF48))(this, actorAccount, target, avatartInPlayerKillMode);
	}

};

