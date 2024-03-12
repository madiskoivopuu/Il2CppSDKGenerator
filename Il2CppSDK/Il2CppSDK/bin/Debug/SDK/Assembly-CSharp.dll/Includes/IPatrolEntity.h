#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPatrolEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPatrolEntity"));
	}


	template <typename T = uintptr_t> T get_patrol() {
		return ((T (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPatrol() {
		return ((T (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(IPatrolEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((T (*)(IPatrolEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename T = void> T RemovePatrol() {
		return ((T (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
