#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity>
class PredicateMatcher1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredicateMatcher`1"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& componentNames() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _indexes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _allOfIndexes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _anyOfIndexes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _noneOfIndexes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>*& _predicateDict() {
		return *(Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _hash() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = bool> R& _isHashCached() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 static Il2CppList<int32_t>*& _indexBufferThreadStatic() {
		return *(Il2CppList<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static HashSet1<int32_t>*& _indexSetBufferThreadStatic() {
		return *(HashSet1<int32_t>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& _toStringCache() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = Il2CppArray<int32_t>*> R get_indices() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R get_allOfIndices() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R get_anyOfIndices() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<int32_t>*> R get_noneOfIndices() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R get_componentNames() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_componentNames(Il2CppArray<Il2CppString*>* value) {
		return ((R (*)(PredicateMatcher1*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, value);
	}
	 PredicateMatcher1<TEntity>* AddPredicate(Il2CppString* name, Predicate1<TEntity>* predicate) {
		return ((PredicateMatcher1<TEntity>* (*)(PredicateMatcher1*, Il2CppString*, Predicate1<TEntity>*))(Il2CppBase() + 0x0))(this, name, predicate);
	}
	template <typename R = bool> R Matches(TEntity entity) {
		return ((R (*)(PredicateMatcher1*, TEntity))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename R = bool> R Equals(Il2CppObject* obj) {
		return ((R (*)(PredicateMatcher1*, Il2CppObject*))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename R = bool> static R EqualIndexes(Il2CppArray<int32_t>* i1, Il2CppArray<int32_t>* i2) {
		return ((R (*)(void *, Il2CppArray<int32_t>*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x0))(0, i1, i2);
	}
	template <typename R = bool> static R EqualPredicates(Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>* d1, Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>* d2) {
		return ((R (*)(void *, Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>*, Il2CppDictionary<Il2CppString*, Predicate1<TEntity>*>*))(Il2CppBase() + 0x0))(0, d1, d2);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> static R ApplyHash(int32_t hash, Il2CppArray<int32_t>* indexes, int32_t i1, int32_t i2) {
		return ((R (*)(void *, int32_t, Il2CppArray<int32_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(0, hash, indexes, i1, i2);
	}
	 static Il2CppList<int32_t>* get__indexBuffer() {
		return ((Il2CppList<int32_t>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	 static HashSet1<int32_t>* get__indexSetBuffer() {
		return ((HashSet1<int32_t>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = Il2CppArray<int32_t>*> static R MergeIndexes(Il2CppArray<int32_t>* allOfIndexes, Il2CppArray<int32_t>* anyOfIndexes, Il2CppArray<int32_t>* noneOfIndexes) {
		return ((R (*)(void *, Il2CppArray<int32_t>*, Il2CppArray<int32_t>*, Il2CppArray<int32_t>*))(Il2CppBase() + 0x0))(0, allOfIndexes, anyOfIndexes, noneOfIndexes);
	}
	template <typename R = Il2CppArray<int32_t>*> static R DistinctIndexes(IList1<int32_t>* indexes) {
		return ((R (*)(void *, IList1<int32_t>*))(Il2CppBase() + 0x0))(0, indexes);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppString*> static R GetComponentNames(Il2CppString* prefix, Il2CppArray<int32_t>* indexArray, Il2CppArray<Il2CppString*>* componentNames) {
		return ((R (*)(void *, Il2CppString*, Il2CppArray<int32_t>*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(0, prefix, indexArray, componentNames);
	}

};

