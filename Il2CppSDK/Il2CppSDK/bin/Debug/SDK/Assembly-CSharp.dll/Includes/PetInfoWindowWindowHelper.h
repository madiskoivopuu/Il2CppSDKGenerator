#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PetInfoWindowWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetInfoWindowWindowHelper"));
	}


	template <typename R = PetInfoWindow*> static R ShowPetInfo(UIWindowsManager* manager, Il2CppString* petName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x11EDA4C))(0, manager, petName);
	}

};

