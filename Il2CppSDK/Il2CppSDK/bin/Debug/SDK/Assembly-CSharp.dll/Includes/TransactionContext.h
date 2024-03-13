#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class TransactionContext : public ToPlayerReplicatedContext1<TransactionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionContext"));
	}

	template <typename T = Il2CppString*> static T& Id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TypePlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ClientTypePlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& TransactionId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(TransactionContext*))(Il2CppBase() + 0x1514A20))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(TransactionContext*))(Il2CppBase() + 0x1514A28))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(TransactionContext*))(Il2CppBase() + 0x1514A30))(this);
	}
	template <typename T = TransactionEntity*> T GetEntityWithId(int32_t transactionId) {
		return ((T (*)(TransactionContext*, int32_t))(Il2CppBase() + 0x1515B68))(this, transactionId);
	}
	template <typename T = TransactionEntity*> T GetEntityWithTransactionId(Il2CppString* transactionId) {
		return ((T (*)(TransactionContext*, Il2CppString*))(Il2CppBase() + 0x1515C44))(this, transactionId);
	}
	template <typename T = HashSet1TransactionEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(TransactionContext*, int64_t))(Il2CppBase() + 0x1515D20))(this, playerId);
	}
	template <typename T = HashSet1TransactionEntity*>*> T GetEntitiesForPlayerWithType(int64_t playerId, TransactionType* type) {
		return ((T (*)(TransactionContext*, int64_t, TransactionType*))(Il2CppBase() + 0x1515DE0))(this, playerId, type);
	}
	template <typename T = HashSet1TransactionEntity*>*> T GetClientEntitiesForPlayerWithType(int64_t playerId, TransactionType* type) {
		return ((T (*)(TransactionContext*, int64_t, TransactionType*))(Il2CppBase() + 0x1515ED4))(this, playerId, type);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(TransactionContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1515FC8))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(TransactionContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15160D0))(this, reader, entity);
	}
	template <typename T = void> T DestroyEntity(int32_t id) {
		return ((T (*)(TransactionContext*, int32_t))(Il2CppBase() + 0x15162C0))(this, id);
	}

};

