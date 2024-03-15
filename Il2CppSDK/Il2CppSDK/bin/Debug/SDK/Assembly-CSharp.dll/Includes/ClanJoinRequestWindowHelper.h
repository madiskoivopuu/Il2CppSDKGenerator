#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanJoinRequestWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanJoinRequestWindowHelper"));
	}


	template <typename R = ClanJoinRequestWindow*> static R ShowClanJoinRequest(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x1587614))(0, manager);
	}
	template <typename R = DialogWindow*> static R ShowClanJoinResultDialog(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158DEE0))(0, manager);
	}
	template <typename R = void> static R CloseClanJoinRequest(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x158E1C8))(0, manager);
	}

};

