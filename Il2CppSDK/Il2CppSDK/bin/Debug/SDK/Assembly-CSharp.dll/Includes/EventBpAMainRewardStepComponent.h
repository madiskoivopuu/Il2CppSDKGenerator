#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "DeprecatedRewardStepComponent" 

class EventBpAMainRewardStepComponent: DeprecatedRewardStepComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventBpAMainRewardStepComponent"));
	}


	template <typename T = uintptr_t> T get_CurrencyType() {
		return ((T (*)(EventBpAMainRewardStepComponent*))(Il2CppBase() + 0x137F580))(this);
	}
	template <typename T = bool> T get_Premium() {
		return ((T (*)(EventBpAMainRewardStepComponent*))(Il2CppBase() + 0x137F588))(this);
	}

};

}
