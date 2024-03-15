#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExchangeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExchangeWindowHelper"));
	}


	template <typename R = ExchangeWindow*> static R ShowExchangeWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1683B1C))(0, manager, targetId);
	}
	template <typename R = void> static R OnCurrencyExchangeResult(UIWindowsManager* manager, int32_t reward, Il2CppString* errorMsg) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, Il2CppString*))(Il2CppBase() + 0x1683BE8))(0, manager, reward, errorMsg);
	}

};

