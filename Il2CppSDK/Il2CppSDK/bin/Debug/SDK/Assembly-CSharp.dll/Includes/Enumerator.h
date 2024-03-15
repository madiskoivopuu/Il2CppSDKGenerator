#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TKey, typename TValue>
class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Enumerator"));
	}

	 SerializableDictionary2TKey, TValue>*& _Dictionary() {
		return *(SerializableDictionary2TKey, TValue>**)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _Version() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& _Index() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	 KeyValuePair2TKey, TValue>*& _Current() {
		return *(KeyValuePair2TKey, TValue>**)((uintptr_t)this + 0x0);
	}

	 KeyValuePair2TKey, TValue>* get_Current() {
		return ((KeyValuePair2TKey, TValue>* (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R MoveNext() {
		return ((R (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R System_Collections_IEnumerator_Reset() {
		return ((R (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppObject*> R System_Collections_IEnumerator_get_Current() {
		return ((R (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Dispose() {
		return ((R (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}

};

