#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class StoreSalesContext : public ToPlayerReplicatedContext1<StoreSalesEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreSalesContext"));
	}

	template <typename R = Il2CppString*> static R& StoreSalesId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE1C))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE24))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(StoreSalesContext*))(Il2CppBase() + 0x183EE2C))(this);
	}
	template <typename R = StoreSalesEntity*> R GetEntityWithStoreSalesId(int64_t id) {
		return ((R (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F5A8))(this, id);
	}
	 HashSet1StoreSalesEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1StoreSalesEntity*>* (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F684))(this, playerId);
	}
	template <typename R = StoreSalesEntity*> R get_Item(int64_t id) {
		return ((R (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F744))(this, id);
	}
	template <typename R = StoreSalesEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(StoreSalesContext*, int64_t))(Il2CppBase() + 0x183F780))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(StoreSalesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x183F8F8))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(StoreSalesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x183FA00))(this, reader, entity);
	}

};

