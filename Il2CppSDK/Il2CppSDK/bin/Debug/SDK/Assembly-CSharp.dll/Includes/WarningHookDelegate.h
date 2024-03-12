#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningHookDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningHookDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t data, uintptr_t hooked) {
		return ((T (*)(WarningHookDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE7A7C))(this, data, hooked);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t data, uintptr_t hooked, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WarningHookDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE7D98))(this, data, hooked, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t hooked, uintptr_t result) {
		return ((T (*)(WarningHookDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE7E54))(this, hooked, result);
	}

};

}
