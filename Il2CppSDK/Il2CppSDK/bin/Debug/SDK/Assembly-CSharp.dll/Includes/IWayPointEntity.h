#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWayPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWayPointEntity"));
	}


	template <typename R = WayPointComponent*> R get_wayPoint() {
		return ((R (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasWayPoint() {
		return ((R (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(IWayPointEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((R (*)(IWayPointEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newDelay);
	}
	template <typename R = void> R RemoveWayPoint() {
		return ((R (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

