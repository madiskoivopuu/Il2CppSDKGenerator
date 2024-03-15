#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoomEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoomEntity"));
	}


	template <typename R = RoomComponent*> R get_room() {
		return ((R (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRoom() {
		return ((R (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRoom(Il2CppString* newName) {
		return ((R (*)(IRoomEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceRoom(Il2CppString* newName) {
		return ((R (*)(IRoomEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveRoom() {
		return ((R (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}

};

