#pragma once
#include <Il2Cpp/Il2Cpp.h>

template <typename TEntity, typename TKey>
class TryGetKeysDelegate2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TryGetKeysDelegate`2"));
	}


	template <typename R = bool> R Invoke(TEntity e, uintptr_t c, uintptr_t* keys) {
		return ((R (*)(TryGetKeysDelegate2*, TEntity, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, e, c, keys);
	}
	template <typename R = uintptr_t> R BeginInvoke(TEntity e, uintptr_t c, uintptr_t* keys, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(TryGetKeysDelegate2*, TEntity, uintptr_t, uintptr_t*, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x0))(this, e, c, keys, callback, object);
	}
	template <typename R = bool> R EndInvoke(uintptr_t* keys, uintptr_t result) {
		return ((R (*)(TryGetKeysDelegate2*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x0))(this, keys, result);
	}

};

