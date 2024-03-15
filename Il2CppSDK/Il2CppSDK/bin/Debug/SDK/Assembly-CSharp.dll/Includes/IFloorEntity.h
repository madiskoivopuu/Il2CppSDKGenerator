#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IFloorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IFloorEntity"));
	}


	template <typename R = FloorComponent*> R get_floor() {
		return ((R (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasFloor() {
		return ((R (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddFloor(Il2CppString* newRoof) {
		return ((R (*)(IFloorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRoof);
	}
	template <typename R = void> R ReplaceFloor(Il2CppString* newRoof) {
		return ((R (*)(IFloorEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newRoof);
	}
	template <typename R = void> R RemoveFloor() {
		return ((R (*)(IFloorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

