#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InventoryChestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryChestWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowInventoryChestWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x146EC2C))(0, manager, targetId);
	}
	template <typename R = void> static R OnReceivedInventoryContainerResult(UIWindowsManager* manager, OpenInventoryContainerResult result) {
		return ((R (*)(void *, UIWindowsManager*, OpenInventoryContainerResult))(Il2CppBase() + 0x146ECF8))(0, manager, result);
	}

};

