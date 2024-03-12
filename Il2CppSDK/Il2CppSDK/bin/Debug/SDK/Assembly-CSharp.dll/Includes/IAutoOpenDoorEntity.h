#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAutoOpenDoorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAutoOpenDoorEntity"));
	}


	template <typename T = bool> T get_isAutoOpenDoor() {
		return ((T (*)(IAutoOpenDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_isAutoOpenDoor(bool value) {
		return ((T (*)(IAutoOpenDoorEntity*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
