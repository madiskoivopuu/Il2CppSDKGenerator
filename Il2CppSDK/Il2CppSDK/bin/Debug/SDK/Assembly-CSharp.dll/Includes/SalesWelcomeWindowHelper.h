#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SalesWelcomeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SalesWelcomeWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowSalesWelcomeMessage(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1356190))(0, manager);
	}
	template <typename R = bool> static R ShowSalesWelcomeMessageg__isAvailable|0_2(StoreSalesEntity* e) {
		return ((R (*)(void *, StoreSalesEntity*))(Il2CppBase() + 0x1356AC0))(0, e);
	}

};

