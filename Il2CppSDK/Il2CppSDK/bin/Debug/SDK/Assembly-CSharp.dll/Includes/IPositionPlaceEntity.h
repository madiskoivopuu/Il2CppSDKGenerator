#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionPlaceEntity"));
	}


	template <typename R = PositionPlaceComponent*> R get_positionPlace() {
		return ((R (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPositionPlace() {
		return ((R (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPositionPlace(PositionPlace* newType) {
		return ((R (*)(IPositionPlaceEntity*, PositionPlace*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R ReplacePositionPlace(PositionPlace* newType) {
		return ((R (*)(IPositionPlaceEntity*, PositionPlace*))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename R = void> R RemovePositionPlace() {
		return ((R (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

