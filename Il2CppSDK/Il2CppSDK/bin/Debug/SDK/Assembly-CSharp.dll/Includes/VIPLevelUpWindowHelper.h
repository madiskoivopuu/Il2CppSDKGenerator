#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VIPLevelUpWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VIPLevelUpWindowHelper"));
	}


	template <typename R = VIPLevelUpWindow*> static R ShowVIPLevelUp(UIWindowsManager* manager, int32_t oldLevel, int32_t newLevel) {
		return ((R (*)(void *, UIWindowsManager*, int32_t, int32_t))(Il2CppBase() + 0x15C1584))(0, manager, oldLevel, newLevel);
	}

};

