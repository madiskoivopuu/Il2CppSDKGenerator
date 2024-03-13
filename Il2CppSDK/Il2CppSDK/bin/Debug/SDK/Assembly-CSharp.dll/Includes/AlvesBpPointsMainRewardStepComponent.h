#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class AlvesBpPointsMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AlvesBpPointsMainRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(AlvesBpPointsMainRewardStepComponent*))(Il2CppBase() + 0x129E4C4))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(AlvesBpPointsMainRewardStepComponent*))(Il2CppBase() + 0x129E4CC))(this);
	}

};

