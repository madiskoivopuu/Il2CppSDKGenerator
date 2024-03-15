#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class AlvesBpPointsMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlvesBpPointsMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(AlvesBpPointsMainRewardStepComponent*))(Il2CppBase() + 0x129E4C4))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(AlvesBpPointsMainRewardStepComponent*))(Il2CppBase() + 0x129E4CC))(this);
	}

};

