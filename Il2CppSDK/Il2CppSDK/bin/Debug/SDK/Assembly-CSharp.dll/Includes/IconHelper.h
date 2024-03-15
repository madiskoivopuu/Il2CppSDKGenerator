#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IconHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IconHelper"));
	}


	template <typename R = void> static R SetItemIcon(uintptr_t image, Il2CppString* itemName, Il2CppString* defaultIcon) {
		return ((R (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1E3D0AC))(0, image, itemName, defaultIcon);
	}
	template <typename R = void> static R SetIcon(uintptr_t image, IIconEntity* entity, Il2CppString* defaultIcon) {
		return ((R (*)(void *, uintptr_t, IIconEntity*, Il2CppString*))(Il2CppBase() + 0x1E3D1D8))(0, image, entity, defaultIcon);
	}
	template <typename R = void> static R SetIcon_1(uintptr_t image, Il2CppString* iconName) {
		return ((R (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1E3D4A0))(0, image, iconName);
	}
	template <typename R = void> static R SetIcon_2(uintptr_t image, Icon icon, Il2CppString* defaultIcon) {
		return ((R (*)(void *, uintptr_t, Icon, Il2CppString*))(Il2CppBase() + 0x1E3D220))(0, image, icon, defaultIcon);
	}
	template <typename R = void> static R SetIconColor(uintptr_t image, uintptr_t color, bool setOverlay) {
		return ((R (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E3D4EC))(0, image, color, setOverlay);
	}
	template <typename R = void> static R SetIconMaterial(uintptr_t image, uintptr_t material, bool setOverlay) {
		return ((R (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1E3D644))(0, image, material, setOverlay);
	}

};

