#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 

template <typename TEntity>
class BaseContext1 : public Context1<TEntity>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseContext`1"));
	}

	template <typename R = int32_t> R& TotalComponents() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& ComponentNames() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& ComponentTypes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<bool>*> R& IsClearable() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = ICommonLogger*> R& _logger() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 static Il2CppArray<ComponentKind<TEntity>*>*& ComponentKinds() {
		return *(Il2CppArray<ComponentKind<TEntity>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = int32_t> R get_TotalComponents() {
		return ((R (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_TotalComponents(int32_t value) {
		return ((R (*)(BaseContext1*, int32_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_ComponentNames() {
		return ((R (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_ComponentNames(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(BaseContext1*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R get_ComponentTypes() {
		return ((R (*)(BaseContext1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_ComponentTypes(Il2CppArray<uintptr_t>* value) {
		return ((R (*)(BaseContext1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	 static Il2CppArray<ComponentKind<TEntity>*>* get_ComponentKinds() {
		return ((Il2CppArray<ComponentKind<TEntity>*>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R set_ComponentKinds(Il2CppArray<ComponentKind<TEntity>*>* value) {
		return ((R (*)(void *, Il2CppArray<ComponentKind<TEntity>*>*))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename R = bool> R AddComponent(TEntity entity, int32_t componentIndex, uintptr_t component, bool replace) {
		return ((R (*)(BaseContext1*, TEntity, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, entity, componentIndex, component, replace);
	}
	 TEntity CreateEntityFromBlueprint(EntityBlueprint* entityData) {
		return ((TEntity (*)(BaseContext1*, EntityBlueprint*))(Il2CppBase() + 0x0))(this, entityData);
	}
	template <typename R = void> R DestroyEntities(IGroup1<TEntity>* group) {
		return ((R (*)(BaseContext1*, IGroup1<TEntity>*))(Il2CppBase() + 0x0))(this, group);
	}
	template <typename R = void> R DestroyEntities_1(IMatcher1<TEntity>* matcher) {
		return ((R (*)(BaseContext1*, IMatcher1<TEntity>*))(Il2CppBase() + 0x0))(this, matcher);
	}
	template <typename R = bool> R DestroyEntities_2(HashSet1<TEntity>* entities, Predicate1<TEntity>* predicate) {
		return ((R (*)(BaseContext1*, HashSet1<TEntity>*, Predicate1<TEntity>*))(Il2CppBase() + 0x0))(this, entities, predicate);
	}

};

