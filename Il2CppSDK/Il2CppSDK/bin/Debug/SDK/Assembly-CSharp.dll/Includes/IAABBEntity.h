#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IAABBEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IAABBEntity"));
	}


	template <typename R = AABBComponent*> R get_aABB() {
		return ((R (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasAABB() {
		return ((R (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(IAABBEntity*, float, float, float, float))(Il2CppBase() + 0x0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R ReplaceAABB(float newXMin, float newXMax, float newYMin, float newYMax) {
		return ((R (*)(IAABBEntity*, float, float, float, float))(Il2CppBase() + 0x0))(this, newXMin, newXMax, newYMin, newYMax);
	}
	template <typename R = void> R RemoveAABB() {
		return ((R (*)(IAABBEntity*))(Il2CppBase() + 0x0))(this);
	}

};

