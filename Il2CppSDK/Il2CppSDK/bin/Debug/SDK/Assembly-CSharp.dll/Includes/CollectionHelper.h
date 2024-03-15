#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollectionHelper"));
	}


	 static HashSet1<uintptr_t>* ToHashSet(IEnumerable1<uintptr_t>* collection) {
		return ((HashSet1<uintptr_t>* (*)(void *, IEnumerable1<uintptr_t>*))(Il2CppBase() + 0x0))(0, collection);
	}
	 static uintptr_t GetValueOrDefault(IDictionary2<uintptr_t, uintptr_t>* dictionary, uintptr_t key) {
		return ((uintptr_t (*)(void *, IDictionary2<uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	 static uintptr_t GetValueOrDefault_1(IDictionary2<Il2CppString*, uintptr_t>* dictionary, Il2CppString* key) {
		return ((uintptr_t (*)(void *, IDictionary2<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	 static uintptr_t GetValueOrDefault_2(IDictionary2<uintptr_t, uintptr_t>* dictionary, uintptr_t key, uintptr_t defaultValue) {
		return ((uintptr_t (*)(void *, IDictionary2<uintptr_t, uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	 static uintptr_t GetValueOrDefault_3(IDictionary2<Il2CppString*, uintptr_t>* dictionary, Il2CppString* key, uintptr_t defaultValue) {
		return ((uintptr_t (*)(void *, IDictionary2<Il2CppString*, uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	template <typename R = void> static R AddToList(IDictionary2<uintptr_t, Il2CppList<uintptr_t>*>* dictionary, uintptr_t key, uintptr_t value) {
		return ((R (*)(void *, IDictionary2<uintptr_t, Il2CppList<uintptr_t>*>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	template <typename R = bool> static R RemoveFromList(IDictionary2<uintptr_t, Il2CppList<uintptr_t>*>* dictionary, uintptr_t key, uintptr_t value) {
		return ((R (*)(void *, IDictionary2<uintptr_t, Il2CppList<uintptr_t>*>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	 static uintptr_t GetOrAdd(IDictionary2<uintptr_t, uintptr_t>* dictionary, uintptr_t key) {
		return ((uintptr_t (*)(void *, IDictionary2<uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	 static Il2CppArray<uintptr_t>* Copy(Il2CppArray<uintptr_t>* array, Func2<uintptr_t, uintptr_t>* copyItem) {
		return ((Il2CppArray<uintptr_t>* (*)(void *, Il2CppArray<uintptr_t>*, Func2<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, array, copyItem);
	}
	 static Il2CppArray<uintptr_t>* Union(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2) {
		return ((Il2CppArray<uintptr_t>* (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, arr1, arr2);
	}
	template <typename R = void> static R Fill(Il2CppList<uintptr_t>* list, IGroup1<uintptr_t>* group) {
		return ((R (*)(void *, Il2CppList<uintptr_t>*, IGroup1<uintptr_t>*))(Il2CppBase() + 0x0))(0, list, group);
	}
	template <typename R = bool> static R AreEqual(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2, bool nullIsEmpty) {
		return ((R (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, arr1, arr2, nullIsEmpty);
	}
	template <typename R = bool> static R AreEqual_1(Il2CppList<uintptr_t>* list1, Il2CppList<uintptr_t>* list2, bool nullIsEmpty) {
		return ((R (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, list1, list2, nullIsEmpty);
	}
	template <typename R = bool> static R AreEqual_2(HashSet1<uintptr_t>* set1, HashSet1<uintptr_t>* set2, bool nullIsEmpty) {
		return ((R (*)(void *, HashSet1<uintptr_t>*, HashSet1<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, set1, set2, nullIsEmpty);
	}
	 static IList1<uintptr_t>* Shuffle(IList1<uintptr_t>* list, uintptr_t rng) {
		return ((IList1<uintptr_t>* (*)(void *, IList1<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, list, rng);
	}
	template <typename R = void> static R QuickSort(IList1<uintptr_t>* list, int32_t minIndex, int32_t maxIndex, IComparer1<uintptr_t>* comparer) {
		return ((R (*)(void *, IList1<uintptr_t>*, int32_t, int32_t, IComparer1<uintptr_t>*))(Il2CppBase() + 0x0))(0, list, minIndex, maxIndex, comparer);
	}
	template <typename R = void> static R QuickSort_1(IList1<uintptr_t>* list, IComparer1<uintptr_t>* comparer) {
		return ((R (*)(void *, IList1<uintptr_t>*, IComparer1<uintptr_t>*))(Il2CppBase() + 0x0))(0, list, comparer);
	}

};

