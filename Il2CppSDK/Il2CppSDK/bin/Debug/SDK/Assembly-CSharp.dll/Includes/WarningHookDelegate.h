#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningHookDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningHookDelegate"));
	}


	template <typename T = void> T Invoke(WarningDataForClient* data, uintptr_t hooked) {
		return ((T (*)(WarningHookDelegate*, WarningDataForClient*, uintptr_t))(Il2CppBase() + 0xEE7A7C))(this, data, hooked);
	}
	template <typename T = uintptr_t> T BeginInvoke(WarningDataForClient* data, uintptr_t hooked, uintptr_t callback, Il2CppObject* object) {
		return ((T (*)(WarningHookDelegate*, WarningDataForClient*, uintptr_t, uintptr_t, Il2CppObject*))(Il2CppBase() + 0xEE7D98))(this, data, hooked, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t hooked, uintptr_t result) {
		return ((T (*)(WarningHookDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE7E54))(this, hooked, result);
	}

};

