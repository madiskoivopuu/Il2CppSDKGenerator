#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollectionHelper"));
	}


	template <typename T = HashSet1uintptr_t>*> static T ToHashSet(IEnumerable1uintptr_t>* collection) {
		return ((T (*)(void *, IEnumerable1uintptr_t>*))(Il2CppBase() + 0x0))(0, collection);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault(IDictionary2uintptr_t, uintptr_t>* dictionary, uintptr_t key) {
		return ((T (*)(void *, IDictionary2uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_1(IDictionary2Il2CppString*, uintptr_t>* dictionary, Il2CppString* key) {
		return ((T (*)(void *, IDictionary2Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_2(IDictionary2uintptr_t, uintptr_t>* dictionary, uintptr_t key, uintptr_t defaultValue) {
		return ((T (*)(void *, IDictionary2uintptr_t, uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_3(IDictionary2Il2CppString*, uintptr_t>* dictionary, Il2CppString* key, uintptr_t defaultValue) {
		return ((T (*)(void *, IDictionary2Il2CppString*, uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	template <typename T = void> static T AddToList(IDictionary2uintptr_t, Il2CppList<uintptr_t>*>* dictionary, uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, IDictionary2uintptr_t, Il2CppList<uintptr_t>*>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	template <typename T = bool> static T RemoveFromList(IDictionary2uintptr_t, Il2CppList<uintptr_t>*>* dictionary, uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, IDictionary2uintptr_t, Il2CppList<uintptr_t>*>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	template <typename T = uintptr_t> static T GetOrAdd(IDictionary2uintptr_t, uintptr_t>* dictionary, uintptr_t key) {
		return ((T (*)(void *, IDictionary2uintptr_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Copy(Il2CppArray<uintptr_t>* array, Func2uintptr_t, uintptr_t>* copyItem) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Func2uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, array, copyItem);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Union(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, arr1, arr2);
	}
	template <typename T = void> static T Fill(Il2CppList<uintptr_t>* list, IGroup1uintptr_t>* group) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, IGroup1uintptr_t>*))(Il2CppBase() + 0x0))(0, list, group);
	}
	template <typename T = bool> static T AreEqual(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2, bool nullIsEmpty) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, arr1, arr2, nullIsEmpty);
	}
	template <typename T = bool> static T AreEqual_1(Il2CppList<uintptr_t>* list1, Il2CppList<uintptr_t>* list2, bool nullIsEmpty) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, list1, list2, nullIsEmpty);
	}
	template <typename T = bool> static T AreEqual_2(HashSet1uintptr_t>* set1, HashSet1uintptr_t>* set2, bool nullIsEmpty) {
		return ((T (*)(void *, HashSet1uintptr_t>*, HashSet1uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, set1, set2, nullIsEmpty);
	}
	template <typename T = IList1uintptr_t>*> static T Shuffle(IList1uintptr_t>* list, uintptr_t rng) {
		return ((T (*)(void *, IList1uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, list, rng);
	}
	template <typename T = void> static T QuickSort(IList1uintptr_t>* list, int32_t minIndex, int32_t maxIndex, IComparer1uintptr_t>* comparer) {
		return ((T (*)(void *, IList1uintptr_t>*, int32_t, int32_t, IComparer1uintptr_t>*))(Il2CppBase() + 0x0))(0, list, minIndex, maxIndex, comparer);
	}
	template <typename T = void> static T QuickSort_1(IList1uintptr_t>* list, IComparer1uintptr_t>* comparer) {
		return ((T (*)(void *, IList1uintptr_t>*, IComparer1uintptr_t>*))(Il2CppBase() + 0x0))(0, list, comparer);
	}

};

