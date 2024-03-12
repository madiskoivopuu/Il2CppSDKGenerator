#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFloorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFloorEntity"));
	}


	template <typename T = uintptr_t> T get_floor() {
		return ((T (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasFloor() {
		return ((T (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddFloor(Il2CppString* newRoof) {
		return ((T (*)(IFloorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRoof);
	}
	template <typename T = void> T ReplaceFloor(Il2CppString* newRoof) {
		return ((T (*)(IFloorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRoof);
	}
	template <typename T = void> T RemoveFloor() {
		return ((T (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
