#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDoorWallEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDoorWallEntity"));
	}


	template <typename R = DoorWallComponent*> R get_doorWall() {
		return ((R (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDoorWall() {
		return ((R (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(IDoorWallEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((R (*)(IDoorWallEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename R = void> R RemoveDoorWall() {
		return ((R (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}

};

