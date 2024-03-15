#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class AccountContext : public BaseReplicatedContext1<AccountEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountContext"));
	}

	 PrimaryEntityIndex2AccountEntity*, int64_t>*& _playerIdIndex() {
		return *(PrimaryEntityIndex2AccountEntity*, int64_t>**)((uintptr_t)this + 0xF8);
	}
	 EntityIndex2AccountEntity*, bool>*& _playerAccountIndex() {
		return *(EntityIndex2AccountEntity*, bool>**)((uintptr_t)this + 0x100);
	}
	 PrimaryEntityIndex2AccountEntity*, uintptr_t>*& _ipIndex() {
		return *(PrimaryEntityIndex2AccountEntity*, uintptr_t>**)((uintptr_t)this + 0x108);
	}
	 EntityIndex2AccountEntity*, int64_t>*& _clanIndex() {
		return *(EntityIndex2AccountEntity*, int64_t>**)((uintptr_t)this + 0x110);
	}
	 EntityIndex2AccountEntity*, int64_t>*& _guildIndex() {
		return *(EntityIndex2AccountEntity*, int64_t>**)((uintptr_t)this + 0x118);
	}
	 Il2CppDictionary<int32_t, uintptr_t>*& _blueprint() {
		return *(Il2CppDictionary<int32_t, uintptr_t>**)((uintptr_t)this + 0x120);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(AccountContext*))(Il2CppBase() + 0x1D9D44C))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(AccountContext*))(Il2CppBase() + 0x1D9D454))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(AccountContext*))(Il2CppBase() + 0x1D9D45C))(this);
	}
	template <typename R = AccountEntity*> R get_Item(int64_t playerId) {
		return ((R (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DCDC))(this, playerId);
	}
	template <typename R = AccountEntity*> R GetEntityWithPlayerId(int64_t playerId) {
		return ((R (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DCE0))(this, playerId);
	}
	template <typename R = AccountEntity*> R GetEntityWithIp(uintptr_t ip) {
		return ((R (*)(AccountContext*, uintptr_t))(Il2CppBase() + 0x1D9DD44))(this, ip);
	}
	 HashSet1AccountEntity*>* GetPlayerAccounts() {
		return ((HashSet1AccountEntity*>* (*)(AccountContext*))(Il2CppBase() + 0x1D9DDA8))(this);
	}
	 HashSet1AccountEntity*>* GetEntitiesWithClanId(int64_t clanId) {
		return ((HashSet1AccountEntity*>* (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DE00))(this, clanId);
	}
	 HashSet1AccountEntity*>* GetEntitiesWithGuildId(int64_t guildId) {
		return ((HashSet1AccountEntity*>* (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DE64))(this, guildId);
	}
	template <typename R = Il2CppString*> R SaveAccount(AccountEntity* entity) {
		return ((R (*)(AccountContext*, AccountEntity*))(Il2CppBase() + 0x1D9DEC8))(this, entity);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(AccountContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D9E1B4))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(AccountContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D9E2BC))(this, reader, entity);
	}
	template <typename R = AccountEntity*> R get_avatarEntity() {
		return ((R (*)(AccountContext*))(Il2CppBase() + 0x1D9E4AC))(this);
	}
	template <typename R = bool> R get_isAvatar() {
		return ((R (*)(AccountContext*))(Il2CppBase() + 0x1D9E588))(this);
	}
	template <typename R = void> R set_isAvatar(bool value) {
		return ((R (*)(AccountContext*, bool))(Il2CppBase() + 0x1D9E5A4))(this, value);
	}

};

