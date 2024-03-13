#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDistanceEntity"));
	}


	template <typename T = DistanceComponent*> T get_distance() {
		return ((T (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasDistance() {
		return ((T (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddDistance(float newValue) {
		return ((T (*)(IDistanceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceDistance(float newValue) {
		return ((T (*)(IDistanceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveDistance() {
		return ((T (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

