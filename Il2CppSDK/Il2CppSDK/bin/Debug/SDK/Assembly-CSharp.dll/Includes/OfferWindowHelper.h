#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OfferWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OfferWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOffer(uintptr_t manager, Il2CppString* offerItem) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x11D863C))(0, manager, offerItem);
	}

};

}
