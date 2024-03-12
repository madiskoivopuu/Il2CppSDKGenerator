#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowCurrencyExchangeWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1BD5500))(0, manager, targetId);
	}
	template <typename T = void> static T OnExchangeResult(uintptr_t manager, int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1BD55CC))(0, manager, reward, errorMsg);
	}

};

}
