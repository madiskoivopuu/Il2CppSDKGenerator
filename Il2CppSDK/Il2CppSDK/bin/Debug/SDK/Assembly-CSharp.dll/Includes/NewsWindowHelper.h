#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowUnreadNews(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13B1018))(0, manager);
	}
	template <typename T = NewsWindow*> static T ShowNews(UIWindowsManager* manager, Il2CppString* tempBuffLookup) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13B1A20))(0, manager, tempBuffLookup);
	}
	template <typename T = AvailablePlatform*> static T ShowUnreadNewsg__getCurrentPlatform|0_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x13B19F0))(0);
	}

};

