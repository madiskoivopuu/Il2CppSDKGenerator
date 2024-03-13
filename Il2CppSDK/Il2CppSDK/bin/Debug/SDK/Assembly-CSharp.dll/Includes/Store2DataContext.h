#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseReplicatedContext1.h" 

class Store2DataContext : public BaseReplicatedContext1<Store2DataEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Store2DataContext"));
	}

	template <typename T = Il2CppString*> static T& StoreId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BlueprintKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SavingsPackTypeKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_IdComponentIndex() {
		return ((T (*)(Store2DataContext*))(Il2CppBase() + 0x14091C4))(this);
	}
	template <typename T = Commands*> T get_EntityCommand() {
		return ((T (*)(Store2DataContext*))(Il2CppBase() + 0x14091CC))(this);
	}
	template <typename T = Commands*> T get_ComponentCommand() {
		return ((T (*)(Store2DataContext*))(Il2CppBase() + 0x14091D4))(this);
	}
	template <typename T = Store2DataEntity*> T GetEntityWithId(int64_t id) {
		return ((T (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409C4C))(this, id);
	}
	template <typename T = Store2DataEntity*> T GetEntityWithBlueprint(Il2CppString* blueprintName) {
		return ((T (*)(Store2DataContext*, Il2CppString*))(Il2CppBase() + 0x1409D28))(this, blueprintName);
	}
	template <typename T = HashSet1Store2DataEntity*>*> T GetEntitiesWithSavingsPackType(SavingsPackType* type) {
		return ((T (*)(Store2DataContext*, SavingsPackType*))(Il2CppBase() + 0x1409E58))(this, type);
	}
	template <typename T = Store2DataEntity*> T get_Item(int64_t id) {
		return ((T (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409F18))(this, id);
	}
	template <typename T = Store2DataEntity*> T CreateEntityWithId(int64_t id) {
		return ((T (*)(Store2DataContext*, int64_t))(Il2CppBase() + 0x1409F54))(this, id);
	}
	template <typename T = Il2CppString*> T GetEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(Store2DataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140A0CC))(this, reader, entity);
	}
	template <typename T = Il2CppString*> T CreateEntity(uintptr_t reader, uintptr_t* entity) {
		return ((T (*)(Store2DataContext*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x140A1D4))(this, reader, entity);
	}

};

