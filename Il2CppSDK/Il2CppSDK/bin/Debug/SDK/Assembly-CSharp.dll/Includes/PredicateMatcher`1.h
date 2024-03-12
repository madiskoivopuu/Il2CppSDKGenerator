#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PredicateMatcher1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PredicateMatcher`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& componentNames() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _indexes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _allOfIndexes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _anyOfIndexes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _noneOfIndexes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, void*>*> T& _predicateDict() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _hash() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& _isHashCached() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<int32_t>*> static T& _indexBufferThreadStatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _indexSetBufferThreadStatic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& _toStringCache() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_indices() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_allOfIndices() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_anyOfIndices() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_noneOfIndices() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_componentNames() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_componentNames(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PredicateMatcher1*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void*> T AddPredicate(Il2CppString* name, void* predicate) {
		return ((T (*)(PredicateMatcher1*, Il2CppString*, void*))(Il2CppBase() + 0x0))(this, name, predicate);
	}
	template <typename T = bool> T Matches(uintptr_t entity) {
		return ((T (*)(PredicateMatcher1*, uintptr_t))(Il2CppBase() + 0x0))(this, entity);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(PredicateMatcher1*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = bool> static T EqualIndexes(Il2CppArray<uintptr_t>* i1, Il2CppArray<uintptr_t>* i2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, i1, i2);
	}
	template <typename T = bool> static T EqualPredicates(Il2CppDictionary<Il2CppString*, void*>* d1, Il2CppDictionary<Il2CppString*, void*>* d2) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, void*>*, Il2CppDictionary<Il2CppString*, void*>*))(Il2CppBase() + 0x0))(0, d1, d2);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> static T ApplyHash(int32_t hash, Il2CppArray<uintptr_t>* indexes, int32_t i1, int32_t i2) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x0))(0, hash, indexes, i1, i2);
	}
	template <typename T = Il2CppList<int32_t>*> static T get__indexBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = void*> static T get__indexSetBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T MergeIndexes(Il2CppArray<uintptr_t>* allOfIndexes, Il2CppArray<uintptr_t>* anyOfIndexes, Il2CppArray<uintptr_t>* noneOfIndexes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, allOfIndexes, anyOfIndexes, noneOfIndexes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DistinctIndexes(void* indexes) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, indexes);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PredicateMatcher1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> static T GetComponentNames(Il2CppString* prefix, Il2CppArray<uintptr_t>* indexArray, Il2CppArray<uintptr_t>* componentNames) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, prefix, indexArray, componentNames);
	}

};

}
