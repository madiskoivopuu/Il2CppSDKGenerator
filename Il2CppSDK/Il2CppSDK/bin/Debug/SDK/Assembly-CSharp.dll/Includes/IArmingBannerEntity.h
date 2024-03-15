#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IArmingBannerEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IArmingBannerEntity"));
	}


	template <typename R = ArmingBannerComponent*> R get_armingBanner() {
		return ((R (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasArmingBanner() {
		return ((R (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddArmingBanner(Il2CppString* newName) {
		return ((R (*)(IArmingBannerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceArmingBanner(Il2CppString* newName) {
		return ((R (*)(IArmingBannerEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveArmingBanner() {
		return ((R (*)(IArmingBannerEntity*))(Il2CppBase() + 0x0))(this);
	}

};

