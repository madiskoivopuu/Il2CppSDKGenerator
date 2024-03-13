#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AFKWarningWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AFKWarningWindowHelper"));
	}


	template <typename T = AFKWarningWindow*> static T GetAFKWarning(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1D93D38))(0, manager);
	}
	template <typename T = AFKWarningWindow*> static T ShowAFKWarning(UIWindowsManager* manager, int64_t timeToKick) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x1D93E34))(0, manager, timeToKick);
	}

};

