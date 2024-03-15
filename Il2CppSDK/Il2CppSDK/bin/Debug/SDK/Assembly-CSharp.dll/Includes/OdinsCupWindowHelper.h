#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OdinsCupWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OdinsCupWindowHelper"));
	}


	template <typename R = OdinsCupWindow*> static R ShowOdinsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11D6520))(0, manager, targetId);
	}
	template <typename R = void> static R OnOdinsCupDonationResult(UIWindowsManager* manager, DonationResult* donationResult) {
		return ((R (*)(void *, UIWindowsManager*, DonationResult*))(Il2CppBase() + 0x11D65EC))(0, manager, donationResult);
	}
	template <typename R = void> static R CloseOdinsCup(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11D6720))(0, manager, targetId);
	}

};

