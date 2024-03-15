#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISeasonPointsEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISeasonPointsEntity"));
	}


	template <typename R = SeasonPointsComponent*> R get_seasonPoints() {
		return ((R (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasSeasonPoints() {
		return ((R (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddSeasonPoints(int32_t newCount) {
		return ((R (*)(ISeasonPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R ReplaceSeasonPoints(int32_t newCount) {
		return ((R (*)(ISeasonPointsEntity*, int32_t))(Il2CppBase() + 0x0))(this, newCount);
	}
	template <typename R = void> R RemoveSeasonPoints() {
		return ((R (*)(ISeasonPointsEntity*))(Il2CppBase() + 0x0))(this);
	}

};

