#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinChestWindowHelper"));
	}


	template <typename R = MannequinChestWindow*> static R ShowMannequinChest(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x12619DC))(0, manager, targetId);
	}
	template <typename R = bool> static R CloseMannequinChest(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1261AA8))(0, manager, targetId);
	}

};

