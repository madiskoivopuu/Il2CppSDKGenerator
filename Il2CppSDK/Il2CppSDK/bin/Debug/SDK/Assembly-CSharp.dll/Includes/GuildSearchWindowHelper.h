#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GuildSearchWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GuildSearchWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowGuildSearch(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1941848))(0, manager);
	}

};

