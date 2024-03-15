#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WarningHookDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WarningHookDelegate"));
	}


	template <typename R = void> R Invoke(WarningDataForClient* data, uintptr_t hooked) {
		return ((R (*)(WarningHookDelegate*, WarningDataForClient*, uintptr_t))(Il2CppBase() + 0xEE7A7C))(this, data, hooked);
	}
	template <typename R = uintptr_t> R BeginInvoke(WarningDataForClient* data, uintptr_t hooked, uintptr_t callback, Il2CppObject* object) {
		return ((R (*)(WarningHookDelegate*, WarningDataForClient*, uintptr_t, uintptr_t, Il2CppObject*))(Il2CppBase() + 0xEE7D98))(this, data, hooked, callback, object);
	}
	template <typename R = void> R EndInvoke(uintptr_t hooked, uintptr_t result) {
		return ((R (*)(WarningHookDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0xEE7E54))(this, hooked, result);
	}

};

