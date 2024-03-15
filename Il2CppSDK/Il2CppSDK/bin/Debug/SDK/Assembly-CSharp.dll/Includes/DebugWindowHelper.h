#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugWindowHelper"));
	}


	template <typename R = DebugWindow*> static R ShowDebugWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xEB6284))(0, manager);
	}

};

