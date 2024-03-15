#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class TransactionContext : public ToPlayerReplicatedContext1<TransactionEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TransactionContext"));
	}

	template <typename R = Il2CppString*> static R& Id() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TypePlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ClientTypePlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& TransactionId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(TransactionContext*))(Il2CppBase() + 0x1514A20))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(TransactionContext*))(Il2CppBase() + 0x1514A28))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(TransactionContext*))(Il2CppBase() + 0x1514A30))(this);
	}
	template <typename R = TransactionEntity*> R GetEntityWithId(int32_t transactionId) {
		return ((R (*)(TransactionContext*, int32_t))(Il2CppBase() + 0x1515B68))(this, transactionId);
	}
	template <typename R = TransactionEntity*> R GetEntityWithTransactionId(Il2CppString* transactionId) {
		return ((R (*)(TransactionContext*, Il2CppString*))(Il2CppBase() + 0x1515C44))(this, transactionId);
	}
	 HashSet1TransactionEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1TransactionEntity*>* (*)(TransactionContext*, int64_t))(Il2CppBase() + 0x1515D20))(this, playerId);
	}
	 HashSet1TransactionEntity*>* GetEntitiesForPlayerWithType(int64_t playerId, TransactionType* type) {
		return ((HashSet1TransactionEntity*>* (*)(TransactionContext*, int64_t, TransactionType*))(Il2CppBase() + 0x1515DE0))(this, playerId, type);
	}
	 HashSet1TransactionEntity*>* GetClientEntitiesForPlayerWithType(int64_t playerId, TransactionType* type) {
		return ((HashSet1TransactionEntity*>* (*)(TransactionContext*, int64_t, TransactionType*))(Il2CppBase() + 0x1515ED4))(this, playerId, type);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(TransactionContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1515FC8))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(TransactionContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x15160D0))(this, reader, entity);
	}
	template <typename R = void> R DestroyEntity(int32_t id) {
		return ((R (*)(TransactionContext*, int32_t))(Il2CppBase() + 0x15162C0))(this, id);
	}

};

