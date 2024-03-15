#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RegionAndTimeWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RegionAndTimeWindowHelper"));
	}


	template <typename R = InfoWindow*> static R ShowInfo(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x139E038))(0, manager);
	}

};

