#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceAdUnits
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceAdUnits"));
	}


	template <typename R = Il2CppString*> static R get_REWARDED_VIDEO() {
		return ((R (*)(void *))(Il2CppBase() + 0x124C5EC))(0);
	}
	template <typename R = Il2CppString*> static R get_INTERSTITIAL() {
		return ((R (*)(void *))(Il2CppBase() + 0x124C630))(0);
	}
	template <typename R = Il2CppString*> static R get_OFFERWALL() {
		return ((R (*)(void *))(Il2CppBase() + 0x124C674))(0);
	}
	template <typename R = Il2CppString*> static R get_BANNER() {
		return ((R (*)(void *))(Il2CppBase() + 0x124C6B8))(0);
	}

};

