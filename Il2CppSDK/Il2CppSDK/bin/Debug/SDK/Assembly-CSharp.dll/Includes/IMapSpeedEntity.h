#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapSpeedEntity"));
	}


	template <typename R = MapSpeedComponent*> R get_mapSpeed() {
		return ((R (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMapSpeed() {
		return ((R (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMapSpeed(float newValue) {
		return ((R (*)(IMapSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMapSpeed(float newValue) {
		return ((R (*)(IMapSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMapSpeed() {
		return ((R (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

