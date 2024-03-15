#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpBMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpBMainRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(EventBpBMainRewardStepComponent*))(Il2CppBase() + 0x137F5B0))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(EventBpBMainRewardStepComponent*))(Il2CppBase() + 0x137F5B8))(this);
	}

};

