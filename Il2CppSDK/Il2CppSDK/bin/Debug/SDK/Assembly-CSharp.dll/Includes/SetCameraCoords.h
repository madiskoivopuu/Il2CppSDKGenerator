#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetCameraCoords
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetCameraCoords"));
	}


	template <typename T = void> T LateUpdate() {
		return ((T (*)(SetCameraCoords*))(Il2CppBase() + 0x1623E40))(this);
	}

};

