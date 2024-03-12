#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollectionHelper"));
	}


	template <typename T = void*> static T ToHashSet(void* collection) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, collection);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault(void* dictionary, uintptr_t key) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_1(void* dictionary, Il2CppString* key) {
		return ((T (*)(void *, void*, Il2CppString*))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_2(void* dictionary, uintptr_t key, uintptr_t defaultValue) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	template <typename T = uintptr_t> static T GetValueOrDefault_3(void* dictionary, Il2CppString* key, uintptr_t defaultValue) {
		return ((T (*)(void *, void*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, defaultValue);
	}
	template <typename T = void> static T AddToList(void* dictionary, uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	template <typename T = bool> static T RemoveFromList(void* dictionary, uintptr_t key, uintptr_t value) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key, value);
	}
	template <typename T = uintptr_t> static T GetOrAdd(void* dictionary, uintptr_t key) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, dictionary, key);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Copy(Il2CppArray<uintptr_t>* array, void* copyItem) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, void*))(Il2CppBase() + 0x0))(0, array, copyItem);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Union(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, arr1, arr2);
	}
	template <typename T = void> static T Fill(Il2CppList<uintptr_t>* list, void* group) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, void*))(Il2CppBase() + 0x0))(0, list, group);
	}
	template <typename T = bool> static T AreEqual(Il2CppArray<uintptr_t>* arr1, Il2CppArray<uintptr_t>* arr2, bool nullIsEmpty) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, arr1, arr2, nullIsEmpty);
	}
	template <typename T = bool> static T AreEqual_1(Il2CppList<uintptr_t>* list1, Il2CppList<uintptr_t>* list2, bool nullIsEmpty) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x0))(0, list1, list2, nullIsEmpty);
	}
	template <typename T = bool> static T AreEqual_2(void* set1, void* set2, bool nullIsEmpty) {
		return ((T (*)(void *, void*, void*, bool))(Il2CppBase() + 0x0))(0, set1, set2, nullIsEmpty);
	}
	template <typename T = void*> static T Shuffle(void* list, uintptr_t rng) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, list, rng);
	}
	template <typename T = void> static T QuickSort(void* list, int32_t minIndex, int32_t maxIndex, void* comparer) {
		return ((T (*)(void *, void*, int32_t, int32_t, void*))(Il2CppBase() + 0x0))(0, list, minIndex, maxIndex, comparer);
	}
	template <typename T = void> static T QuickSort_1(void* list, void* comparer) {
		return ((T (*)(void *, void*, void*))(Il2CppBase() + 0x0))(0, list, comparer);
	}

};

}
