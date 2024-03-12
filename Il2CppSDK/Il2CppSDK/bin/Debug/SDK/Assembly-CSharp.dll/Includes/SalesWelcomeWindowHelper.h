#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SalesWelcomeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SalesWelcomeWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowSalesWelcomeMessage(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1356190))(0, manager);
	}
	template <typename T = bool> static T ShowSalesWelcomeMessageg__isAvailable|0_2(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1356AC0))(0, e);
	}

};

}
