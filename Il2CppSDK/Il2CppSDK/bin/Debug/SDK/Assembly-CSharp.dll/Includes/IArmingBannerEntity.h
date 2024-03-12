#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBannerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBannerEntity"));
	}


	template <typename T = uintptr_t> T get_armingBanner() {
		return ((T (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasArmingBanner() {
		return ((T (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddArmingBanner(Il2CppString* newName) {
		return ((T (*)(IArmingBannerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceArmingBanner(Il2CppString* newName) {
		return ((T (*)(IArmingBannerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveArmingBanner() {
		return ((T (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
