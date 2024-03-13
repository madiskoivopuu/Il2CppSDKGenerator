#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreyrsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreyrsCupWindowHelper"));
	}


	template <typename T = FreyrsCupWindow*> static T ShowFreyrsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FCD50))(0, manager, targetId);
	}
	template <typename T = void> static T OnFreyrsCupDonationResult(UIWindowsManager* manager, DonationResult* donationResult) {
		return ((T (*)(void *, UIWindowsManager*, DonationResult*))(Il2CppBase() + 0x15FCE1C))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseFreyrsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15FCF50))(0, manager, targetId);
	}

};

