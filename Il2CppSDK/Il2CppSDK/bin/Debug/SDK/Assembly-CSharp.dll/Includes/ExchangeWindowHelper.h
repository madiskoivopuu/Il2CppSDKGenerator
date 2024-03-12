#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowExchangeWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x1683B1C))(0, manager, targetId);
	}
	template <typename T = void> static T OnCurrencyExchangeResult(uintptr_t manager, int32_t reward, Il2CppString* errorMsg) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x1683BE8))(0, manager, reward, errorMsg);
	}

};

}
