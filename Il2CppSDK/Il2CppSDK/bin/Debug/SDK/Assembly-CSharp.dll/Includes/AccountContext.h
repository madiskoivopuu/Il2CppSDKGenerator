#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class AccountContext : public BaseReplicatedContext1<AccountEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountContext"));
	}

	template <typename T = PrimaryEntityIndex2AccountEntity*, int64_t>*> T& _playerIdIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = EntityIndex2AccountEntity*, bool>*> T& _playerAccountIndex() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = PrimaryEntityIndex2AccountEntity*, uintptr_t>*> T& _ipIndex() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = EntityIndex2AccountEntity*, int64_t>*> T& _clanIndex() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = EntityIndex2AccountEntity*, int64_t>*> T& _guildIndex() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _blueprint() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9D44C))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9D454))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9D45C))(this);
	}
	template <typename T = AccountEntity*> T get_Item(int64_t playerId) {
		return ((T (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DCDC))(this, playerId);
	}
	template <typename T = AccountEntity*> T GetEntityWithPlayerId(int64_t playerId) {
		return ((T (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DCE0))(this, playerId);
	}
	template <typename T = AccountEntity*> T GetEntityWithIp(uintptr_t ip) {
		return ((T (*)(AccountContext*, uintptr_t))(Il2CppBase() + 0x1D9DD44))(this, ip);
	}
	template <typename T = HashSet1AccountEntity*>*> T GetPlayerAccounts() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9DDA8))(this);
	}
	template <typename T = HashSet1AccountEntity*>*> T GetEntitiesWithClanId(int64_t clanId) {
		return ((T (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DE00))(this, clanId);
	}
	template <typename T = HashSet1AccountEntity*>*> T GetEntitiesWithGuildId(int64_t guildId) {
		return ((T (*)(AccountContext*, int64_t))(Il2CppBase() + 0x1D9DE64))(this, guildId);
	}
	template <typename T = Il2CppString*> T SaveAccount(AccountEntity* entity) {
		return ((T (*)(AccountContext*, AccountEntity*))(Il2CppBase() + 0x1D9DEC8))(this, entity);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(AccountContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D9E1B4))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(AccountContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1D9E2BC))(this, reader, entity);
	}
	template <typename T = AccountEntity*> T get_avatarEntity() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9E4AC))(this);
	}
	template <typename T = bool> T get_isAvatar() {
		return ((T (*)(AccountContext*))(Il2CppBase() + 0x1D9E588))(this);
	}
	template <typename T = void> T set_isAvatar(bool value) {
		return ((T (*)(AccountContext*, bool))(Il2CppBase() + 0x1D9E5A4))(this, value);
	}

};

