#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TKey, typename TValue>
class SerializableDictionary2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializableDictionary`2"));
	}

	template <typename R = Il2CppArray<int32_t>*> R& _Buckets() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _HashCodes() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _Next() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _Count() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _Version() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _FreeList() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _FreeCount() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 Il2CppArray<TKey>*& _Keys() {
		return *(Il2CppArray<TKey>**)((uintptr_t)this + 0x0);
	}
	 Il2CppArray<TValue>*& _Values() {
		return *(Il2CppArray<TValue>**)((uintptr_t)this + 0x0);
	}
	 IEqualityComparer1<TKey>*& _Comparer() {
		return *(IEqualityComparer1<TKey>**)((uintptr_t)this + 0x0);
	}

	 Il2CppDictionary<TKey, TValue>* get_AsDictionary() {
		return ((Il2CppDictionary<TKey, TValue>* (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = int32_t> R get_Count() {
		return ((R (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	 TValue get_Item(TKey key, TValue defaultValue) {
		return ((TValue (*)(SerializableDictionary2*, TKey, TValue))(Il2CppBase() + 0x0))(this, key, defaultValue);
	}
	 TValue get_Item_1(TKey key) {
		return ((TValue (*)(SerializableDictionary2*, TKey))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = void> R set_Item(TKey key, TValue value) {
		return ((R (*)(SerializableDictionary2*, TKey, TValue))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = bool> R ContainsValue(TValue value) {
		return ((R (*)(SerializableDictionary2*, TValue))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename R = bool> R ContainsKey(TKey key) {
		return ((R (*)(SerializableDictionary2*, TKey))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = void> R Clear() {
		return ((R (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Add(TKey key, TValue value) {
		return ((R (*)(SerializableDictionary2*, TKey, TValue))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename R = void> R Resize(int32_t newSize, bool forceNewHashCodes) {
		return ((R (*)(SerializableDictionary2*, int32_t, bool))(Il2CppBase() + 0x0))(this, newSize, forceNewHashCodes);
	}
	template <typename R = void> R Resize_1() {
		return ((R (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R Remove(TKey key) {
		return ((R (*)(SerializableDictionary2*, TKey))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = void> R Insert(TKey key, TValue value, bool add) {
		return ((R (*)(SerializableDictionary2*, TKey, TValue, bool))(Il2CppBase() + 0x0))(this, key, value, add);
	}
	template <typename R = void> R Initialize(int32_t capacity) {
		return ((R (*)(SerializableDictionary2*, int32_t))(Il2CppBase() + 0x0))(this, capacity);
	}
	template <typename R = int32_t> R FindIndex(TKey key) {
		return ((R (*)(SerializableDictionary2*, TKey))(Il2CppBase() + 0x0))(this, key);
	}
	template <typename R = bool> R TryGetValue(TKey key, uintptr_t* value) {
		return ((R (*)(SerializableDictionary2*, TKey, uintptr_t*))(Il2CppBase() + 0x0))(this, key, value);
	}
	 ICollection1<TKey>* get_Keys() {
		return ((ICollection1<TKey>* (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	 ICollection1<TValue>* get_Values() {
		return ((ICollection1<TValue>* (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Add_1(KeyValuePair2<TKey, TValue>* item) {
		return ((R (*)(SerializableDictionary2*, KeyValuePair2<TKey, TValue>*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = bool> R Contains(KeyValuePair2<TKey, TValue>* item) {
		return ((R (*)(SerializableDictionary2*, KeyValuePair2<TKey, TValue>*))(Il2CppBase() + 0x0))(this, item);
	}
	template <typename R = void> R CopyTo(Il2CppArray<KeyValuePair2<TKey, TValue>*>* array, int32_t index) {
		return ((R (*)(SerializableDictionary2*, Il2CppArray<KeyValuePair2<TKey, TValue>*>*, int32_t))(Il2CppBase() + 0x0))(this, array, index);
	}
	template <typename R = bool> R get_IsReadOnly() {
		return ((R (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R Remove_1(KeyValuePair2<TKey, TValue>* item) {
		return ((R (*)(SerializableDictionary2*, KeyValuePair2<TKey, TValue>*))(Il2CppBase() + 0x0))(this, item);
	}
	 Enumerator<TKey, TValue>* GetEnumerator() {
		return ((Enumerator<TKey, TValue>* (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = uintptr_t> R System_Collections_IEnumerable_GetEnumerator() {
		return ((R (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}
	 IEnumerator1<KeyValuePair2<TKey, TValue>*>* System_Collections_Generic_IEnumerableSystem_Collections_Generic_KeyValuePairTKey,TValue_GetEnumerator() {
		return ((IEnumerator1<KeyValuePair2<TKey, TValue>*>* (*)(SerializableDictionary2*))(Il2CppBase() + 0x0))(this);
	}

};

