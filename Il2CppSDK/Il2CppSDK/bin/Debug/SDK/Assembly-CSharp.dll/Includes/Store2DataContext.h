#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 
#include "Store2DataEntity.h" 

class Store2DataContext : public BaseReplicatedContext1<Store2DataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2DataContext"));
	}

	template <typename R = Il2CppString*> static R& StoreId() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& BlueprintKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& SavingsPackTypeKey() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_IdComponentIndex() {
		return ((R (*)(Store2DataContext*))(Il2CppBase() + 0x14091C4))(this);
	}
	template <typename R = Commands*> R get_EntityCommand() {
		return ((R (*)(Store2DataContext*))(Il2CppBase() + 0x14091CC))(this);
	}
	template <typename R = Commands*> R get_ComponentCommand() {
		return ((R (*)(Store2DataContext*))(Il2CppBase() + 0x14091D4))(this);
	}
	template <typename R = Store2DataEntity*> R GetEntityWithId(int64_t id) {
		return ((R (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409C4C))(this, id);
	}
	template <typename R = Store2DataEntity*> R GetEntityWithBlueprint(Il2CppString* blueprintName) {
		return ((R (*)(Store2DataContext*, Il2CppString*))(Il2CppBase() + 0x1409D28))(this, blueprintName);
	}
	 HashSet1Store2DataEntity*>* GetEntitiesWithSavingsPackType(SavingsPackType* type) {
		return ((HashSet1Store2DataEntity*>* (*)(Store2DataContext*, SavingsPackType*))(Il2CppBase() + 0x1409E58))(this, type);
	}
	template <typename R = Store2DataEntity*> R get_Item(int64_t id) {
		return ((R (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409F18))(this, id);
	}
	template <typename R = Store2DataEntity*> R CreateEntityWithId(int64_t id) {
		return ((R (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409F54))(this, id);
	}
	template <typename R = Il2CppString*> R GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(Store2DataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140A0CC))(this, reader, entity);
	}
	template <typename R = Il2CppString*> R CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((R (*)(Store2DataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140A1D4))(this, reader, entity);
	}

};

