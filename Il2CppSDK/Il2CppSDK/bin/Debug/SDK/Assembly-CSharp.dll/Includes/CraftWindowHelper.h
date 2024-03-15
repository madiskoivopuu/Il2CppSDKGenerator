#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftWindowHelper"));
	}


	template <typename R = CraftWindow*> static R ShowCraft(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1348F3C))(0, manager, targetId);
	}
	template <typename R = void> static R CloseCraft(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1349008))(0, manager, targetId);
	}

};

