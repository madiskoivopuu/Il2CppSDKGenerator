#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RepairWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RepairWindowHelper"));
	}


	template <typename R = RepairWindow*> static R ShowRepair(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x11919F0))(0, manager, targetId);
	}
	template <typename R = void> static R CloseRepair(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1191ABC))(0, manager, targetId);
	}

};

