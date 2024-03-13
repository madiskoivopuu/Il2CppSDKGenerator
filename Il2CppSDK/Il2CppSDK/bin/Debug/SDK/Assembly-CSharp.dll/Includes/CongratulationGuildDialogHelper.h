#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CongratulationGuildDialogHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CongratulationGuildDialogHelper"));
	}


	template <typename T = UIWindow*> static T ShowCongratulationGuildDialog(UIWindowsManager* manager, int64_t messageId) {
		return ((T (*)(void *, UIWindowsManager*, int64_t))(Il2CppBase() + 0x15E91DC))(0, manager, messageId);
	}

};

