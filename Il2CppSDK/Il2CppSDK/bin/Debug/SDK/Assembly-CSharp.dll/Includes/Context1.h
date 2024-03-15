#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class Context1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Context`1"));
	}

	template <typename R = uintptr_t> R& OnEntityCreated() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& OnEntityWillBeDestroyed() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& OnEntityDestroyed() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& OnGroupCreated() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _totalComponents() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Stack1uintptr_t>*>*> R& _componentPools() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _contextInfo() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Func2uintptr_t, uintptr_t>*& _aercFactory() {
		return *(Func2uintptr_t, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	 Func1TEntity>*& _entityFactory() {
		return *(Func1TEntity>**)((uintptr_t)this + 0x0);
	}
	 HashSet1TEntity>*& _entities() {
		return *(HashSet1TEntity>**)((uintptr_t)this + 0x0);
	}
	 Stack1TEntity>*& _reusableEntities() {
		return *(Stack1TEntity>**)((uintptr_t)this + 0x0);
	}
	 HashSet1TEntity>*& _retainedEntities() {
		return *(HashSet1TEntity>**)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<IMatcher1TEntity>*, IGroup1TEntity>*>*& _groups() {
		return *(Il2CppDictionary<IMatcher1TEntity>*, IGroup1TEntity>*>**)((uintptr_t)this + 0x0);
	}
	 Il2CppArray<Il2CppList<IGroup1TEntity>*>*>*& _groupsForIndex() {
		return *(Il2CppArray<Il2CppList<IGroup1TEntity>*>*>**)((uintptr_t)this + 0x0);
	}
	 ObjectPool1Il2CppList<GroupChanged1TEntity>*>*>*& _groupChangedListPool() {
		return *(ObjectPool1Il2CppList<GroupChanged1TEntity>*>*>**)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, uintptr_t>*& _entityIndices() {
		return *(Il2CppDictionary<Il2CppString*, uintptr_t>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _creationIndex() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppArray<TEntity>*& _entitiesCache() {
		return *(Il2CppArray<TEntity>**)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _cachedComponentAdded() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _cachedComponentRemoved() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _cachedComponentReplaced() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _cachedEntityReleased() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = uintptr_t> R& _cachedDestroyEntity() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<bool>*> R& _isClearable() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R add_OnEntityCreated(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityCreated(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEntityWillBeDestroyed(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityWillBeDestroyed(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEntityDestroyed(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityDestroyed(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnGroupCreated(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnGroupCreated(uintptr_t value) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_totalComponents() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<Stack1uintptr_t>*>*> R get_componentPools() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R get_contextInfo() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_count() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_reusableEntitiesCount() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_retainedEntitiesCount() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	 IReadOnlyDictionary2Il2CppString*, uintptr_t>* get_EntityIndices() {
		return ((IReadOnlyDictionary2Il2CppString*, uintptr_t>* (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R createDefaultContextInfo() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	 TEntity CreateEntity() {
		return ((TEntity (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R DestroyAllEntities() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R HasEntity(TEntity entity) {
		return ((R (*)(Context1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	 Il2CppArray<TEntity>* GetEntities() {
		return ((Il2CppArray<TEntity>* (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	 IGroup1TEntity>* GetGroup(IMatcher1TEntity>* matcher) {
		return ((IGroup1TEntity>* (*)(Context1*, IMatcher1TEntity>*))(Il2CppBase() + 0x0))(this, matcher);
	}
	template <typename R = void> R AddEntityIndex(uintptr_t entityIndex) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entityIndex);
	}
	template <typename R = bool> R RemoveEntityIndex(Il2CppString* name) {
		return ((R (*)(Context1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = uintptr_t> R GetEntityIndex(Il2CppString* name) {
		return ((R (*)(Context1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename R = void> R ResetCreationIndex() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R ClearComponentPool(int32_t index) {
		return ((R (*)(Context1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename R = void> R ClearComponentPools() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Reset() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R RemoveAllEventHandlers() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R updateGroupsComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = void> R OnComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = void> R updateGroupsComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = void> R OnComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = void> R updateGroupsComponentReplaced(uintptr_t entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename R = void> R OnComponentReplaced(uintptr_t entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((R (*)(Context1*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename R = void> R onEntityReleased(uintptr_t entity) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R onDestroyEntity(uintptr_t entity) {
		return ((R (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}

};

