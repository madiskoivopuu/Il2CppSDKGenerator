#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMoveToTargetEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMoveToTargetEntity"));
	}


	template <typename T = uintptr_t> T get_moveToTarget() {
		return ((T (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMoveToTarget() {
		return ((T (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(IMoveToTargetEntity*, int32_t, float))(Il2CppBase() + 0x0))(this, newId, newMinDistance);
	}
	template <typename T = void> T ReplaceMoveToTarget(int32_t newId, float newMinDistance) {
		return ((T (*)(IMoveToTargetEntity*, int32_t, float))(Il2CppBase() + 0x0))(this, newId, newMinDistance);
	}
	template <typename T = void> T RemoveMoveToTarget() {
		return ((T (*)(IMoveToTargetEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
