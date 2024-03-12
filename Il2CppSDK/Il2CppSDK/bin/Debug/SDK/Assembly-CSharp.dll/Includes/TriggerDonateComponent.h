#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerDonateComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerDonateComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(TriggerDonateComponent*, uintptr_t))(Il2CppBase() + 0x15257FC))(this, target);
	}

};

}
