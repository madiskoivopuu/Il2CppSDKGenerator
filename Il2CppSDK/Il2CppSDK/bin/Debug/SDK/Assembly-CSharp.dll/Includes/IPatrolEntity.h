#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPatrolEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPatrolEntity"));
	}


	template <typename R = PatrolComponent*> R get_patrol() {
		return ((R (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPatrol() {
		return ((R (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(IPatrolEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R ReplacePatrol(Il2CppString* newNextPoint, Il2CppString* newMagicName, float newDelay) {
		return ((R (*)(IPatrolEntity*, Il2CppString*, Il2CppString*, float))(Il2CppBase() + 0x0))(this, newNextPoint, newMagicName, newDelay);
	}
	template <typename R = void> R RemovePatrol() {
		return ((R (*)(IPatrolEntity*))(Il2CppBase() + 0x0))(this);
	}

};

