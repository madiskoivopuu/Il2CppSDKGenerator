#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsEntity"));
	}


	template <typename R = BlueprintComponent*> R get_blueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x1575330))(this);
	}
	template <typename R = bool> R get_hasBlueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x15753B8))(this);
	}
	template <typename R = void> R AddBlueprint(Il2CppString* newName) {
		return ((R (*)(PointsEntity*, Il2CppString*))(Il2CppBase() + 0x15753C4))(this, newName);
	}
	template <typename R = void> R ReplaceBlueprint(Il2CppString* newName) {
		return ((R (*)(PointsEntity*, Il2CppString*))(Il2CppBase() + 0x15754D8))(this, newName);
	}
	template <typename R = void> R RemoveBlueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x15755EC))(this);
	}
	template <typename R = OldBlueprintComponent*> R get_oldBlueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x15755F8))(this);
	}
	template <typename R = bool> R get_hasOldBlueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x1575680))(this);
	}
	template <typename R = void> R AddOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(PointsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x157568C))(this, newNames);
	}
	template <typename R = void> R ReplaceOldBlueprint(Il2CppArray<Il2CppString*>* newNames) {
		return ((R (*)(PointsEntity*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x15757A0))(this, newNames);
	}
	template <typename R = void> R RemoveOldBlueprint() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x15758B4))(this);
	}
	template <typename R = PositionComponent*> R get_position() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x15758C0))(this);
	}
	template <typename R = bool> R get_hasPosition() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x1575948))(this);
	}
	template <typename R = void> R AddPosition(float newX, float newY) {
		return ((R (*)(PointsEntity*, float, float))(Il2CppBase() + 0x1575954))(this, newX, newY);
	}
	template <typename R = void> R ReplacePosition(float newX, float newY) {
		return ((R (*)(PointsEntity*, float, float))(Il2CppBase() + 0x1575A5C))(this, newX, newY);
	}
	template <typename R = void> R RemovePosition() {
		return ((R (*)(PointsEntity*))(Il2CppBase() + 0x1575B64))(this);
	}

};

