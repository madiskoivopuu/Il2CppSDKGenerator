#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegionAndTimeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegionAndTimeWindowHelper"));
	}


	template <typename T = InfoWindow*> static T ShowInfo(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x139E038))(0, manager);
	}

};

