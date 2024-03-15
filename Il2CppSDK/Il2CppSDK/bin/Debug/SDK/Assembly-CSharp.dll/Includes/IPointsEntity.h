#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPointsEntity"));
	}


	template <typename R = PointsComponent*> R get_points() {
		return ((R (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPoints() {
		return ((R (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(IPointsEntity*, float, int32_t, float))(Il2CppBase() + 0x0))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R ReplacePoints(float newRadius, int32_t newNumber, float newOffset) {
		return ((R (*)(IPointsEntity*, float, int32_t, float))(Il2CppBase() + 0x0))(this, newRadius, newNumber, newOffset);
	}
	template <typename R = void> R RemovePoints() {
		return ((R (*)(IPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

