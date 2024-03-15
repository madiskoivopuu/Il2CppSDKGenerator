#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapArrowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapArrowEntity"));
	}


	template <typename R = MinimapArrowComponent*> R get_minimapArrow() {
		return ((R (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMinimapArrow() {
		return ((R (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(IMinimapArrowEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((R (*)(IMinimapArrowEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename R = void> R RemoveMinimapArrow() {
		return ((R (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

