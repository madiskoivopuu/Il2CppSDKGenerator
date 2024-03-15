#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpCMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpCMainRewardStepComponent"));
	}


	template <typename R = CurrencyType*> R get_CurrencyType() {
		return ((R (*)(EventBpCMainRewardStepComponent*))(Il2CppBase() + 0x137F5E0))(this);
	}
	template <typename R = bool> R get_Premium() {
		return ((R (*)(EventBpCMainRewardStepComponent*))(Il2CppBase() + 0x137F5E8))(this);
	}

};

