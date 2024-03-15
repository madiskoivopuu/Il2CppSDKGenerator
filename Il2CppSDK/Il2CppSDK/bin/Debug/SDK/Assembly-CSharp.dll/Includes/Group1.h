#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class Group1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Group`1"));
	}

	 GroupChanged1<TEntity>*& OnEntityAdded() {
		return *(GroupChanged1<TEntity>**)((uintptr_t)this + 0x0);
	}
	 GroupChanged1<TEntity>*& OnEntityRemoved() {
		return *(GroupChanged1<TEntity>**)((uintptr_t)this + 0x0);
	}
	 GroupUpdated1<TEntity>*& OnEntityUpdated() {
		return *(GroupUpdated1<TEntity>**)((uintptr_t)this + 0x0);
	}
	 IMatcher1<TEntity>*& _matcher() {
		return *(IMatcher1<TEntity>**)((uintptr_t)this + 0x0);
	}
	 HashSet1<TEntity>*& _entities() {
		return *(HashSet1<TEntity>**)((uintptr_t)this + 0x0);
	}
	 Il2CppArray<TEntity>*& _entitiesCache() {
		return *(Il2CppArray<TEntity>**)((uintptr_t)this + 0x0);
	}
	 TEntity& _singleEntityCache() {
		return *(TEntity*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _toStringCache() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R add_OnEntityAdded(GroupChanged1<TEntity>* value) {
		return ((R (*)(Group1*, GroupChanged1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityAdded(GroupChanged1<TEntity>* value) {
		return ((R (*)(Group1*, GroupChanged1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEntityRemoved(GroupChanged1<TEntity>* value) {
		return ((R (*)(Group1*, GroupChanged1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityRemoved(GroupChanged1<TEntity>* value) {
		return ((R (*)(Group1*, GroupChanged1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R add_OnEntityUpdated(GroupUpdated1<TEntity>* value) {
		return ((R (*)(Group1*, GroupUpdated1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R remove_OnEntityUpdated(GroupUpdated1<TEntity>* value) {
		return ((R (*)(Group1*, GroupUpdated1<TEntity>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = int32_t> R get_count() {
		return ((R (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	 IMatcher1<TEntity>* get_matcher() {
		return ((IMatcher1<TEntity>* (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R HandleEntitySilently(TEntity entity) {
		return ((R (*)(Group1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R HandleEntity(TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(Group1*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = void> R UpdateEntity(TEntity entity, int32_t index, uintptr_t previousComponent, uintptr_t newComponent) {
		return ((R (*)(Group1*, TEntity, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, previousComponent, newComponent);
	}
	template <typename R = void> R RemoveAllEventHandlers() {
		return ((R (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	 GroupChanged1<TEntity>* HandleEntity_1(TEntity entity) {
		return ((GroupChanged1<TEntity>* (*)(Group1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = bool> R AddEntitySilently(TEntity entity) {
		return ((R (*)(Group1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R AddEntity(TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(Group1*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = bool> R RemoveEntitySilently(TEntity entity) {
		return ((R (*)(Group1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = void> R RemoveEntity(TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(Group1*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, entity, index, component);
	}
	template <typename R = bool> R ContainsEntity(TEntity entity) {
		return ((R (*)(Group1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	 Il2CppArray<TEntity>* GetEntities() {
		return ((Il2CppArray<TEntity>* (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	 Il2CppList<TEntity>* GetEntities_1(Il2CppList<TEntity>* buffer) {
		return ((Il2CppList<TEntity>* (*)(Group1*, Il2CppList<TEntity>*))(Il2CppBase() + 0x0))(this, buffer);
	}
	 IEnumerable1<TEntity>* AsEnumerable() {
		return ((IEnumerable1<TEntity>* (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	 Enumerator<TEntity>* GetEnumerator() {
		return ((Enumerator<TEntity>* (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	 TEntity GetSingleEntity() {
		return ((TEntity (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Group1*))(Il2CppBase() + 0x0))(this);
	}

};

