#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoomEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoomEntity"));
	}


	template <typename T = RoomComponent*> T get_room() {
		return ((T (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRoom() {
		return ((T (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRoom(Il2CppString* newName) {
		return ((T (*)(IRoomEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceRoom(Il2CppString* newName) {
		return ((T (*)(IRoomEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveRoom() {
		return ((T (*)(IRoomEntity*))(Il2CppBase() + 0x0))(this);
	}

};

