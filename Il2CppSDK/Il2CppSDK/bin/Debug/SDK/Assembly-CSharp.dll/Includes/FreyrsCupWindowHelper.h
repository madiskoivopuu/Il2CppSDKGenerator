#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreyrsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreyrsCupWindowHelper"));
	}


	template <typename R = FreyrsCupWindow*> static R ShowFreyrsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FCD50))(0, manager, targetId);
	}
	template <typename R = void> static R OnFreyrsCupDonationResult(UIWindowsManager* manager, DonationResult donationResult) {
		return ((R (*)(void *, UIWindowsManager*, DonationResult))(Il2CppBase() + 0x15FCE1C))(0, manager, donationResult);
	}
	template <typename R = void> static R CloseFreyrsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FCF50))(0, manager, targetId);
	}

};

