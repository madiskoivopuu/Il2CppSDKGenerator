#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RateUsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RateUsWindowHelper"));
	}


	template <typename R = RateUsWindow*> static R ShowRateUs(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1719724))(0, manager);
	}
	template <typename R = RateUsWindow*> static R TryShowRateUs(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x17197E0))(0, manager);
	}

};

