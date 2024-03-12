#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NewsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewsWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowUnreadNews(uintptr_t manager) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13B1018))(0, manager);
	}
	template <typename T = uintptr_t> static T ShowNews(uintptr_t manager, Il2CppString* tempBuffLookup) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13B1A20))(0, manager, tempBuffLookup);
	}
	template <typename T = uintptr_t> static T ShowUnreadNewsg__getCurrentPlatform|0_2() {
		return ((T (*)(void *))(Il2CppBase() + 0x13B19F0))(0);
	}

};

}
