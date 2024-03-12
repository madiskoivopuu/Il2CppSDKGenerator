#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INextWayPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INextWayPointEntity"));
	}


	template <typename T = uintptr_t> T get_nextWayPoint() {
		return ((T (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasNextWayPoint() {
		return ((T (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddNextWayPoint(Il2CppString* newName) {
		return ((T (*)(INextWayPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceNextWayPoint(Il2CppString* newName) {
		return ((T (*)(INextWayPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveNextWayPoint() {
		return ((T (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
