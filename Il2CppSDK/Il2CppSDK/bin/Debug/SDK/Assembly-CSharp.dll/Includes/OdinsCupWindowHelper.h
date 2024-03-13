#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OdinsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindowHelper"));
	}


	template <typename T = OdinsCupWindow*> static T ShowOdinsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11D6520))(0, manager, targetId);
	}
	template <typename T = void> static T OnOdinsCupDonationResult(UIWindowsManager* manager, DonationResult* donationResult) {
		return ((T (*)(void *, UIWindowsManager*, DonationResult*))(Il2CppBase() + 0x11D65EC))(0, manager, donationResult);
	}
	template <typename T = void> static T CloseOdinsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11D6720))(0, manager, targetId);
	}

};

