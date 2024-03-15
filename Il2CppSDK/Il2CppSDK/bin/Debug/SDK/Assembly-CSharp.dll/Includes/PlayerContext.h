#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "PlayerEntity.h" 

class PlayerContext : public BaseReplicatedContext1<PlayerEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerContext"));
	}

	 PrimaryEntityIndex2PlayerEntity*, int64_t>*& _playerIdIndex() {
		return *(PrimaryEntityIndex2PlayerEntity*, int64_t>**)((uintptr_t)this + 0xF8);
	}
	 EntityIndex2PlayerEntity*, int64_t>*& _clanIdIndex() {
		return *(EntityIndex2PlayerEntity*, int64_t>**)((uintptr_t)this + 0x100);
	}
	 EntityIndex2PlayerEntity*, int64_t>*& _guildIdIndex() {
		return *(EntityIndex2PlayerEntity*, int64_t>**)((uintptr_t)this + 0x108);
	}
	 EntityIndex2PlayerEntity*, int64_t>*& _tournamentIdIndex() {
		return *(EntityIndex2PlayerEntity*, int64_t>**)((uintptr_t)this + 0x110);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(PlayerContext*))(Il2CppBase() + 0x1561650))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(PlayerContext*))(Il2CppBase() + 0x1561658))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(PlayerContext*))(Il2CppBase() + 0x1561660))(this);
	}
	template <typename R = PlayerEntity*> R GetEntityWithPlayerId(int64_t value) {
		return ((R (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x1562364))(this, value);
	}
	 HashSet1PlayerEntity*>* GetEntitiesWithClanId(int64_t value) {
		return ((HashSet1PlayerEntity*>* (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x15623C8))(this, value);
	}
	 HashSet1PlayerEntity*>* GetEntitiesWithGuildId(int64_t value) {
		return ((HashSet1PlayerEntity*>* (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x156242C))(this, value);
	}
	template <typename R = PlayerEntity*> R GetEntityWithClanIdInCell(int64_t clanId, uint8_t cellId) {
		return ((R (*)(PlayerContext*, int64_t, uint8_t))(Il2CppBase() + 0x1562490))(this, clanId, cellId);
	}
	 HashSet1PlayerEntity*>* GetEntitiesWithTournamentId(int64_t Value) {
		return ((HashSet1PlayerEntity*>* (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x15626B0))(this, Value);
	}
	template <typename R = int64_t> R GetPlayerGuildId(int64_t playerId) {
		return ((R (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x1562714))(this, playerId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(PlayerContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1562808))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(PlayerContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1562910))(this, reader, entity);
	}
	template <typename R = bool> R CanActivateTournament(int64_t playerId, int64_t now) {
		return ((R (*)(PlayerContext*, int64_t, int64_t))(Il2CppBase() + 0x1562B00))(this, playerId, now);
	}
	template <typename R = PlayerEntity*> R get_avatarEntity() {
		return ((R (*)(PlayerContext*))(Il2CppBase() + 0x1562CB4))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(PlayerContext*))(Il2CppBase() + 0x1562F0C))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(PlayerContext*, bool))(Il2CppBase() + 0x1562F28))(this, value);
	}

};

