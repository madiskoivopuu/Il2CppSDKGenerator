#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapSpeedIncPercentEntity"));
	}


	template <typename T = uintptr_t> T get_mapSpeedIncPercent() {
		return ((T (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMapSpeedIncPercent() {
		return ((T (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMapSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMapSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T ReplaceMapSpeedIncPercent(float newValue, uintptr_t newGroup) {
		return ((T (*)(IMapSpeedIncPercentEntity*, float, uintptr_t))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename T = void> T RemoveMapSpeedIncPercent() {
		return ((T (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
