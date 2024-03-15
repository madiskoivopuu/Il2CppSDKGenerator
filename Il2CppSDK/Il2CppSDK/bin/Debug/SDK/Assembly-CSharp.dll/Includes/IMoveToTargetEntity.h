#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMoveToTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMoveToTargetEntity"));
	}


	template <typename R = MoveToTargetComponent*> R get_moveToTarget() {
		return ((R (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMoveToTarget() {
		return ((R (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(IMoveToTargetEntity*, int32_t, float))(Il2CppBase() + 0x0))(this, newId, newMinDistance);
	}
	template <typename R = void> R ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((R (*)(IMoveToTargetEntity*, int32_t, float))(Il2CppBase() + 0x0))(this, newId, newMinDistance);
	}
	template <typename R = void> R RemoveMoveToTarget() {
		return ((R (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

