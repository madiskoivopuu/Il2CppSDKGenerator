#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvancedCheatsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvancedCheatsWindowHelper"));
	}


	template <typename T = AdvancedCheatsWindow*> static T ShowAdvancedCheatsWindow(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129BB94))(0, manager);
	}
	template <typename T = bool> static T ContainsIgnoreCase(Il2CppString* value, Il2CppString* filter) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x129BB9C))(0, value, filter);
	}

};

