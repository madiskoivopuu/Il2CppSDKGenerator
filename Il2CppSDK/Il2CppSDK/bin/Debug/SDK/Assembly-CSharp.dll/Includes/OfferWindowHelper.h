#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfferWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfferWindowHelper"));
	}


	template <typename T = OfferWindow*> static T ShowOffer(UIWindowsManager* manager, Il2CppString* offerItem) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x11D863C))(0, manager, offerItem);
	}

};

