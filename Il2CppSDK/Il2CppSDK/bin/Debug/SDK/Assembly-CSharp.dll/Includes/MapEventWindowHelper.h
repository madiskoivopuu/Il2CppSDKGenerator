#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapEventWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapEventWindowHelper"));
	}


	template <typename R = MapEventWindow*> static R ShowMapEvent(UIWindowsManager* manager, int32_t pointId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x126C990))(0, manager, pointId);
	}

};

