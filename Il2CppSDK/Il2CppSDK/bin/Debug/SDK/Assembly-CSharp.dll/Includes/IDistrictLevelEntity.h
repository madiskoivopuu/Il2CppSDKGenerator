#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDistrictLevelEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDistrictLevelEntity"));
	}


	template <typename T = DistrictLevelComponent*> T get_districtLevel() {
		return ((T (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDistrictLevel() {
		return ((T (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDistrictLevel(int32_t newValue) {
		return ((T (*)(IDistrictLevelEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDistrictLevel(int32_t newValue) {
		return ((T (*)(IDistrictLevelEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDistrictLevel() {
		return ((T (*)(IDistrictLevelEntity*))(Il2CppBase() + 0x0))(this);
	}

};

