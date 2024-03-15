#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "ToPlayerReplicatedContext1.h" 

class StoreCategoriesContext : public ToPlayerReplicatedContext1<StoreCategoriesEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StoreCategoriesContext"));
	}

	template <typename R = Il2CppString*> static R& CategoryId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& CategoryType() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PlayerId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AEF4))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AEFC))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(StoreCategoriesContext*))(Il2CppBase() + 0x141AF04))(this);
	}
	template <typename R = StoreCategoriesEntity*> R GetEntityWithCategoryId(int64_t id) {
		return ((R (*)(StoreCategoriesContext*, int64_t))(Il2CppBase() + 0x141B960))(this, id);
	}
	template <typename R = StoreCategoriesEntity*> R GetEntityWithCategoryType(StoreCategory* type) {
		return ((R (*)(StoreCategoriesContext*, StoreCategory*))(Il2CppBase() + 0x141BA3C))(this, type);
	}
	 HashSet1StoreCategoriesEntity*>* GetEntitiesForPlayer(int64_t playerId) {
		return ((HashSet1StoreCategoriesEntity*>* (*)(StoreCategoriesContext*, int64_t))(Il2CppBase() + 0x141BB18))(this, playerId);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(StoreCategoriesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x141BBD8))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(StoreCategoriesContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x141BCE0))(this, reader, entity);
	}
	template <typename R = bool> R IsCategoryAvailable(StoreCategoriesEntity* entity, ICommonContexts* world) {
		return ((R (*)(StoreCategoriesContext*, StoreCategoriesEntity*, ICommonContexts*))(Il2CppBase() + 0x141BED0))(this, entity, world);
	}

};

