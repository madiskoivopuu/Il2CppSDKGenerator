#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext`1" 

class PlayerContext: BaseReplicatedContext1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerContext"));
	}

	template <typename T = void*> T& _playerIdIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = void*> T& _clanIdIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = void*> T& _guildIdIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = void*> T& _tournamentIdIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(PlayerContext*))(Il2CppBase() + 0x1561650))(this);
	}
	template <typename T = uintptr_t> T get_EntityCommand() {
		return ((T (*)(PlayerContext*))(Il2CppBase() + 0x1561658))(this);
	}
	template <typename T = uintptr_t> T get_ComponentCommand() {
		return ((T (*)(PlayerContext*))(Il2CppBase() + 0x1561660))(this);
	}
	template <typename T = uintptr_t> T GetEntityWithPlayerId(int64_t value) {
		return ((T (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x1562364))(this, value);
	}
	template <typename T = void*> T GetEntitiesWithClanId(int64_t value) {
		return ((T (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x15623C8))(this, value);
	}
	template <typename T = void*> T GetEntitiesWithGuildId(int64_t value) {
		return ((T (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x156242C))(this, value);
	}
	template <typename T = uintptr_t> T GetEntityWithClanIdInCell(int64_t clanId, unsigned char cellId) {
		return ((T (*)(PlayerContext*, int64_t, unsigned char))(Il2CppBase() + 0x1562490))(this, clanId, cellId);
	}
	template <typename T = void*> T GetEntitiesWithTournamentId(int64_t Value) {
		return ((T (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x15626B0))(this, Value);
	}
	template <typename T = int64_t> T GetPlayerGuildId(int64_t playerId) {
		return ((T (*)(PlayerContext*, int64_t))(Il2CppBase() + 0x1562714))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(PlayerContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1562808))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(PlayerContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1562910))(this, reader, entity);
	}
	template <typename T = bool> T CanActivateTournament(int64_t playerId, int64_t now) {
		return ((T (*)(PlayerContext*, int64_t, int64_t))(Il2CppBase() + 0x1562B00))(this, playerId, now);
	}
	template <typename T = uintptr_t> T get_avatarEntity() {
		return ((T (*)(PlayerContext*))(Il2CppBase() + 0x1562CB4))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(PlayerContext*))(Il2CppBase() + 0x1562F0C))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(PlayerContext*, bool))(Il2CppBase() + 0x1562F28))(this, value);
	}

};

}
