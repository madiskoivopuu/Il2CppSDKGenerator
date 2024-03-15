#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDistanceEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDistanceEntity"));
	}


	template <typename R = DistanceComponent*> R get_distance() {
		return ((R (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasDistance() {
		return ((R (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddDistance(float newValue) {
		return ((R (*)(IDistanceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceDistance(float newValue) {
		return ((R (*)(IDistanceEntity*, float))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveDistance() {
		return ((R (*)(IDistanceEntity*))(Il2CppBase() + 0x0))(this);
	}

};

