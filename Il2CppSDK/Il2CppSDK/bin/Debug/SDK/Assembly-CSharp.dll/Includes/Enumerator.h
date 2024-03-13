#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Enumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Enumerator"));
	}

	template <typename T = SerializableDictionary2uintptr_t, uintptr_t>*> T& _Dictionary() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _Version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _Index() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = KeyValuePair2uintptr_t, uintptr_t>*> T& _Current() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = KeyValuePair2uintptr_t, uintptr_t>*> T get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppObject*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(Enumerator*))(Il2CppBase() + 0x0))(this);
	}

};

