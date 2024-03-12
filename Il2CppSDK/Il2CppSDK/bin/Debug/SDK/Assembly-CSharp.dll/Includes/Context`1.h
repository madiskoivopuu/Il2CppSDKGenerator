#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Context1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Context`1"));
	}

	template <typename T = uintptr_t> T& OnEntityCreated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& OnEntityWillBeDestroyed() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& OnEntityDestroyed() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& OnGroupCreated() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _totalComponents() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _componentPools() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _contextInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _aercFactory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _entityFactory() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _entities() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _reusableEntities() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _retainedEntities() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<void*, void*>*> T& _groups() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _groupsForIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _groupChangedListPool() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _entityIndices() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _creationIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _entitiesCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _cachedComponentAdded() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _cachedComponentRemoved() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _cachedComponentReplaced() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _cachedEntityReleased() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _cachedDestroyEntity() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _isClearable() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T add_OnEntityCreated(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityCreated(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEntityWillBeDestroyed(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityWillBeDestroyed(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnEntityDestroyed(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnEntityDestroyed(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T add_OnGroupCreated(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T remove_OnGroupCreated(uintptr_t value) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = int32_t> T get_totalComponents() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_componentPools() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_contextInfo() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_count() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_reusableEntitiesCount() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_retainedEntitiesCount() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T get_EntityIndices() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T createDefaultContextInfo() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T CreateEntity() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DestroyAllEntities() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasEntity(uintptr_t entity) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEntities() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T GetGroup(void* matcher) {
		return ((T (*)(Context1*, void*))(Il2CppBase() + 0x0))(this, matcher);
	}
	template <typename T = void> T AddEntityIndex(uintptr_t entityIndex) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entityIndex);
	}
	template <typename T = bool> T RemoveEntityIndex(Il2CppString* name) {
		return ((T (*)(Context1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = uintptr_t> T GetEntityIndex(Il2CppString* name) {
		return ((T (*)(Context1*, Il2CppString*))(Il2CppBase() + 0x0))(this, name);
	}
	template <typename T = void> T ResetCreationIndex() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ClearComponentPool(int32_t index) {
		return ((T (*)(Context1*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}
	template <typename T = void> T ClearComponentPools() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RemoveAllEventHandlers() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Context1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T updateGroupsComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = void> T OnComponentAdded(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = void> T updateGroupsComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = void> T OnComponentRemoved(uintptr_t entity, int32_t index, uintptr_t component) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename T = void> T updateGroupsComponentReplaced(uintptr_t entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename T = void> T OnComponentReplaced(uintptr_t entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((T (*)(Context1*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename T = void> T onEntityReleased(uintptr_t entity) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = void> T onDestroyEntity(uintptr_t entity) {
		return ((T (*)(Context1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}

};

}
