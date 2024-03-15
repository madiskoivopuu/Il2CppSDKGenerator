#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FriendsAdWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FriendsAdWindowHelper"));
	}


	template <typename R = FriendsAdWindow*> static R ShowOrGetFriendsAd(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15FE314))(0, manager);
	}

};

