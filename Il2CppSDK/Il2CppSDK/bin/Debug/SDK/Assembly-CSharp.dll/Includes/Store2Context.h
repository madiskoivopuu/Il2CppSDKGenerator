#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class Store2Context : public ToPlayerReplicatedContext1<Store2Entity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2Context"));
	}

	template <typename T = Il2CppString*> static T& StoreId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerIdKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& StoreDataIdPlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = IIdManager*> T& _idManager() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(Store2Context*))(Il2CppBase() + 0x1405DB4))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(Store2Context*))(Il2CppBase() + 0x1405DBC))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(Store2Context*))(Il2CppBase() + 0x1405DC4))(this);
	}
	template <typename T = Store2Entity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(Store2Context*, int64_t))(Il2CppBase() + 0x140696C))(this, id);
	}
	template <typename T = HashSet1Store2Entity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(Store2Context*, int64_t))(Il2CppBase() + 0x1406A48))(this, playerId);
	}
	template <typename T = Store2Entity*> T GetEntityWithStoreDataIdForPlayer(int64_t playerId, int64_t storeDataId) {
		return ((T (*)(Store2Context*, int64_t, int64_t))(Il2CppBase() + 0x1406B08))(this, playerId, storeDataId);
	}
	template <typename T = Store2Entity*> T CreateEntityWithIdForPlayer(int64_t playerId, int64_t storeDataId) {
		return ((T (*)(Store2Context*, int64_t, int64_t))(Il2CppBase() + 0x1406C18))(this, playerId, storeDataId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(Store2Context*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1407034))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(Store2Context*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140713C))(this, reader, entity);
	}

};

