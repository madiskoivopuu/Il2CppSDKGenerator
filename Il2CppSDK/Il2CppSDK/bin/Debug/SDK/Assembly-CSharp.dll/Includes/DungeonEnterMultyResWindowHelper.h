#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonEnterMultyResWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonEnterMultyResWindowHelper"));
	}


	template <typename T = uintptr_t> static T ShowDungeonEnterMultyResWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x130A77C))(0, manager, targetId);
	}
	template <typename T = void> static T CloseDungeonEnterMultyResWindow(uintptr_t manager, int32_t targetId) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x130A848))(0, manager, targetId);
	}

};

}
