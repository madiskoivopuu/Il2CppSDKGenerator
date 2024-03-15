#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICampBathEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICampBathEntity"));
	}


	template <typename R = CampBathComponent*> R get_campBath() {
		return ((R (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCampBath() {
		return ((R (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(ICampBathEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0x0))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R ReplaceCampBath(Il2CppArray<FuelItem*>* newFuel, float newMaxWorkTime) {
		return ((R (*)(ICampBathEntity*, Il2CppArray<FuelItem*>*, float))(Il2CppBase() + 0x0))(this, newFuel, newMaxWorkTime);
	}
	template <typename R = void> R RemoveCampBath() {
		return ((R (*)(ICampBathEntity*))(Il2CppBase() + 0x0))(this);
	}

};

