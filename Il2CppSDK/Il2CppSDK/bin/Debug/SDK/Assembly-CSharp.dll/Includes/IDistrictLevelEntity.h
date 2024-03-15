#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDistrictLevelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDistrictLevelEntity"));
	}


	template <typename R = DistrictLevelComponent*> R get_districtLevel() {
		return ((R (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDistrictLevel() {
		return ((R (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDistrictLevel(int32_t newValue) {
		return ((R (*)(IDistrictLevelEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDistrictLevel(int32_t newValue) {
		return ((R (*)(IDistrictLevelEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDistrictLevel() {
		return ((R (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

