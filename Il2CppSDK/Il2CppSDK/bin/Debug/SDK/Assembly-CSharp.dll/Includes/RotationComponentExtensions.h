#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationComponentExtensions"));
	}


	template <typename T = bool> static T ReplaceRotateToIfNeed(uintptr_t entity, float newAngle) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x11A5824))(0, entity, newAngle);
	}
	template <typename T = bool> static T ReplaceRotationIfNeed(uintptr_t rotationEntity, float newAngle) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x11A58AC))(0, rotationEntity, newAngle);
	}
	template <typename T = bool> static T ReplaceRotationIfNeed_1(uintptr_t gameEntity, float newAngle) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x11A5A90))(0, gameEntity, newAngle);
	}
	template <typename T = float> static T GetRotationAngle(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x11A5B44))(0, action);
	}

};

}
