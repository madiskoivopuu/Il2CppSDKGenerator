#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TotemWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TotemWindowHelper"));
	}


	template <typename T = TotemWindow*> static T ShowTotem(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x14FC4CC))(0, manager, targetId);
	}
	template <typename T = void> static T CloseTotem(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x14FC904))(0, manager, targetId);
	}

};

