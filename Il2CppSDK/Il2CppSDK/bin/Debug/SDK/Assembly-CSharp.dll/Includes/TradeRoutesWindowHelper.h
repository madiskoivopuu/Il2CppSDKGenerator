#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TradeRoutesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TradeRoutesWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowTradeRoutes(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x150E920))(0, manager);
	}

};

}
