#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreyrsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreyrsCupWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowFreyrsCup(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15FCD50))(0, manager, targetId);
	}
	template <typename T = void> static T OnFreyrsCupDonationResult(uintptr_t manager, uintptr_t donationResult) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x15FCE1C))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseFreyrsCup(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x15FCF50))(0, manager, targetId);
	}

};

}
