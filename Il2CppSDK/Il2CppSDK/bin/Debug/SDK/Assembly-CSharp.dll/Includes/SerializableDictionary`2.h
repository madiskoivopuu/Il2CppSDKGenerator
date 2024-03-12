#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SerializableDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializableDictionary`2"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _Buckets() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _HashCodes() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Next() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _Count() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _Version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _FreeList() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _FreeCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Keys() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Values() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& _Comparer() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T get_AsDictionary() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Item(uintptr_t key, uintptr_t defaultValue) {
		return ((T (*)(SerializableDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	template <typename T = uintptr_t> T get_Item_1(uintptr_t key) {
		return ((T (*)(SerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T set_Item(uintptr_t key, uintptr_t value) {
		return ((T (*)(SerializableDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = bool> T ContainsValue(uintptr_t value) {
		return ((T (*)(SerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = bool> T ContainsKey(uintptr_t key) {
		return ((T (*)(SerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Add(uintptr_t key, uintptr_t value) {
		return ((T (*)(SerializableDictionary2*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T Resize(int32_t newSize, bool forceNewHashCodes) {
		return ((T (*)(SerializableDictionary2*, int32_t, bool))(Il2CppBase() + 0x0))(this, newSize, forceNewHashCodes);
	}
	template <typename T = void> T Resize_1() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Remove(uintptr_t key) {
		return ((T (*)(SerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = void> T Insert(uintptr_t key, uintptr_t value, bool add) {
		return ((T (*)(SerializableDictionary2*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, key, value, add);
	}
	template <typename T = void> T Initialize(int32_t capacity) {
		return ((T (*)(SerializableDictionary2*, int32_t))(Il2CppBase() + 0x0))(this, capacity);
	}
	template <typename T = int32_t> T FindIndex(uintptr_t key) {
		return ((T (*)(SerializableDictionary2*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename T = bool> T TryGetValue(uintptr_t key, uintptr_t* value) {
		return ((T (*)(SerializableDictionary2*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void*> T get_Keys() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T get_Values() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Add_1(void* item) {
		return ((T (*)(SerializableDictionary2*, void*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = bool> T Contains(void* item) {
		return ((T (*)(SerializableDictionary2*, void*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void> T CopyTo(Il2CppArray<uintptr_t>* array, int32_t index) {
		return ((T (*)(SerializableDictionary2*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x0))(this, array, index);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Remove_1(void* item) {
		return ((T (*)(SerializableDictionary2*, void*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename T = void*> T GetEnumerator() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerable_GetEnumerator() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumerableSystem_Collections_Generic_KeyValuePairTKey,TValue_GetEnumerator() {
		return ((T (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}

};

}
