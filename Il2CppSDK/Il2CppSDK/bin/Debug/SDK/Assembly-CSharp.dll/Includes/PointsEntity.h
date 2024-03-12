#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PointsEntity"));
	}


	template <typename T = uintptr_t> T get_blueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x1575330))(this);
	}
	template <typename T = bool> T get_hasBlueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x15753B8))(this);
	}
	template <typename T = void> T AddBlueprint(Il2CppString* newName) {
		return ((T (*)(PointsEntity*, Il2CppString*))(Il2CppBase() + 0x15753C4))(this, newName);
	}
	template <typename T = void> T ReplaceBlueprint(Il2CppString* newName) {
		return ((T (*)(PointsEntity*, Il2CppString*))(Il2CppBase() + 0x15754D8))(this, newName);
	}
	template <typename T = void> T RemoveBlueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x15755EC))(this);
	}
	template <typename T = uintptr_t> T get_oldBlueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x15755F8))(this);
	}
	template <typename T = bool> T get_hasOldBlueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x1575680))(this);
	}
	template <typename T = void> T AddOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(PointsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x157568C))(this, newNames);
	}
	template <typename T = void> T ReplaceOldBlueprint(Il2CppArray<uintptr_t>* newNames) {
		return ((T (*)(PointsEntity*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x15757A0))(this, newNames);
	}
	template <typename T = void> T RemoveOldBlueprint() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x15758B4))(this);
	}
	template <typename T = uintptr_t> T get_position() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x15758C0))(this);
	}
	template <typename T = bool> T get_hasPosition() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x1575948))(this);
	}
	template <typename T = void> T AddPosition(float newX, float newY) {
		return ((T (*)(PointsEntity*, float, float))(Il2CppBase() + 0x1575954))(this, newX, newY);
	}
	template <typename T = void> T ReplacePosition(float newX, float newY) {
		return ((T (*)(PointsEntity*, float, float))(Il2CppBase() + 0x1575A5C))(this, newX, newY);
	}
	template <typename T = void> T RemovePosition() {
		return ((T (*)(PointsEntity*))(Il2CppBase() + 0x1575B64))(this);
	}

};

}
