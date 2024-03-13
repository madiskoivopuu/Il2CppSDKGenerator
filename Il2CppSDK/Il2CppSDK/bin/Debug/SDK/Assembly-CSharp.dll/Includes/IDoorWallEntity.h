#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDoorWallEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDoorWallEntity"));
	}


	template <typename T = DoorWallComponent*> T get_doorWall() {
		return ((T (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDoorWall() {
		return ((T (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(IDoorWallEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T ReplaceDoorWall(bool newDisposable, bool newAutoopen, bool newNoFOW) {
		return ((T (*)(IDoorWallEntity*, bool, bool, bool))(Il2CppBase() + 0x0))(this, newDisposable, newAutoopen, newNoFOW);
	}
	template <typename T = void> T RemoveDoorWall() {
		return ((T (*)(IDoorWallEntity*))(Il2CppBase() + 0x0))(this);
	}

};

