#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TradeRoutesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradeRoutesWindowHelper"));
	}


	template <typename R = TradeRoutesWindow*> static R ShowTradeRoutes(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x150E920))(0, manager);
	}

};

