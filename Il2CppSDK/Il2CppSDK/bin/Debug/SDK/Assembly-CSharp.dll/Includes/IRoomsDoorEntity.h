#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRoomsDoorEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRoomsDoorEntity"));
	}


	template <typename T = uintptr_t> T get_roomsDoor() {
		return ((T (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRoomsDoor() {
		return ((T (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRoomsDoorEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T ReplaceRoomsDoor(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(IRoomsDoorEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, newNames);
	}
	template <typename T = void> T RemoveRoomsDoor() {
		return ((T (*)(IRoomsDoorEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
