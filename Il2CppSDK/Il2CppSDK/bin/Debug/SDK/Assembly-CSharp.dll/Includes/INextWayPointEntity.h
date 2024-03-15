#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INextWayPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "INextWayPointEntity"));
	}


	template <typename R = NextWayPointComponent*> R get_nextWayPoint() {
		return ((R (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasNextWayPoint() {
		return ((R (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddNextWayPoint(Il2CppString* newName) {
		return ((R (*)(INextWayPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceNextWayPoint(Il2CppString* newName) {
		return ((R (*)(INextWayPointEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveNextWayPoint() {
		return ((R (*)(INextWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

