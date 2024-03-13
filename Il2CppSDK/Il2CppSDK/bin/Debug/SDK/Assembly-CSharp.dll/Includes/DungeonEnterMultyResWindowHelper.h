#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterMultyResWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterMultyResWindowHelper"));
	}


	template <typename T = DungeonEnterMultyResWindow*> static T ShowDungeonEnterMultyResWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130A77C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseDungeonEnterMultyResWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130A848))(0, manager, targetId);
	}

};

