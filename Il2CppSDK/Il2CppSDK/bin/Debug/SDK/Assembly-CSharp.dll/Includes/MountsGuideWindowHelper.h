#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MountsGuideWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountsGuideWindowHelper"));
	}


	template <typename T = MountsGuideWindow*> static T ShowMountsGuideWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x154CC14))(0, manager);
	}

};

