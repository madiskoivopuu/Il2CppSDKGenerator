#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointsEntity"));
	}


	template <typename T = PointsComponent*> T get_points() {
		return ((T (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPoints() {
		return ((T (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(IPointsEntity*, float, int32_t, float))(Il2CppBase() + 0x0))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((T (*)(IPointsEntity*, float, int32_t, float))(Il2CppBase() + 0x0))(this, newRadius, newNumber, newOffset);
	}
	template <typename T = void> T RemovePoints() {
		return ((T (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

