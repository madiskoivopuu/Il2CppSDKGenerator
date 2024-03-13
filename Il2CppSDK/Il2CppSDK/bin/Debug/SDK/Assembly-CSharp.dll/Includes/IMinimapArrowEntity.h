#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMinimapArrowEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMinimapArrowEntity"));
	}


	template <typename T = MinimapArrowComponent*> T get_minimapArrow() {
		return ((T (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMinimapArrow() {
		return ((T (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(IMinimapArrowEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T ReplaceMinimapArrow(MinimapArrowMode* newArrowMode, bool newNotRotation, bool newOnBorder, Il2CppString* newHexColor) {
		return ((T (*)(IMinimapArrowEntity*, MinimapArrowMode*, bool, bool, Il2CppString*))(Il2CppBase() + 0x0))(this, newArrowMode, newNotRotation, newOnBorder, newHexColor);
	}
	template <typename T = void> T RemoveMinimapArrow() {
		return ((T (*)(IMinimapArrowEntity*))(Il2CppBase() + 0x0))(this);
	}

};

