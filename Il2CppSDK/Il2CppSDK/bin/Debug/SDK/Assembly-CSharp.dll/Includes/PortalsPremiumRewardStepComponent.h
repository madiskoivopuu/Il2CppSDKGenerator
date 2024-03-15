#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class PortalsPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PortalsPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(PortalsPremiumRewardStepComponent*))(Il2CppBase() + 0x16D482C))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(PortalsPremiumRewardStepComponent*))(Il2CppBase() + 0x16D4834))(this);
	}

};

