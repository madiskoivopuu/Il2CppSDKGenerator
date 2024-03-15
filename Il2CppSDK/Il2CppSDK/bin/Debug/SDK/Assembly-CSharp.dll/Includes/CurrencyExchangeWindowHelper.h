#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurrencyExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurrencyExchangeWindowHelper"));
	}


	template <typename R = CurrencyExchangeWindow*> static R ShowCurrencyExchangeWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1BD5500))(0, manager, targetId);
	}
	template <typename R = void> static R OnExchangeResult(UIWindowsManager* manager, int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x1BD55CC))(0, manager, reward, errorMsg);
	}

};

