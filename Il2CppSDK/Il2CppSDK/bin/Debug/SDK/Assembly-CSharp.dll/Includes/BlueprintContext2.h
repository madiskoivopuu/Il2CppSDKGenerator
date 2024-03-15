#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

template <typename TEntity, typename TDataEntity>
class BlueprintContext2 : public BaseContext1<TEntity>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintContext`2"));
	}

	 DataContext1TDataEntity>*& Data() {
		return *(DataContext1TDataEntity>**)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& FromEntityToDataEntity() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& FromDataEntityToEntity() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	 DataContext1TDataEntity>* get_Data() {
		return ((DataContext1TDataEntity>* (*)(BlueprintContext2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_Data(DataContext1TDataEntity>* value) {
		return ((R (*)(BlueprintContext2*, DataContext1TDataEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	 TEntity CreateFromBlueprintOrNull(Il2CppString* entityName) {
		return ((TEntity (*)(BlueprintContext2*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	 TEntity CreateFromData(TDataEntity dataEntity) {
		return ((TEntity (*)(BlueprintContext2*, TDataEntity))(Il2CppBase() + 0x0))(this, dataEntity);
	}
	 TEntity CreateFromBlueprint(Il2CppString* entityName) {
		return ((TEntity (*)(BlueprintContext2*, Il2CppString*))(Il2CppBase() + 0x0))(this, entityName);
	}
	 TEntity CreateUsingBlueprint(Il2CppString* entityName, EntityBlueprint* entityData) {
		return ((TEntity (*)(BlueprintContext2*, Il2CppString*, EntityBlueprint*))(Il2CppBase() + 0x0))(this, entityName, entityData);
	}
	template <typename R = EntityBlueprint*> R GetEntityData(TEntity entity, Il2CppArray<bool>* requiredComponents, bool copy) {
		return ((R (*)(BlueprintContext2*, TEntity, Il2CppArray<bool>*, bool))(Il2CppBase() + 0x0))(this, entity, requiredComponents, copy);
	}

};

