#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackgroundWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindowHelper"));
	}


	template <typename R = BackgroundWindow*> static R ShowInNeedBackground(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xFBADCC))(0, manager);
	}
	template <typename R = void> static R CloseBackground(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xFBAF20))(0, manager);
	}

};

