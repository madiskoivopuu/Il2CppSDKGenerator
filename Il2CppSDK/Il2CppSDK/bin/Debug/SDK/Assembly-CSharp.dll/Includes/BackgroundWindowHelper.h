#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackgroundWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackgroundWindowHelper"));
	}


	template <typename T = BackgroundWindow*> static T ShowInNeedBackground(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xFBADCC))(0, manager);
	}
	template <typename T = void> static T CloseBackground(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xFBAF20))(0, manager);
	}

};

