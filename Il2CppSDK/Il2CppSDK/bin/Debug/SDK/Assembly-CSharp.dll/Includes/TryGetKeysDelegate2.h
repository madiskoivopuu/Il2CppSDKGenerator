#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TryGetKeysDelegate2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TryGetKeysDelegate`2"));
	}


	template <typename T = bool> T Invoke(uintptr_t e, uintptr_t c, uintptr_t* keys) {
		return ((T (*)(TryGetKeysDelegate2*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(this, e, c, keys);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t e, uintptr_t c, uintptr_t* keys, uintptr_t callback, Il2CppObject* object) {
		return ((T (*)(TryGetKeysDelegate2*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t, Il2CppObject*))(Il2CppBase() + 0x0))(this, e, c, keys, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t* keys, uintptr_t result) {
		return ((T (*)(TryGetKeysDelegate2*, uintptr_t*, uintptr_t))(Il2CppBase() + 0x0))(this, keys, result);
	}

};

