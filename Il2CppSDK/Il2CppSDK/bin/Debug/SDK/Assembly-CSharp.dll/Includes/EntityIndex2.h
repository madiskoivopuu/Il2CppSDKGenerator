#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "AbstractEntityIndex2.h" 

template <typename TEntity, typename TKey>
class EntityIndex2 : public AbstractEntityIndex2<TEntity, TKey>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EntityIndex`2"));
	}

	 static HashSet1TEntity>*& _emptySet() {
		return *(HashSet1TEntity>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 Il2CppDictionary<TKey, HashSet1TEntity>*>*& _index() {
		return *(Il2CppDictionary<TKey, HashSet1TEntity>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _toString() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Activate() {
		return ((R (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	 HashSet1TEntity>* GetEntities(TKey key) {
		return ((HashSet1TEntity>* (*)(EntityIndex2*, TKey))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(EntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEntity(TKey key, TEntity entity) {
		return ((R (*)(EntityIndex2*, TKey, TEntity))(Il2CppBase() + 0x0))(this, key, entity);
	}
	template <typename R = void> R RemoveEntity(TKey key, TEntity entity) {
		return ((R (*)(EntityIndex2*, TKey, TEntity))(Il2CppBase() + 0x0))(this, key, entity);
	}

};

