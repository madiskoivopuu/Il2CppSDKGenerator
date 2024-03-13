#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapLabelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLabelWindowHelper"));
	}


	template <typename T = MapLabelWindow*> static T ShowMapLabel(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12BBC98))(0, manager);
	}
	template <typename T = void> static T CloseMapLabel(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12BBD54))(0, manager);
	}

};

