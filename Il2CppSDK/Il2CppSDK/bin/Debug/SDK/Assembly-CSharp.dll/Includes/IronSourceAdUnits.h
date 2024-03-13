#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceAdUnits
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceAdUnits"));
	}


	template <typename T = Il2CppString*> static T get_REWARDED_VIDEO() {
		return ((T (*)(void *))(Il2CppBase() + 0x124C5EC))(0);
	}
	template <typename T = Il2CppString*> static T get_INTERSTITIAL() {
		return ((T (*)(void *))(Il2CppBase() + 0x124C630))(0);
	}
	template <typename T = Il2CppString*> static T get_OFFERWALL() {
		return ((T (*)(void *))(Il2CppBase() + 0x124C674))(0);
	}
	template <typename T = Il2CppString*> static T get_BANNER() {
		return ((T (*)(void *))(Il2CppBase() + 0x124C6B8))(0);
	}

};

