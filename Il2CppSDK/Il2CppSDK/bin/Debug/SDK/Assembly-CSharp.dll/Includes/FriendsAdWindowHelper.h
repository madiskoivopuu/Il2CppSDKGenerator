#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendsAdWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendsAdWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowOrGetFriendsAd(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x15FE314))(0, manager);
	}

};

}
