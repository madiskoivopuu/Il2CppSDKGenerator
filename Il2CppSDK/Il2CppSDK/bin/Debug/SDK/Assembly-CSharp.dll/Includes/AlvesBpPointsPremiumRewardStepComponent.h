#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class AlvesBpPointsPremiumRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlvesBpPointsPremiumRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(AlvesBpPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x129E4DC))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(AlvesBpPointsPremiumRewardStepComponent*))(Il2CppBase() + 0x129E4E4))(this);
	}

};

