#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class PortalsPremiumRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsPremiumRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(PortalsPremiumRewardStepComponent*))(Il2CppBase() + 0x16D482C))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(PortalsPremiumRewardStepComponent*))(Il2CppBase() + 0x16D4834))(this);
	}

};

}
