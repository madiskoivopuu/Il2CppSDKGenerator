#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity, typename TDataEntity>
class DataEntityIndex2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DataEntityIndex`2"));
	}

	 static HashSet1TEntity>*& _emptySet() {
		return *(HashSet1TEntity>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 IEqualityComparer1TEntity>*& _comparer() {
		return *(IEqualityComparer1TEntity>**)((uintptr_t)this + 0x0);
	}
	 IGroup1TEntity>*& _group() {
		return *(IGroup1TEntity>**)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, HashSet1TEntity>*>*& _index() {
		return *(Il2CppDictionary<Il2CppString*, HashSet1TEntity>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _dataComponentIndex() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _toString() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = Il2CppString*> R get_name() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_name(Il2CppString* value) {
		return ((R (*)(DataEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, value);
	}
	 HashSet1TEntity>* GetEntities(Il2CppString* dataName) {
		return ((HashSet1TEntity>* (*)(DataEntityIndex2*, Il2CppString*))(Il2CppBase() + 0x0))(this, dataName);
	}
	template <typename R = void> R Activate() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Deactivate() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R OnEntityAdded(IGroup1TEntity>* group, TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(DataEntityIndex2*, IGroup1TEntity>*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename R = void> R OnEntityRemoved(IGroup1TEntity>* group, TEntity entity, int32_t index, uintptr_t component) {
		return ((R (*)(DataEntityIndex2*, IGroup1TEntity>*, TEntity, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, group, entity, index, component);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddEntity(TEntity entity, TDataEntity dataEntity) {
		return ((R (*)(DataEntityIndex2*, TEntity, TDataEntity))(Il2CppBase() + 0x0))(this, entity, dataEntity);
	}
	template <typename R = void> R RemoveEntity(TEntity entity, TDataEntity dataEntity) {
		return ((R (*)(DataEntityIndex2*, TEntity, TDataEntity))(Il2CppBase() + 0x0))(this, entity, dataEntity);
	}
	template <typename R = void> R Finalize() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DataEntityIndex2*))(Il2CppBase() + 0x0))(this);
	}

};

