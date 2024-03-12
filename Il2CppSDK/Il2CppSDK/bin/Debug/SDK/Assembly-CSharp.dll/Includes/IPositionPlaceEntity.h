#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPositionPlaceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPositionPlaceEntity"));
	}


	template <typename T = uintptr_t> T get_positionPlace() {
		return ((T (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPositionPlace() {
		return ((T (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPositionPlace(uintptr_t newType) {
		return ((T (*)(IPositionPlaceEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T ReplacePositionPlace(uintptr_t newType) {
		return ((T (*)(IPositionPlaceEntity*, uintptr_t))(Il2CppBase() + 0x0))(this, newType);
	}
	template <typename T = void> T RemovePositionPlace() {
		return ((T (*)(IPositionPlaceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
