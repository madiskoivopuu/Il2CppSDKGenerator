#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConstructionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConstructionWindowHelper"));
	}


	template <typename T = ConstructionWindow*> static T ShowConstruction(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15EB048))(0, manager, targetId);
	}
	template <typename T = ConstructionWindow*> static T GetConstruction(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15EB0F0))(0, manager);
	}
	template <typename T = void> static T CloseConstruction(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x15EB164))(0, manager, targetId);
	}

};

