#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoomsDoorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoomsDoorEntity"));
	}


	template <typename R = RoomsDoorComponent*> R get_roomsDoor() {
		return ((R (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRoomsDoor() {
		return ((R (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRoomsDoorEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R ReplaceRoomsDoor(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(IRoomsDoorEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename R = void> R RemoveRoomsDoor() {
		return ((R (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

