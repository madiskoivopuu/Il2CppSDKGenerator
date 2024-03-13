#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IWayPointEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWayPointEntity"));
	}


	template <typename T = WayPointComponent*> T get_wayPoint() {
		return ((T (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasWayPoint() {
		return ((T (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(IWayPointEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T ReplaceWayPoint(Il2CppString* newNextPoint, float newDelay) {
		return ((T (*)(IWayPointEntity*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newDelay);
	}
	template <typename T = void> T RemoveWayPoint() {
		return ((T (*)(IWayPointEntity*))(Il2CppBase() + 0x0))(this);
	}

};

