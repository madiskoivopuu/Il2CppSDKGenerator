#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OdinsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOdinsCup(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x11D6520))(0, manager, targetId);
	}
	template <typename T = void> static T OnOdinsCupDonationResult(uintptr_t manager, uintptr_t donationResult) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x11D65EC))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseOdinsCup(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x11D6720))(0, manager, targetId);
	}

};

}
