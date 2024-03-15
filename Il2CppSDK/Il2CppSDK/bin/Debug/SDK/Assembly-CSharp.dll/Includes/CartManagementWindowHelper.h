#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CartManagementWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CartManagementWindowHelper"));
	}


	template <typename R = CartManagementWindow*> static R ShowCartManagement(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13E78D4))(0, manager, targetId);
	}
	template <typename R = void> static R CloseCartManagement(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x13E797C))(0, manager, targetId);
	}

};

