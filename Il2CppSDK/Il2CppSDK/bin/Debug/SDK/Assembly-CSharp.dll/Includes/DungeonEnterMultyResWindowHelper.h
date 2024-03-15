#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterMultyResWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterMultyResWindowHelper"));
	}


	template <typename R = DungeonEnterMultyResWindow*> static R ShowDungeonEnterMultyResWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130A77C))(0, manager, targetId);
	}
	template <typename R = void> static R CloseDungeonEnterMultyResWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x130A848))(0, manager, targetId);
	}

};

