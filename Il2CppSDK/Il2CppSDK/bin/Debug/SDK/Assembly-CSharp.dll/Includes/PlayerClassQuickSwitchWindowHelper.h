#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassQuickSwitchWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassQuickSwitchWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowPlayerClassQuickSwitch(uintptr_t manager, void* onClose) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x1B6A908))(0, manager, onClose);
	}

};

}
