#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RateUsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RateUsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowRateUs(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1719724))(0, manager);
	}
	template <typename T = uintptr_t> static T TryShowRateUs(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x17197E0))(0, manager);
	}

};

}
