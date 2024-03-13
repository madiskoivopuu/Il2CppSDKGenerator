#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISeasonPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISeasonPointsEntity"));
	}


	template <typename T = SeasonPointsComponent*> T get_seasonPoints() {
		return ((T (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasSeasonPoints() {
		return ((T (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddSeasonPoints(int32_t newCount) {
		return ((T (*)(ISeasonPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T ReplaceSeasonPoints(int32_t newCount) {
		return ((T (*)(ISeasonPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename T = void> T RemoveSeasonPoints() {
		return ((T (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

