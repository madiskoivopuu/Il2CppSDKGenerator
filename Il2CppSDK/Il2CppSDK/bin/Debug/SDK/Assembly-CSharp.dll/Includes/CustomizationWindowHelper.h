#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomizationWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomizationWindowHelper"));
	}


	template <typename R = UIWindow*> static R ShowCustomization(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163E8F8))(0, manager);
	}
	template <typename R = UIWindow*> static R GetCustomization(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163EA1C))(0, manager);
	}
	template <typename R = void> static R CloseCustomization(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x163EAB4))(0, manager);
	}

};

