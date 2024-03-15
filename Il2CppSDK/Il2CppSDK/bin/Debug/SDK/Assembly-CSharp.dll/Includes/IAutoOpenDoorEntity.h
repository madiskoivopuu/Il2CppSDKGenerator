#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoOpenDoorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoOpenDoorEntity"));
	}


	template <typename R = bool> R get_isAutoOpenDoor() {
		return ((R (*)(IAutoOpenDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R set_isAutoOpenDoor(bool value) {
		return ((R (*)(IAutoOpenDoorEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

