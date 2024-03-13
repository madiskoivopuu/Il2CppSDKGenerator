#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class StoreSalesContext : public ToPlayerReplicatedContext1<StoreSalesEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesContext"));
	}

	template <typename T = Il2CppString*> static T& StoreSalesId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE1C))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE24))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE2C))(this);
	}
	template <typename T = StoreSalesEntity*> T GetEntityWithStoreSalesId(int64_t id) {
		return ((T (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F5A8))(this, id);
	}
	template <typename T = HashSet1StoreSalesEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F684))(this, playerId);
	}
	template <typename T = StoreSalesEntity*> T get_Item(int64_t id) {
		return ((T (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F744))(this, id);
	}
	template <typename T = StoreSalesEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F780))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(StoreSalesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x183F8F8))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(StoreSalesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x183FA00))(this, reader, entity);
	}

};

