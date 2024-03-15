#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampBathWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathWindowWindowHelper"));
	}


	template <typename R = CampBathWindow*> static R ShowCampBath(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15B548C))(0, manager, targetId);
	}
	template <typename R = void> static R CloseCampBath(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15B5558))(0, manager, targetId);
	}

};

