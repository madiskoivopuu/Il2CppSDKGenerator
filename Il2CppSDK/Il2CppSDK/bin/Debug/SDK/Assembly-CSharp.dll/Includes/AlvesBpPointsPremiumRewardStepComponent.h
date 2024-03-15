#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class AlvesBpPointsPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlvesBpPointsPremiumRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(AlvesBpPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x129E4DC))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(AlvesBpPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x129E4E4))(this);
	}

};

