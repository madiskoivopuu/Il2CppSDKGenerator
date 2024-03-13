#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class StoreCategoriesContext : public ToPlayerReplicatedContext1<StoreCategoriesEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesContext"));
	}

	template <typename T = Il2CppString*> static T& CategoryId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CategoryType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AEF4))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AEFC))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AF04))(this);
	}
	template <typename T = StoreCategoriesEntity*> T GetEntityWithCategoryId(int64_t id) {
		return ((T (*)(StoreCategoriesContext*, int64_t))(Il2CppBase() + 0x141B960))(this, id);
	}
	template <typename T = StoreCategoriesEntity*> T GetEntityWithCategoryType(StoreCategory* type) {
		return ((T (*)(StoreCategoriesContext*, StoreCategory*))(Il2CppBase() + 0x141BA3C))(this, type);
	}
	template <typename T = HashSet1StoreCategoriesEntity*>*> T GetEntitiesForPlayer(int64_t playerId) {
		return ((T (*)(StoreCategoriesContext*, int64_t))(Il2CppBase() + 0x141BB18))(this, playerId);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(StoreCategoriesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x141BBD8))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(StoreCategoriesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x141BCE0))(this, reader, entity);
	}
	template <typename T = bool> T IsCategoryAvailable(StoreCategoriesEntity* entity, ICommonContexts* world) {
		return ((T (*)(StoreCategoriesContext*, StoreCategoriesEntity*, ICommonContexts*))(Il2CppBase() + 0x141BED0))(this, entity, world);
	}

};

