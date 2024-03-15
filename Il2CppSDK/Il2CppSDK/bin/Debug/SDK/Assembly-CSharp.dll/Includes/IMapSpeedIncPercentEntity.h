#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapSpeedIncPercentEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapSpeedIncPercentEntity"));
	}


	template <typename R = MapSpeedIncPercentComponent*> R get_mapSpeedIncPercent() {
		return ((R (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMapSpeedIncPercent() {
		return ((R (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMapSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R ReplaceMapSpeedIncPercent(float newValue, ModifierGroup* newGroup) {
		return ((R (*)(IMapSpeedIncPercentEntity*, float, ModifierGroup*))(Il2CppBase() + 0x0))(this, newValue, newGroup);
	}
	template <typename R = void> R RemoveMapSpeedIncPercent() {
		return ((R (*)(IMapSpeedIncPercentEntity*))(Il2CppBase() + 0x0))(this);
	}

};

