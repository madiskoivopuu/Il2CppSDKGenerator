#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity, typename TKey>
class AbstractEntityIndex2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AbstractEntityIndex`2"));
	}

	template <typename R = Il2CppString*> R& name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 IGroup1TEntity>*& _group() {
		return *(IGroup1TEntity>**)((uintptr_t)this + 0x0);
	}
	 Func3TEntity, uintptr_t, TKey>*& _getKey() {
		return *(Func3TEntity, uintptr_t, TKey>**)((uintptr_t)this + 0x0);
	}
	 Func3TEntity, uintptr_t, Il2CppArray<TKey>*>*& _getKeys() {
		return *(Func3TEntity, uintptr_t, Il2CppArray<TKey>*>**)((uintptr_t)this + 0x0);
	}
	 TryGetKeyDelegate2TEntity, TKey>*& _tryGetKey() {
		return *(TryGetKeyDelegate2TEntity, TKey>**)((uintptr_t)this + 0x0);
	}
	 TryGetKeysDelegate2TEntity, TKey>*& _tryGetKeys() {
		return *(TryGetKeysDelegate2TEntity, TKey>**)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _isSingleKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _isTryGetKey() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = Il2CppString*> R get_name() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_name(Il2CppString* value) {
		return ((R (*)(AbstractEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Deactivate() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R IndexEntities(IGroup1TEntity>* group) {
		return ((R (*)(AbstractEntityIndex2*, IGroup1TEntity>*))(Il2CppBase() + 0x0))(this, group);
	}
	template <typename R = void> R OnEntityAdded(IGroup1TEntity>* group, TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(AbstractEntityIndex2*, IGroup1TEntity>*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename R = void> R OnEntityRemoved(IGroup1TEntity>* group, TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(AbstractEntityIndex2*, IGroup1TEntity>*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename R = void> R AddEntity(TKey key, TEntity entity) {
		return ((R (*)(AbstractEntityIndex2*, TKey, TEntity))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename R = void> R RemoveEntity(TKey key, TEntity entity) {
		return ((R (*)(AbstractEntityIndex2*, TKey, TEntity))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Finalize() {
		return ((R (*)(AbstractEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}

};

