#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class Store2Context : public ToPlayerReplicatedContext1<Store2Entity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Context"));
	}

	template <typename R = Il2CppString*> static R& StoreId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerIdKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& StoreDataIdPlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = IIdManager*> R& _idManager() {
		return *(R*)((uintptr_t)this + 0xF8);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(Store2Context*))(Il2CppBase() + 0x1405DB4))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(Store2Context*))(Il2CppBase() + 0x1405DBC))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(Store2Context*))(Il2CppBase() + 0x1405DC4))(this);
	}
	template <typename R = Store2Entity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(Store2Context*, int64_t))(Il2CppBase() + 0x140696C))(this, id);
	}
	 HashSet1Store2Entity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1Store2Entity*>* (*)(Store2Context*, int64_t))(Il2CppBase() + 0x1406A48))(this, playerId);
	}
	template <typename R = Store2Entity*> R GetEntityWithStoreDataIdForPlayer(int64_t playerId, int64_t storeDataId) {
		return ((R (*)(Store2Context*, int64_t, int64_t))(Il2CppBase() + 0x1406B08))(this, playerId, storeDataId);
	}
	template <typename R = Store2Entity*> R CreateEntityWithIdForPlayer(int64_t playerId, int64_t storeDataId) {
		return ((R (*)(Store2Context*, int64_t, int64_t))(Il2CppBase() + 0x1406C18))(this, playerId, storeDataId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(Store2Context*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1407034))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(Store2Context*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140713C))(this, reader, entity);
	}

};

