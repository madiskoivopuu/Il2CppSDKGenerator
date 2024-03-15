#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RotationComponentExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RotationComponentExtensions"));
	}


	template <typename R = bool> static R ReplaceRotateToIfNeed(GameEntity* entity, float newAngle) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x11A5824))(0, entity, newAngle);
	}
	template <typename R = bool> static R ReplaceRotationIfNeed(IRotationEntity* rotationEntity, float newAngle) {
		return ((R (*)(void *, IRotationEntity*, float))(Il2CppBase() + 0x11A58AC))(0, rotationEntity, newAngle);
	}
	template <typename R = bool> static R ReplaceRotationIfNeed_1(GameEntity* gameEntity, float newAngle) {
		return ((R (*)(void *, GameEntity*, float))(Il2CppBase() + 0x11A5A90))(0, gameEntity, newAngle);
	}
	template <typename R = float> static R GetRotationAngle(ActionEntity* action) {
		return ((R (*)(void *, ActionEntity*))(Il2CppBase() + 0x11A5B44))(0, action);
	}

};

