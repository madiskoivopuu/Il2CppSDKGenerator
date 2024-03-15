#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MannequinWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MannequinWindowHelper"));
	}


	template <typename R = IUIWindow*> static R ShowMannequinInteractWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1263E84))(0, manager, targetId);
	}
	template <typename R = void> static R CloseMannequinInteractWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1264158))(0, manager, targetId);
	}
	template <typename R = MannequinWindow*> static R ShowMannequin(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x126408C))(0, manager, targetId);
	}
	template <typename R = bool> static R CloseMannequin(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1264194))(0, manager, targetId);
	}

};

