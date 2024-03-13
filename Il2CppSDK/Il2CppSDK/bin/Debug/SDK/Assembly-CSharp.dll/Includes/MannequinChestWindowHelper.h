#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindowHelper"));
	}


	template <typename T = MannequinChestWindow*> static T ShowMannequinChest(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x12619DC))(0, manager, targetId);
	}
	template <typename T = bool> static T CloseMannequinChest(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1261AA8))(0, manager, targetId);
	}

};

