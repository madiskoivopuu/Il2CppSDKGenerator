#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMapSpeedEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMapSpeedEntity"));
	}


	template <typename T = MapSpeedComponent*> T get_mapSpeed() {
		return ((T (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMapSpeed() {
		return ((T (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMapSpeed(float newValue) {
		return ((T (*)(IMapSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMapSpeed(float newValue) {
		return ((T (*)(IMapSpeedEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMapSpeed() {
		return ((T (*)(IMapSpeedEntity*))(Il2CppBase() + 0x0))(this);
	}

};

