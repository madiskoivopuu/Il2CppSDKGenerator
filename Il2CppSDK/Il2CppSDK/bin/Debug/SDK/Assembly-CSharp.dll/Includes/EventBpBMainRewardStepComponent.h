#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class EventBpBMainRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpBMainRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(EventBpBMainRewardStepComponent*))(Il2CppBase() + 0x137F5B0))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpBMainRewardStepComponent*))(Il2CppBase() + 0x137F5B8))(this);
	}

};

}
