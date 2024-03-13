#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomizationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomizationWindowHelper"));
	}


	template <typename T = UIWindow*> static T ShowCustomization(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163E8F8))(0, manager);
	}
	template <typename T = UIWindow*> static T GetCustomization(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163EA1C))(0, manager);
	}
	template <typename T = void> static T CloseCustomization(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163EAB4))(0, manager);
	}

};

