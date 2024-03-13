#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassQuickSwitchWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassQuickSwitchWindowHelper"));
	}


	template <typename T = PlayerClassQuickSwitchWindow*> static T ShowPlayerClassQuickSwitch(UIWindowsManager* manager, Action1Il2CppArray<uintptr_t>*>* onClose) {
		return ((T (*)(void *, UIWindowsManager*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x1B6A908))(0, manager, onClose);
	}

};

