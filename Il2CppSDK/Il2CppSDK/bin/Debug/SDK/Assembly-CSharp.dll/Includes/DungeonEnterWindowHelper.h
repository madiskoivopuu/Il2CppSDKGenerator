#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterWindowHelper"));
	}


	template <typename T = DungeonEnterWindow*> static T ShowDungeonEnterWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130D430))(0, manager, targetId);
	}
	template <typename T = void> static T CloseDungeonEnterWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130D4FC))(0, manager, targetId);
	}

};

