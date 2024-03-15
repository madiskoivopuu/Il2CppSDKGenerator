#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "BaseContext1.h" 

template <typename TEntity>
class DataContext1 : public BaseContext1<TEntity>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataContext`1"));
	}

	 PrimaryEntityIndex2TEntity, Il2CppString*>*& _blueprintIndex() {
		return *(PrimaryEntityIndex2TEntity, Il2CppString*>**)((uintptr_t)this + 0x0);
	}
	 PrimaryEntityIndex2TEntity, Il2CppString*>*& _oldBlueprintIndex() {
		return *(PrimaryEntityIndex2TEntity, Il2CppString*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _oldBlueprintComponentIndex() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Fill(Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints) {
		return ((R (*)(DataContext1*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*))(Il2CppBase() + 0x0))(this, blueprints);
	}
	template <typename R = void> R AddEntityIndexes() {
		return ((R (*)(DataContext1*))(Il2CppBase() + 0x0))(this);
	}
	 TEntity GetEntityWithBlueprintOrCreate(Il2CppString* name) {
		return ((TEntity (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	 TEntity GetEntityWithBlueprint(Il2CppString* name) {
		return ((TEntity (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	 TEntity GetEntityWithBlueprintOrNull(Il2CppString* name) {
		return ((TEntity (*)(DataContext1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R FillEntity(TEntity entity, Il2CppString* entityName, Il2CppDictionary<Il2CppString*, EntityBlueprint*>* blueprints, bool template) {
		return ((R (*)(DataContext1*, TEntity, Il2CppString*, Il2CppDictionary<Il2CppString*, EntityBlueprint*>*, bool))(Il2CppBase() + 0x0))(this, entity, entityName, blueprints, template);
	}
	 TEntity CreateCopy(TEntity source, Il2CppString* newBlueprint) {
		return ((TEntity (*)(DataContext1*, TEntity, Il2CppString*))(Il2CppBase() + 0x0))(this, source, newBlueprint);
	}

};

