#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AdvancedCheatsWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AdvancedCheatsWindowHelper"));
	}


	template <typename R = AdvancedCheats::AdvancedCheatsWindow*> static R ShowAdvancedCheatsWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x129BB94))(0, manager);
	}
	template <typename R = bool> static R ContainsIgnoreCase(Il2CppString* value, Il2CppString* filter) {
		return ((R (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x129BB9C))(0, value, filter);
	}

};

