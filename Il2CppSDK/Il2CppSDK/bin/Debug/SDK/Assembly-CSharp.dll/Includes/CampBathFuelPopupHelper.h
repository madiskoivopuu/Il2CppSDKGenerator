#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampBathFuelPopupHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathFuelPopupHelper"));
	}


	template <typename T = CampBathFuelPopup*> static T ShowCampBathFuels(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15B3D24))(0, manager, targetId);
	}

};

