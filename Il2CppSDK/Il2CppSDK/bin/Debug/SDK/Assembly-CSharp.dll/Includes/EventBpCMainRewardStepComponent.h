#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent.h" 

class EventBpCMainRewardStepComponent : public DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpCMainRewardStepComponent"));
	}


	template <typename T = CurrencyType*> T get_CurrencyType() {
		return ((T (*)(EventBpCMainRewardStepComponent*))(Il2CppBase() + 0x137F5E0))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpCMainRewardStepComponent*))(Il2CppBase() + 0x137F5E8))(this);
	}

};

