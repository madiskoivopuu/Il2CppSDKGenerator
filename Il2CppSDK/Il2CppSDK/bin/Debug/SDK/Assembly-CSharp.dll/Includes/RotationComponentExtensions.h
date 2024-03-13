#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationComponentExtensions"));
	}


	template <typename T = bool> static T ReplaceRotateToIfNeed(GameEntity* entity, float newAngle) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x11A5824))(0, entity, newAngle);
	}
	template <typename T = bool> static T ReplaceRotationIfNeed(IRotationEntity* rotationEntity, float newAngle) {
		return ((T (*)(void *, IRotationEntity*, float))(Il2CppBase() + 0x11A58AC))(0, rotationEntity, newAngle);
	}
	template <typename T = bool> static T ReplaceRotationIfNeed_1(GameEntity* gameEntity, float newAngle) {
		return ((T (*)(void *, GameEntity*, float))(Il2CppBase() + 0x11A5A90))(0, gameEntity, newAngle);
	}
	template <typename T = float> static T GetRotationAngle(ActionEntity* action) {
		return ((T (*)(void *, ActionEntity*))(Il2CppBase() + 0x11A5B44))(0, action);
	}

};

