#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TKey, typename TValue>
class DictPool2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictPool`2"));
	}

	template <typename R = int32_t> static R& MAX_SIZE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Il2CppArray<Il2CppDictionary<TKey, TValue>*>*& _sharedBag() {
		return *(Il2CppArray<Il2CppDictionary<TKey, TValue>*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _count() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	 static Il2CppDictionary<TKey, TValue>* Get() {
		return ((Il2CppDictionary<TKey, TValue>* (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename R = void> static R Release(Il2CppDictionary<TKey, TValue>* dict) {
		return ((R (*)(void *, Il2CppDictionary<TKey, TValue>*))(Il2CppBase() + 0x0))(0, dict);
	}

};

