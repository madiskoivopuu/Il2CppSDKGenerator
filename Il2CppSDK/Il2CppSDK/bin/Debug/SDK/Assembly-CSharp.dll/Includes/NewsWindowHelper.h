#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowUnreadNews(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x13B1018))(0, manager);
	}
	template <typename R = NewsWindow*> static R ShowNews(UIWindowsManager* manager, Il2CppString* tempBuffLookup) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x13B1A20))(0, manager, tempBuffLookup);
	}
	template <typename R = AvailablePlatform> static R ShowUnreadNewsg__getCurrentPlatform|0_2() {
		return ((R (*)(void *))(Il2CppBase() + 0x13B19F0))(0);
	}

};

