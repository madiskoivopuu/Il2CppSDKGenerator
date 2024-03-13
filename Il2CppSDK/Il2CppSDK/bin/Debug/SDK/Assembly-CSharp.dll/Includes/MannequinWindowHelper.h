#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinWindowHelper"));
	}


	template <typename T = IUIWindow*> static T ShowMannequinInteractWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1263E84))(0, manager, targetId);
	}
	template <typename T = void> static T CloseMannequinInteractWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1264158))(0, manager, targetId);
	}
	template <typename T = MannequinWindow*> static T ShowMannequin(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x126408C))(0, manager, targetId);
	}
	template <typename T = bool> static T CloseMannequin(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1264194))(0, manager, targetId);
	}

};

