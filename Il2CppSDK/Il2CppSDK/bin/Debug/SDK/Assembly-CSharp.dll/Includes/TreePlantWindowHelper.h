#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreePlantWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePlantWindowHelper"));
	}


	template <typename R = TreePlantWindow*> static R ShowTreePlant(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1525334))(0, manager, targetId);
	}
	template <typename R = void> static R CloseTreePlant(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15253DC))(0, manager, targetId);
	}

};

