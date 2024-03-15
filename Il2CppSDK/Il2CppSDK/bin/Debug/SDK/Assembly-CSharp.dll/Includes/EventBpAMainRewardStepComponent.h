#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpAMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpAMainRewardStepComponent"));
	}


	template <typename R = CurrencyType> R get_CurrencyType() {
		return ((R (*)(EventBpAMainRewardStepComponent*))(Il2CppBase() + 0x137F580))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(EventBpAMainRewardStepComponent*))(Il2CppBase() + 0x137F588))(this);
	}

};

