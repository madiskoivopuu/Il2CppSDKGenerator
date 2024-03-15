#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapLabelWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapLabelWindowHelper"));
	}


	template <typename R = MapLabelWindow*> static R ShowMapLabel(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12BBC98))(0, manager);
	}
	template <typename R = void> static R CloseMapLabel(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x12BBD54))(0, manager);
	}

};

