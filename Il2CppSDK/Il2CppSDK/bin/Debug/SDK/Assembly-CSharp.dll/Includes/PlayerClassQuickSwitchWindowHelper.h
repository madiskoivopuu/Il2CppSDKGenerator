#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassQuickSwitchWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassQuickSwitchWindowHelper"));
	}


	template <typename R = PlayerClassQuickSwitchWindow*> static R ShowPlayerClassQuickSwitch(UIWindowsManager* manager, Action1Il2CppArray<Il2CppString*>*>* onClose) {
		return ((R (*)(void *, UIWindowsManager*, Action1Il2CppArray<Il2CppString*>*>*))(Il2CppBase() + 0x1B6A908))(0, manager, onClose);
	}

};

