#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PricesWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PricesWindowHelper"));
	}


	template <typename T = PricesWindow*> static T ShowPrices(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16E4258))(0, manager, targetId);
	}

};

